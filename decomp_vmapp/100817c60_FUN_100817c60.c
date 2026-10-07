
undefined4 FUN_100817c60(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_28;
  
  uVar1 = 0;
  local_28 = param_2;
  lVar2 = FUN_10086ed80(0,&local_28);
  if (lVar2 == 0) {
    FUN_100887ce0(0x14,0xcd,0xd,"ssl_rsa.c",0x116);
  }
  else {
    uVar1 = FUN_1008178e0(param_1,lVar2);
    FUN_10086c430(lVar2);
  }
  return uVar1;
}

