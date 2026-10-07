
int * FUN_1007dad70(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)0x0;
  if (param_1 != 0) {
    uVar3 = param_1 + 0x7fffU >> 0xf;
    piVar2 = (int *)0x0;
    if (uVar3 != 0) {
      piVar1 = _malloc((ulong)(uVar3 - 1) * 8 + 0x10);
      piVar2 = (int *)0x0;
      if (piVar1 != (int *)0x0) {
        *piVar1 = param_1;
        piVar1[1] = uVar3;
        ___bzero(piVar1 + 2,(ulong)(uVar3 - 1) * 8 + 8);
        piVar2 = piVar1;
      }
    }
  }
  return piVar2;
}

