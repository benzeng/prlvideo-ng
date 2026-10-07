
void FUN_1003a08c0(long param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar3 = param_3 & 0xffffffff;
  uVar1 = (uint)(param_3 >> 8) & 0x18 | (uint)(uVar3 >> 0x1c) & 7;
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
      pcVar2 = "a?";
      if (uVar1 == 0xfffe) {
        pcVar2 = "a";
      }
      pcVar4 = "t";
      if (uVar1 != 0xffff) {
        pcVar4 = pcVar2;
      }
      break;
    case 4:
      uVar1 = (uint)param_3 & 0x7ff;
      if (uVar1 < 3) {
        pcVar4 = (&PTR_s_oPos_100bbd8b0)[uVar1];
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
      goto switchD_1003a0907_caseD_b;
    case 0xe:
      pcVar4 = "b";
      break;
    case 0xf:
      pcVar4 = "aL";
      break;
    case 0x11:
      pcVar2 = "misc?";
      if (((uint)param_3 & 0x7ff) == 1) {
        pcVar2 = "vFace";
      }
      pcVar4 = "vPos";
      if ((param_3 & 0x7ff) != 0) {
        pcVar4 = pcVar2;
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
switchD_1003a0907_caseD_b:
    pcVar4 = "r?";
  }
  FUN_10038e8e0(param_2,pcVar4);
  FUN_1003a17a0(param_1,param_2,uVar3,param_4);
  FUN_10039ed40(param_2,uVar3,"xyzw");
  return;
}

