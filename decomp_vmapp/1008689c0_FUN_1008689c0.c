
undefined4 FUN_1008689c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = FUN_10087ece0();
  lVar4 = FUN_10087d330(uVar3);
  if (lVar4 == 0) {
    FUN_100887ce0(0x10,0xb5,0x20,"eck_prn.c",0x5c);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10087db60(lVar4,0x6a,0,param_1);
    lVar5 = FUN_100891f40();
    if (lVar5 != 0) {
      iVar1 = FUN_1008922f0(lVar5,param_2);
      if (iVar1 != 0) {
        uVar2 = FUN_1008925f0(lVar4,lVar5,param_3,0);
        FUN_1008924e0(lVar5);
      }
    }
    FUN_10087d4e0(lVar4);
  }
  return uVar2;
}

