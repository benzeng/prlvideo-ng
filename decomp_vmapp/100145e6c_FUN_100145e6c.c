
undefined8 FUN_100145e6c(long param_1)

{
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x128) < 1) {
    local_28 = 0;
  }
  else {
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
    if (*(int *)(param_1 + 0x128) < 1) {
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x120) =
           *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8 + -8);
    }
    local_28 = *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8);
    *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) = 0;
  }
  return local_28;
}

