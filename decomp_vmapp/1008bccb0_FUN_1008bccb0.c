
undefined8
FUN_1008bccb0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_100821870(param_2);
  if (lVar2 == 0) {
    FUN_100887ce0(0xb,0x88,0x6d,"x509_att.c",0xe4);
  }
  else {
    puVar3 = (undefined8 *)FUN_1008a06c0();
    if (puVar3 == (undefined8 *)0x0) {
      FUN_100887ce0(0xb,0x89,0x41,"x509_att.c",0xf7);
    }
    else {
      FUN_100899890(*puVar3);
      uVar4 = FUN_100822ed0(lVar2);
      *puVar3 = uVar4;
      iVar1 = FUN_1008bd2c0(puVar3,param_3,param_4,param_5);
      if (iVar1 != 0) {
        uVar4 = FUN_1008bca30(param_1,puVar3);
        FUN_1008a06e0(puVar3);
        return uVar4;
      }
      FUN_1008a06e0(puVar3);
    }
    FUN_100899890(lVar2);
  }
  return 0;
}

