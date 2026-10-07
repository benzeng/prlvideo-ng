
undefined4
FUN_1008abd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_100892a60();
  lVar3 = FUN_10087d330(uVar2);
  if (lVar3 == 0) {
    FUN_100887ce0(0xd,0xd2,0x41,"asn_mime.c",0x9b);
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_10087dfb0(lVar3,param_1);
    uVar1 = FUN_1008aba00(uVar2,param_2,param_3,param_4,param_5);
    FUN_10087db60(uVar2,0xb,0,0);
    FUN_10087e0a0(uVar2);
    FUN_10087d4e0(lVar3);
  }
  return uVar1;
}

