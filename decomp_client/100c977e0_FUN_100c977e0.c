
long FUN_100c977e0(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    FUN_100c62ee0(0xb,0x68,0x43,"x509_v3.c",0x98);
  }
  else {
    lVar2 = *param_1;
    if ((lVar2 == 0) && (lVar2 = FUN_100c60010(), lVar2 == 0)) {
      FUN_100c62ee0(0xb,0x68,0x41,"x509_v3.c",0xb0);
    }
    else {
      iVar1 = FUN_100c60800(lVar2);
      if ((param_3 <= iVar1) && (-1 < param_3)) {
        iVar1 = param_3;
      }
      lVar3 = FUN_100c86460(param_2);
      if (lVar3 != 0) {
        iVar1 = FUN_100c600c0(lVar2,lVar3,iVar1);
        if (iVar1 != 0) {
          if (*param_1 != 0) {
            return lVar2;
          }
          *param_1 = lVar2;
          return lVar2;
        }
        FUN_100c62ee0(0xb,0x68,0x41,"x509_v3.c",0xb0);
        FUN_100c86400(lVar3);
      }
    }
    if (lVar2 == 0) {
      return 0;
    }
    FUN_100c5ffd0();
  }
  return 0;
}

