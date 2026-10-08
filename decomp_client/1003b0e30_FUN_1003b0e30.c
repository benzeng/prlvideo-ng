
undefined8 FUN_1003b0e30(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if ((param_1 != 1) &&
     ((0x19 < param_1 - 3U || (uVar2 = 2, (0x2c3006bU >> (param_1 - 3U & 0x1f) & 1) == 0)))) {
    cVar1 = FUN_1003b0d10(param_1);
    uVar2 = 3;
    if (cVar1 == '\0') {
      if (param_1 < 0x18) {
        if (param_1 == 5) {
          return 5;
        }
        if (param_1 == 7) {
          return 4;
        }
      }
      else {
        if (param_1 == 0x18) {
          return 6;
        }
        if (param_1 == 0x1b) {
          return 7;
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

