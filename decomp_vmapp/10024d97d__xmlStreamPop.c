
undefined4 _xmlStreamPop(undefined8 *param_1)

{
  int iVar1;
  undefined4 local_24;
  undefined8 *local_20;
  int local_14;
  
  local_20 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    local_24 = 0xffffffff;
  }
  else {
    for (; local_20 != (undefined8 *)0x0; local_20 = (undefined8 *)*local_20) {
      if (*(int *)((long)local_20 + 0x2c) == *(int *)(local_20 + 3)) {
        *(undefined4 *)((long)local_20 + 0x2c) = 0xffffffff;
      }
      *(int *)(local_20 + 3) = *(int *)(local_20 + 3) + -1;
      local_14 = *(int *)(local_20 + 2);
      do {
        local_14 = local_14 + -1;
        if (local_14 < 0) break;
        iVar1 = *(int *)(local_20[4] + (long)local_14 * 8 + 4);
        if (*(int *)(local_20 + 3) < iVar1) {
          *(int *)(local_20 + 2) = *(int *)(local_20 + 2) + -1;
        }
      } while (*(int *)(local_20 + 3) < iVar1);
    }
    local_24 = 0;
  }
  return local_24;
}

