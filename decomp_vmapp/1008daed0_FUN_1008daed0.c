
long FUN_1008daed0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_20;
  
  FUN_10089f9e0(&local_20,0,0,param_1);
  uVar1 = FUN_100821ab0(local_20);
  uVar2 = FUN_100821930(uVar1);
  lVar3 = FUN_100890b60(uVar2);
  if (lVar3 == 0) {
    FUN_100887ce0(0x2e,0x74,0x95,"cms_lib.c",0x16a);
  }
  else {
    uVar2 = FUN_100892700();
    lVar4 = FUN_10087d330(uVar2);
    if (lVar4 == 0) {
      FUN_100887ce0(0x2e,0x74,0x77,"cms_lib.c",0x16f);
    }
    else {
      lVar3 = FUN_10087db60(lVar4,0x6f,0,lVar3);
      if (lVar3 != 0) {
        return lVar4;
      }
      FUN_100887ce0(0x2e,0x74,0x77,"cms_lib.c",0x16f);
      FUN_10087d4e0(lVar4);
    }
  }
  return 0;
}

