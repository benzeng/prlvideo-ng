
undefined4
FUN_1008b3a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_10087ece0();
  lVar3 = FUN_10087d330(uVar2);
  if (lVar3 == 0) {
    FUN_100887ce0(9,0x68,7,"pem_lib.c",0x143);
    uVar1 = 0;
  }
  else {
    FUN_10087db60(lVar3,0x6a,0,param_3);
    uVar1 = FUN_1008b3ae0(param_1,param_2,lVar3,param_4,param_5,param_6,param_7,param_8,param_9);
    FUN_10087d4e0(lVar3);
  }
  return uVar1;
}

