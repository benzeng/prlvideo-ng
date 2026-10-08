
undefined8 FUN_10028cd80(long param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  QArrayData *local_88;
  Data_conflict local_80;
  undefined4 local_78;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  if ((param_2 == 5) && (cVar1 = FUN_10061b500(*(undefined8 *)(param_1 + 0x18),0x20), cVar1 != '\0')
     ) {
    return 0x80000009;
  }
  local_70 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onDialogClosed(CLicenseManager::DialogType, const QString&, int)",0x41);
  local_78 = 0x80000000;
  local_80.field7 = 0;
  FUN_100a1c600(local_68,param_1,&local_70,&local_80);
  QVariant::~QVariant((QVariant *)&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10028ce27;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10028ce27:
  if (DAT_102310958 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_100612710(pvVar2);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar2;
  }
  pvVar2 = DAT_102310958;
  uVar3 = FUN_10061b510(*(undefined8 *)(param_1 + 0x18));
  FUN_10015a2b0(&local_88,uVar3);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  cVar1 = FUN_10060b2b0(pvVar2,param_2,&local_88,local_68,uVar3);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10028cecb;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10028cecb:
  uVar3 = 0x80000009;
  if (cVar1 != '\0') {
    uVar3 = 0;
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  return uVar3;
}

