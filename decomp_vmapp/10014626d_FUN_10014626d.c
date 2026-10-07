
undefined4 FUN_10014626d(long param_1)

{
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x178) < 1) {
    local_24 = 0;
  }
  else {
    *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + -1;
    if (*(int *)(param_1 + 0x178) < 1) {
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
    else {
      *(long *)(param_1 + 0x170) =
           *(long *)(param_1 + 0x180) + (long)*(int *)(param_1 + 0x178) * 4 + -4;
    }
    local_24 = *(undefined4 *)(*(long *)(param_1 + 0x180) + (long)*(int *)(param_1 + 0x178) * 4);
    *(undefined4 *)(*(long *)(param_1 + 0x180) + (long)*(int *)(param_1 + 0x178) * 4) = 0xffffffff;
  }
  return local_24;
}

