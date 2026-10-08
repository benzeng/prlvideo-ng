
uint FUN_100344920(void)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_1003439e0();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = _GetCurrentKeyModifiers();
    uVar2 = (uVar2 & 0x200) >> 9;
  }
  return uVar2;
}

