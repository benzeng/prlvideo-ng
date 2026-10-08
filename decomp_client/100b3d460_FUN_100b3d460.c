
char FUN_100b3d460(uint *param_1)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = *param_1;
  if (uVar1 == 0xffffffff) {
    uVar1 = param_1[1];
    cVar2 = ' ';
    if (uVar1 == 0xffffffff) {
      uVar1 = param_1[2];
      cVar2 = '@';
      if (uVar1 == 0xffffffff) {
        uVar1 = param_1[3];
        cVar2 = '`';
        if (uVar1 == 0xffffffff) {
          return -0x80;
        }
      }
    }
  }
  else {
    cVar2 = '\0';
  }
  if (uVar1 != 0) {
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    do {
      uVar1 = uVar1 * 2;
      cVar2 = cVar2 + '\x01';
    } while (uVar1 != 0);
  }
  return cVar2;
}

