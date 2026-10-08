
void FUN_1000c51d0(long param_1)

{
  int *piVar1;
  QArrayData *local_28;
  undefined1 local_19;
  
  piVar1 = (int *)(param_1 + 0x218);
  if (*(int *)(param_1 + 0x21c) == 1) {
    if (*piVar1 == 1) {
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x21c) == 0) && (*piVar1 == 0)) {
    return;
  }
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  param_1 = param_1 + 0x118;
  FUN_1000fc6a0(param_1,1,&local_28);
  FUN_1000fc6a0(param_1,5,&local_28);
  FUN_1000fc6a0(param_1,7,&local_28);
  FUN_1000c4970(piVar1,0x8d,local_28 + *(long *)(local_28 + 0x10),*(undefined4 *)(local_28 + 4));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return;
}

