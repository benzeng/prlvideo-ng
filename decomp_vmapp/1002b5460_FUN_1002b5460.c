
int * FUN_1002b5460(long param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)(param_1 + 0x98);
  uVar2 = 0;
  while ((((param_2 == -1 || (*piVar1 != param_2)) || (param_3 == -1)) ||
         (((piVar1[1] != param_3 || (param_4 == -1)) || (piVar1[2] != param_4))))) {
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
    if (0x1f < uVar2) {
      return (int *)0x0;
    }
  }
  return piVar1;
}

