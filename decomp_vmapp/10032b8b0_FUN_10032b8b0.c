
undefined8 FUN_10032b8b0(long param_1,int param_2,float *param_3,char param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  float fVar14;
  
  lVar3 = FUN_100303740();
  if (param_2 < 0x8068) {
    if (param_2 < 0xd58) {
      if (param_2 < 0xc02) {
        if (param_2 != 0xb80) {
          if (param_2 != 0xc01) goto switchD_10032b9f3_caseD_807c;
          lVar3 = *(long *)(param_1 + 0x30);
          uVar7 = *(uint *)(param_1 + 0x15ac);
          uVar2 = *(uint *)(lVar3 + 0x2058);
          uVar11 = uVar7;
          if (uVar2 < 0x20) {
            uVar6 = 0x20;
            do {
              uVar6 = uVar6 >> 1;
              uVar11 = uVar11 ^ uVar11 >> (sbyte)uVar6;
            } while (uVar2 < uVar6);
          }
          for (puVar4 = *(uint **)(lVar3 + 0x1858 + (ulong)(uVar11 & 0xff) * 8);
              puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
            if (*puVar4 == uVar7) {
              lVar1 = *(long *)(puVar4 + 2);
              if (lVar1 != 0) {
                puVar4 = (uint *)(lVar1 + 0x198);
                if (param_4 != '\0') {
                  puVar4 = (uint *)(lVar1 + 0x1d8);
                }
                fVar14 = (float)*puVar4;
                goto LAB_10032c083;
              }
              break;
            }
          }
LAB_10032bac7:
          uVar7 = *(uint *)(param_1 + 0x15a8);
          uVar11 = uVar7;
          if (uVar2 < 0x20) {
            uVar6 = 0x20;
            do {
              uVar6 = uVar6 >> 1;
              uVar11 = uVar11 ^ uVar11 >> (sbyte)uVar6;
            } while (uVar2 < uVar6);
          }
          for (puVar4 = *(uint **)(lVar3 + 0x1858 + (ulong)(uVar11 & 0xff) * 8);
              puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
            if (*puVar4 == uVar7) {
              lVar3 = *(long *)(puVar4 + 2);
              if (lVar3 != 0) {
                puVar4 = (uint *)(lVar3 + 0x248);
                if (param_4 != '\0') {
                  puVar4 = (uint *)(lVar3 + 0x24c);
                }
                fVar14 = (float)*puVar4;
                goto LAB_10032c083;
              }
              break;
            }
          }
LAB_10032bc22:
          uVar2 = *(uint *)(param_1 + 0x15ac);
          uVar7 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2058);
          uVar11 = uVar2;
          if (uVar7 < 0x20) {
            uVar6 = 0x20;
            do {
              uVar6 = uVar6 >> 1;
              uVar11 = uVar11 ^ uVar11 >> (sbyte)uVar6;
            } while (uVar7 < uVar6);
          }
          for (puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1858 + (ulong)(uVar11 & 0xff) * 8);
              puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
            if (*puVar4 == uVar2) {
              lVar3 = *(long *)(puVar4 + 2);
              if (lVar3 != 0) {
                if (param_4 == '\0') {
                  fVar14 = (float)*(uint *)(lVar3 + 0x198 + (ulong)(param_2 - 0x8825) * 4);
                }
                else {
                  fVar14 = (float)*(uint *)(lVar3 + 0x1d8 + (ulong)(param_2 - 0x8825) * 4);
                }
                goto LAB_10032c083;
              }
              break;
            }
          }
LAB_10032bf3a:
          puVar4 = (uint *)(param_1 + 0x15a8);
          puVar13 = (uint *)(param_1 + 0x15a0);
LAB_10032bf49:
          if (param_4 != '\0') {
            puVar13 = puVar4;
          }
          fVar14 = (float)*puVar13;
          goto LAB_10032c083;
        }
        *param_3 = *(float *)(param_1 + 0x118);
        param_3[1] = *(float *)(param_1 + 0x11c);
        param_3[2] = *(float *)(param_1 + 0x120);
        param_3[3] = *(float *)(param_1 + 0x124);
      }
      else {
        if (param_2 == 0xc02) {
          lVar3 = *(long *)(param_1 + 0x30);
          uVar2 = *(uint *)(lVar3 + 0x2058);
          goto LAB_10032bac7;
        }
        if (param_2 != 0xc22) goto switchD_10032b9f3_caseD_807c;
        *param_3 = *(float *)(param_1 + 0xd8);
        param_3[1] = *(float *)(param_1 + 0xdc);
        param_3[2] = *(float *)(param_1 + 0xe0);
        param_3[3] = *(float *)(param_1 + 0xe4);
      }
    }
    else {
      if (3 < param_2 - 0xd58U) goto switchD_10032b9f3_caseD_807c;
      *param_3 = 16.0;
    }
    goto LAB_10032c088;
  }
  if (param_2 < 0x8454) {
    if (param_2 < 0x807a) {
      if (param_2 == 0x8068) {
        uVar10 = 0xde0;
      }
      else if (param_2 == 0x8069) {
        uVar10 = 0xde1;
      }
      else {
        if (param_2 != 0x806a) goto switchD_10032b9f3_caseD_807c;
        uVar10 = 0x806f;
      }
      goto LAB_10032be09;
    }
    switch(param_2) {
    case 0x807a:
      fVar14 = (float)*(int *)(lVar3 + 0x2c);
      break;
    case 0x807b:
      fVar14 = (float)*(uint *)(lVar3 + 0x30);
      break;
    default:
      goto switchD_10032b9f3_caseD_807c;
    case 0x807e:
      fVar14 = (float)*(uint *)(lVar3 + 0x90);
      break;
    case 0x8081:
      fVar14 = (float)*(int *)(lVar3 + 0xbc);
      break;
    case 0x8082:
      fVar14 = (float)*(uint *)(lVar3 + 0xc0);
      break;
    case 0x8085:
      fVar14 = (float)*(uint *)(lVar3 + 0x150);
      break;
    case 0x8088:
      fVar14 = (float)*(int *)(lVar3 + 0x2c + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
      break;
    case 0x8089:
      fVar14 = (float)*(uint *)(lVar3 + 0x30 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
    }
    goto LAB_10032c083;
  }
  if (param_2 < 0x85b5) {
    if (param_2 < 0x84e0) {
      if (param_2 == 0x8454) {
        fVar14 = (float)*(uint *)(lVar3 + 0x120);
      }
      else if (param_2 == 0x845a) {
        fVar14 = (float)*(int *)(lVar3 + 0xec);
      }
      else {
        if (param_2 != 0x845b) goto switchD_10032b9f3_caseD_807c;
        fVar14 = (float)*(uint *)(lVar3 + 0xf0);
      }
    }
    else {
      if (0x84f5 < param_2) {
        if (param_2 == 0x84f6) {
          uVar10 = 0x84f5;
        }
        else {
          if (param_2 != 0x8514) goto switchD_10032b9f3_caseD_807c;
          uVar10 = 0x8513;
        }
        goto LAB_10032be09;
      }
      if (param_2 == 0x84e0) {
        fVar14 = (float)(*(int *)(param_1 + 0x418) + 0x84c0);
      }
      else {
        if (param_2 != 0x84e1) goto switchD_10032b9f3_caseD_807c;
        fVar14 = (float)(*(int *)(param_1 + 0x450) + 0x84c0);
      }
    }
    goto LAB_10032c083;
  }
  if (0x8a27 < param_2) {
    if (param_2 < 0x8def) {
      if (0x8c1b < param_2) {
        if (param_2 < 0x8c8f) {
          if (param_2 < 0x8c2a) {
            if (param_2 == 0x8c1c) {
              uVar10 = 0x8c18;
            }
            else {
              if (param_2 != 0x8c1d) goto switchD_10032b9f3_caseD_807c;
              uVar10 = 0x8c1a;
            }
          }
          else {
            if (param_2 == 0x8c2a) {
              uVar10 = 0x8c2a;
              goto LAB_10032bf67;
            }
            if (param_2 != 0x8c2c) goto switchD_10032b9f3_caseD_807c;
            uVar10 = 0x8c2a;
          }
LAB_10032be09:
          uVar2 = FUN_1003017c0(param_1,uVar10,param_4);
          goto LAB_10032be11;
        }
        if (param_2 == 0x8c8f) {
          uVar10 = 0x8c8e;
          goto LAB_10032bf67;
        }
        if (param_2 != 0x8ca6) {
          if (param_2 != 0x8caa) goto switchD_10032b9f3_caseD_807c;
          goto LAB_10032bf3a;
        }
        puVar4 = (uint *)(param_1 + 0x15ac);
        puVar13 = (uint *)(param_1 + 0x15a4);
        goto LAB_10032bf49;
      }
      if (param_2 != 0x8a28) goto switchD_10032b9f3_caseD_807c;
      uVar10 = 0x8a11;
    }
    else {
      if (param_2 != 0x8def) {
        if (param_2 == 0x9104) {
          uVar10 = 0x9100;
        }
        else {
          if (param_2 != 0x9105) goto switchD_10032b9f3_caseD_807c;
          uVar10 = 0x9102;
        }
        goto LAB_10032be09;
      }
      uVar10 = 0x8dee;
    }
    goto LAB_10032bf67;
  }
  if (param_2 < 0x8824) {
    if (param_2 != 0x85b5) {
      if (param_2 == 0x86a9) {
        fVar14 = (float)*(uint *)(lVar3 + 0x60);
      }
      else {
        if (param_2 != 0x86ab) goto switchD_10032b9f3_caseD_807c;
        fVar14 = (float)*(int *)(lVar3 + 0x5c);
      }
      goto LAB_10032c083;
    }
    uVar2 = FUN_100304560(param_1,param_4);
    goto LAB_10032be11;
  }
  if (param_2 < 0x8894) {
    if (0xf < param_2 - 0x8825U) {
      if (param_2 != 0x8824) goto switchD_10032b9f3_caseD_807c;
      uVar2 = FUN_1003050f0(param_1);
LAB_10032c07f:
      fVar14 = (float)(int)uVar2;
      goto LAB_10032c083;
    }
    goto LAB_10032bc22;
  }
  if (0x88ec < param_2) {
    if (param_2 == 0x88ed) {
      uVar10 = 0x88eb;
    }
    else {
      if (param_2 != 0x88ef) {
        if (param_2 == 0x8919) {
          uVar2 = FUN_100301220(param_1,*(undefined4 *)(param_1 + 0x418),param_4);
          goto LAB_10032be11;
        }
        goto switchD_10032b9f3_caseD_807c;
      }
      uVar10 = 0x88ec;
    }
    goto LAB_10032bf67;
  }
  switch(param_2) {
  case 0x8894:
    uVar10 = 0x8892;
    goto LAB_10032bf67;
  case 0x8895:
    uVar10 = 0x8893;
LAB_10032bf67:
    uVar2 = FUN_1003040c0(param_1,uVar10,param_4);
LAB_10032be11:
    fVar14 = (float)uVar2;
    break;
  case 0x8896:
    fVar14 = (float)*(int *)(lVar3 + 0x38);
    *param_3 = fVar14;
    if (param_4 != '\0') {
      uVar5 = (ulong)fVar14;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar5 & 0xffffffff;
      if (uVar2 < 0x20) {
        uVar7 = 0x20;
        uVar12 = uVar5 & 0xffffffff;
        do {
          uVar7 = uVar7 >> 1;
          uVar12 = (ulong)((uint)uVar12 ^ (uint)uVar12 >> (sbyte)uVar7);
        } while (uVar2 < uVar7);
      }
      fVar14 = 0.0;
      for (piVar9 = *(int **)(*(long *)(param_1 + 0x30) + 0x2068 + (uVar12 & 0xff) * 8);
          piVar9 != (int *)0x0; piVar9 = *(int **)(piVar9 + 2)) {
        if (*piVar9 == (int)uVar5) {
          fVar14 = (float)(uint)piVar9[1];
          break;
        }
      }
      *param_3 = fVar14;
    }
    break;
  case 0x8897:
    fVar14 = (float)*(int *)(lVar3 + 0x98);
    *param_3 = fVar14;
    if (param_4 != '\0') {
      uVar5 = (ulong)fVar14;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar5 & 0xffffffff;
      if (uVar2 < 0x20) {
        uVar7 = 0x20;
        uVar12 = uVar5 & 0xffffffff;
        do {
          uVar7 = uVar7 >> 1;
          uVar12 = (ulong)((uint)uVar12 ^ (uint)uVar12 >> (sbyte)uVar7);
        } while (uVar2 < uVar7);
      }
      fVar14 = 0.0;
      for (piVar9 = *(int **)(*(long *)(param_1 + 0x30) + 0x2068 + (uVar12 & 0xff) * 8);
          piVar9 != (int *)0x0; piVar9 = *(int **)(piVar9 + 2)) {
        if (*piVar9 == (int)uVar5) {
          fVar14 = (float)(uint)piVar9[1];
          break;
        }
      }
      *param_3 = fVar14;
    }
    break;
  case 0x8898:
    fVar14 = (float)*(int *)(lVar3 + 200);
    *param_3 = fVar14;
    if (param_4 != '\0') {
      uVar5 = (ulong)fVar14;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar5 & 0xffffffff;
      if (uVar2 < 0x20) {
        uVar7 = 0x20;
        uVar12 = uVar5 & 0xffffffff;
        do {
          uVar7 = uVar7 >> 1;
          uVar12 = (ulong)((uint)uVar12 ^ (uint)uVar12 >> (sbyte)uVar7);
        } while (uVar2 < uVar7);
      }
      fVar14 = 0.0;
      for (piVar9 = *(int **)(*(long *)(param_1 + 0x30) + 0x2068 + (uVar12 & 0xff) * 8);
          piVar9 != (int *)0x0; piVar9 = *(int **)(piVar9 + 2)) {
        if (*piVar9 == (int)uVar5) {
          fVar14 = (float)(uint)piVar9[1];
          break;
        }
      }
      *param_3 = fVar14;
    }
    break;
  case 0x8899:
    fVar14 = (float)*(int *)(lVar3 + 0x158);
    *param_3 = fVar14;
    if (param_4 != '\0') {
      uVar5 = (ulong)fVar14;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar5 & 0xffffffff;
      if (uVar2 < 0x20) {
        uVar7 = 0x20;
        uVar12 = uVar5 & 0xffffffff;
        do {
          uVar7 = uVar7 >> 1;
          uVar12 = (ulong)((uint)uVar12 ^ (uint)uVar12 >> (sbyte)uVar7);
        } while (uVar2 < uVar7);
      }
      fVar14 = 0.0;
      for (piVar9 = *(int **)(*(long *)(param_1 + 0x30) + 0x2068 + (uVar12 & 0xff) * 8);
          piVar9 != (int *)0x0; piVar9 = *(int **)(piVar9 + 2)) {
        if (*piVar9 == (int)uVar5) {
          fVar14 = (float)(uint)piVar9[1];
          break;
        }
      }
      *param_3 = fVar14;
    }
    break;
  case 0x889a:
    fVar14 = (float)*(int *)(lVar3 + 0x38 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
    *param_3 = fVar14;
    if (param_4 != '\0') {
      uVar5 = (ulong)fVar14;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar5 & 0xffffffff;
      if (uVar2 < 0x20) {
        uVar7 = 0x20;
        uVar12 = uVar5 & 0xffffffff;
        do {
          uVar7 = uVar7 >> 1;
          uVar12 = (ulong)((uint)uVar12 ^ (uint)uVar12 >> (sbyte)uVar7);
        } while (uVar2 < uVar7);
      }
      fVar14 = 0.0;
      for (piVar9 = *(int **)(*(long *)(param_1 + 0x30) + 0x2068 + (uVar12 & 0xff) * 8);
          piVar9 != (int *)0x0; piVar9 = *(int **)(piVar9 + 2)) {
        if (*piVar9 == (int)uVar5) {
          fVar14 = (float)(uint)piVar9[1];
          break;
        }
      }
      *param_3 = fVar14;
    }
    break;
  case 0x889b:
    fVar14 = (float)*(int *)(lVar3 + 0x188);
    *param_3 = fVar14;
    if (param_4 != '\0') {
      uVar5 = (ulong)fVar14;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar5 & 0xffffffff;
      if (uVar2 < 0x20) {
        uVar7 = 0x20;
        uVar12 = uVar5 & 0xffffffff;
        do {
          uVar7 = uVar7 >> 1;
          uVar12 = (ulong)((uint)uVar12 ^ (uint)uVar12 >> (sbyte)uVar7);
        } while (uVar2 < uVar7);
      }
      fVar14 = 0.0;
      for (piVar9 = *(int **)(*(long *)(param_1 + 0x30) + 0x2068 + (uVar12 & 0xff) * 8);
          piVar9 != (int *)0x0; piVar9 = *(int **)(piVar9 + 2)) {
        if (*piVar9 == (int)uVar5) {
          fVar14 = (float)(uint)piVar9[1];
          break;
        }
      }
      *param_3 = fVar14;
    }
    break;
  case 0x889c:
    fVar14 = (float)*(int *)(lVar3 + 0xf8);
    *param_3 = fVar14;
    if (param_4 != '\0') {
      uVar5 = (ulong)fVar14;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar5 & 0xffffffff;
      if (uVar2 < 0x20) {
        uVar7 = 0x20;
        uVar12 = uVar5 & 0xffffffff;
        do {
          uVar7 = uVar7 >> 1;
          uVar12 = (ulong)((uint)uVar12 ^ (uint)uVar12 >> (sbyte)uVar7);
        } while (uVar2 < uVar7);
      }
      fVar14 = 0.0;
      for (piVar9 = *(int **)(*(long *)(param_1 + 0x30) + 0x2068 + (uVar12 & 0xff) * 8);
          piVar9 != (int *)0x0; piVar9 = *(int **)(piVar9 + 2)) {
        if (*piVar9 == (int)uVar5) {
          fVar14 = (float)(uint)piVar9[1];
          break;
        }
      }
      *param_3 = fVar14;
    }
    break;
  case 0x889d:
    fVar14 = (float)*(int *)(lVar3 + 0x128);
    *param_3 = fVar14;
    if (param_4 != '\0') {
      uVar5 = (ulong)fVar14;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar5 & 0xffffffff;
      if (uVar2 < 0x20) {
        uVar7 = 0x20;
        uVar12 = uVar5 & 0xffffffff;
        do {
          uVar7 = uVar7 >> 1;
          uVar12 = (ulong)((uint)uVar12 ^ (uint)uVar12 >> (sbyte)uVar7);
        } while (uVar2 < uVar7);
      }
      fVar14 = 0.0;
      for (piVar9 = *(int **)(*(long *)(param_1 + 0x30) + 0x2068 + (uVar12 & 0xff) * 8);
          piVar9 != (int *)0x0; piVar9 = *(int **)(piVar9 + 2)) {
        if (*piVar9 == (int)uVar5) {
          fVar14 = (float)(uint)piVar9[1];
          break;
        }
      }
      *param_3 = fVar14;
    }
    break;
  case 0x889e:
    fVar14 = (float)*(int *)(lVar3 + 0x68);
    *param_3 = fVar14;
    if (param_4 != '\0') {
      uVar5 = (ulong)fVar14;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar5 & 0xffffffff;
      if (uVar2 < 0x20) {
        uVar7 = 0x20;
        uVar12 = uVar5 & 0xffffffff;
        do {
          uVar7 = uVar7 >> 1;
          uVar12 = (ulong)((uint)uVar12 ^ (uint)uVar12 >> (sbyte)uVar7);
        } while (uVar2 < uVar7);
      }
      fVar14 = 0.0;
      for (piVar9 = *(int **)(*(long *)(param_1 + 0x30) + 0x2068 + (uVar12 & 0xff) * 8);
          piVar9 != (int *)0x0; piVar9 = *(int **)(piVar9 + 2)) {
        if (*piVar9 == (int)uVar5) {
          fVar14 = (float)(uint)piVar9[1];
          break;
        }
      }
      *param_3 = fVar14;
    }
    break;
  default:
switchD_10032b9f3_caseD_807c:
    lVar3 = FUN_100303740(param_1);
    uVar10 = 0;
    if (param_2 < 0x8457) {
      switch(param_2) {
      case 0x8074:
        pbVar8 = (byte *)(lVar3 + 0x28);
        break;
      case 0x8075:
        pbVar8 = (byte *)(lVar3 + 0x88);
        break;
      case 0x8076:
        pbVar8 = (byte *)(lVar3 + 0xb8);
        break;
      case 0x8077:
        pbVar8 = (byte *)(lVar3 + 0x148);
        break;
      case 0x8078:
        pbVar8 = (byte *)(lVar3 + 0x28 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
        break;
      case 0x8079:
        pbVar8 = (byte *)(lVar3 + 0x178);
        break;
      default:
        goto switchD_10032c008_default;
      }
    }
    else if (param_2 == 0x8457) {
      pbVar8 = (byte *)(lVar3 + 0x118);
    }
    else if (param_2 == 0x845e) {
      pbVar8 = (byte *)(lVar3 + 0xe8);
    }
    else {
      if (param_2 != 0x86ad) {
        return 0;
      }
      pbVar8 = (byte *)(lVar3 + 0x58);
    }
    uVar2 = (uint)*pbVar8;
    goto LAB_10032c07f;
  }
LAB_10032c083:
  *param_3 = fVar14;
LAB_10032c088:
  uVar10 = 1;
switchD_10032c008_default:
  return uVar10;
}

