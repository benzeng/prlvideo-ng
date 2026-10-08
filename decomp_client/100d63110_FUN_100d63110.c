
uint FUN_100d63110(undefined8 param_1,long param_2,long param_3,int param_4)

{
  __darwin_ct_rune_t _Var1;
  __darwin_ct_rune_t _Var2;
  int iVar3;
  long lVar4;
  
  if (0 < param_4) {
    lVar4 = 0;
    do {
      _Var1 = ___toupper((int)*(char *)(param_2 + lVar4));
      _Var2 = ___toupper((int)*(char *)(param_3 + lVar4));
      iVar3 = (_Var1 - _Var2) * 0x1000000;
      if (iVar3 != 0) {
        return iVar3 >> 0x1f | 1;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < param_4);
  }
  return 0;
}

