
void FUN_1003a0fb0(long param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar2;
  
  uVar2 = (uint)param_3;
  uVar1 = uVar2 & 0xf000000;
  pcVar5 = "";
  if (uVar1 < 0x4000000) {
    if (uVar1 < 0x2000000) {
      if ((param_3 & 0xf000000) == 0) {
        pcVar4 = "";
      }
      else if (uVar1 == 0x1000000) {
        pcVar4 = "-";
      }
      else {
LAB_1003a1130:
        pcVar5 = ")";
        pcVar4 = "mod?(";
      }
    }
    else if (uVar1 == 0x2000000) {
      pcVar4 = "";
      pcVar5 = "_bias";
    }
    else {
      if (uVar1 != 0x3000000) goto LAB_1003a1130;
      pcVar5 = "_bias";
      pcVar4 = "-";
    }
  }
  else if (uVar1 < 0x8000000) {
    if (uVar1 < 0x6000000) {
      if (uVar1 == 0x4000000) {
        pcVar4 = "";
        pcVar5 = "_bx2";
      }
      else {
        if (uVar1 != 0x5000000) goto LAB_1003a1130;
        pcVar5 = "_bx2";
        pcVar4 = "-";
      }
    }
    else if (uVar1 == 0x6000000) {
      pcVar4 = "1-";
    }
    else {
      if (uVar1 != 0x7000000) goto LAB_1003a1130;
      pcVar4 = "";
      pcVar5 = "_x2";
    }
  }
  else if (uVar1 < 0xa000000) {
    if (uVar1 == 0x8000000) {
      pcVar5 = "_x2";
      pcVar4 = "-";
    }
    else {
      if (uVar1 != 0x9000000) goto LAB_1003a1130;
      pcVar4 = "";
      pcVar5 = "_dz";
    }
  }
  else if (uVar1 < 0xc000000) {
    if (uVar1 == 0xa000000) {
      pcVar4 = "";
      pcVar5 = "_dw";
    }
    else {
      if (uVar1 != 0xb000000) goto LAB_1003a1130;
      pcVar4 = "";
      pcVar5 = "_abs";
    }
  }
  else if (uVar1 == 0xc000000) {
    pcVar5 = "_abs";
    pcVar4 = "-";
  }
  else {
    if (uVar1 != 0xd000000) goto LAB_1003a1130;
    pcVar4 = "!";
  }
  FUN_10038e8e0(param_2,pcVar4);
  uVar1 = (uint)(param_3 >> 8) & 0x18 | (uint)(param_3 >> 0x1c) & 7;
  if (uVar1 < 0x14) {
    pcVar4 = "r";
    switch(uVar1) {
    case 0:
      break;
    case 1:
      pcVar4 = "v";
      break;
    case 2:
      pcVar4 = "c";
      break;
    case 3:
      uVar1 = *(uint *)(param_1 + 0x18) >> 0x10;
      pcVar3 = "a?";
      if (uVar1 == 0xfffe) {
        pcVar3 = "a";
      }
      pcVar4 = "t";
      if (uVar1 != 0xffff) {
        pcVar4 = pcVar3;
      }
      break;
    case 4:
      if ((uVar2 & 0x7ff) < 3) {
        pcVar4 = (&PTR_s_oPos_100bbd8b0)[uVar2 & 0x7ff];
      }
      else {
        pcVar4 = "oPos?";
      }
      break;
    case 5:
      pcVar4 = "oD";
      break;
    case 6:
      pcVar4 = "o";
      if (*(uint *)(param_1 + 0x18) < 0xfffe0300) {
        pcVar4 = "oT";
      }
      break;
    case 7:
      pcVar4 = "i";
      break;
    case 8:
      pcVar4 = "oC";
      break;
    case 9:
      pcVar4 = "oDepth";
      break;
    case 10:
      pcVar4 = "s";
      break;
    default:
      goto switchD_1003a1179_caseD_b;
    case 0xe:
      pcVar4 = "b";
      break;
    case 0xf:
      pcVar4 = "aL";
      break;
    case 0x11:
      pcVar3 = "misc?";
      if ((uVar2 & 0x7ff) == 1) {
        pcVar3 = "vFace";
      }
      pcVar4 = "vPos";
      if ((param_3 & 0x7ff) != 0) {
        pcVar4 = pcVar3;
      }
      break;
    case 0x12:
      pcVar4 = "l";
      break;
    case 0x13:
      pcVar4 = "p";
    }
  }
  else {
switchD_1003a1179_caseD_b:
    pcVar4 = "r?";
  }
  FUN_10038e8e0(param_2,pcVar4);
  FUN_1003a17a0(param_1,param_2,param_3 & 0xffffffff,param_4);
  FUN_10038e8e0(param_2,pcVar5);
  FUN_10039ebd0(param_2,param_3 & 0xffffffff,1,"xyzw");
  return;
}

