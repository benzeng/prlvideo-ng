
undefined8 FUN_10070fbe0(int param_1)

{
  uint uVar1;
  
  if (param_1 < 0x9ff) {
    if (param_1 < 0x8ff) {
      if (param_1 < 0x801) {
        if (2 < param_1 - 0x701U) {
          return 0x100;
        }
        return 0x200;
      }
      uVar1 = param_1 - 0x801;
      if (0xf < uVar1) {
        return 0x100;
      }
      if ((0xfd00U >> (uVar1 & 0x1f) & 1) != 0) {
        return 0x200;
      }
      if ((0x3eU >> (uVar1 & 0x1f) & 1) != 0) {
        return 0x80;
      }
    }
    else {
      uVar1 = param_1 - 0x8ff;
      if (0x16 < uVar1) {
        return 0x100;
      }
      if ((0x4ffffcU >> (uVar1 & 0x1f) & 1) != 0) {
        return 0x80;
      }
      if ((0x300000U >> (uVar1 & 0x1f) & 1) != 0) {
        return 0x200;
      }
    }
    if (uVar1 != 0) {
      return 0x100;
    }
    return 0x40;
  }
  if (0xff01 < param_1) {
    if ((param_1 != 0xff02) && (param_1 != 0xffff)) {
      return 0x100;
    }
    return 0x80;
  }
  if (param_1 < 0xbff) {
    if (param_1 - 0xb02U < 4) {
      return 0x80;
    }
    if (param_1 != 0x9ff) {
      if (param_1 != 0xb01) {
        return 0x100;
      }
      return 0x40;
    }
    return 0x80;
  }
  if (param_1 < 0xe01) {
    if (param_1 < 0xc01) {
      if (param_1 != 0xbff) {
        return 0x100;
      }
      return 0x40;
    }
    if (param_1 - 0xd02U < 2) {
      return 0x200;
    }
    if (param_1 != 0xc01) {
      if (param_1 != 0xcff) {
        return 0x100;
      }
      return 0x40;
    }
    return 0x40;
  }
  if (0x1001 < param_1) {
    if (param_1 != 0x1002) {
      return 0x100;
    }
    return 0x80;
  }
  if (param_1 - 0xe01U < 3) {
    return 0x200;
  }
  if (param_1 == 0xeff) {
    return 0x200;
  }
  if (param_1 != 0xf01) {
    return 0x100;
  }
  return 0x80;
}

