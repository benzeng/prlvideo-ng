
undefined4 FUN_100867ec0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_10087ece0();
  lVar3 = FUN_10087d330(uVar2);
  if (lVar3 == 0) {
    FUN_100887ce0(0x10,0x96,7,"eck_prn.c",0x4d);
    uVar1 = 0;
  }
  else {
    FUN_10087db60(lVar3,0x6a,0,param_1);
    uVar1 = FUN_100867f50(lVar3,param_2,param_3);
    FUN_10087d4e0(lVar3);
  }
  return uVar1;
}

