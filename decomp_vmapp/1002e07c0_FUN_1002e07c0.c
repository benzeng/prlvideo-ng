
bool FUN_1002e07c0(long param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(long *)(param_1 + 0x18) + 8);
  if (piVar1 != (int *)0x0) {
    return *piVar1 != 0;
  }
  return false;
}

