
undefined4 FUN_100c77c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_100c59ee0();
  lVar3 = FUN_100c58530(uVar2);
  if (lVar3 == 0) {
    FUN_100c62ee0(0xd,0x75,7,"a_i2d_fp.c",0x49);
    uVar1 = 0;
  }
  else {
    FUN_100c58d60(lVar3,0x6a,0,param_2);
    uVar1 = FUN_100c77d00(param_1,lVar3,param_3);
    FUN_100c586e0(lVar3);
  }
  return uVar1;
}

