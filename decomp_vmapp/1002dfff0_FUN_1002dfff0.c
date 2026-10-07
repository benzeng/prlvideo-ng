
byte FUN_1002dfff0(long param_1)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = 0;
  if (*(char *)(param_1 + 0x52) == '\0') {
    piVar1 = *(int **)(*(long *)(param_1 + 0x18) + 8);
    bVar3 = false;
    if (piVar1 != (int *)0x0) {
      bVar3 = *piVar1 != 0;
    }
    piVar1 = *(int **)(*(long *)(param_1 + 0x18) + 0x18);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      bVar3 = bVar3 | 2;
    }
    bVar2 = bVar3;
    if ((DAT_101116b50 != 2) && (bVar2 = 0, DAT_101116b54 != 0)) {
      bVar2 = bVar3;
    }
  }
  return bVar2;
}

