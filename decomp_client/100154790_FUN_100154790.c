
long FUN_100154790(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = 0;
  if (-1 < param_2) {
    lVar1 = *(long *)(param_1 + 0x10);
    lVar3 = 0;
    if (param_2 < *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8)) {
      plVar2 = *(long **)(lVar1 + 0x10 + ((long)*(int *)(lVar1 + 8) + (long)param_2) * 8);
      lVar1 = *plVar2;
      lVar3 = 0;
      if ((lVar1 != 0) && (lVar3 = 0, *(int *)(lVar1 + 4) != 0)) {
        lVar3 = plVar2[1];
      }
    }
  }
  return lVar3;
}

