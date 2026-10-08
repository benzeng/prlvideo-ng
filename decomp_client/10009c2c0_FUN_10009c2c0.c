
void FUN_10009c2c0(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *local_30;
  int *local_28;
  undefined1 local_19;
  
  puVar2 = PTR_shared_null_1021e15e8;
  local_30 = PTR_shared_null_1021e15e8;
  if ((undefined *)*param_1 != PTR_shared_null_1021e15e8) {
    FUN_10009ca80(&local_28,&local_30);
    piVar1 = (int *)*param_1;
    *param_1 = (long)local_28;
    local_28 = piVar1;
    if (*piVar1 != -1) {
      if (*piVar1 != 0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_19 = *piVar1 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10009c31f;
      }
      FUN_10009c490(&local_28,piVar1);
    }
  }
LAB_10009c31f:
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      local_28 = (int *)CONCAT71(local_28._1_7_,*(int *)puVar2 != 0);
      if (*(int *)puVar2 != 0) {
        return;
      }
    }
    FUN_10009c490(&local_30,PTR_shared_null_1021e15e8);
  }
  return;
}

