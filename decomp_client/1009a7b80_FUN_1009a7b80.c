
undefined8 FUN_1009a7b80(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_1009983a0();
  cVar1 = FUN_100990a70(uVar2);
  if (cVar1 != '\0') {
    uVar2 = FUN_1009983a0(param_1);
    lVar3 = FUN_100990b00(uVar2);
    if ((*(byte *)(lVar3 + 0x20) & 8) != 0) {
      return 0xffffffff;
    }
  }
  return 0xd;
}

