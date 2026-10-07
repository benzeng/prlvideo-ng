
int FUN_1003e32b0(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    return 2;
  }
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      return 1;
    }
    if (iVar1 == 2) {
      if (*(int *)(param_1 + 0x84) != 0) {
        return 2;
      }
      *(undefined4 *)(param_1 + 0x7c) = 1;
      return 2;
    }
  }
  return iVar1;
}

