
undefined8
FUN_100c984b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100bf7360(param_2,0);
  if (lVar1 == 0) {
    FUN_100c62ee0(0xb,0x8c,0x77,"x509_att.c",0x116);
    FUN_100c642a0(2,"name=",param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100c98160(param_1,lVar1,param_3,param_4,param_5);
    FUN_100c74e10(lVar1);
  }
  return uVar2;
}

