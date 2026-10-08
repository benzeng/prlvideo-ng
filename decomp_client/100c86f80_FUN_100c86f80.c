
undefined8
FUN_100c86f80(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((param_4 & 0x1000) == 0) {
    FUN_100c77e70(param_5,param_1,param_2);
    uVar1 = 1;
  }
  else {
    lVar2 = FUN_100c86be0(param_1,param_2,param_5);
    if (lVar2 == 0) {
      FUN_100c62ee0(0xd,0xd3,0x41,"asn_mime.c",0x7d);
      uVar1 = 0;
    }
    else {
      FUN_100c87040(param_3,lVar2,param_4);
      FUN_100c58d60(lVar2,0xb,0,0);
      do {
        lVar3 = FUN_100c592a0(lVar2);
        FUN_100c586e0(lVar2);
        uVar1 = 1;
        lVar2 = lVar3;
      } while (lVar3 != param_1);
    }
  }
  return uVar1;
}

