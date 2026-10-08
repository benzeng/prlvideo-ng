
undefined8 FUN_10028bfb0(long param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  QArrayData *local_80;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  int *local_60 [4];
  QVariant local_40 [2];
  undefined1 local_21;
  
  local_68 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onRenewLicenseDialogClosed(CLicenseManager::DialogType, const QString&, int)"
                        ,0x4d);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  FUN_100a1c600(local_60,param_1,&local_68,&local_78);
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028c031;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10028c031:
  if (DAT_102310958 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_100612710(pvVar2);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar2;
  }
  pvVar2 = DAT_102310958;
  uVar3 = FUN_10061b510(*(undefined8 *)(param_1 + 0x18));
  FUN_10015a2b0(&local_80,uVar3);
  cVar1 = FUN_10060b2b0(pvVar2,4,&local_80,local_60,0);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028c0bf;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10028c0bf:
  uVar3 = 0x80000009;
  if (cVar1 != '\0') {
    uVar3 = 0;
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  QVariant::~QVariant(local_40);
  if (local_60[0] != (int *)0x0) {
    LOCK();
    *local_60[0] = *local_60[0] + -1;
    local_21 = *local_60[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_60[0] != (int *)0x0)) {
      operator_delete(local_60[0]);
    }
  }
  return uVar3;
}

