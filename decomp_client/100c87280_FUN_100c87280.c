
undefined4
FUN_100c87280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_100c6de40();
  lVar3 = FUN_100c58530(uVar2);
  if (lVar3 == 0) {
    FUN_100c62ee0(0xd,0xd2,0x41,"asn_mime.c",0x9b);
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_100c591b0(lVar3,param_1);
    uVar1 = FUN_100c86f80(uVar2,param_2,param_3,param_4,param_5);
    FUN_100c58d60(uVar2,0xb,0,0);
    FUN_100c592a0(uVar2);
    FUN_100c586e0(lVar3);
  }
  return uVar1;
}

