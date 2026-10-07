
long FUN_1008c29b0(undefined8 param_1,undefined8 param_2,char *param_3)

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
    lVar2 = FUN_1008afdf0(0x16);
    if (lVar2 != 0) {
      sVar3 = _strlen(param_3);
      iVar1 = FUN_1008afb30(lVar2,param_3,sVar3 & 0xffffffff);
      if (iVar1 != 0) {
        return lVar2;
      }
      FUN_1008afd70(lVar2);
    }
    uVar4 = 0x41;
    uVar5 = 0x75;
  }
  FUN_100887ce0(0x22,100,uVar4,"v3_ia5.c",uVar5);
  return 0;
}

