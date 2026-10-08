
undefined8 _valuePop(long param_1)

{
  undefined8 local_28;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x28) < 1)) {
    local_28 = 0;
  }
  else {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    if (*(int *)(param_1 + 0x28) < 1) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x20) =
           *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8 + -8);
    }
    local_28 = *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8);
    *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = 0;
  }
  return local_28;
}

