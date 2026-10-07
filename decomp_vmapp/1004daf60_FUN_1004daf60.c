
undefined8 FUN_1004daf60(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1004da380();
  if ((int)uVar2 == 0) {
    cVar1 = FUN_1004e4b50(*(undefined8 *)(param_1 + 0x20));
    uVar2 = 0xf000000b;
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
  }
  return uVar2;
}

