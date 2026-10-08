
undefined4 FUN_100cabbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_100c59dd0(param_2,"rb");
  if (lVar2 == 0) {
    uVar3 = FUN_100c637f0();
    if ((uVar3 & 0xfff) == 0x80) {
      uVar4 = 0x72;
      uVar5 = 0xc3;
    }
    else {
      uVar4 = 2;
      uVar5 = 0xc5;
    }
    FUN_100c62ee0(0xe,0x78,uVar4,"conf_def.c",uVar5);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100cab110(param_1,lVar2,param_3);
    FUN_100c586e0(lVar2);
  }
  return uVar1;
}

