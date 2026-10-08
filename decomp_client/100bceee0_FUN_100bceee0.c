
long FUN_100bceee0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x3a8) + 0x48);
  lVar2 = 0x20080;
  if (**(int **)(param_1 + 8) != 0x303) {
    lVar2 = lVar1;
  }
  if (lVar1 != 0xc030) {
    lVar2 = lVar1;
  }
  return lVar2;
}

