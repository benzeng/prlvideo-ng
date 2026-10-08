
long FUN_100c97fb0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    FUN_100c62ee0(0xb,0x87,0x43,"x509_att.c",0x81);
  }
  else {
    lVar2 = *param_1;
    if ((lVar2 == 0) && (lVar2 = FUN_100c60010(), lVar2 == 0)) {
      FUN_100c62ee0(0xb,0x87,0x41,"x509_att.c",0x93);
    }
    else {
      lVar3 = FUN_100c7bc80(param_2);
      if (lVar3 != 0) {
        iVar1 = FUN_100c604e0(lVar2,lVar3);
        if (iVar1 != 0) {
          if (*param_1 != 0) {
            return lVar2;
          }
          *param_1 = lVar2;
          return lVar2;
        }
        FUN_100c62ee0(0xb,0x87,0x41,"x509_att.c",0x93);
        FUN_100c7bc60(lVar3);
      }
    }
    if (lVar2 == 0) {
      return 0;
    }
    FUN_100c5ffd0();
  }
  return 0;
}

