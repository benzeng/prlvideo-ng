
void FUN_100699bd0(long param_1)

{
  int iVar1;
  
  iVar1 = _GetCurrentKeyModifiers();
  if (iVar1 == 0x800) {
    FUN_1001930a0();
    return;
  }
  FUN_100193b40(*(undefined8 *)(param_1 + 0x28),0xc9);
  return;
}

