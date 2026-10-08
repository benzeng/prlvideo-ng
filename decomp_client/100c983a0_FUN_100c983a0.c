
undefined8
FUN_100c983a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_100bf7360(param_2,0);
  if (lVar2 == 0) {
    FUN_100c62ee0(0xb,0x8c,0x77,"x509_att.c",0x116);
    FUN_100c642a0(2,"name=",param_2);
  }
  else {
    puVar3 = (undefined8 *)FUN_100c7bc40();
    if (puVar3 == (undefined8 *)0x0) {
      FUN_100c62ee0(0xb,0x89,0x41,"x509_att.c",0xf7);
    }
    else {
      FUN_100c74e10(*puVar3);
      uVar4 = FUN_100bf8640(lVar2);
      *puVar3 = uVar4;
      iVar1 = FUN_100c98840(puVar3,param_3,param_4,param_5);
      if (iVar1 != 0) {
        FUN_100c74e10(lVar2);
        uVar4 = FUN_100c97fb0(param_1,puVar3);
        FUN_100c7bc60(puVar3);
        return uVar4;
      }
      FUN_100c7bc60(puVar3);
    }
    FUN_100c74e10(lVar2);
  }
  return 0;
}

