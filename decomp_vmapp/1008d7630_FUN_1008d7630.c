
long FUN_1008d7630(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = param_2 / 2;
  if ((param_2 == 0) || (*(char *)((long)param_2 + -1 + param_1) != '\0')) {
    iVar3 = iVar3 + 1;
  }
  lVar1 = FUN_10081ddd0(iVar3,"p12_utl.c",99);
  lVar2 = 0;
  if (lVar1 != 0) {
    if (0 < param_2) {
      lVar2 = 0;
      do {
        *(undefined1 *)(lVar1 + ((int)lVar2 >> 1)) = *(undefined1 *)(param_1 + 1 + lVar2);
        lVar2 = lVar2 + 2;
      } while (lVar2 < param_2);
    }
    *(undefined1 *)((long)iVar3 + -1 + lVar1) = 0;
    lVar2 = lVar1;
  }
  return lVar2;
}

