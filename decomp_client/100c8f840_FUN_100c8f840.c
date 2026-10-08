
undefined4
FUN_100c8f840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_100c59ee0();
  lVar3 = FUN_100c58530(uVar2);
  if (lVar3 == 0) {
    FUN_100c62ee0(9,0x71,7,"pem_lib.c",0x248);
    uVar1 = 0;
  }
  else {
    FUN_100c58d60(lVar3,0x6a,0,param_1);
    uVar1 = FUN_100c8f540(lVar3,param_2,param_3,param_4,param_5);
    FUN_100c586e0(lVar3);
  }
  return uVar1;
}

