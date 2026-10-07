
undefined4 FUN_100201987(long param_1)

{
  int iVar1;
  undefined4 local_14;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (*(long *)(param_1 + 0x18) == 0)) {
    local_14 = 1;
  }
  else {
    if ((((**(int **)(param_1 + 0x18) == 6) || (**(int **)(param_1 + 0x18) == 7)) ||
        (**(int **)(param_1 + 0x18) == 8)) && (iVar1 = FUN_100201650(param_1), iVar1 == 0)) {
      return 1;
    }
    local_14 = 0;
  }
  return local_14;
}

