
void FUN_100daa840(long param_1,uint param_2)

{
  param_2 = param_2 & 0xf000;
  if (param_2 < 0x8000) {
    if (0x3fff < param_2) {
      if (param_2 == 0x4000) {
        *(undefined1 *)(param_1 + 0xbc) = 0x35;
        return;
      }
      if (param_2 != 0x6000) {
        return;
      }
      *(undefined1 *)(param_1 + 0xbc) = 0x34;
      return;
    }
    if (param_2 != 0x1000) {
      if (param_2 != 0x2000) {
        return;
      }
      *(undefined1 *)(param_1 + 0xbc) = 0x33;
      return;
    }
  }
  else {
    if (param_2 == 0x8000) {
      *(undefined1 *)(param_1 + 0xbc) = 0x30;
      return;
    }
    if (param_2 != 0xc000) {
      if (param_2 != 0xa000) {
        return;
      }
      *(undefined1 *)(param_1 + 0xbc) = 0x32;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xbc) = 0x36;
  return;
}

