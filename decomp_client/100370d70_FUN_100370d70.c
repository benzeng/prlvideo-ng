
void FUN_100370d70(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *local_48;
  undefined8 uStack_40;
  int *local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  
  FUN_100370e30(&local_38,param_2,param_2,param_3);
  local_48 = local_38;
  uStack_40 = uStack_30;
  if (local_38 != (int *)0x0) {
    LOCK();
    *local_38 = *local_38 + 1;
    local_19 = *local_38 != 0;
    UNLOCK();
  }
  FUN_100370810(param_1,&local_48);
  if (local_38 != (int *)0x0) {
    LOCK();
    *local_38 = *local_38 + -1;
    local_19 = *local_38 != 0;
    UNLOCK();
    if (!(bool)local_19) {
      operator_delete(local_38);
    }
    LOCK();
    *local_38 = *local_38 + -1;
    local_19 = *local_38 != 0;
    UNLOCK();
    if (!(bool)local_19) {
      operator_delete(local_38);
    }
  }
  return;
}

