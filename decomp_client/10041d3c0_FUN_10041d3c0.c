
undefined8 * FUN_10041d3c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *local_28;
  undefined1 local_1a;
  
  puVar1 = PTR_shared_null_1021e15e8;
  if (param_2 == (undefined8 *)0x0) {
    local_28 = PTR_shared_null_1021e15e8;
    *param_1 = 0;
    FUN_10041a130(param_1 + 1,&local_28);
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_1a = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_1a) {
          return param_1;
        }
      }
      FUN_10041a960(&local_28,PTR_shared_null_1021e15e8);
    }
  }
  else {
    *param_1 = *param_2;
    FUN_10041a130(param_1 + 1,param_2 + 1);
  }
  return param_1;
}

