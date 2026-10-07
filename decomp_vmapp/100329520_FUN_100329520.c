
undefined8 FUN_100329520(long param_1,int param_2,uint *param_3,char param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar3 = FUN_100303740();
  if (param_2 < 0x8068) {
    if (param_2 < 0xd58) {
      if (param_2 < 0xc02) {
        if (param_2 != 0xb80) {
          if (param_2 != 0xc01) goto switchD_100329637_caseD_807c;
          lVar3 = *(long *)(param_1 + 0x30);
          uVar6 = *(uint *)(param_1 + 0x15ac);
          uVar2 = *(uint *)(lVar3 + 0x2058);
          uVar9 = uVar6;
          if (uVar2 < 0x20) {
            uVar5 = 0x20;
            do {
              uVar5 = uVar5 >> 1;
              uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
            } while (uVar2 < uVar5);
          }
          for (puVar4 = *(uint **)(lVar3 + 0x1858 + (ulong)(uVar9 & 0xff) * 8);
              puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
            if (*puVar4 == uVar6) {
              lVar1 = *(long *)(puVar4 + 2);
              if (lVar1 != 0) {
                puVar4 = (uint *)(lVar1 + 0x198);
                if (param_4 != '\0') {
                  puVar4 = (uint *)(lVar1 + 0x1d8);
                }
                uVar2 = *puVar4;
                goto LAB_100329c4e;
              }
              break;
            }
          }
LAB_100329702:
          uVar6 = *(uint *)(param_1 + 0x15a8);
          uVar9 = uVar6;
          if (uVar2 < 0x20) {
            uVar5 = 0x20;
            do {
              uVar5 = uVar5 >> 1;
              uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
            } while (uVar2 < uVar5);
          }
          for (puVar4 = *(uint **)(lVar3 + 0x1858 + (ulong)(uVar9 & 0xff) * 8);
              puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
            if (*puVar4 == uVar6) {
              lVar3 = *(long *)(puVar4 + 2);
              if (lVar3 != 0) {
                puVar4 = (uint *)(lVar3 + 0x248);
                if (param_4 != '\0') {
                  puVar4 = (uint *)(lVar3 + 0x24c);
                }
                uVar2 = *puVar4;
                goto LAB_100329c4e;
              }
              break;
            }
          }
LAB_10032983a:
          uVar2 = *(uint *)(param_1 + 0x15ac);
          uVar6 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2058);
          uVar9 = uVar2;
          if (uVar6 < 0x20) {
            uVar5 = 0x20;
            do {
              uVar5 = uVar5 >> 1;
              uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
            } while (uVar6 < uVar5);
          }
          for (puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1858 + (ulong)(uVar9 & 0xff) * 8);
              puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
            if (*puVar4 == uVar2) {
              lVar3 = *(long *)(puVar4 + 2);
              if (lVar3 != 0) {
                if (param_4 == '\0') {
                  uVar2 = *(uint *)(lVar3 + 0x198 + (ulong)(param_2 - 0x8825) * 4);
                }
                else {
                  uVar2 = *(uint *)(lVar3 + 0x1d8 + (ulong)(param_2 - 0x8825) * 4);
                }
                goto LAB_100329c4e;
              }
              break;
            }
          }
LAB_100329b0e:
          puVar4 = (uint *)(param_1 + 0x15a8);
          puVar10 = (uint *)(param_1 + 0x15a0);
LAB_100329b1d:
          if (param_4 != '\0') {
            puVar10 = puVar4;
          }
          uVar2 = *puVar10;
          goto LAB_100329c4e;
        }
        fVar11 = *(float *)(param_1 + 0x118);
        fVar12 = *(float *)(param_1 + 0x11c);
        fVar13 = *(float *)(param_1 + 0x120);
        fVar14 = *(float *)(param_1 + 0x124);
      }
      else {
        if (param_2 == 0xc02) {
          lVar3 = *(long *)(param_1 + 0x30);
          uVar2 = *(uint *)(lVar3 + 0x2058);
          goto LAB_100329702;
        }
        if (param_2 != 0xc22) goto switchD_100329637_caseD_807c;
        fVar11 = *(float *)(param_1 + 0xd8);
        fVar12 = *(float *)(param_1 + 0xdc);
        fVar13 = *(float *)(param_1 + 0xe0);
        fVar14 = *(float *)(param_1 + 0xe4);
      }
      *param_3 = (int)fVar11;
      param_3[1] = (int)fVar12;
      param_3[2] = (int)fVar13;
      param_3[3] = (int)fVar14;
    }
    else {
      if (3 < param_2 - 0xd58U) goto switchD_100329637_caseD_807c;
      *param_3 = 0x10;
    }
    goto LAB_100329c51;
  }
  if (param_2 < 0x8454) {
    if (param_2 < 0x807a) {
      if (param_2 == 0x8068) {
        uVar8 = 0xde0;
      }
      else if (param_2 == 0x8069) {
        uVar8 = 0xde1;
      }
      else {
        if (param_2 != 0x806a) goto switchD_100329637_caseD_807c;
        uVar8 = 0x806f;
      }
      goto LAB_100329a06;
    }
    switch(param_2) {
    case 0x807a:
      uVar2 = *(uint *)(lVar3 + 0x2c);
      break;
    case 0x807b:
      uVar2 = *(uint *)(lVar3 + 0x30);
      break;
    default:
      goto switchD_100329637_caseD_807c;
    case 0x807e:
      uVar2 = *(uint *)(lVar3 + 0x90);
      break;
    case 0x8081:
      uVar2 = *(uint *)(lVar3 + 0xbc);
      break;
    case 0x8082:
      uVar2 = *(uint *)(lVar3 + 0xc0);
      break;
    case 0x8085:
      uVar2 = *(uint *)(lVar3 + 0x150);
      break;
    case 0x8088:
      uVar2 = *(uint *)(lVar3 + 0x2c + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
      break;
    case 0x8089:
      uVar2 = *(uint *)(lVar3 + 0x30 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
    }
    goto LAB_100329c4e;
  }
  if (param_2 < 0x85b5) {
    if (param_2 < 0x84e0) {
      if (param_2 == 0x8454) {
        uVar2 = *(uint *)(lVar3 + 0x120);
      }
      else if (param_2 == 0x845a) {
        uVar2 = *(uint *)(lVar3 + 0xec);
      }
      else {
        if (param_2 != 0x845b) goto switchD_100329637_caseD_807c;
        uVar2 = *(uint *)(lVar3 + 0xf0);
      }
    }
    else {
      if (0x84f5 < param_2) {
        if (param_2 == 0x84f6) {
          uVar8 = 0x84f5;
        }
        else {
          if (param_2 != 0x8514) goto switchD_100329637_caseD_807c;
          uVar8 = 0x8513;
        }
        goto LAB_100329a06;
      }
      if (param_2 == 0x84e0) {
        uVar2 = *(int *)(param_1 + 0x418) + 0x84c0;
      }
      else {
        if (param_2 != 0x84e1) goto switchD_100329637_caseD_807c;
        uVar2 = *(int *)(param_1 + 0x450) + 0x84c0;
      }
    }
    goto LAB_100329c4e;
  }
  if (0x8a27 < param_2) {
    if (param_2 < 0x8def) {
      if (0x8c1b < param_2) {
        if (param_2 < 0x8c8f) {
          if (param_2 < 0x8c2a) {
            if (param_2 == 0x8c1c) {
              uVar8 = 0x8c18;
            }
            else {
              if (param_2 != 0x8c1d) goto switchD_100329637_caseD_807c;
              uVar8 = 0x8c1a;
            }
          }
          else {
            if (param_2 == 0x8c2a) {
              uVar8 = 0x8c2a;
              goto LAB_100329b36;
            }
            if (param_2 != 0x8c2c) goto switchD_100329637_caseD_807c;
            uVar8 = 0x8c2a;
          }
LAB_100329a06:
          uVar2 = FUN_1003017c0(param_1,uVar8,param_4);
          goto LAB_100329c4e;
        }
        if (param_2 == 0x8c8f) {
          uVar8 = 0x8c8e;
          goto LAB_100329b36;
        }
        if (param_2 != 0x8ca6) {
          if (param_2 != 0x8caa) goto switchD_100329637_caseD_807c;
          goto LAB_100329b0e;
        }
        puVar4 = (uint *)(param_1 + 0x15ac);
        puVar10 = (uint *)(param_1 + 0x15a4);
        goto LAB_100329b1d;
      }
      if (param_2 != 0x8a28) goto switchD_100329637_caseD_807c;
      uVar8 = 0x8a11;
    }
    else {
      if (param_2 != 0x8def) {
        if (param_2 == 0x9104) {
          uVar8 = 0x9100;
        }
        else {
          if (param_2 != 0x9105) goto switchD_100329637_caseD_807c;
          uVar8 = 0x9102;
        }
        goto LAB_100329a06;
      }
      uVar8 = 0x8dee;
    }
    goto LAB_100329b36;
  }
  if (param_2 < 0x8824) {
    if (param_2 == 0x85b5) {
      uVar2 = FUN_100304560(param_1,param_4);
    }
    else if (param_2 == 0x86a9) {
      uVar2 = *(uint *)(lVar3 + 0x60);
    }
    else {
      if (param_2 != 0x86ab) goto switchD_100329637_caseD_807c;
      uVar2 = *(uint *)(lVar3 + 0x5c);
    }
    goto LAB_100329c4e;
  }
  if (param_2 < 0x8894) {
    if (0xf < param_2 - 0x8825U) {
      if (param_2 != 0x8824) goto switchD_100329637_caseD_807c;
      uVar2 = FUN_1003050f0(param_1);
      goto LAB_100329c4e;
    }
    goto LAB_10032983a;
  }
  if (0x88ec < param_2) {
    if (param_2 == 0x88ed) {
      uVar8 = 0x88eb;
    }
    else {
      if (param_2 != 0x88ef) {
        if (param_2 == 0x8919) {
          uVar2 = FUN_100301220(param_1,*(undefined4 *)(param_1 + 0x418),param_4);
          goto LAB_100329c4e;
        }
        goto switchD_100329637_caseD_807c;
      }
      uVar8 = 0x88ec;
    }
    goto LAB_100329b36;
  }
  switch(param_2) {
  case 0x8894:
    uVar8 = 0x8892;
    goto LAB_100329b36;
  case 0x8895:
    uVar8 = 0x8893;
LAB_100329b36:
    uVar2 = FUN_1003040c0(param_1,uVar8,param_4);
    break;
  case 0x8896:
    uVar2 = *(uint *)(lVar3 + 0x38);
    *param_3 = uVar2;
    if (param_4 != '\0') {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar9 = uVar2;
      if (uVar6 < 0x20) {
        uVar5 = 0x20;
        do {
          uVar5 = uVar5 >> 1;
          uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
        } while (uVar6 < uVar5);
      }
      uVar6 = 0;
      for (puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar9 & 0xff) * 8);
          puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
        if (*puVar4 == uVar2) goto LAB_100329fa2;
      }
LAB_100329fa5:
      *param_3 = uVar6;
      uVar2 = uVar6;
    }
    break;
  case 0x8897:
    uVar2 = *(uint *)(lVar3 + 0x98);
    *param_3 = uVar2;
    if (param_4 != '\0') {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar9 = uVar2;
      if (uVar6 < 0x20) {
        uVar5 = 0x20;
        do {
          uVar5 = uVar5 >> 1;
          uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
        } while (uVar6 < uVar5);
      }
      uVar6 = 0;
      for (puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar9 & 0xff) * 8);
          puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
        if (*puVar4 == uVar2) goto LAB_100329fa2;
      }
      goto LAB_100329fa5;
    }
    break;
  case 0x8898:
    uVar2 = *(uint *)(lVar3 + 200);
    *param_3 = uVar2;
    if (param_4 != '\0') {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar9 = uVar2;
      if (uVar6 < 0x20) {
        uVar5 = 0x20;
        do {
          uVar5 = uVar5 >> 1;
          uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
        } while (uVar6 < uVar5);
      }
      uVar6 = 0;
      for (puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar9 & 0xff) * 8);
          puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
        if (*puVar4 == uVar2) goto LAB_100329fa2;
      }
      goto LAB_100329fa5;
    }
    break;
  case 0x8899:
    uVar2 = *(uint *)(lVar3 + 0x158);
    *param_3 = uVar2;
    if (param_4 != '\0') {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar9 = uVar2;
      if (uVar6 < 0x20) {
        uVar5 = 0x20;
        do {
          uVar5 = uVar5 >> 1;
          uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
        } while (uVar6 < uVar5);
      }
      uVar6 = 0;
      for (puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar9 & 0xff) * 8);
          puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
        if (*puVar4 == uVar2) goto LAB_100329fa2;
      }
      goto LAB_100329fa5;
    }
    break;
  case 0x889a:
    uVar2 = *(uint *)(lVar3 + 0x38 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
    *param_3 = uVar2;
    if (param_4 != '\0') {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar9 = uVar2;
      if (uVar6 < 0x20) {
        uVar5 = 0x20;
        do {
          uVar5 = uVar5 >> 1;
          uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
        } while (uVar6 < uVar5);
      }
      uVar6 = 0;
      for (puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar9 & 0xff) * 8);
          puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
        if (*puVar4 == uVar2) goto LAB_100329fa2;
      }
      goto LAB_100329fa5;
    }
    break;
  case 0x889b:
    uVar2 = *(uint *)(lVar3 + 0x188);
    *param_3 = uVar2;
    if (param_4 != '\0') {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar9 = uVar2;
      if (uVar6 < 0x20) {
        uVar5 = 0x20;
        do {
          uVar5 = uVar5 >> 1;
          uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
        } while (uVar6 < uVar5);
      }
      uVar6 = 0;
      for (puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar9 & 0xff) * 8);
          puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
        if (*puVar4 == uVar2) goto LAB_100329fa2;
      }
      goto LAB_100329fa5;
    }
    break;
  case 0x889c:
    uVar2 = *(uint *)(lVar3 + 0xf8);
    *param_3 = uVar2;
    if (param_4 != '\0') {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar9 = uVar2;
      if (uVar6 < 0x20) {
        uVar5 = 0x20;
        do {
          uVar5 = uVar5 >> 1;
          uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
        } while (uVar6 < uVar5);
      }
      uVar6 = 0;
      for (puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar9 & 0xff) * 8);
          puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
        if (*puVar4 == uVar2) goto LAB_100329fa2;
      }
      goto LAB_100329fa5;
    }
    break;
  case 0x889d:
    uVar2 = *(uint *)(lVar3 + 0x128);
    *param_3 = uVar2;
    if (param_4 != '\0') {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar9 = uVar2;
      if (uVar6 < 0x20) {
        uVar5 = 0x20;
        do {
          uVar5 = uVar5 >> 1;
          uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
        } while (uVar6 < uVar5);
      }
      uVar6 = 0;
      for (puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar9 & 0xff) * 8);
          puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
        if (*puVar4 == uVar2) goto LAB_100329fa2;
      }
      goto LAB_100329fa5;
    }
    break;
  case 0x889e:
    uVar2 = *(uint *)(lVar3 + 0x68);
    *param_3 = uVar2;
    if (param_4 != '\0') {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar9 = uVar2;
      if (uVar6 < 0x20) {
        uVar5 = 0x20;
        do {
          uVar5 = uVar5 >> 1;
          uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
        } while (uVar6 < uVar5);
      }
      uVar6 = 0;
      for (puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar9 & 0xff) * 8);
          puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
        if (*puVar4 == uVar2) goto LAB_100329fa2;
      }
      goto LAB_100329fa5;
    }
    break;
  default:
switchD_100329637_caseD_807c:
    lVar3 = FUN_100303740(param_1);
    uVar8 = 0;
    if (param_2 < 0x8457) {
      switch(param_2) {
      case 0x8074:
        pbVar7 = (byte *)(lVar3 + 0x28);
        break;
      case 0x8075:
        pbVar7 = (byte *)(lVar3 + 0x88);
        break;
      case 0x8076:
        pbVar7 = (byte *)(lVar3 + 0xb8);
        break;
      case 0x8077:
        pbVar7 = (byte *)(lVar3 + 0x148);
        break;
      case 0x8078:
        pbVar7 = (byte *)(lVar3 + 0x28 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
        break;
      case 0x8079:
        pbVar7 = (byte *)(lVar3 + 0x178);
        break;
      default:
        goto switchD_100329bd7_default;
      }
    }
    else if (param_2 == 0x8457) {
      pbVar7 = (byte *)(lVar3 + 0x118);
    }
    else if (param_2 == 0x845e) {
      pbVar7 = (byte *)(lVar3 + 0xe8);
    }
    else {
      if (param_2 != 0x86ad) {
        return 0;
      }
      pbVar7 = (byte *)(lVar3 + 0x58);
    }
    uVar2 = (uint)*pbVar7;
  }
LAB_100329c4e:
  *param_3 = uVar2;
LAB_100329c51:
  uVar8 = 1;
switchD_100329bd7_default:
  return uVar8;
LAB_100329fa2:
  uVar6 = puVar4[1];
  goto LAB_100329fa5;
}

