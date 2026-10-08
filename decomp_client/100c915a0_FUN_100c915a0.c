
undefined8
FUN_100c915a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100c59ef0(param_1,0);
  if (lVar1 == 0) {
    FUN_100c62ee0(9,0x79,7,"pem_pk8.c",0xf5);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100c91200(lVar1,param_2,param_3,param_4);
    FUN_100c586e0(lVar1);
  }
  return uVar2;
}

