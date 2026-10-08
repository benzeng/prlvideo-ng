
long FUN_100ca6c00(long *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) {
    lVar2 = FUN_100c83900();
  }
  iVar1 = FUN_100c76bc0(lVar2,*param_2,param_3 & 0xffffffff);
  if (iVar1 == 0) {
    if ((lVar2 != 0) && ((param_1 == (long *)0x0 || (*param_1 != lVar2)))) {
      FUN_100c8b2f0(lVar2);
    }
    FUN_100c62ee0(0x27,0x66,0x41,"v3_ocsp.c",0xfd);
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

