
void FUN_100821560(long param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(long *)(param_1 + 8) + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_100899890();
  }
  FUN_10081e1a0(param_1);
  return;
}

