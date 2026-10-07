
long FUN_1008cb680(long *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) {
    lVar2 = FUN_1008a8380();
  }
  iVar1 = FUN_10089b640(lVar2,*param_2,param_3 & 0xffffffff);
  if (iVar1 == 0) {
    if ((lVar2 != 0) && ((param_1 == (long *)0x0 || (*param_1 != lVar2)))) {
      FUN_1008afd70(lVar2);
    }
    FUN_100887ce0(0x27,0x66,0x41,"v3_ocsp.c",0xfd);
    lVar2 = 0;
  }
  else {
    *param_2 = *param_2 + param_3;
    if (param_1 != (long *)0x0) {
      *param_1 = lVar2;
    }
  }
  return lVar2;
}

