
undefined8 FUN_1006af3b0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_10018c770(*(undefined8 *)(param_1 + 0x20));
  if (cVar1 == '\0') {
    uVar2 = FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
    cVar1 = FUN_100112cc0(uVar2);
    if (cVar1 == '\0') {
      uVar2 = FUN_1001754c0(*(undefined8 *)(param_1 + 0x18),0x17);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

