
undefined8 FUN_10032a040(long param_1,int param_2,char *param_3,char param_4)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  char *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  char *pcVar11;
  
  lVar5 = FUN_100303740();
  if (param_2 < 0x8068) {
    if (param_2 < 0xd58) {
      if (param_2 < 0xc02) {
        if (param_2 != 0xb80) {
          if (param_2 != 0xc01) goto switchD_10032a186_caseD_807c;
          lVar5 = *(long *)(param_1 + 0x30);
          uVar1 = *(uint *)(param_1 + 0x15ac);
          uVar4 = *(uint *)(lVar5 + 0x2058);
          uVar10 = uVar1;
          if (uVar4 < 0x20) {
            uVar8 = 0x20;
            do {
              uVar8 = uVar8 >> 1;
              uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar8;
            } while (uVar4 < uVar8);
          }
          for (puVar6 = *(uint **)(lVar5 + 0x1858 + (ulong)(uVar10 & 0xff) * 8);
              puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 4)) {
            if (*puVar6 == uVar1) {
              lVar2 = *(long *)(puVar6 + 2);
              if (lVar2 != 0) {
                pcVar7 = (char *)(lVar2 + 0x198);
                if (param_4 != '\0') {
                  pcVar7 = (char *)(lVar2 + 0x1d8);
                }
                goto LAB_10032a7dd;
              }
              break;
            }
          }
LAB_10032a250:
          uVar1 = *(uint *)(param_1 + 0x15a8);
          uVar10 = uVar1;
          if (uVar4 < 0x20) {
            uVar8 = 0x20;
            do {
              uVar8 = uVar8 >> 1;
              uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar8;
            } while (uVar4 < uVar8);
          }
          for (puVar6 = *(uint **)(lVar5 + 0x1858 + (ulong)(uVar10 & 0xff) * 8);
              puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 4)) {
            if (*puVar6 == uVar1) {
              lVar5 = *(long *)(puVar6 + 2);
              if (lVar5 != 0) {
                pcVar7 = (char *)(lVar5 + 0x248);
                if (param_4 != '\0') {
                  pcVar7 = (char *)(lVar5 + 0x24c);
                }
                cVar3 = *pcVar7;
                goto LAB_10032a7df;
              }
              break;
            }
          }
LAB_10032a3b3:
          uVar4 = *(uint *)(param_1 + 0x15ac);
          uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2058);
          uVar10 = uVar4;
          if (uVar1 < 0x20) {
            uVar8 = 0x20;
            do {
              uVar8 = uVar8 >> 1;
              uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar8;
            } while (uVar1 < uVar8);
          }
          for (puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1858 + (ulong)(uVar10 & 0xff) * 8);
              puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 4)) {
            if (*puVar6 == uVar4) {
              lVar5 = *(long *)(puVar6 + 2);
              if (lVar5 != 0) {
                if (param_4 == '\0') {
                  cVar3 = *(char *)(lVar5 + 0x198 + (ulong)(param_2 - 0x8825) * 4);
                }
                else {
                  cVar3 = *(char *)(lVar5 + 0x1d8 + (ulong)(param_2 - 0x8825) * 4);
                }
                goto LAB_10032a7df;
              }
              break;
            }
          }
LAB_10032a697:
          pcVar7 = (char *)(param_1 + 0x15a8);
          pcVar11 = (char *)(param_1 + 0x15a0);
LAB_10032a6a6:
          if (param_4 != '\0') {
            pcVar11 = pcVar7;
          }
          cVar3 = *pcVar11;
          goto LAB_10032a7df;
        }
        *param_3 = (char)(int)*(float *)(param_1 + 0x118);
        param_3[1] = (char)(int)*(float *)(param_1 + 0x11c);
        param_3[2] = (char)(int)*(float *)(param_1 + 0x120);
        param_3[3] = (char)(int)*(float *)(param_1 + 0x124);
      }
      else {
        if (param_2 == 0xc02) {
          lVar5 = *(long *)(param_1 + 0x30);
          uVar4 = *(uint *)(lVar5 + 0x2058);
          goto LAB_10032a250;
        }
        if (param_2 != 0xc22) goto switchD_10032a186_caseD_807c;
        *param_3 = (char)(int)*(float *)(param_1 + 0xd8);
        param_3[1] = (char)(int)*(float *)(param_1 + 0xdc);
        param_3[2] = (char)(int)*(float *)(param_1 + 0xe0);
        param_3[3] = (char)(int)*(float *)(param_1 + 0xe4);
      }
    }
    else {
      if (3 < param_2 - 0xd58U) goto switchD_10032a186_caseD_807c;
      *param_3 = '\x10';
    }
    goto LAB_10032a7e2;
  }
  if (param_2 < 0x8454) {
    if (param_2 < 0x807a) {
      if (param_2 == 0x8068) {
        uVar9 = 0xde0;
      }
      else if (param_2 == 0x8069) {
        uVar9 = 0xde1;
      }
      else {
        if (param_2 != 0x806a) goto switchD_10032a186_caseD_807c;
        uVar9 = 0x806f;
      }
      goto LAB_10032a58c;
    }
    switch(param_2) {
    case 0x807a:
      cVar3 = *(char *)(lVar5 + 0x2c);
      break;
    case 0x807b:
      cVar3 = *(char *)(lVar5 + 0x30);
      break;
    default:
      goto switchD_10032a186_caseD_807c;
    case 0x807e:
      cVar3 = *(char *)(lVar5 + 0x90);
      break;
    case 0x8081:
      cVar3 = *(char *)(lVar5 + 0xbc);
      break;
    case 0x8082:
      cVar3 = *(char *)(lVar5 + 0xc0);
      break;
    case 0x8085:
      cVar3 = *(char *)(lVar5 + 0x150);
      break;
    case 0x8088:
      cVar3 = *(char *)(lVar5 + 0x2c + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
      break;
    case 0x8089:
      cVar3 = *(char *)(lVar5 + 0x30 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
    }
LAB_10032a7df:
    *param_3 = cVar3;
    goto LAB_10032a7e2;
  }
  if (param_2 < 0x85b5) {
    if (0x84df < param_2) {
      if (0x84f5 < param_2) {
        if (param_2 == 0x84f6) {
          uVar9 = 0x84f5;
        }
        else {
          if (param_2 != 0x8514) goto switchD_10032a186_caseD_807c;
          uVar9 = 0x8513;
        }
        goto LAB_10032a58c;
      }
      if (param_2 == 0x84e0) {
        *param_3 = (char)*(undefined4 *)(param_1 + 0x418) + -0x40;
      }
      else {
        if (param_2 != 0x84e1) goto switchD_10032a186_caseD_807c;
        *param_3 = (char)*(undefined4 *)(param_1 + 0x450) + -0x40;
      }
      goto LAB_10032a7e2;
    }
    if (param_2 == 0x8454) {
      cVar3 = *(char *)(lVar5 + 0x120);
    }
    else if (param_2 == 0x845a) {
      cVar3 = *(char *)(lVar5 + 0xec);
    }
    else {
      if (param_2 != 0x845b) goto switchD_10032a186_caseD_807c;
      cVar3 = *(char *)(lVar5 + 0xf0);
    }
    goto LAB_10032a7df;
  }
  if (0x8a27 < param_2) {
    if (param_2 < 0x8def) {
      if (0x8c1b < param_2) {
        if (param_2 < 0x8c8f) {
          if (param_2 < 0x8c2a) {
            if (param_2 == 0x8c1c) {
              uVar9 = 0x8c18;
            }
            else {
              if (param_2 != 0x8c1d) goto switchD_10032a186_caseD_807c;
              uVar9 = 0x8c1a;
            }
          }
          else {
            if (param_2 == 0x8c2a) {
              uVar9 = 0x8c2a;
              goto LAB_10032a6bf;
            }
            if (param_2 != 0x8c2c) goto switchD_10032a186_caseD_807c;
            uVar9 = 0x8c2a;
          }
LAB_10032a58c:
          cVar3 = FUN_1003017c0(param_1,uVar9,param_4);
          *param_3 = cVar3;
          goto LAB_10032a7e2;
        }
        if (param_2 == 0x8c8f) {
          uVar9 = 0x8c8e;
          goto LAB_10032a6bf;
        }
        if (param_2 != 0x8ca6) {
          if (param_2 != 0x8caa) goto switchD_10032a186_caseD_807c;
          goto LAB_10032a697;
        }
        pcVar7 = (char *)(param_1 + 0x15ac);
        pcVar11 = (char *)(param_1 + 0x15a4);
        goto LAB_10032a6a6;
      }
      if (param_2 != 0x8a28) goto switchD_10032a186_caseD_807c;
      uVar9 = 0x8a11;
    }
    else {
      if (param_2 != 0x8def) {
        if (param_2 == 0x9104) {
          uVar9 = 0x9100;
        }
        else {
          if (param_2 != 0x9105) goto switchD_10032a186_caseD_807c;
          uVar9 = 0x9102;
        }
        goto LAB_10032a58c;
      }
      uVar9 = 0x8dee;
    }
    goto LAB_10032a6bf;
  }
  if (param_2 < 0x8824) {
    if (param_2 != 0x85b5) {
      if (param_2 == 0x86a9) {
        cVar3 = *(char *)(lVar5 + 0x60);
      }
      else {
        if (param_2 != 0x86ab) goto switchD_10032a186_caseD_807c;
        cVar3 = *(char *)(lVar5 + 0x5c);
      }
      goto LAB_10032a7df;
    }
    cVar3 = FUN_100304560(param_1,param_4);
    *param_3 = cVar3;
    goto LAB_10032a7e2;
  }
  if (param_2 < 0x8894) {
    if (0xf < param_2 - 0x8825U) {
      if (param_2 != 0x8824) goto switchD_10032a186_caseD_807c;
      cVar3 = FUN_1003050f0(param_1);
      *param_3 = cVar3;
      goto LAB_10032a7e2;
    }
    goto LAB_10032a3b3;
  }
  if (0x88ec < param_2) {
    if (param_2 == 0x88ed) {
      uVar9 = 0x88eb;
    }
    else {
      if (param_2 != 0x88ef) {
        if (param_2 == 0x8919) {
          cVar3 = FUN_100301220(param_1,*(undefined4 *)(param_1 + 0x418),param_4);
          *param_3 = cVar3;
          goto LAB_10032a7e2;
        }
        goto switchD_10032a186_caseD_807c;
      }
      uVar9 = 0x88ec;
    }
    goto LAB_10032a6bf;
  }
  switch(param_2) {
  case 0x8894:
    uVar9 = 0x8892;
    goto LAB_10032a6bf;
  case 0x8895:
    uVar9 = 0x8893;
LAB_10032a6bf:
    cVar3 = FUN_1003040c0(param_1,uVar9,param_4);
    *param_3 = cVar3;
    goto LAB_10032a7e2;
  case 0x8896:
    uVar4 = *(uint *)(lVar5 + 0x38);
    cVar3 = (char)uVar4;
    *param_3 = cVar3;
    if (param_4 != '\0') {
      uVar4 = uVar4 & 0xff;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar10 = uVar4;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar10 & 0xff) * 8);
      if (puVar6 == (uint *)0x0) {
        cVar3 = '\0';
      }
      else {
        do {
          if (*puVar6 == uVar4) goto LAB_10032ab8f;
          puVar6 = *(uint **)(puVar6 + 2);
        } while (puVar6 != (uint *)0x0);
        cVar3 = '\0';
      }
LAB_10032ab92:
      *param_3 = cVar3;
    }
    break;
  case 0x8897:
    uVar4 = *(uint *)(lVar5 + 0x98);
    cVar3 = (char)uVar4;
    *param_3 = cVar3;
    if (param_4 != '\0') {
      uVar4 = uVar4 & 0xff;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar10 = uVar4;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar10 & 0xff) * 8);
      if (puVar6 == (uint *)0x0) {
        cVar3 = '\0';
      }
      else {
        do {
          if (*puVar6 == uVar4) goto LAB_10032ab8f;
          puVar6 = *(uint **)(puVar6 + 2);
        } while (puVar6 != (uint *)0x0);
        cVar3 = '\0';
      }
      goto LAB_10032ab92;
    }
    break;
  case 0x8898:
    uVar4 = *(uint *)(lVar5 + 200);
    cVar3 = (char)uVar4;
    *param_3 = cVar3;
    if (param_4 != '\0') {
      uVar4 = uVar4 & 0xff;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar10 = uVar4;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar10 & 0xff) * 8);
      if (puVar6 == (uint *)0x0) {
        cVar3 = '\0';
      }
      else {
        do {
          if (*puVar6 == uVar4) goto LAB_10032ab8f;
          puVar6 = *(uint **)(puVar6 + 2);
        } while (puVar6 != (uint *)0x0);
        cVar3 = '\0';
      }
      goto LAB_10032ab92;
    }
    break;
  case 0x8899:
    uVar4 = *(uint *)(lVar5 + 0x158);
    cVar3 = (char)uVar4;
    *param_3 = cVar3;
    if (param_4 != '\0') {
      uVar4 = uVar4 & 0xff;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar10 = uVar4;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar10 & 0xff) * 8);
      if (puVar6 == (uint *)0x0) {
        cVar3 = '\0';
      }
      else {
        do {
          if (*puVar6 == uVar4) goto LAB_10032ab8f;
          puVar6 = *(uint **)(puVar6 + 2);
        } while (puVar6 != (uint *)0x0);
        cVar3 = '\0';
      }
      goto LAB_10032ab92;
    }
    break;
  case 0x889a:
    uVar4 = *(uint *)(lVar5 + 0x38 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
    cVar3 = (char)uVar4;
    *param_3 = cVar3;
    if (param_4 != '\0') {
      uVar4 = uVar4 & 0xff;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar10 = uVar4;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar10 & 0xff) * 8);
      if (puVar6 == (uint *)0x0) {
        cVar3 = '\0';
      }
      else {
        do {
          if (*puVar6 == uVar4) goto LAB_10032ab8f;
          puVar6 = *(uint **)(puVar6 + 2);
        } while (puVar6 != (uint *)0x0);
        cVar3 = '\0';
      }
      goto LAB_10032ab92;
    }
    break;
  case 0x889b:
    uVar4 = *(uint *)(lVar5 + 0x188);
    cVar3 = (char)uVar4;
    *param_3 = cVar3;
    if (param_4 != '\0') {
      uVar4 = uVar4 & 0xff;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar10 = uVar4;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar10 & 0xff) * 8);
      if (puVar6 == (uint *)0x0) {
        cVar3 = '\0';
      }
      else {
        do {
          if (*puVar6 == uVar4) goto LAB_10032ab8f;
          puVar6 = *(uint **)(puVar6 + 2);
        } while (puVar6 != (uint *)0x0);
        cVar3 = '\0';
      }
      goto LAB_10032ab92;
    }
    break;
  case 0x889c:
    uVar4 = *(uint *)(lVar5 + 0xf8);
    cVar3 = (char)uVar4;
    *param_3 = cVar3;
    if (param_4 != '\0') {
      uVar4 = uVar4 & 0xff;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar10 = uVar4;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar10 & 0xff) * 8);
      if (puVar6 == (uint *)0x0) {
        cVar3 = '\0';
      }
      else {
        do {
          if (*puVar6 == uVar4) goto LAB_10032ab8f;
          puVar6 = *(uint **)(puVar6 + 2);
        } while (puVar6 != (uint *)0x0);
        cVar3 = '\0';
      }
      goto LAB_10032ab92;
    }
    break;
  case 0x889d:
    uVar4 = *(uint *)(lVar5 + 0x128);
    cVar3 = (char)uVar4;
    *param_3 = cVar3;
    if (param_4 != '\0') {
      uVar4 = uVar4 & 0xff;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar10 = uVar4;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar10 & 0xff) * 8);
      if (puVar6 == (uint *)0x0) {
        cVar3 = '\0';
      }
      else {
        do {
          if (*puVar6 == uVar4) goto LAB_10032ab8f;
          puVar6 = *(uint **)(puVar6 + 2);
        } while (puVar6 != (uint *)0x0);
        cVar3 = '\0';
      }
      goto LAB_10032ab92;
    }
    break;
  case 0x889e:
    uVar4 = *(uint *)(lVar5 + 0x68);
    cVar3 = (char)uVar4;
    *param_3 = cVar3;
    if (param_4 != '\0') {
      uVar4 = uVar4 & 0xff;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar10 = uVar4;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar10 & 0xff) * 8);
      if (puVar6 == (uint *)0x0) {
        cVar3 = '\0';
      }
      else {
        do {
          if (*puVar6 == uVar4) goto LAB_10032ab8f;
          puVar6 = *(uint **)(puVar6 + 2);
        } while (puVar6 != (uint *)0x0);
        cVar3 = '\0';
      }
      goto LAB_10032ab92;
    }
    break;
  default:
switchD_10032a186_caseD_807c:
    lVar5 = FUN_100303740(param_1);
    uVar9 = 0;
    if (param_2 < 0x8457) {
      switch(param_2) {
      case 0x8074:
        pcVar7 = (char *)(lVar5 + 0x28);
        break;
      case 0x8075:
        pcVar7 = (char *)(lVar5 + 0x88);
        break;
      case 0x8076:
        pcVar7 = (char *)(lVar5 + 0xb8);
        break;
      case 0x8077:
        pcVar7 = (char *)(lVar5 + 0x148);
        break;
      case 0x8078:
        pcVar7 = (char *)((ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30 + lVar5 + 0x28);
        break;
      case 0x8079:
        pcVar7 = (char *)(lVar5 + 0x178);
        break;
      default:
        goto switchD_10032a769_default;
      }
    }
    else if (param_2 == 0x8457) {
      pcVar7 = (char *)(lVar5 + 0x118);
    }
    else if (param_2 == 0x845e) {
      pcVar7 = (char *)(lVar5 + 0xe8);
    }
    else {
      if (param_2 != 0x86ad) {
        return 0;
      }
      pcVar7 = (char *)(lVar5 + 0x58);
    }
LAB_10032a7dd:
    cVar3 = *pcVar7;
    goto LAB_10032a7df;
  }
  *param_3 = cVar3;
LAB_10032a7e2:
  uVar9 = 1;
switchD_10032a769_default:
  return uVar9;
LAB_10032ab8f:
  cVar3 = (char)puVar6[1];
  goto LAB_10032ab92;
}

