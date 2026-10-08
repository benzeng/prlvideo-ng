
uint FUN_100bd0b60(uint param_1)

{
  if ((int)param_1 < 0x6e) {
    if ((int)param_1 < 0x3c) {
      if ((int)param_1 < 0x28) {
        if (param_1 < 0x1f) {
          if ((0x40100401U >> (param_1 & 0x1f) & 1) != 0) {
            return param_1;
          }
          if ((param_1 == 0x15) || (param_1 == 0x16)) {
            return 0x14;
          }
        }
      }
      else {
        switch(param_1) {
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
          return param_1;
        case 0x30:
          return 0x2a;
        case 0x31:
        case 0x32:
          return 0x28;
        case 0x33:
          return 0x28;
        }
      }
    }
    else if ((int)param_1 < 0x46) {
      if (param_1 == 0x3c) {
        return 0x28;
      }
    }
    else if ((int)param_1 < 100) {
      if ((int)param_1 < 0x5a) {
        if ((int)param_1 < 0x50) {
          if ((param_1 == 0x46) || (param_1 == 0x47)) {
            return 0x28;
          }
        }
        else {
          if (param_1 == 0x50) {
            return 0x28;
          }
          if (param_1 == 0x56) {
            return 0x56;
          }
        }
      }
      else if (param_1 == 0x5a) {
        return 0x28;
      }
    }
  }
  else {
    switch(param_1) {
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
      return 0x28;
    case 0x73:
      return param_1;
    }
  }
  return 0xffffffff;
}

