
undefined8 FUN_10022fcbd(long param_1)

{
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0xb8) < 1) {
    local_28 = 0;
  }
  else {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
    if (*(int *)(param_1 + 0xb8) < 1) {
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0xb0) =
           *(undefined8 *)(*(long *)(param_1 + 0xc0) + (long)*(int *)(param_1 + 0xb8) * 8 + -8);
    }
    local_28 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + (long)*(int *)(param_1 + 0xb8) * 8);
    *(undefined8 *)(*(long *)(param_1 + 0xc0) + (long)*(int *)(param_1 + 0xb8) * 8) = 0;
  }
  return local_28;
}

