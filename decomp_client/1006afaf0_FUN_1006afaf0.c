
ulong FUN_1006afaf0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  cVar1 = FUN_1001754c0(*(undefined8 *)(param_1 + 0x18),0x15);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
    uVar3 = FUN_100112cc0(uVar2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}

