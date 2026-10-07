
void FUN_100470580(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int *local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  local_28 = (int *)*param_2;
  if (local_28 != (int *)0x0) {
    LOCK();
    *local_28 = *local_28 + 1;
    local_1b = *local_28 != 0;
    UNLOCK();
  }
  FUN_100472630(param_1,&local_28,*param_3);
  piVar1 = local_28;
  if (local_28 != (int *)0x0) {
    LOCK();
    *local_28 = *local_28 + -1;
    local_1a = *local_28 != 0;
    UNLOCK();
    if ((!(bool)local_1a) && (local_28 != (int *)0x0)) {
      FUN_100031ed0(local_28);
      operator_delete(piVar1);
    }
  }
  return;
}

