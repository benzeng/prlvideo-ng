
void FUN_1004781a0(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  int *piVar1;
  long lVar2;
  int *local_40;
  int *local_38;
  undefined1 local_29;
  
  lVar2 = FUN_100478580(param_1,*param_2 + 8);
  if (lVar2 != 0) {
    local_38 = (int *)*param_2;
    if (local_38 != (int *)0x0) {
      LOCK();
      *local_38 = *local_38 + 1;
      local_29 = *local_38 != 0;
      UNLOCK();
    }
    FUN_10047cba0(lVar2,&local_38,*param_3);
    piVar1 = local_38;
    if (local_38 != (int *)0x0) {
      LOCK();
      *local_38 = *local_38 + -1;
      local_29 = *local_38 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_38 != (int *)0x0)) {
        FUN_100031ed0(local_38);
        operator_delete(piVar1);
      }
    }
  }
  local_40 = (int *)*param_2;
  if (local_40 != (int *)0x0) {
    LOCK();
    *local_40 = *local_40 + 1;
    local_29 = *local_40 != 0;
    UNLOCK();
  }
  FUN_10047c290(param_1,&local_40,*param_3);
  piVar1 = local_40;
  if (local_40 != (int *)0x0) {
    LOCK();
    *local_40 = *local_40 + -1;
    local_29 = *local_40 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_40 != (int *)0x0)) {
      FUN_100031ed0(local_40);
      operator_delete(piVar1);
    }
  }
  return;
}

