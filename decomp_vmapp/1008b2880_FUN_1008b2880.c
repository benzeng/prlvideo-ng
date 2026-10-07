
undefined8
FUN_1008b2880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_10087ece0();
  lVar2 = FUN_10087d330(uVar1);
  if (lVar2 == 0) {
    FUN_100887ce0(9,0x66,7,"pem_lib.c",0xac);
    uVar1 = 0;
  }
  else {
    FUN_10087db60(lVar2,0x6a,0,param_3);
    uVar1 = FUN_1008b5860(param_1,param_2,lVar2,param_4,param_5,param_6);
    FUN_10087d4e0(lVar2);
  }
  return uVar1;
}

