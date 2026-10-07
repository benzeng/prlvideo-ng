
uint FUN_10038e450(uint param_1)

{
  uint uVar1;
  
  if (*(char *)(DAT_1011c8478 + 0x2f) != '\0') {
    if ((int)param_1 < 0x30) {
      if ((param_1 < 0x1f) && ((0x75402800U >> (param_1 & 0x1f) & 1) != 0)) {
        return 0;
      }
    }
    else if ((int)param_1 < 0x57) {
      uVar1 = param_1 - 0x30;
      if (uVar1 < 0x17) {
        if ((0x554000U >> (uVar1 & 0x1f) & 1) != 0) {
          return 0x49;
        }
        if ((9U >> (uVar1 & 0x1f) & 1) != 0) {
          return 0x39;
        }
        if ((0x81000U >> (uVar1 & 0x1f) & 1) != 0) {
          return 0x48;
        }
      }
    }
    else if (param_1 - 0x57 < 3) {
      return 0;
    }
  }
  uVar1 = 0;
  if ((param_1 - 0x6b < 4) && (*(char *)(DAT_1011c8478 + 0x2e) != '\0')) {
    return 0;
  }
  if (*(char *)(DAT_1011c8478 + 0x30) == '\0') {
    if ((int)param_1 < 0x1e) {
      if (0x15 < param_1) {
        return param_1;
      }
      if ((0x2a0400U >> (param_1 & 0x1f) & 1) != 0) {
        return 7;
      }
      if ((0x140000U >> (param_1 & 0x1f) & 1) != 0) {
        return 0;
      }
      return param_1;
    }
    if (0x5a < (int)param_1) goto LAB_10038e57b;
  }
  else {
    if (0x3f < (int)param_1) {
      if ((int)param_1 < 0x4b) {
        if (param_1 == 0x40) {
          return 0x3e;
        }
        if (param_1 == 0x46) {
          return 0x44;
        }
        return param_1;
      }
      if (param_1 == 0x4b) {
        return 0x49;
      }
LAB_10038e57b:
      if (param_1 == 0x5b) {
        return 0;
      }
      return param_1;
    }
    if ((int)param_1 < 0x18) {
      switch(param_1) {
      case 5:
        return 2;
      default:
        return param_1;
      case 10:
      case 0x11:
      case 0x13:
      case 0x15:
        goto switchD_10038e50a_caseD_a;
      case 0xd:
        return 0xb;
      case 0x12:
      case 0x14:
        goto switchD_10038e50a_caseD_12;
      }
    }
    if ((int)param_1 < 0x1e) {
      if (param_1 == 0x18) {
        return 0x16;
      }
      return param_1;
    }
  }
  if (1 < param_1 - 0x2d) {
    if (param_1 != 0x1e) {
      if (param_1 != 0x1f) {
        return param_1;
      }
      return 0x22;
    }
    uVar1 = 0x1d;
switchD_10038e50a_caseD_12:
    return uVar1;
  }
switchD_10038e50a_caseD_a:
  return 7;
}

