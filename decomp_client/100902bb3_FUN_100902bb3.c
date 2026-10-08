
void FUN_100902bb3(long param_1)

{
  undefined8 *puVar1;
  undefined8 *local_18;
  
  if (param_1 != 0) {
    local_18 = *(undefined8 **)(param_1 + 0x10);
    while (local_18 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*local_18;
      *(undefined4 *)((long)local_18 + 0x3c) = 0;
      local_18[2] = 0;
      FUN_100902a3c(local_18);
      local_18 = puVar1;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    FUN_100902a3c(param_1);
  }
  return;
}

