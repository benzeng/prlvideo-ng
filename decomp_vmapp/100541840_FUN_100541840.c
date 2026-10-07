
long * FUN_100541840(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 local_30 [8];
  uint *local_28;
  
  local_28 = (uint *)*param_2;
  if (1 < *local_28) {
    FUN_100541b80(param_2,local_28[1]);
    local_28 = (uint *)*param_2;
  }
  lVar1 = **(long **)(local_28 + (long)(int)local_28[2] * 2 + 4);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    local_28 = (uint *)*param_2;
  }
  if (1 < *local_28) {
    FUN_100541b80(param_2,local_28[1]);
    local_28 = (uint *)*param_2;
  }
  local_28 = local_28 + (long)(int)local_28[2] * 2 + 4;
  FUN_100540f60(local_30,param_2,&local_28);
  return param_1;
}

