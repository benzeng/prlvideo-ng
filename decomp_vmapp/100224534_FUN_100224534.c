
undefined8 FUN_100224534(long param_1)

{
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0xb0) < 1) {
    local_28 = 0;
  }
  else {
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
    if (*(int *)(param_1 + 0xb0) < 1) {
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0xa8) =
           *(undefined8 *)(*(long *)(param_1 + 0xb8) + (long)*(int *)(param_1 + 0xb0) * 8 + -8);
    }
    local_28 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + (long)*(int *)(param_1 + 0xb0) * 8);
    *(undefined8 *)(*(long *)(param_1 + 0xb8) + (long)*(int *)(param_1 + 0xb0) * 8) = 0;
  }
  return local_28;
}

