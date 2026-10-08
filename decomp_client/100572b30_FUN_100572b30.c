
undefined8 FUN_100572b30(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  QArrayData *local_50;
  QString local_48;
  QHostAddress local_40 [8];
  undefined1 local_38 [16];
  undefined1 local_21;
  
  QLineEdit::text();
  QHostAddress::QHostAddress(local_40,&local_48);
  local_38 = QHostAddress::toIPv6Address();
  QHostAddress::~QHostAddress(local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100572bb0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100572bb0:
  QLineEdit::text();
  uVar1 = QString::toUInt((bool *)&local_50,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100572c05;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100572c05:
  uVar2 = 0;
  if (uVar1 < 0x81) {
    uVar2 = uVar1;
  }
  FUN_100131180(local_38,uVar2,param_1);
  return param_1;
}

