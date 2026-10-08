
undefined8 FUN_100be7130(long param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_2 == (char *)0x0) || (sVar1 = _strlen(param_2), sVar1 < 0x81)) {
    if (*(long *)(param_1 + 0x208) != 0) {
      FUN_100bf3910();
    }
    if (param_2 == (char *)0x0) {
      *(undefined8 *)(param_1 + 0x208) = 0;
    }
    else {
      lVar2 = FUN_100c58250(param_2);
      *(long *)(param_1 + 0x208) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    FUN_100c62ee0(0x14,0x110,0x92,"ssl_lib.c",0xc60);
    uVar3 = 0;
  }
  return uVar3;
}

