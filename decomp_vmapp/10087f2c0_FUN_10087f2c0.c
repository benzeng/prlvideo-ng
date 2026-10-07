
undefined8 FUN_10087f2c0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_1 + 1U < 2) {
    puVar2 = (uint *)___error();
    uVar1 = *puVar2;
    if ((int)uVar1 < 0x39) {
      if ((uVar1 < 0x26) && ((0x3800000010U >> ((ulong)uVar1 & 0x3f) & 1) != 0)) {
        return 1;
      }
    }
    else {
      if (uVar1 == 0x39) {
        return 1;
      }
      if (uVar1 == 100) {
        return 1;
      }
    }
  }
  return 0;
}

