
void FUN_1003a15e0(undefined8 param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  
  param_2 = param_2 & 0xf000000;
  if (param_2 < 0x4000000) {
    if (0x1ffffff < param_2) {
      if (param_2 == 0x2000000) {
        pcVar1 = "";
      }
      else {
        if (param_2 != 0x3000000) goto LAB_1003a177d;
        pcVar1 = "-";
      }
      *param_3 = pcVar1;
      pcVar1 = "_bias";
      goto LAB_1003a178e;
    }
    if (param_2 == 0) {
      pcVar1 = "";
      *param_3 = "";
      goto LAB_1003a178e;
    }
    if (param_2 == 0x1000000) {
      pcVar1 = "-";
LAB_1003a1771:
      *param_3 = pcVar1;
      pcVar1 = "";
      goto LAB_1003a178e;
    }
  }
  else if (param_2 < 0x8000000) {
    if (param_2 < 0x6000000) {
      if (param_2 == 0x4000000) {
        pcVar1 = "";
      }
      else {
        if (param_2 != 0x5000000) goto LAB_1003a177d;
        pcVar1 = "-";
      }
      *param_3 = pcVar1;
      pcVar1 = "_bx2";
      goto LAB_1003a178e;
    }
    if (param_2 == 0x6000000) {
      pcVar1 = "1-";
      goto LAB_1003a1771;
    }
    if (param_2 == 0x7000000) {
      pcVar1 = "";
      goto LAB_1003a172a;
    }
  }
  else if (param_2 < 0xa000000) {
    if (param_2 == 0x8000000) {
      pcVar1 = "-";
LAB_1003a172a:
      *param_3 = pcVar1;
      pcVar1 = "_x2";
      goto LAB_1003a178e;
    }
    if (param_2 == 0x9000000) {
      *param_3 = "";
      pcVar1 = "_dz";
      goto LAB_1003a178e;
    }
  }
  else if (param_2 < 0xc000000) {
    if (param_2 == 0xa000000) {
      *param_3 = "";
      pcVar1 = "_dw";
      goto LAB_1003a178e;
    }
    if (param_2 == 0xb000000) {
      pcVar1 = "";
      goto LAB_1003a1756;
    }
  }
  else {
    if (param_2 == 0xc000000) {
      pcVar1 = "-";
LAB_1003a1756:
      *param_3 = pcVar1;
      pcVar1 = "_abs";
      goto LAB_1003a178e;
    }
    if (param_2 == 0xd000000) {
      pcVar1 = "!";
      goto LAB_1003a1771;
    }
  }
LAB_1003a177d:
  *param_3 = "mod?(";
  pcVar1 = ")";
LAB_1003a178e:
  *param_4 = pcVar1;
  return;
}

