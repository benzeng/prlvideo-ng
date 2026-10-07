
void FUN_100110640(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long *in_RAX;
  undefined8 uVar5;
  long *local_18;
  
  local_18 = in_RAX;
  FUN_100090a50(&local_18,*(undefined8 *)(param_1 + 0x10));
  CHostHardwareInfoBase::getOsVersion();
  iVar3 = CHwOsVersion::getMajor();
  uVar5 = 0;
  if (iVar3 == 10) {
    CHostHardwareInfoBase::getOsVersion();
    uVar4 = CHwOsVersion::getMinor();
    uVar5 = 0x7fffffff;
    if (6 < uVar4) {
      uVar5 = 0;
    }
  }
  iVar3 = FUN_1007da300("vm.darwin.vm_object_pagein_throttle",uVar5);
  if (iVar3 != 0) {
    FUN_100684350(param_1 + 0xc,"_vm_object_pagein_throttle",4,iVar3);
  }
  if (local_18 != (long *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  return;
}

