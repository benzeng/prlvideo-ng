
undefined8 FUN_10023c514(long param_1)

{
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x90) < 1) {
    local_28 = 0;
  }
  else {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
    local_28 = *(undefined8 *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0x90) * 8);
    *(undefined8 *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0x90) * 8) = 0;
    if (*(int *)(param_1 + 0x90) < 1) {
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x88) =
           *(undefined8 *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0x90) * 8 + -8);
    }
  }
  return local_28;
}

