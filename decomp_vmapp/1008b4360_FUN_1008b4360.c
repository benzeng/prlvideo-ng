
undefined4
FUN_1008b4360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_10087ece0();
  lVar3 = FUN_10087d330(uVar2);
  if (lVar3 == 0) {
    FUN_100887ce0(9,0x6c,7,"pem_lib.c",0x294);
    uVar1 = 0;
  }
  else {
    FUN_10087db60(lVar3,0x6a,0,param_1);
    uVar1 = FUN_1008b2d70(lVar3,param_2,param_3,param_4,param_5);
    FUN_10087d4e0(lVar3);
  }
  return uVar1;
}

