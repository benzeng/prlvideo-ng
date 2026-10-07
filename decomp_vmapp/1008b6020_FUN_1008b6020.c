
undefined8
FUN_1008b6020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10087ecf0(param_1,0);
  if (lVar1 == 0) {
    FUN_100887ce0(9,0x79,7,"pem_pk8.c",0xf5);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1008b5c80(lVar1,param_2,param_3,param_4);
    FUN_10087d4e0(lVar1);
  }
  return uVar2;
}

