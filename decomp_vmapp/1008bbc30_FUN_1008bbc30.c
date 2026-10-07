
undefined4
FUN_1008bbc30(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_100821870(param_2);
  if (lVar2 == 0) {
    FUN_100887ce0(0xb,0x72,0x6d,"x509name.c",0x139);
  }
  else {
    lVar3 = FUN_1008bba00(0,lVar2,param_3,param_4,param_5);
    FUN_100899890(lVar2);
    if (lVar3 != 0) {
      uVar1 = FUN_1008bbad0(param_1,lVar3,param_6,param_7);
      FUN_1008a0c10(lVar3);
      return uVar1;
    }
  }
  return 0;
}

