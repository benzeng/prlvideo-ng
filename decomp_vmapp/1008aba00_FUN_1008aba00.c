
undefined8
FUN_1008aba00(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((param_4 & 0x1000) == 0) {
    FUN_10089c8f0(param_5,param_1,param_2);
    uVar1 = 1;
  }
  else {
    lVar2 = FUN_1008ab660(param_1,param_2,param_5);
    if (lVar2 == 0) {
      FUN_100887ce0(0xd,0xd3,0x41,"asn_mime.c",0x7d);
      uVar1 = 0;
    }
    else {
      FUN_1008abac0(param_3,lVar2,param_4);
      FUN_10087db60(lVar2,0xb,0,0);
      do {
        lVar3 = FUN_10087e0a0(lVar2);
        FUN_10087d4e0(lVar2);
        uVar1 = 1;
        lVar2 = lVar3;
      } while (lVar3 != param_1);
    }
  }
  return uVar1;
}

