
undefined8 FUN_100879140(long param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    uVar3 = 0x43;
    uVar4 = 0x15c;
  }
  else if (*(long *)(param_1 + 0x40) == 0) {
    sVar1 = _strlen(param_2);
    lVar2 = FUN_10081ddd0((int)sVar1 + 1,"dso_lib.c",0x164);
    if (lVar2 != 0) {
      sVar1 = _strlen(param_2);
      FUN_10087d1f0(lVar2,param_2,sVar1 + 1);
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_10081e1a0();
      }
      *(long *)(param_1 + 0x38) = lVar2;
      return 1;
    }
    uVar3 = 0x41;
    uVar4 = 0x166;
  }
  else {
    uVar3 = 0x6e;
    uVar4 = 0x160;
  }
  FUN_100887ce0(0x25,0x81,uVar3,"dso_lib.c",uVar4);
  return 0;
}

