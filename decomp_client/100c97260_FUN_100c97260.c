
undefined8
FUN_100c97260(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100bf6fe0(param_2);
  if (lVar1 == 0) {
    FUN_100c62ee0(0xb,0x72,0x6d,"x509name.c",0x139);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100c96f80(param_1,lVar1,param_3,param_4,param_5);
    FUN_100c74e10(lVar1);
  }
  return uVar2;
}

