
undefined4
FUN_100c972e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_100bf7360(param_2,0);
  if (lVar2 == 0) {
    FUN_100c62ee0(0xb,0x83,0x77,"x509name.c",0x127);
    FUN_100c642a0(2,"name=",param_2);
  }
  else {
    lVar3 = FUN_100c96f80(0,lVar2,param_3,param_4,param_5);
    FUN_100c74e10(lVar2);
    if (lVar3 != 0) {
      uVar1 = FUN_100c97050(param_1,lVar3,param_6,param_7);
      FUN_100c7c190(lVar3);
      return uVar1;
    }
  }
  return 0;
}

