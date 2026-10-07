
int * FUN_1008172d0(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = FUN_100885600(param_1);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = (int *)FUN_100885620(param_1,iVar3);
        if (*piVar2 == param_2) {
          return piVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return (int *)0x0;
}

