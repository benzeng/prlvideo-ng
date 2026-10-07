
bool FUN_100899dd0(int *param_1,long param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = true;
  if (((param_1 != (int *)0x0) && (*(long *)(param_1 + 2) != 0)) && (0 < (long)*param_1)) {
    lVar2 = 0;
    do {
      bVar1 = 0xff;
      if (lVar2 < param_3) {
        bVar1 = ~*(byte *)(param_2 + lVar2);
      }
      bVar1 = bVar1 & *(byte *)(*(long *)(param_1 + 2) + lVar2);
    } while ((bVar1 == 0) && (lVar2 = lVar2 + 1, lVar2 < *param_1));
    bVar3 = bVar1 == 0;
  }
  return bVar3;
}

