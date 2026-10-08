
long FUN_100c9df30(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 == (char *)0x0) {
    uVar4 = 0x6b;
    uVar5 = 0x66;
  }
  else {
    lVar2 = FUN_100c8b370(0x16);
    if (lVar2 != 0) {
      sVar3 = _strlen(param_3);
      iVar1 = FUN_100c8b0b0(lVar2,param_3,sVar3 & 0xffffffff);
      if (iVar1 != 0) {
        return lVar2;
      }
      FUN_100c8b2f0(lVar2);
    }
    uVar4 = 0x41;
    uVar5 = 0x75;
  }
  FUN_100c62ee0(0x22,100,uVar4,"v3_ia5.c",uVar5);
  return 0;
}

