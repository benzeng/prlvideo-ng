
undefined8
FUN_100c91d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100c59ee0();
  lVar2 = FUN_100c58530(uVar1);
  if (lVar2 == 0) {
    FUN_100c62ee0(9,0x7c,7,"pem_pkey.c",0xda);
    uVar1 = 0;
  }
  else {
    FUN_100c58d60(lVar2,0x6a,0,param_1);
    uVar1 = FUN_100c91810(lVar2,param_2,param_3,param_4);
    FUN_100c586e0(lVar2);
  }
  return uVar1;
}

