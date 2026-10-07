
void FUN_1004edcb0(ulong param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  string *this;
  byte *pbVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  QString local_50;
  undefined8 local_48;
  long *local_40;
  undefined1 local_31;
  
  uVar5 = param_1;
  local_40 = param_3;
  if ((param_1 != 0) && ((param_1 & 1) == 0)) {
    QReadWriteLock::lockForWrite();
    uVar5 = param_1 | 1;
  }
  FUN_1004ef890(param_1 + 8,&local_40);
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_10050a8f0(&local_48);
    plVar1 = *(long **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = local_48;
    local_48 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = 0;
    QReadWriteLock::unlock();
  }
  if (*param_3 != 0) goto LAB_1004ede0d;
  pbVar2 = operator_new(0x20);
  pbVar2[0x10] = 0;
  pbVar2[0x11] = 0;
  pbVar2[0x12] = 0;
  pbVar2[0x13] = 0;
  pbVar2[0x14] = 0;
  pbVar2[0x15] = 0;
  pbVar2[0x16] = 0;
  pbVar2[0x17] = 0;
  pbVar2[8] = 0;
  pbVar2[9] = 0;
  pbVar2[10] = 0;
  pbVar2[0xb] = 0;
  pbVar2[0xc] = 0;
  pbVar2[0xd] = 0;
  pbVar2[0xe] = 0;
  pbVar2[0xf] = 0;
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  pbVar2[4] = 0;
  pbVar2[5] = 0;
  pbVar2[6] = 0;
  pbVar2[7] = 0;
  QString::toUtf8_helper(&local_50);
  std::string::assign((char *)pbVar2);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004eddbd;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,1,8);
  }
LAB_1004eddbd:
  if ((*pbVar2 & 1) == 0) {
    pbVar4 = pbVar2 + 1;
  }
  else {
    pbVar4 = *(byte **)(pbVar2 + 0x10);
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                    (*(long **)(param_1 + 0x20),pbVar4,*(undefined1 *)((long)param_3 + 0x14),
                     FUN_1004ef760,param_3);
  *(undefined8 *)(pbVar2 + 0x18) = uVar3;
  this = (string *)*param_3;
  *param_3 = (long)pbVar2;
  if (this != (string *)0x0) {
    std::string::~string(this);
    operator_delete(this);
  }
LAB_1004ede0d:
  if ((uVar5 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return;
}

