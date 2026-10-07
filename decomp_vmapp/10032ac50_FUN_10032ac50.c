
undefined8 FUN_10032ac50(long param_1,int param_2,undefined1 (*param_3) [16],char param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  byte *pbVar12;
  undefined8 uVar13;
  uint uVar14;
  uint *puVar15;
  
  lVar9 = FUN_100303740();
  if (param_2 < 0x8068) {
    if (param_2 < 0xd58) {
      if (param_2 < 0xc02) {
        if (param_2 != 0xb80) {
          if (param_2 != 0xc01) goto switchD_10032ad82_caseD_807c;
          lVar9 = *(long *)(param_1 + 0x30);
          uVar1 = *(uint *)(param_1 + 0x15ac);
          uVar8 = *(uint *)(lVar9 + 0x2058);
          uVar14 = uVar1;
          if (uVar8 < 0x20) {
            uVar11 = 0x20;
            do {
              uVar11 = uVar11 >> 1;
              uVar14 = uVar14 ^ uVar14 >> (sbyte)uVar11;
            } while (uVar8 < uVar11);
          }
          for (puVar10 = *(uint **)(lVar9 + 0x1858 + (ulong)(uVar14 & 0xff) * 8);
              puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 4)) {
            if (*puVar10 == uVar1) {
              lVar2 = *(long *)(puVar10 + 2);
              if (lVar2 != 0) {
                puVar10 = (uint *)(lVar2 + 0x198);
                if (param_4 != '\0') {
                  puVar10 = (uint *)(lVar2 + 0x1d8);
                }
                dVar7 = (double)*puVar10;
                goto LAB_10032b403;
              }
              break;
            }
          }
LAB_10032ae57:
          uVar1 = *(uint *)(param_1 + 0x15a8);
          uVar14 = uVar1;
          if (uVar8 < 0x20) {
            uVar11 = 0x20;
            do {
              uVar11 = uVar11 >> 1;
              uVar14 = uVar14 ^ uVar14 >> (sbyte)uVar11;
            } while (uVar8 < uVar11);
          }
          for (puVar10 = *(uint **)(lVar9 + 0x1858 + (ulong)(uVar14 & 0xff) * 8);
              puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 4)) {
            if (*puVar10 == uVar1) {
              lVar9 = *(long *)(puVar10 + 2);
              if (lVar9 != 0) {
                puVar10 = (uint *)(lVar9 + 0x248);
                if (param_4 != '\0') {
                  puVar10 = (uint *)(lVar9 + 0x24c);
                }
                dVar7 = (double)*puVar10;
                goto LAB_10032b403;
              }
              break;
            }
          }
LAB_10032af9f:
          uVar8 = *(uint *)(param_1 + 0x15ac);
          uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2058);
          uVar14 = uVar8;
          if (uVar1 < 0x20) {
            uVar11 = 0x20;
            do {
              uVar11 = uVar11 >> 1;
              uVar14 = uVar14 ^ uVar14 >> (sbyte)uVar11;
            } while (uVar1 < uVar11);
          }
          for (puVar10 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1858 + (ulong)(uVar14 & 0xff) * 8)
              ; puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 4)) {
            if (*puVar10 == uVar8) {
              lVar9 = *(long *)(puVar10 + 2);
              if (lVar9 != 0) {
                if (param_4 == '\0') {
                  dVar7 = (double)*(uint *)(lVar9 + 0x198 + (ulong)(param_2 - 0x8825) * 4);
                }
                else {
                  dVar7 = (double)*(uint *)(lVar9 + 0x1d8 + (ulong)(param_2 - 0x8825) * 4);
                }
                goto LAB_10032b403;
              }
              break;
            }
          }
LAB_10032b2ba:
          puVar10 = (uint *)(param_1 + 0x15a8);
          puVar15 = (uint *)(param_1 + 0x15a0);
LAB_10032b2c9:
          if (param_4 != '\0') {
            puVar15 = puVar10;
          }
          dVar7 = (double)*puVar15;
          goto LAB_10032b403;
        }
        dVar7 = (double)(float)((ulong)*(undefined8 *)(param_1 + 0x118) >> 0x20);
        auVar3._8_4_ = SUB84(dVar7,0);
        auVar3._0_8_ = (double)(float)*(undefined8 *)(param_1 + 0x118);
        auVar3._12_4_ = (int)((ulong)dVar7 >> 0x20);
        *param_3 = auVar3;
        dVar7 = (double)(float)((ulong)*(undefined8 *)(param_1 + 0x120) >> 0x20);
        auVar4._8_4_ = SUB84(dVar7,0);
        auVar4._0_8_ = (double)(float)*(undefined8 *)(param_1 + 0x120);
        auVar4._12_4_ = (int)((ulong)dVar7 >> 0x20);
        param_3[1] = auVar4;
      }
      else {
        if (param_2 == 0xc02) {
          lVar9 = *(long *)(param_1 + 0x30);
          uVar8 = *(uint *)(lVar9 + 0x2058);
          goto LAB_10032ae57;
        }
        if (param_2 != 0xc22) goto switchD_10032ad82_caseD_807c;
        dVar7 = (double)(float)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20);
        auVar5._8_4_ = SUB84(dVar7,0);
        auVar5._0_8_ = (double)(float)*(undefined8 *)(param_1 + 0xd8);
        auVar5._12_4_ = (int)((ulong)dVar7 >> 0x20);
        *param_3 = auVar5;
        dVar7 = (double)(float)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20);
        auVar6._8_4_ = SUB84(dVar7,0);
        auVar6._0_8_ = (double)(float)*(undefined8 *)(param_1 + 0xe0);
        auVar6._12_4_ = (int)((ulong)dVar7 >> 0x20);
        param_3[1] = auVar6;
      }
    }
    else {
      if (3 < param_2 - 0xd58U) goto switchD_10032ad82_caseD_807c;
      *(undefined8 *)*param_3 = 0x4030000000000000;
    }
    goto LAB_10032b408;
  }
  if (param_2 < 0x8454) {
    if (param_2 < 0x807a) {
      if (param_2 == 0x8068) {
        uVar13 = 0xde0;
      }
      else if (param_2 == 0x8069) {
        uVar13 = 0xde1;
      }
      else {
        if (param_2 != 0x806a) goto switchD_10032ad82_caseD_807c;
        uVar13 = 0x806f;
      }
      goto LAB_10032b189;
    }
    switch(param_2) {
    case 0x807a:
      dVar7 = (double)*(int *)(lVar9 + 0x2c);
      break;
    case 0x807b:
      dVar7 = (double)*(uint *)(lVar9 + 0x30);
      break;
    default:
      goto switchD_10032ad82_caseD_807c;
    case 0x807e:
      dVar7 = (double)*(uint *)(lVar9 + 0x90);
      break;
    case 0x8081:
      dVar7 = (double)*(int *)(lVar9 + 0xbc);
      break;
    case 0x8082:
      dVar7 = (double)*(uint *)(lVar9 + 0xc0);
      break;
    case 0x8085:
      dVar7 = (double)*(uint *)(lVar9 + 0x150);
      break;
    case 0x8088:
      dVar7 = (double)*(int *)(lVar9 + 0x2c + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
      break;
    case 0x8089:
      dVar7 = (double)*(uint *)(lVar9 + 0x30 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
    }
    goto LAB_10032b403;
  }
  if (param_2 < 0x85b5) {
    if (param_2 < 0x84e0) {
      if (param_2 == 0x8454) {
        dVar7 = (double)*(uint *)(lVar9 + 0x120);
      }
      else if (param_2 == 0x845a) {
        dVar7 = (double)*(int *)(lVar9 + 0xec);
      }
      else {
        if (param_2 != 0x845b) goto switchD_10032ad82_caseD_807c;
        dVar7 = (double)*(uint *)(lVar9 + 0xf0);
      }
    }
    else {
      if (0x84f5 < param_2) {
        if (param_2 == 0x84f6) {
          uVar13 = 0x84f5;
        }
        else {
          if (param_2 != 0x8514) goto switchD_10032ad82_caseD_807c;
          uVar13 = 0x8513;
        }
        goto LAB_10032b189;
      }
      if (param_2 == 0x84e0) {
        dVar7 = (double)(*(int *)(param_1 + 0x418) + 0x84c0);
      }
      else {
        if (param_2 != 0x84e1) goto switchD_10032ad82_caseD_807c;
        dVar7 = (double)(*(int *)(param_1 + 0x450) + 0x84c0);
      }
    }
    goto LAB_10032b403;
  }
  if (0x8a27 < param_2) {
    if (param_2 < 0x8def) {
      if (0x8c1b < param_2) {
        if (param_2 < 0x8c8f) {
          if (param_2 < 0x8c2a) {
            if (param_2 == 0x8c1c) {
              uVar13 = 0x8c18;
            }
            else {
              if (param_2 != 0x8c1d) goto switchD_10032ad82_caseD_807c;
              uVar13 = 0x8c1a;
            }
          }
          else {
            if (param_2 == 0x8c2a) {
              uVar13 = 0x8c2a;
              goto LAB_10032b2e7;
            }
            if (param_2 != 0x8c2c) goto switchD_10032ad82_caseD_807c;
            uVar13 = 0x8c2a;
          }
LAB_10032b189:
          uVar8 = FUN_1003017c0(param_1,uVar13,param_4);
          goto LAB_10032b191;
        }
        if (param_2 == 0x8c8f) {
          uVar13 = 0x8c8e;
          goto LAB_10032b2e7;
        }
        if (param_2 != 0x8ca6) {
          if (param_2 != 0x8caa) goto switchD_10032ad82_caseD_807c;
          goto LAB_10032b2ba;
        }
        puVar10 = (uint *)(param_1 + 0x15ac);
        puVar15 = (uint *)(param_1 + 0x15a4);
        goto LAB_10032b2c9;
      }
      if (param_2 != 0x8a28) goto switchD_10032ad82_caseD_807c;
      uVar13 = 0x8a11;
    }
    else {
      if (param_2 != 0x8def) {
        if (param_2 == 0x9104) {
          uVar13 = 0x9100;
        }
        else {
          if (param_2 != 0x9105) goto switchD_10032ad82_caseD_807c;
          uVar13 = 0x9102;
        }
        goto LAB_10032b189;
      }
      uVar13 = 0x8dee;
    }
    goto LAB_10032b2e7;
  }
  if (param_2 < 0x8824) {
    if (param_2 != 0x85b5) {
      if (param_2 == 0x86a9) {
        dVar7 = (double)*(uint *)(lVar9 + 0x60);
      }
      else {
        if (param_2 != 0x86ab) goto switchD_10032ad82_caseD_807c;
        dVar7 = (double)*(int *)(lVar9 + 0x5c);
      }
      goto LAB_10032b403;
    }
    uVar8 = FUN_100304560(param_1,param_4);
    goto LAB_10032b191;
  }
  if (param_2 < 0x8894) {
    if (0xf < param_2 - 0x8825U) {
      if (param_2 != 0x8824) goto switchD_10032ad82_caseD_807c;
      uVar8 = FUN_1003050f0(param_1);
LAB_10032b3ff:
      dVar7 = (double)(int)uVar8;
      goto LAB_10032b403;
    }
    goto LAB_10032af9f;
  }
  if (0x88ec < param_2) {
    if (param_2 == 0x88ed) {
      uVar13 = 0x88eb;
    }
    else {
      if (param_2 != 0x88ef) {
        if (param_2 == 0x8919) {
          uVar8 = FUN_100301220(param_1,*(undefined4 *)(param_1 + 0x418),param_4);
          goto LAB_10032b191;
        }
        goto switchD_10032ad82_caseD_807c;
      }
      uVar13 = 0x88ec;
    }
    goto LAB_10032b2e7;
  }
  switch(param_2) {
  case 0x8894:
    uVar13 = 0x8892;
    goto LAB_10032b2e7;
  case 0x8895:
    uVar13 = 0x8893;
LAB_10032b2e7:
    uVar8 = FUN_1003040c0(param_1,uVar13,param_4);
LAB_10032b191:
    dVar7 = (double)uVar8;
    break;
  case 0x8896:
    uVar8 = *(uint *)(lVar9 + 0x38);
    dVar7 = (double)(int)uVar8;
    *(double *)*param_3 = dVar7;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar14 = uVar8;
      if (uVar1 < 0x20) {
        uVar11 = 0x20;
        do {
          uVar11 = uVar11 >> 1;
          uVar14 = uVar14 ^ uVar14 >> (sbyte)uVar11;
        } while (uVar1 < uVar11);
      }
      dVar7 = 0.0;
      for (puVar10 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar14 & 0xff) * 8);
          puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 2)) {
        if (*puVar10 == uVar8) {
          dVar7 = (double)puVar10[1];
          break;
        }
      }
      *(double *)*param_3 = dVar7;
    }
    break;
  case 0x8897:
    uVar8 = *(uint *)(lVar9 + 0x98);
    dVar7 = (double)(int)uVar8;
    *(double *)*param_3 = dVar7;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar14 = uVar8;
      if (uVar1 < 0x20) {
        uVar11 = 0x20;
        do {
          uVar11 = uVar11 >> 1;
          uVar14 = uVar14 ^ uVar14 >> (sbyte)uVar11;
        } while (uVar1 < uVar11);
      }
      dVar7 = 0.0;
      for (puVar10 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar14 & 0xff) * 8);
          puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 2)) {
        if (*puVar10 == uVar8) {
          dVar7 = (double)puVar10[1];
          break;
        }
      }
      *(double *)*param_3 = dVar7;
    }
    break;
  case 0x8898:
    uVar8 = *(uint *)(lVar9 + 200);
    dVar7 = (double)(int)uVar8;
    *(double *)*param_3 = dVar7;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar14 = uVar8;
      if (uVar1 < 0x20) {
        uVar11 = 0x20;
        do {
          uVar11 = uVar11 >> 1;
          uVar14 = uVar14 ^ uVar14 >> (sbyte)uVar11;
        } while (uVar1 < uVar11);
      }
      dVar7 = 0.0;
      for (puVar10 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar14 & 0xff) * 8);
          puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 2)) {
        if (*puVar10 == uVar8) {
          dVar7 = (double)puVar10[1];
          break;
        }
      }
      *(double *)*param_3 = dVar7;
    }
    break;
  case 0x8899:
    uVar8 = *(uint *)(lVar9 + 0x158);
    dVar7 = (double)(int)uVar8;
    *(double *)*param_3 = dVar7;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar14 = uVar8;
      if (uVar1 < 0x20) {
        uVar11 = 0x20;
        do {
          uVar11 = uVar11 >> 1;
          uVar14 = uVar14 ^ uVar14 >> (sbyte)uVar11;
        } while (uVar1 < uVar11);
      }
      dVar7 = 0.0;
      for (puVar10 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar14 & 0xff) * 8);
          puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 2)) {
        if (*puVar10 == uVar8) {
          dVar7 = (double)puVar10[1];
          break;
        }
      }
      *(double *)*param_3 = dVar7;
    }
    break;
  case 0x889a:
    uVar8 = *(uint *)(lVar9 + 0x38 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
    dVar7 = (double)(int)uVar8;
    *(double *)*param_3 = dVar7;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar14 = uVar8;
      if (uVar1 < 0x20) {
        uVar11 = 0x20;
        do {
          uVar11 = uVar11 >> 1;
          uVar14 = uVar14 ^ uVar14 >> (sbyte)uVar11;
        } while (uVar1 < uVar11);
      }
      dVar7 = 0.0;
      for (puVar10 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar14 & 0xff) * 8);
          puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 2)) {
        if (*puVar10 == uVar8) {
          dVar7 = (double)puVar10[1];
          break;
        }
      }
      *(double *)*param_3 = dVar7;
    }
    break;
  case 0x889b:
    uVar8 = *(uint *)(lVar9 + 0x188);
    dVar7 = (double)(int)uVar8;
    *(double *)*param_3 = dVar7;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar14 = uVar8;
      if (uVar1 < 0x20) {
        uVar11 = 0x20;
        do {
          uVar11 = uVar11 >> 1;
          uVar14 = uVar14 ^ uVar14 >> (sbyte)uVar11;
        } while (uVar1 < uVar11);
      }
      dVar7 = 0.0;
      for (puVar10 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar14 & 0xff) * 8);
          puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 2)) {
        if (*puVar10 == uVar8) {
          dVar7 = (double)puVar10[1];
          break;
        }
      }
      *(double *)*param_3 = dVar7;
    }
    break;
  case 0x889c:
    uVar8 = *(uint *)(lVar9 + 0xf8);
    dVar7 = (double)(int)uVar8;
    *(double *)*param_3 = dVar7;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar14 = uVar8;
      if (uVar1 < 0x20) {
        uVar11 = 0x20;
        do {
          uVar11 = uVar11 >> 1;
          uVar14 = uVar14 ^ uVar14 >> (sbyte)uVar11;
        } while (uVar1 < uVar11);
      }
      dVar7 = 0.0;
      for (puVar10 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar14 & 0xff) * 8);
          puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 2)) {
        if (*puVar10 == uVar8) {
          dVar7 = (double)puVar10[1];
          break;
        }
      }
      *(double *)*param_3 = dVar7;
    }
    break;
  case 0x889d:
    uVar8 = *(uint *)(lVar9 + 0x128);
    dVar7 = (double)(int)uVar8;
    *(double *)*param_3 = dVar7;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar14 = uVar8;
      if (uVar1 < 0x20) {
        uVar11 = 0x20;
        do {
          uVar11 = uVar11 >> 1;
          uVar14 = uVar14 ^ uVar14 >> (sbyte)uVar11;
        } while (uVar1 < uVar11);
      }
      dVar7 = 0.0;
      for (puVar10 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar14 & 0xff) * 8);
          puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 2)) {
        if (*puVar10 == uVar8) {
          dVar7 = (double)puVar10[1];
          break;
        }
      }
      *(double *)*param_3 = dVar7;
    }
    break;
  case 0x889e:
    uVar8 = *(uint *)(lVar9 + 0x68);
    dVar7 = (double)(int)uVar8;
    *(double *)*param_3 = dVar7;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar14 = uVar8;
      if (uVar1 < 0x20) {
        uVar11 = 0x20;
        do {
          uVar11 = uVar11 >> 1;
          uVar14 = uVar14 ^ uVar14 >> (sbyte)uVar11;
        } while (uVar1 < uVar11);
      }
      dVar7 = 0.0;
      for (puVar10 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar14 & 0xff) * 8);
          puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 2)) {
        if (*puVar10 == uVar8) {
          dVar7 = (double)puVar10[1];
          break;
        }
      }
      *(double *)*param_3 = dVar7;
    }
    break;
  default:
switchD_10032ad82_caseD_807c:
    lVar9 = FUN_100303740(param_1);
    uVar13 = 0;
    if (param_2 < 0x8457) {
      switch(param_2) {
      case 0x8074:
        pbVar12 = (byte *)(lVar9 + 0x28);
        break;
      case 0x8075:
        pbVar12 = (byte *)(lVar9 + 0x88);
        break;
      case 0x8076:
        pbVar12 = (byte *)(lVar9 + 0xb8);
        break;
      case 0x8077:
        pbVar12 = (byte *)(lVar9 + 0x148);
        break;
      case 0x8078:
        pbVar12 = (byte *)(lVar9 + 0x28 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
        break;
      case 0x8079:
        pbVar12 = (byte *)(lVar9 + 0x178);
        break;
      default:
        goto switchD_10032b388_default;
      }
    }
    else if (param_2 == 0x8457) {
      pbVar12 = (byte *)(lVar9 + 0x118);
    }
    else if (param_2 == 0x845e) {
      pbVar12 = (byte *)(lVar9 + 0xe8);
    }
    else {
      if (param_2 != 0x86ad) {
        return 0;
      }
      pbVar12 = (byte *)(lVar9 + 0x58);
    }
    uVar8 = (uint)*pbVar12;
    goto LAB_10032b3ff;
  }
LAB_10032b403:
  *(double *)*param_3 = dVar7;
LAB_10032b408:
  uVar13 = 1;
switchD_10032b388_default:
  return uVar13;
}

