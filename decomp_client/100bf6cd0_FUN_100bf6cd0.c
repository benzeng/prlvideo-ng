
void FUN_100bf6cd0(long param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(long *)(param_1 + 8) + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_100c74e10();
  }
  FUN_100bf3910(param_1);
  return;
}

