
QVariant * FUN_10056f620(QVariant *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  QHostAddress local_110 [8];
  QString local_108;
  QString local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  CPortForwardEntry local_e8 [199];
  undefined1 local_21;
  
  FUN_10056f960(local_e8);
  CPortForwardEntry::getRedirectVm();
  iVar1 = *(int *)(local_f0 + 4);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_21 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10056f68d;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10056f68d:
  if (iVar1 != 0) {
    uVar3 = 0;
    if ((*(long *)(param_2 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_2 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_2 + 0x18);
    }
    CPortForwardEntry::getRedirectVm();
    lVar2 = FUN_10015cb20(uVar3,&local_f8);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_21 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10056f707;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_10056f707:
    if (lVar2 != 0) {
      FUN_10018d830(&local_100,lVar2);
      QVariant::QVariant(param_1,&local_100);
      if (*(int *)local_100.field0_0x0 != -1) {
        if (*(int *)local_100.field0_0x0 != 0) {
          LOCK();
          *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
          local_21 = *(int *)local_100.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10056f7e1;
        }
        QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
      }
      goto LAB_10056f7e1;
    }
  }
  CPortForwardEntry::getRedirectIp();
  QHostAddress::toString();
  QVariant::QVariant(param_1,&local_108);
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_21 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10056f7d5;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_10056f7d5:
  QHostAddress::~QHostAddress(local_110);
LAB_10056f7e1:
  CPortForwardEntry::~CPortForwardEntry(local_e8);
  return param_1;
}

