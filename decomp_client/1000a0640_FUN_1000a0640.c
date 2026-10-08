
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a0640(long param_1)

{
  QArrayData *pQVar1;
  long local_28;
  undefined1 local_1c;
  undefined1 local_1b;
  
  local_28 = param_1;
  FUN_1000a07a0(*(long *)(param_1 + 0x10) + 0x98,&local_28);
  pQVar1 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_1c = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_1c) goto LAB_1000a0694;
      pQVar1 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1000a0694:
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_1b = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_1b) goto LAB_1000a06c4;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1000a06c4:
  _DAT_102311e88 = _DAT_102311e88 + -1;
  if (_DAT_102311e88 == 0) {
    if (DAT_102311e90 != (long *)0x0) {
      (**(code **)(*DAT_102311e90 + 8))();
    }
    DAT_102311e90 = (long *)0x0;
  }
  return;
}

