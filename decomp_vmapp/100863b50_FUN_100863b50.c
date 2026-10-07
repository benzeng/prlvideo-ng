
long FUN_100863b50(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
    uVar3 = 0x43;
    uVar4 = 0x4d6;
  }
  else {
    if (((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) ||
       (lVar1 = FUN_100863e40(), lVar1 != 0)) {
      lVar2 = FUN_100861c90(lVar1 + 8,param_2,param_3);
      if (lVar2 != 0) {
        if (param_1 == (long *)0x0) {
          return lVar1;
        }
        *param_1 = lVar1;
        return lVar1;
      }
      FUN_100887ce0(0x10,0x90,0x10,"ec_asn1.c",0x4e3);
      if ((param_1 != (long *)0x0) && (*param_1 == lVar1)) {
        return 0;
      }
      FUN_100863f80(lVar1);
      return 0;
    }
    uVar3 = 0x41;
    uVar4 = 0x4dc;
  }
  FUN_100887ce0(0x10,0x90,uVar3,"ec_asn1.c",uVar4);
  return 0;
}

