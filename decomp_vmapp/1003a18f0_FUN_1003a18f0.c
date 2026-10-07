
void FUN_1003a18f0(long param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  
  uVar8 = (uint)(param_3 >> 8) & 0x18 | (uint)(param_3 >> 0x1c) & 7;
  uVar9 = (uint)param_3;
  if (uVar8 == 2) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    iVar10 = -1;
    if (*(uint *)*puVar1 >> 0x10 == 0xffff) {
      iVar10 = 0;
    }
    iVar2 = 1;
    if (*(uint *)*puVar1 >> 0x10 != 0xfffe) {
      iVar2 = iVar10;
    }
    if ((param_3 & 0x2000) == 0) {
      uVar8 = uVar9 & 0x7ff;
      if (*(uint *)(param_1 + 0x10) <= uVar8) {
        pcVar11 = "vec4(0.0)";
        goto LAB_1003a1b04;
      }
      if ((iVar2 == 0) && (*(char *)(DAT_1011c8478 + 0x3a) != '\0')) {
        puVar4 = (uint *)puVar1[4];
        lVar6 = ((long)puVar1[5] - (long)puVar4 >> 2) * -0x3333333333333333;
        while (lVar5 = lVar6, lVar5 != 0) {
          lVar6 = lVar5 / 2;
          if (puVar4[lVar6 * 5] < uVar8) {
            puVar4 = puVar4 + lVar6 * 5 + 5;
            lVar6 = (lVar5 + -1) - lVar6;
          }
        }
        if ((puVar4 != (uint *)puVar1[5]) && (*puVar4 <= uVar8)) {
          pcVar11 = "C%d";
          goto LAB_1003a1c68;
        }
      }
      FUN_10038e8e0(param_2,"C(");
      FUN_10038e8e0(param_2,"%d",uVar8);
    }
    else {
      pcVar11 = "Crel(";
      if (iVar2 == 0) {
        pcVar11 = "C(";
      }
      FUN_10038e8e0(param_2,pcVar11);
      FUN_1003a1ce0(param_1,param_2,param_3 & 0xffffffff,param_4);
    }
    pcVar11 = ")";
    goto LAB_1003a1b04;
  }
  if (uVar8 < 0x14) {
    pcVar11 = "r";
    switch(uVar8) {
    case 0:
      break;
    case 1:
      pcVar11 = "v";
      break;
    default:
      goto switchD_1003a19cf_caseD_2;
    case 3:
      uVar3 = *(uint *)**(undefined8 **)(param_1 + 8) >> 0x10;
      pcVar7 = "a?";
      if (uVar3 == 0xfffe) {
        pcVar7 = "a";
      }
      pcVar11 = "t";
      if (uVar3 != 0xffff) {
        pcVar11 = pcVar7;
      }
      break;
    case 4:
      if ((uVar9 & 0x7ff) < 3) {
        pcVar11 = (&PTR_s_oPos_100bbd8b0)[uVar9 & 0x7ff];
      }
      else {
        pcVar11 = "oPos?";
      }
      break;
    case 5:
      pcVar11 = "oD";
      break;
    case 6:
      pcVar11 = "o";
      if (*(uint *)**(undefined8 **)(param_1 + 8) < 0xfffe0300) {
        pcVar11 = "oT";
      }
      break;
    case 7:
      pcVar11 = "i";
      break;
    case 8:
      pcVar11 = "oC";
      break;
    case 9:
      pcVar11 = "oDepth";
      break;
    case 10:
      pcVar11 = "s";
      break;
    case 0xe:
      pcVar11 = "b";
      break;
    case 0xf:
      pcVar11 = "aL";
      break;
    case 0x11:
      pcVar7 = "misc?";
      if ((uVar9 & 0x7ff) == 1) {
        pcVar7 = "vFace";
      }
      pcVar11 = "vPos";
      if ((param_3 & 0x7ff) != 0) {
        pcVar11 = pcVar7;
      }
      break;
    case 0x12:
      pcVar11 = "l";
      break;
    case 0x13:
      pcVar11 = "p";
    }
  }
  else {
switchD_1003a19cf_caseD_2:
    pcVar11 = "r?";
  }
  FUN_10038e8e0(param_2,pcVar11);
  if ((param_3 & 0x2000) != 0) {
    FUN_10038e8e0(param_2,"[");
    FUN_1003a1ce0(param_1,param_2,param_3 & 0xffffffff,param_4);
    pcVar11 = "]";
LAB_1003a1b04:
    FUN_10038e8e0(param_2,pcVar11);
    return;
  }
  if (uVar8 < 0x14) {
    if ((0xc0005U >> uVar8 & 1) == 0) {
      if ((0x28210U >> uVar8 & 1) != 0) {
        return;
      }
      if ((uVar8 != 3) || ((*(uint *)**(undefined8 **)(param_1 + 8) & 0xffff0000) != 0xfffe0000))
      goto LAB_1003a1c5c;
    }
    pcVar11 = "%d";
  }
  else {
LAB_1003a1c5c:
    pcVar11 = "[%d]";
  }
LAB_1003a1c68:
  FUN_10038e8e0(param_2,pcVar11,uVar9 & 0x7ff);
  return;
}

