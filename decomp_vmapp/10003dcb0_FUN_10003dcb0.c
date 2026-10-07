
undefined8 FUN_10003dcb0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_100041750(*(undefined8 *)(param_1 + 0x78));
  uVar2 = 0xf000001c;
  if (cVar1 != '\0') {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

