
void FUN_1000c4c80(long param_1,undefined8 param_2)

{
  int *piVar1;
  QArrayData *local_20;
  undefined1 local_11;
  
  piVar1 = (int *)(param_1 + 0x218);
  if (*(int *)(param_1 + 0x21c) == 1) {
    if (*piVar1 == 1) {
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x21c) == 0) && (*piVar1 == 0)) {
    return;
  }
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1000fca70(param_1 + 0x118,param_2,&local_20);
  FUN_1000c4970(piVar1,0x8d,local_20 + *(long *)(local_20 + 0x10),*(undefined4 *)(local_20 + 4));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return;
}

