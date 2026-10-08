
void FUN_100070470(QObject *param_1)

{
  undefined *puVar1;
  char cVar2;
  QMenuBar *this;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  QString *pQVar7;
  undefined8 uVar8;
  QMenu *pQVar9;
  Connection local_40 [8];
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  this = operator_new(0x30);
  QMenuBar::QMenuBar(this,(QWidget *)0x0);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar4 = *(int **)(param_1 + 0x18);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x18);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar3;
    *(QMenuBar **)(param_1 + 0x20) = this;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_21 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar3);
    }
  }
  uVar5 = FUN_1006e1350();
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar6 = FUN_1006e13b0(uVar5,0xf,uVar8,*(undefined8 *)PTR_self_1021e1388,6);
  if (lVar6 == 0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != helpMenu","MenuManager/CMenuManager_mac.mm",0x10c,"createMacMenuBar");
    goto LAB_10007066e;
  }
  pQVar7 = (QString *)QMenu::menuAction();
  local_30 = (QArrayData *)QString::fromAscii_helper("Help",4);
  QAction::setText(pQVar7);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000705a1;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000705a1:
  pQVar9 = (QMenu *)0x0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (pQVar9 = (QMenu *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
    pQVar9 = *(QMenu **)(param_1 + 0x20);
  }
  QMenuBar::addMenu(pQVar9);
  QObject::connect(local_38,lVar6,"2aboutToShow()",param_1,"1menuShown()",0);
  QMetaObject::Connection::~Connection(local_38);
  QObject::connect(local_40,lVar6,"2aboutToHide()",param_1,"1menuHidden()",0);
  QMetaObject::Connection::~Connection(local_40);
  QTimer::singleShot(100,param_1,"1translateHelpMenuTitle()");
LAB_10007066e:
  MacUtils::insertAppMenuSeparator(1);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR_CMacMenuBarAppMenuHandler_10226aa08,PTR_s_alloc_102268b58);
  uVar8 = (*(code *)puVar1)(uVar8,PTR_s_initWithMenuManager__102269da8,param_1);
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  cVar2 = MacUtils::replaceInstanceMethod
                    ("QCocoaMenuLoader","qtTranslateApplicationMenu","QCocoaMenuLoaderReplacer",
                     "qtTranslateApplicationMenu","Original");
  if (cVar2 == '\0') {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,
                  "(!)Error: failed to perform qtTranslateApplicationMenu replacement");
  }
  return;
}

