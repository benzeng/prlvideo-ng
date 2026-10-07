
void FUN_1003a1ce0(long param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar2 = (uint)param_4;
  if (uVar2 == 0) {
    FUN_10038e8e0(param_2,"a0.x");
    goto LAB_1003a1d9f;
  }
  uVar5 = (uint)(param_4 >> 8) & 0x18 | (uint)((param_4 & 0xffffffff) >> 0x1c) & 7;
  if (0x13 < uVar5) {
switchD_1003a1d3e_caseD_b:
    pcVar3 = "r?";
    goto switchD_1003a1d3e_caseD_1;
  }
  pcVar3 = "v";
  pcVar1 = "r";
  pcVar4 = "aL";
  switch(uVar5) {
  case 0:
    goto switchD_1003a1d3e_caseD_0;
  case 1:
    break;
  case 2:
    pcVar1 = "c";
    goto switchD_1003a1d3e_caseD_0;
  case 3:
    uVar5 = *(uint *)**(undefined8 **)(param_1 + 8) >> 0x10;
    pcVar4 = "a?";
    if (uVar5 == 0xfffe) {
      pcVar4 = "a";
    }
    pcVar1 = "t";
    if (uVar5 != 0xffff) {
      pcVar1 = pcVar4;
    }
    FUN_10038e8e0(param_2,pcVar1);
    if ((*(uint *)**(undefined8 **)(param_1 + 8) & 0xffff0000) != 0xfffe0000) goto LAB_1003a1d78;
    goto LAB_1003a1efc;
  case 4:
    if ((uVar2 & 0x7ff) < 3) {
      pcVar4 = (&PTR_s_oPos_100bbd8b0)[uVar2 & 0x7ff];
    }
    else {
      pcVar4 = "oPos?";
    }
    goto switchD_1003a1d3e_caseD_f;
  case 5:
    pcVar3 = "oD";
    break;
  case 6:
    pcVar3 = "o";
    if (*(uint *)**(undefined8 **)(param_1 + 8) < 0xfffe0300) {
      pcVar3 = "oT";
    }
    break;
  case 7:
    pcVar3 = "i";
    break;
  case 8:
    pcVar3 = "oC";
    break;
  case 9:
    pcVar4 = "oDepth";
    goto switchD_1003a1d3e_caseD_f;
  case 10:
    pcVar3 = "s";
    break;
  default:
    goto switchD_1003a1d3e_caseD_b;
  case 0xe:
    pcVar3 = "b";
    break;
  case 0xf:
    goto switchD_1003a1d3e_caseD_f;
  case 0x11:
    pcVar1 = "misc?";
    if ((uVar2 & 0x7ff) == 1) {
      pcVar1 = "vFace";
    }
    pcVar4 = "vPos";
    if ((param_4 & 0x7ff) != 0) {
      pcVar4 = pcVar1;
    }
switchD_1003a1d3e_caseD_f:
    FUN_10038e8e0(param_2,pcVar4);
    goto LAB_1003a1d89;
  case 0x12:
    pcVar1 = "l";
    goto switchD_1003a1d3e_caseD_0;
  case 0x13:
    pcVar1 = "p";
switchD_1003a1d3e_caseD_0:
    FUN_10038e8e0(param_2,pcVar1);
LAB_1003a1efc:
    pcVar4 = "%d";
    goto LAB_1003a1d7f;
  }
switchD_1003a1d3e_caseD_1:
  FUN_10038e8e0(param_2,pcVar3);
LAB_1003a1d78:
  pcVar4 = "[%d]";
LAB_1003a1d7f:
  FUN_10038e8e0(param_2,pcVar4,uVar2 & 0x7ff);
LAB_1003a1d89:
  FUN_10039ebd0(param_2,param_4 & 0xffffffff,1,"xyzw");
LAB_1003a1d9f:
  if ((param_3 & 0x7ff) == 0) {
    return;
  }
  FUN_10038e8e0(param_2,"+%d",param_3 & 0x7ff);
  return;
}

