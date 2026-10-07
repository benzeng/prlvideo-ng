
undefined8 FUN_1004db3a0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1004e3380(*(undefined8 *)(param_1 + 0x20));
  if (cVar1 != '\0') {
    uVar2 = FUN_1004e4e30(*(undefined8 *)(param_1 + 0x20));
    return uVar2;
  }
  return 0xf0000012;
}

