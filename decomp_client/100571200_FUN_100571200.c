
void FUN_100571200(long param_1)

{
  QString *pQVar1;
  uint uVar2;
  uint uVar3;
  QHostAddress local_50 [8];
  QArrayData *local_48;
  QString local_40;
  QHostAddress local_38 [8];
  QString local_30;
  QHostAddress local_28 [15];
  undefined1 local_19;
  
  QLineEdit::text();
  QHostAddress::QHostAddress(local_28,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100571261;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100571261:
  QLineEdit::text();
  QHostAddress::QHostAddress(local_38,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005712af;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005712af:
  uVar2 = QHostAddress::toIPv4Address();
  uVar3 = QHostAddress::toIPv4Address();
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x30) + 0x10);
  QHostAddress::QHostAddress(local_50,uVar3 & uVar2);
  QHostAddress::toString();
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100571321;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100571321:
  QHostAddress::~QHostAddress(local_50);
  QHostAddress::~QHostAddress(local_38);
  QHostAddress::~QHostAddress(local_28);
  return;
}

