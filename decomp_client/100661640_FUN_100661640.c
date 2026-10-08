
void FUN_100661640(undefined8 param_1,char *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
  QArrayData *local_48;
  QString local_40;
  QVariant local_38;
  undefined1 local_21;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  uVar2 = FUN_100748240();
  local_48 = (QArrayData *)QString::fromAscii_helper("desktop.mac",0xb);
  uVar2 = FUN_100748290(uVar2,&local_48);
  uVar1 = FUN_100746a60(uVar2);
  FUN_100746110(&local_40,uVar1);
  QVariant::QVariant(&local_38,&local_40);
  QObject::setProperty(param_2,(QVariant *)"state");
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006616f1;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006616f1:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100661721;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100661721:
  QMetaObject::tr((char *)&local_78,(char *)&PTR_staticMetaObject_1022237b0,0x1e0b9e7);
  FUN_1001c72e0(&local_80);
  QString::arg(&local_70,&local_78,&local_80,0,0x20);
  QString::arg(&local_68,&local_70,10,0,10,0x20);
  QString::arg(&local_60,&local_68,0xb,0,10,0x20);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty(param_2,(QVariant *)"upgradeInfoText");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006617fb;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1006617fb:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10066182b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10066182b:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10066185b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10066185b:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10066188b;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10066188b:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006618bb;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006618bb:
  QObject::connect(&local_88,param_2,"2upgradeClicked()",param_1,"1onUpgradeClicked()",0);
  if (local_88 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  FUN_100660b40(param_1);
  return;
}

