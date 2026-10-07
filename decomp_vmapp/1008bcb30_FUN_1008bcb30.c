
undefined8
FUN_1008bcb30(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_1008a06c0();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_100887ce0(0xb,0x89,0x41,"x509_att.c",0xf7);
  }
  else {
    if (param_2 != 0) {
      FUN_100899890(*puVar2);
      uVar3 = FUN_100822ed0(param_2);
      *puVar2 = uVar3;
      iVar1 = FUN_1008bd2c0(puVar2,param_3,param_4,param_5);
      if (iVar1 != 0) {
        uVar3 = FUN_1008bca30(param_1,puVar2);
        FUN_1008a06e0(puVar2);
        return uVar3;
      }
    }
    FUN_1008a06e0(puVar2);
  }
  return 0;
}

