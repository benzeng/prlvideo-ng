
long FUN_100c88530(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_100c6de40();
  lVar2 = FUN_100c58530(uVar1);
  if (lVar2 == 0) {
    FUN_100c62ee0(0xd,0xd1,0x41,"asn_mime.c",0xba);
    lVar3 = 0;
  }
  else {
    uVar1 = FUN_100c591b0(lVar2,param_1);
    lVar3 = FUN_100c77b20(param_2,uVar1,0);
    if (lVar3 == 0) {
      FUN_100c62ee0(0xd,0xd1,0x6e,"asn_mime.c",0xc0);
    }
    FUN_100c58d60(uVar1,0xb,0,0);
    FUN_100c592a0(uVar1);
    FUN_100c586e0(lVar2);
  }
  return lVar3;
}

