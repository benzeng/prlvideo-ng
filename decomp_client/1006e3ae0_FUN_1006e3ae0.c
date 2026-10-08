
void FUN_1006e3ae0(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  QWidget *pQVar9;
  QString *pQVar10;
  Data *local_78;
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",4,"Populating Sharing menu...");
  }
  uVar5 = FUN_100152280();
  QObject::property((char *)&local_50);
  QVariant::toString();
  QObject::property((char *)&local_68);
  QVariant::toString();
  lVar6 = FUN_100154930(uVar5,&local_40,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e3bdb;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006e3bdb:
  QVariant::~QVariant(&local_68);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e3c14;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006e3c14:
  QVariant::~QVariant(&local_50);
  if (lVar6 == 0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"VM is invalid");
    return;
  }
  uVar5 = FUN_10018c280(lVar6);
  lVar7 = FUN_100319960(uVar5);
  cVar1 = '\0';
  if ((lVar7 != 0) && (lVar8 = FUN_100323e30(lVar7,0), lVar8 != 0)) {
    pQVar9 = (QWidget *)FUN_100323e30(lVar7,0);
    cVar1 = WidgetUtils::isBlockedByModal(pQVar9);
  }
  uVar3 = FUN_10018f860(lVar6);
  uVar4 = FUN_10018f890(lVar6);
  cVar2 = FUN_100110a10(uVar3,uVar4);
  if (cVar2 == '\0') {
    uVar3 = FUN_10018f860(lVar6);
    uVar4 = FUN_10018f890(lVar6);
    cVar2 = FUN_100110a50(uVar3,uVar4);
    if (cVar2 == '\0') {
      return;
    }
  }
  pQVar10 = operator_new(0x130);
  uVar5 = QAction::menu();
  FUN_10017a830(pQVar10,lVar6,uVar5);
  if ((cVar1 != '\0') || (cVar1 = FUN_10018ff50(lVar6), cVar1 != '\0')) {
    QObject::deleteLater();
    uVar5 = QAction::menu();
    pQVar10 = (QString *)FUN_1006e3320(param_1,pQVar10,uVar5,1);
  }
  QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,0x1dc665d);
  QMenu::setTitle(pQVar10);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e3d60;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006e3d60:
  uVar5 = QAction::menu();
  QWidget::actions();
  QWidget::addActions(uVar5,&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_78);
  }
  return;
}

