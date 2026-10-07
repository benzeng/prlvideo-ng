
undefined8 FUN_1008119c0(long param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_2 == (char *)0x0) || (sVar1 = _strlen(param_2), sVar1 < 0x81)) {
    if (*(long *)(param_1 + 0x208) != 0) {
      FUN_10081e1a0();
    }
    if (param_2 == (char *)0x0) {
      *(undefined8 *)(param_1 + 0x208) = 0;
    }
    else {
      lVar2 = FUN_10087d050(param_2);
      *(long *)(param_1 + 0x208) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    FUN_100887ce0(0x14,0x110,0x92,"ssl_lib.c",0xc60);
    uVar3 = 0;
  }
  return uVar3;
}

