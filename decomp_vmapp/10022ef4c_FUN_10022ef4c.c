
undefined8 FUN_10022ef4c(long param_1)

{
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0xd0) < 1) {
    local_28 = 0;
  }
  else {
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
    if (*(int *)(param_1 + 0xd0) < 1) {
      *(undefined8 *)(param_1 + 200) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 200) =
           *(undefined8 *)(*(long *)(param_1 + 0xd8) + (long)*(int *)(param_1 + 0xd0) * 8 + -8);
    }
    local_28 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + (long)*(int *)(param_1 + 0xd0) * 8);
    *(undefined8 *)(*(long *)(param_1 + 0xd8) + (long)*(int *)(param_1 + 0xd0) * 8) = 0;
  }
  return local_28;
}

