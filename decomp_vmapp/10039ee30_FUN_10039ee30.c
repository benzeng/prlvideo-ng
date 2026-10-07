
char * FUN_10039ee30(uint param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "r";
  switch(param_1 >> 8 & 0x18 | param_1 >> 0x1c & 7) {
  case 0:
    goto switchD_10039ee60_caseD_0;
  case 1:
    return "v";
  case 2:
    return "c";
  case 3:
    pcVar1 = "a?";
    if (param_2 >> 0x10 == 0xfffe) {
      pcVar1 = "a";
    }
    pcVar2 = "t";
    if (param_2 >> 0x10 != 0xffff) {
      pcVar2 = pcVar1;
    }
    return pcVar2;
  case 4:
    if (2 < (param_1 & 0x7ff)) {
      return "oPos?";
    }
    pcVar1 = (&PTR_s_oPos_100bbd8b0)[param_1 & 0x7ff];
switchD_10039ee60_caseD_0:
    return pcVar1;
  case 5:
    return "oD";
  case 6:
    pcVar1 = "o";
    if (param_2 < 0xfffe0300) {
      pcVar1 = "oT";
    }
    return pcVar1;
  case 7:
    return "i";
  case 8:
    return "oC";
  case 9:
    return "oDepth";
  case 10:
    return "s";
  default:
    return "r?";
  case 0xe:
    return "b";
  case 0xf:
    return "aL";
  case 0x11:
    pcVar1 = "misc?";
    if ((param_1 & 0x7ff) == 1) {
      pcVar1 = "vFace";
    }
    pcVar2 = "vPos";
    if ((param_1 & 0x7ff) != 0) {
      pcVar2 = pcVar1;
    }
    return pcVar2;
  case 0x12:
    return "l";
  case 0x13:
    return "p";
  }
}

