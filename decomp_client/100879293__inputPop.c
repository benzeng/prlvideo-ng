
undefined8 _inputPop(long param_1)

{
  undefined8 local_28;
  
  if (param_1 == 0) {
    local_28 = 0;
  }
  else if (*(int *)(param_1 + 0x40) < 1) {
    local_28 = 0;
  }
  else {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    if (*(int *)(param_1 + 0x40) < 1) {
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x38) =
           *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x40) * 8 + -8);
    }
    local_28 = *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x40) * 8);
    *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x40) * 8) = 0;
  }
  return local_28;
}

