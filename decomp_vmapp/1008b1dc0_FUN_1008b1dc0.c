
undefined8
FUN_1008b1dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_10087ece0();
  lVar2 = FUN_10087d330(uVar1);
  if (lVar2 == 0) {
    FUN_100887ce0(9,0x73,7,"pem_info.c",0x51);
    uVar1 = 0;
  }
  else {
    FUN_10087db60(lVar2,0x6a,0,param_1);
    uVar1 = FUN_1008b1e60(lVar2,param_2,param_3,param_4);
    FUN_10087d4e0(lVar2);
  }
  return uVar1;
}

