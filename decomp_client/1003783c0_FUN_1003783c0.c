
void FUN_1003783c0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  QWidget *pQVar7;
  CSplashScreen *this;
  long lVar8;
  long lVar9;
  int iVar10;
  QVariant local_d0;
  QString local_c0;
  undefined1 local_b8 [16];
  QArrayData *local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  undefined4 local_88;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  Data *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
  local_60 = (QArrayData *)QString::fromAscii_helper("ShowVmNameSplashInFullscreen",0x1c);
  QVariant::QVariant(&local_70,false);
  QSettings::value((QString *)&local_48,&local_58);
  cVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100378464;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100378464:
  QSettings::~QSettings((QSettings *)&local_58);
  if (cVar2 == '\0') {
    return;
  }
  uVar5 = FUN_100152280();
  FUN_100154b10(&local_78,uVar5);
  local_a0 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_a0);
      lVar8 = (long)*(int *)(local_a0 + 8);
      if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_a0 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_a0 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_a0 + 0xc))
         ) {
        _memcpy(local_a0 + lVar8 * 8 + 0x10,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_98 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
  local_90 = local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10;
  iVar10 = 0;
  if (*(int *)(local_a0 + 8) != *(int *)(local_a0 + 0xc)) {
    iVar10 = 0;
    do {
      local_88 = 1;
      lVar8 = *(long *)local_98;
      if ((lVar8 != 0) && (iVar4 = FUN_10018a9d0(lVar8), iVar4 == 0x30000004)) {
        uVar5 = FUN_10018c280(lVar8);
        iVar4 = FUN_100319ae0(uVar5);
        if (iVar4 == 2) {
          uVar5 = FUN_10018c280(lVar8);
          bVar3 = FUN_10031b620(uVar5,local_7c,local_80);
          iVar10 = iVar10 + (bVar3 ^ 1);
        }
      }
      local_98 = local_98 + 8;
    } while (local_98 != local_90);
  }
  local_88 = 1;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003785de;
    }
    QListData::dispose(local_a0);
  }
LAB_1003785de:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100378604;
    }
    QListData::dispose(local_78);
  }
LAB_100378604:
  if (iVar10 < 2) {
    return;
  }
  QWidget::window();
  local_b8 = QWidget::frameGeometry();
  FUN_100d7bed0(&local_a8,local_b8);
  iVar10 = FUN_100d7b000(&local_a8);
  plVar6 = (long *)CHostDesktopWorkspacesController::instance();
  iVar4 = (**(code **)(*plVar6 + 0x70))(plVar6,*(undefined8 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x48) == '\0') goto LAB_1003787b3;
  pQVar7 = (QWidget *)QWidget::window();
  bVar3 = WidgetUtils::isWindowVisible(pQVar7);
  if ((((iVar10 == iVar4 & bVar3) != 1) || (iVar10 == *(int *)(param_1 + 0x60))) ||
     (*(int *)(param_1 + 0x60) == -1)) goto LAB_1003787b3;
  this = operator_new(0x38);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar5 = FUN_100323dd0(uVar5);
  FUN_10018d830(&local_c0,uVar5);
  CSplashScreen::CSplashScreen(this,&local_c0,false,*(QWidget **)(param_1 + 0x10));
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100378736;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100378736:
  QWidget::setAttribute(this,0x62,1);
  puVar1 = PTR_s_DynProp_CanShowSheet_102270de0;
  QVariant::QVariant(&local_d0,false);
  QObject::setProperty((char *)this,(QVariant *)puVar1);
  QVariant::~QVariant(&local_d0);
  plVar6 = (long *)CHostDesktopWorkspacesController::instance();
  (**(code **)(*plVar6 + 0x90))(plVar6,this,0);
  QWidget::show();
  QTimer::singleShot(0x2ee,(QObject *)this,"1deleteLater()");
LAB_1003787b3:
  if (*(char *)(param_1 + 0x48) == '\0') {
    iVar10 = -1;
  }
  *(int *)(param_1 + 0x60) = iVar10;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      UNLOCK();
      if (*(int *)local_a8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
  return;
}

