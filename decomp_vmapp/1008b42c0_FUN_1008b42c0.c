
undefined4
FUN_1008b42c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_10087ece0();
  lVar3 = FUN_10087d330(uVar2);
  if (lVar3 == 0) {
    FUN_100887ce0(9,0x71,7,"pem_lib.c",0x248);
    uVar1 = 0;
  }
  else {
    FUN_10087db60(lVar3,0x6a,0,param_1);
    uVar1 = FUN_1008b3fc0(lVar3,param_2,param_3,param_4,param_5);
    FUN_10087d4e0(lVar3);
  }
  return uVar1;
}

