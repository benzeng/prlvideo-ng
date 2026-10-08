
void FUN_10069a0b0(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = FUN_10018c2b0(*(undefined8 *)(param_1 + 0x28));
  cVar2 = FUN_100112cc0(uVar1);
  if (cVar2 != '\0') {
    uVar1 = FUN_10018c280(*(undefined8 *)(param_1 + 0x28));
    FUN_10031b320(uVar1);
    return;
  }
  return;
}

