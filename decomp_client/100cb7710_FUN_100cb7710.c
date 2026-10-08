
long FUN_100cb7710(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_20;
  
  FUN_100c7af60(&local_20,0,0,param_1);
  uVar1 = FUN_100bf7220(local_20);
  uVar2 = FUN_100bf70a0(uVar1);
  lVar3 = FUN_100c6bd60(uVar2);
  if (lVar3 == 0) {
    FUN_100c62ee0(0x2e,0x74,0x95,"cms_lib.c",0x16a);
  }
  else {
    uVar2 = FUN_100c6dae0();
    lVar4 = FUN_100c58530(uVar2);
    if (lVar4 == 0) {
      FUN_100c62ee0(0x2e,0x74,0x77,"cms_lib.c",0x16f);
    }
    else {
      lVar3 = FUN_100c58d60(lVar4,0x6f,0,lVar3);
      if (lVar3 != 0) {
        return lVar4;
      }
      FUN_100c62ee0(0x2e,0x74,0x77,"cms_lib.c",0x16f);
      FUN_100c586e0(lVar4);
    }
  }
  return 0;
}

