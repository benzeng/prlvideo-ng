
undefined8 FUN_1001845f2(long param_1)

{
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x20) < 1) {
    local_28 = 0;
  }
  else {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    if (*(int *)(param_1 + 0x20) < 1) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x18) =
           *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x20) * 8 + -8);
    }
    local_28 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x20) * 8);
    *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x20) * 8) = 0;
  }
  return local_28;
}

