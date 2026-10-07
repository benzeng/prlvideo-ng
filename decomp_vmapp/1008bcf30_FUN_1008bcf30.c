
undefined8
FUN_1008bcf30(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100821bf0(param_2,0);
  if (lVar1 == 0) {
    FUN_100887ce0(0xb,0x8c,0x77,"x509_att.c",0x116);
    FUN_1008890a0(2,"name=",param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1008bcbe0(param_1,lVar1,param_3,param_4,param_5);
    FUN_100899890(lVar1);
  }
  return uVar2;
}

