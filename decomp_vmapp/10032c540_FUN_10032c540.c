
undefined8 FUN_10032c540(long param_1,int param_2,ulong *param_3,char param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint *puVar13;
  
  lVar5 = FUN_100303740();
  if (param_2 < 0x8068) {
    if (param_2 < 0xd58) {
      if (param_2 < 0xc02) {
        if (param_2 != 0xb80) {
          if (param_2 != 0xc01) goto switchD_10032c68a_caseD_807c;
          lVar5 = *(long *)(param_1 + 0x30);
          uVar1 = *(uint *)(param_1 + 0x15ac);
          uVar3 = *(uint *)(lVar5 + 0x2058);
          uVar12 = uVar1;
          if (uVar3 < 0x20) {
            uVar8 = 0x20;
            do {
              uVar8 = uVar8 >> 1;
              uVar12 = uVar12 ^ uVar12 >> (sbyte)uVar8;
            } while (uVar3 < uVar8);
          }
          for (puVar7 = *(uint **)(lVar5 + 0x1858 + (ulong)(uVar12 & 0xff) * 8);
              puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
            if (*puVar7 == uVar1) {
              lVar2 = *(long *)(puVar7 + 2);
              if (lVar2 != 0) {
                puVar7 = (uint *)(lVar2 + 0x198);
                if (param_4 != '\0') {
                  puVar7 = (uint *)(lVar2 + 0x1d8);
                }
                uVar6 = (ulong)*puVar7;
                goto LAB_10032ccdb;
              }
              break;
            }
          }
LAB_10032c752:
          uVar1 = *(uint *)(param_1 + 0x15a8);
          uVar12 = uVar1;
          if (uVar3 < 0x20) {
            uVar8 = 0x20;
            do {
              uVar8 = uVar8 >> 1;
              uVar12 = uVar12 ^ uVar12 >> (sbyte)uVar8;
            } while (uVar3 < uVar8);
          }
          for (puVar7 = *(uint **)(lVar5 + 0x1858 + (ulong)(uVar12 & 0xff) * 8);
              puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
            if (*puVar7 == uVar1) {
              lVar5 = *(long *)(puVar7 + 2);
              if (lVar5 != 0) {
                puVar7 = (uint *)(lVar5 + 0x248);
                if (param_4 != '\0') {
                  puVar7 = (uint *)(lVar5 + 0x24c);
                }
                uVar6 = (ulong)*puVar7;
                goto LAB_10032ccdb;
              }
              break;
            }
          }
LAB_10032c8b0:
          uVar3 = *(uint *)(param_1 + 0x15ac);
          uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2058);
          uVar12 = uVar3;
          if (uVar1 < 0x20) {
            uVar8 = 0x20;
            do {
              uVar8 = uVar8 >> 1;
              uVar12 = uVar12 ^ uVar12 >> (sbyte)uVar8;
            } while (uVar1 < uVar8);
          }
          for (puVar7 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1858 + (ulong)(uVar12 & 0xff) * 8);
              puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
            if (*puVar7 == uVar3) {
              lVar5 = *(long *)(puVar7 + 2);
              if (lVar5 != 0) {
                if (param_4 == '\0') {
                  uVar6 = (ulong)*(uint *)(lVar5 + 0x198 + (ulong)(param_2 - 0x8825) * 4);
                }
                else {
                  uVar6 = (ulong)*(uint *)(lVar5 + 0x1d8 + (ulong)(param_2 - 0x8825) * 4);
                }
                goto LAB_10032ccdb;
              }
              break;
            }
          }
LAB_10032cb95:
          puVar7 = (uint *)(param_1 + 0x15a8);
          puVar13 = (uint *)(param_1 + 0x15a0);
LAB_10032cba4:
          if (param_4 != '\0') {
            puVar13 = puVar7;
          }
          uVar6 = (ulong)*puVar13;
          goto LAB_10032ccdb;
        }
        *param_3 = (long)*(float *)(param_1 + 0x118);
        param_3[1] = (long)*(float *)(param_1 + 0x11c);
        param_3[2] = (long)*(float *)(param_1 + 0x120);
        uVar6 = (ulong)*(float *)(param_1 + 0x124);
        param_3[3] = uVar6;
      }
      else {
        if (param_2 == 0xc02) {
          lVar5 = *(long *)(param_1 + 0x30);
          uVar3 = *(uint *)(lVar5 + 0x2058);
          goto LAB_10032c752;
        }
        if (param_2 != 0xc22) goto switchD_10032c68a_caseD_807c;
        *param_3 = (long)*(float *)(param_1 + 0xd8);
        param_3[1] = (long)*(float *)(param_1 + 0xdc);
        param_3[2] = (long)*(float *)(param_1 + 0xe0);
        uVar6 = (ulong)*(float *)(param_1 + 0xe4);
        param_3[3] = uVar6;
      }
    }
    else {
      uVar6 = (ulong)(param_2 - 0xd58U);
      if (3 < param_2 - 0xd58U) goto switchD_10032c68a_caseD_807c;
      *param_3 = 0x10;
    }
    goto LAB_10032ccde;
  }
  if (param_2 < 0x8454) {
    if (param_2 < 0x807a) {
      if (param_2 == 0x8068) {
        uVar11 = 0xde0;
      }
      else if (param_2 == 0x8069) {
        uVar11 = 0xde1;
      }
      else {
        if (param_2 != 0x806a) goto switchD_10032c68a_caseD_807c;
        uVar11 = 0x806f;
      }
      goto LAB_10032ca89;
    }
    switch(param_2) {
    case 0x807a:
      uVar6 = (ulong)*(int *)(lVar5 + 0x2c);
      break;
    case 0x807b:
      uVar6 = (ulong)*(uint *)(lVar5 + 0x30);
      break;
    default:
      goto switchD_10032c68a_caseD_807c;
    case 0x807e:
      uVar6 = (ulong)*(uint *)(lVar5 + 0x90);
      break;
    case 0x8081:
      uVar6 = (ulong)*(int *)(lVar5 + 0xbc);
      break;
    case 0x8082:
      uVar6 = (ulong)*(uint *)(lVar5 + 0xc0);
      break;
    case 0x8085:
      uVar6 = (ulong)*(uint *)(lVar5 + 0x150);
      break;
    case 0x8088:
      uVar6 = (ulong)*(int *)(lVar5 + 0x2c + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
      break;
    case 0x8089:
      uVar6 = (ulong)*(uint *)(lVar5 + 0x30 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
    }
    goto LAB_10032ccdb;
  }
  if (param_2 < 0x85b5) {
    if (param_2 < 0x84e0) {
      if (param_2 == 0x8454) {
        uVar6 = (ulong)*(uint *)(lVar5 + 0x120);
      }
      else if (param_2 == 0x845a) {
        uVar6 = (ulong)*(int *)(lVar5 + 0xec);
      }
      else {
        if (param_2 != 0x845b) goto switchD_10032c68a_caseD_807c;
        uVar6 = (ulong)*(uint *)(lVar5 + 0xf0);
      }
    }
    else {
      if (0x84f5 < param_2) {
        if (param_2 == 0x84f6) {
          uVar11 = 0x84f5;
        }
        else {
          if (param_2 != 0x8514) goto switchD_10032c68a_caseD_807c;
          uVar11 = 0x8513;
        }
        goto LAB_10032ca89;
      }
      if (param_2 == 0x84e0) {
        uVar6 = (ulong)(*(int *)(param_1 + 0x418) + 0x84c0);
      }
      else {
        if (param_2 != 0x84e1) goto switchD_10032c68a_caseD_807c;
        uVar6 = (ulong)(*(int *)(param_1 + 0x450) + 0x84c0);
      }
    }
    goto LAB_10032ccdb;
  }
  if (0x8a27 < param_2) {
    if (param_2 < 0x8def) {
      if (0x8c1b < param_2) {
        if (param_2 < 0x8c8f) {
          if (param_2 < 0x8c2a) {
            if (param_2 == 0x8c1c) {
              uVar11 = 0x8c18;
            }
            else {
              if (param_2 != 0x8c1d) goto switchD_10032c68a_caseD_807c;
              uVar11 = 0x8c1a;
            }
          }
          else {
            if (param_2 == 0x8c2a) {
              uVar11 = 0x8c2a;
              goto LAB_10032cbbd;
            }
            if (param_2 != 0x8c2c) goto switchD_10032c68a_caseD_807c;
            uVar11 = 0x8c2a;
          }
LAB_10032ca89:
          uVar3 = FUN_1003017c0(param_1,uVar11,param_4);
          uVar6 = (ulong)uVar3;
          goto LAB_10032ccdb;
        }
        if (param_2 == 0x8c8f) {
          uVar11 = 0x8c8e;
          goto LAB_10032cbbd;
        }
        if (param_2 != 0x8ca6) {
          if (param_2 != 0x8caa) goto switchD_10032c68a_caseD_807c;
          goto LAB_10032cb95;
        }
        puVar7 = (uint *)(param_1 + 0x15ac);
        puVar13 = (uint *)(param_1 + 0x15a4);
        goto LAB_10032cba4;
      }
      if (param_2 != 0x8a28) goto switchD_10032c68a_caseD_807c;
      uVar11 = 0x8a11;
    }
    else {
      if (param_2 != 0x8def) {
        if (param_2 == 0x9104) {
          uVar11 = 0x9100;
        }
        else {
          if (param_2 != 0x9105) goto switchD_10032c68a_caseD_807c;
          uVar11 = 0x9102;
        }
        goto LAB_10032ca89;
      }
      uVar11 = 0x8dee;
    }
    goto LAB_10032cbbd;
  }
  if (param_2 < 0x8824) {
    if (param_2 == 0x85b5) {
      uVar3 = FUN_100304560(param_1,param_4);
      uVar6 = (ulong)uVar3;
    }
    else if (param_2 == 0x86a9) {
      uVar6 = (ulong)*(uint *)(lVar5 + 0x60);
    }
    else {
      if (param_2 != 0x86ab) goto switchD_10032c68a_caseD_807c;
      uVar6 = (ulong)*(int *)(lVar5 + 0x5c);
    }
    goto LAB_10032ccdb;
  }
  if (param_2 < 0x8894) {
    if (0xf < param_2 - 0x8825U) {
      if (param_2 != 0x8824) goto switchD_10032c68a_caseD_807c;
      iVar4 = FUN_1003050f0(param_1);
      uVar6 = (ulong)iVar4;
      goto LAB_10032ccdb;
    }
    goto LAB_10032c8b0;
  }
  if (0x88ec < param_2) {
    if (param_2 == 0x88ed) {
      uVar11 = 0x88eb;
    }
    else {
      if (param_2 != 0x88ef) {
        if (param_2 == 0x8919) {
          uVar3 = FUN_100301220(param_1,*(undefined4 *)(param_1 + 0x418),param_4);
          uVar6 = (ulong)uVar3;
          goto LAB_10032ccdb;
        }
        goto switchD_10032c68a_caseD_807c;
      }
      uVar11 = 0x88ec;
    }
    goto LAB_10032cbbd;
  }
  switch(param_2) {
  case 0x8894:
    uVar11 = 0x8892;
    goto LAB_10032cbbd;
  case 0x8895:
    uVar11 = 0x8893;
LAB_10032cbbd:
    uVar3 = FUN_1003040c0(param_1,uVar11,param_4);
    uVar6 = (ulong)uVar3;
LAB_10032ccdb:
    *param_3 = uVar6;
    goto LAB_10032ccde;
  case 0x8896:
    uVar3 = *(uint *)(lVar5 + 0x38);
    uVar6 = (ulong)uVar3;
    uVar10 = (ulong)(int)uVar3;
    *param_3 = uVar10;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar3;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar12 = uVar12 ^ uVar12 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar7 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar12 & 0xff) * 8);
      uVar10 = 0;
      if (puVar7 != (uint *)0x0) {
        uVar10 = 0;
        do {
          if (*puVar7 == uVar3) goto LAB_10032d099;
          puVar7 = *(uint **)(puVar7 + 2);
        } while (puVar7 != (uint *)0x0);
      }
LAB_10032d09c:
      *param_3 = uVar10;
    }
    break;
  case 0x8897:
    uVar3 = *(uint *)(lVar5 + 0x98);
    uVar6 = (ulong)uVar3;
    uVar10 = (ulong)(int)uVar3;
    *param_3 = uVar10;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar3;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar12 = uVar12 ^ uVar12 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar7 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar12 & 0xff) * 8);
      uVar10 = 0;
      if (puVar7 != (uint *)0x0) {
        uVar10 = 0;
        do {
          if (*puVar7 == uVar3) goto LAB_10032d099;
          puVar7 = *(uint **)(puVar7 + 2);
        } while (puVar7 != (uint *)0x0);
      }
      goto LAB_10032d09c;
    }
    break;
  case 0x8898:
    uVar3 = *(uint *)(lVar5 + 200);
    uVar6 = (ulong)uVar3;
    uVar10 = (ulong)(int)uVar3;
    *param_3 = uVar10;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar3;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar12 = uVar12 ^ uVar12 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar7 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar12 & 0xff) * 8);
      uVar10 = 0;
      if (puVar7 != (uint *)0x0) {
        uVar10 = 0;
        do {
          if (*puVar7 == uVar3) goto LAB_10032d099;
          puVar7 = *(uint **)(puVar7 + 2);
        } while (puVar7 != (uint *)0x0);
      }
      goto LAB_10032d09c;
    }
    break;
  case 0x8899:
    uVar3 = *(uint *)(lVar5 + 0x158);
    uVar6 = (ulong)uVar3;
    uVar10 = (ulong)(int)uVar3;
    *param_3 = uVar10;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar3;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar12 = uVar12 ^ uVar12 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar7 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar12 & 0xff) * 8);
      uVar10 = 0;
      if (puVar7 != (uint *)0x0) {
        uVar10 = 0;
        do {
          if (*puVar7 == uVar3) goto LAB_10032d099;
          puVar7 = *(uint **)(puVar7 + 2);
        } while (puVar7 != (uint *)0x0);
      }
      goto LAB_10032d09c;
    }
    break;
  case 0x889a:
    uVar3 = *(uint *)(lVar5 + 0x38 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
    uVar6 = (ulong)uVar3;
    uVar10 = (ulong)(int)uVar3;
    *param_3 = uVar10;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar3;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar12 = uVar12 ^ uVar12 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar7 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar12 & 0xff) * 8);
      uVar10 = 0;
      if (puVar7 != (uint *)0x0) {
        uVar10 = 0;
        do {
          if (*puVar7 == uVar3) goto LAB_10032d099;
          puVar7 = *(uint **)(puVar7 + 2);
        } while (puVar7 != (uint *)0x0);
      }
      goto LAB_10032d09c;
    }
    break;
  case 0x889b:
    uVar3 = *(uint *)(lVar5 + 0x188);
    uVar6 = (ulong)uVar3;
    uVar10 = (ulong)(int)uVar3;
    *param_3 = uVar10;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar3;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar12 = uVar12 ^ uVar12 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar7 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar12 & 0xff) * 8);
      uVar10 = 0;
      if (puVar7 != (uint *)0x0) {
        uVar10 = 0;
        do {
          if (*puVar7 == uVar3) goto LAB_10032d099;
          puVar7 = *(uint **)(puVar7 + 2);
        } while (puVar7 != (uint *)0x0);
      }
      goto LAB_10032d09c;
    }
    break;
  case 0x889c:
    uVar3 = *(uint *)(lVar5 + 0xf8);
    uVar6 = (ulong)uVar3;
    uVar10 = (ulong)(int)uVar3;
    *param_3 = uVar10;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar3;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar12 = uVar12 ^ uVar12 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar7 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar12 & 0xff) * 8);
      uVar10 = 0;
      if (puVar7 != (uint *)0x0) {
        uVar10 = 0;
        do {
          if (*puVar7 == uVar3) goto LAB_10032d099;
          puVar7 = *(uint **)(puVar7 + 2);
        } while (puVar7 != (uint *)0x0);
      }
      goto LAB_10032d09c;
    }
    break;
  case 0x889d:
    uVar3 = *(uint *)(lVar5 + 0x128);
    uVar6 = (ulong)uVar3;
    uVar10 = (ulong)(int)uVar3;
    *param_3 = uVar10;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar3;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar12 = uVar12 ^ uVar12 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar7 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar12 & 0xff) * 8);
      uVar10 = 0;
      if (puVar7 != (uint *)0x0) {
        uVar10 = 0;
        do {
          if (*puVar7 == uVar3) goto LAB_10032d099;
          puVar7 = *(uint **)(puVar7 + 2);
        } while (puVar7 != (uint *)0x0);
      }
      goto LAB_10032d09c;
    }
    break;
  case 0x889e:
    uVar3 = *(uint *)(lVar5 + 0x68);
    uVar6 = (ulong)uVar3;
    uVar10 = (ulong)(int)uVar3;
    *param_3 = uVar10;
    if (param_4 != '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
      uVar12 = uVar3;
      if (uVar1 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar12 = uVar12 ^ uVar12 >> (sbyte)uVar8;
        } while (uVar1 < uVar8);
      }
      puVar7 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (ulong)(uVar12 & 0xff) * 8);
      uVar10 = 0;
      if (puVar7 != (uint *)0x0) {
        uVar10 = 0;
        do {
          if (*puVar7 == uVar3) goto LAB_10032d099;
          puVar7 = *(uint **)(puVar7 + 2);
        } while (puVar7 != (uint *)0x0);
      }
      goto LAB_10032d09c;
    }
    break;
  default:
switchD_10032c68a_caseD_807c:
    lVar5 = FUN_100303740(param_1);
    uVar11 = 0;
    if (param_2 < 0x8457) {
      switch(param_2) {
      case 0x8074:
        pbVar9 = (byte *)(lVar5 + 0x28);
        break;
      case 0x8075:
        pbVar9 = (byte *)(lVar5 + 0x88);
        break;
      case 0x8076:
        pbVar9 = (byte *)(lVar5 + 0xb8);
        break;
      case 0x8077:
        pbVar9 = (byte *)(lVar5 + 0x148);
        break;
      case 0x8078:
        pbVar9 = (byte *)(lVar5 + 0x28 + (ulong)(*(int *)(param_1 + 0x450) + 8) * 0x30);
        break;
      case 0x8079:
        pbVar9 = (byte *)(lVar5 + 0x178);
        break;
      default:
        goto switchD_10032cc64_default;
      }
    }
    else if (param_2 == 0x8457) {
      pbVar9 = (byte *)(lVar5 + 0x118);
    }
    else if (param_2 == 0x845e) {
      pbVar9 = (byte *)(lVar5 + 0xe8);
    }
    else {
      if (param_2 != 0x86ad) {
        return 0;
      }
      pbVar9 = (byte *)(lVar5 + 0x58);
    }
    uVar6 = (ulong)*pbVar9;
    goto LAB_10032ccdb;
  }
  *param_3 = uVar10;
LAB_10032ccde:
  uVar11 = CONCAT71((int7)(uVar6 >> 8),1);
switchD_10032cc64_default:
  return uVar11;
LAB_10032d099:
  uVar10 = (ulong)puVar7[1];
  goto LAB_10032d09c;
}

