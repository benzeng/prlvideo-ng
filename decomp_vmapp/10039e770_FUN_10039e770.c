
undefined4 FUN_10039e770(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x2600;
  if (param_1 < 0x55) {
    if (0xf < param_1) {
      switch(param_1) {
      case 0x10:
      case 0x14:
switchD_10039e7d7_caseD_10:
        uVar2 = 0x2701;
        break;
      case 0x11:
      case 0x15:
        goto switchD_10039e7d7_caseD_11;
      default:
        goto switchD_10039e79c_caseD_2;
      }
      goto LAB_10039e810;
    }
    switch(param_1) {
    case 0:
    case 4:
switchD_10039e79c_caseD_0:
      uVar2 = 0x2700;
      uVar1 = 0x2600;
      break;
    case 1:
    case 5:
switchD_10039e79c_caseD_1:
      uVar2 = 0x2702;
      uVar1 = 0x2600;
      break;
    default:
      goto switchD_10039e79c_caseD_2;
    }
  }
  else {
    if (param_1 < 0xd5) {
      if (0x8f < param_1) {
        switch(param_1) {
        case 0x90:
        case 0x94:
          goto switchD_10039e7d7_caseD_10;
        case 0x91:
        case 0x95:
          goto switchD_10039e7d7_caseD_11;
        default:
          goto switchD_10039e79c_caseD_2;
        }
      }
      if (0x7f < param_1) {
        switch(param_1) {
        case 0x80:
        case 0x84:
          goto switchD_10039e79c_caseD_0;
        case 0x81:
        case 0x85:
          goto switchD_10039e79c_caseD_1;
        default:
          goto switchD_10039e79c_caseD_2;
        }
      }
      if (param_1 != 0x55) {
        return 0x2600;
      }
    }
    else if (param_1 != 0xd5) {
      return 0x2600;
    }
switchD_10039e7d7_caseD_11:
    uVar2 = 0x2703;
LAB_10039e810:
    uVar1 = 0x2601;
  }
  if (param_2 != '\0') {
    uVar1 = uVar2;
  }
switchD_10039e79c_caseD_2:
  return uVar1;
}

