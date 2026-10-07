
undefined8 * FUN_1001af597(long param_1,undefined8 *param_2)

{
  undefined8 *local_20;
  undefined8 *local_18;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_18 = param_2;
    if (param_2 == (undefined8 *)0x0) {
      local_18 = *(undefined8 **)(*(long *)(param_1 + 0x18) + 8);
      if (local_18 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      if (*(int *)(local_18 + 1) == 0x12) {
        local_18 = (undefined8 *)*local_18;
      }
      *(undefined8 *)(param_1 + 0x48) = local_18[5];
    }
    if ((local_18[7] != 0) && (*(int *)(local_18[7] + 8) == 0xe)) {
      local_18 = (undefined8 *)local_18[7];
    }
    while (local_18[7] == 0) {
      local_18 = (undefined8 *)local_18[5];
      if (local_18 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      if (*(undefined8 **)(**(long **)(param_1 + 0x18) + 0x18) == local_18) {
        return (undefined8 *)0x0;
      }
      if (*(undefined8 **)(param_1 + 0x48) != local_18) {
        return local_18;
      }
      *(undefined8 *)(param_1 + 0x48) = local_18[5];
    }
    for (local_18 = (undefined8 *)local_18[7]; local_18[4] != 0;
        local_18 = (undefined8 *)local_18[4]) {
    }
    local_20 = local_18;
  }
  return local_20;
}

