
undefined8 FUN_100345650(byte *param_1,undefined2 *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 uVar12;
  uint *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  
  if (param_3 != 0) {
    pbVar2 = param_1 + 0xa818;
    pbVar3 = param_1 + 0x27a8;
    pbVar4 = param_1 + 0x27c0;
    pbVar5 = param_1 + 0x27f0;
    pbVar6 = param_1 + 0xa830;
    pbVar7 = param_1 + 0x12870;
    do {
      if (param_3 < 8) {
        return 9;
      }
      uVar9 = *(uint *)(param_2 + 2);
      if (uVar9 < 8) {
        return 9;
      }
      if (param_3 < uVar9) {
        return 9;
      }
      uVar12 = 6;
      switch(*param_2) {
      case 0:
        goto switchD_1003456d8_caseD_0;
      case 1:
        if (uVar9 < 0x10) {
          return 9;
        }
        FUN_1003650c0(*(undefined8 *)(param_1 + 0x2778),param_1,param_2 + 4);
        goto switchD_1003456d8_caseD_0;
      case 2:
        if (uVar9 < 0x14) {
          return 9;
        }
        FUN_1003653b0(*(undefined8 *)(param_1 + 0x2778),param_1,param_2 + 4);
        goto switchD_1003456d8_caseD_0;
      default:
        goto switchD_1003456d8_caseD_3;
      case 4:
        if (uVar9 < 0x18) {
          return 9;
        }
        FUN_1003652a0(*(undefined8 *)(param_1 + 0x2778),param_1,param_2 + 4);
        goto switchD_1003456d8_caseD_0;
      case 5:
        if (uVar9 < 0x1c) {
          return 9;
        }
        FUN_1003654c0(*(undefined8 *)(param_1 + 0x2778),param_1,param_2 + 4);
        goto switchD_1003456d8_caseD_0;
      case 6:
        FUN_1003655d0(*(undefined8 *)(param_1 + 0x2778),param_1);
        goto switchD_1003456d8_caseD_0;
      case 7:
        if (uVar9 < 0xc) {
          return 9;
        }
        if (*(int *)(param_1 + 0x860) != *(int *)(param_2 + 4)) {
          *(int *)(param_1 + 0x860) = *(int *)(param_2 + 4);
          param_1[1] = param_1[1] | 0x10;
        }
        goto switchD_1003456d8_caseD_0;
      case 8:
        uVar12 = FUN_100346380(param_1,param_2);
        break;
      case 9:
        uVar12 = FUN_100346570(param_1,param_2);
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0x50:
      case 0x51:
      case 0x52:
        uVar12 = FUN_100346650(param_1,param_2);
        break;
      case 0xd:
        uVar12 = FUN_1003468d0(param_1,param_2);
        break;
      case 0xe:
        if (uVar9 < 0xc) {
          return 9;
        }
        uVar9 = *(uint *)(param_2 + 4);
        lVar11 = 0;
        if (uVar9 != 0) {
          pbVar10 = *(byte **)pbVar2;
          pbVar15 = pbVar2;
          if (*(byte **)pbVar2 == (byte *)0x0) {
            return 7;
          }
          do {
            while (pbVar14 = pbVar10, uVar9 <= *(uint *)(pbVar14 + 0x20)) {
              pbVar10 = *(byte **)pbVar14;
              pbVar15 = pbVar14;
              if (*(byte **)pbVar14 == (byte *)0x0) goto LAB_100345fb1;
            }
            pbVar1 = pbVar14 + 8;
            pbVar14 = pbVar15;
            pbVar10 = *(byte **)pbVar1;
          } while (*(byte **)pbVar1 != (byte *)0x0);
LAB_100345fb1:
          if (pbVar14 == pbVar2) {
            return 7;
          }
          if (uVar9 < *(uint *)(pbVar14 + 0x20)) {
            return 7;
          }
          lVar11 = *(long *)(pbVar14 + 0x28);
        }
        if (*(long *)(param_1 + 0x648) != lVar11) {
          *(long *)(param_1 + 0x648) = lVar11;
          param_1[1] = param_1[1] | 2;
        }
        goto switchD_1003456d8_caseD_0;
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x53:
      case 0x54:
      case 0x55:
        uVar12 = FUN_100346a40(param_1,param_2);
        break;
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x56:
      case 0x57:
      case 0x58:
        uVar12 = FUN_100346be0(param_1,param_2);
        break;
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x47:
      case 0x48:
      case 0x49:
        uVar12 = FUN_100346eb0(param_1,param_2);
        break;
      case 0x18:
        uVar12 = FUN_100347090(param_1,param_2);
        break;
      case 0x19:
        if (uVar9 < 0x10) {
          return 9;
        }
        uVar9 = *(uint *)(param_2 + 4);
        lVar11 = 0;
        if (uVar9 != 0) {
          pbVar10 = *(byte **)pbVar3;
          pbVar15 = pbVar3;
          if (*(byte **)pbVar3 == (byte *)0x0) {
            return 7;
          }
          do {
            while (pbVar14 = pbVar10, uVar9 <= *(uint *)(pbVar14 + 0x20)) {
              pbVar10 = *(byte **)pbVar14;
              pbVar15 = pbVar14;
              if (*(byte **)pbVar14 == (byte *)0x0) goto LAB_100345fe9;
            }
            pbVar1 = pbVar14 + 8;
            pbVar14 = pbVar15;
            pbVar10 = *(byte **)pbVar1;
          } while (*(byte **)pbVar1 != (byte *)0x0);
LAB_100345fe9:
          if (pbVar14 == pbVar3) {
            return 7;
          }
          if (uVar9 < *(uint *)(pbVar14 + 0x20)) {
            return 7;
          }
          lVar11 = *(long *)(pbVar14 + 0x28);
        }
        if (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 6)) {
          *(int *)(param_1 + 0x40) = *(int *)(param_2 + 6);
          *param_1 = *param_1 | 2;
        }
        if (*(long *)(param_1 + 0x38) != lVar11) {
          *(long *)(param_1 + 0x38) = lVar11;
          *param_1 = *param_1 | 2;
        }
        goto switchD_1003456d8_caseD_0;
      case 0x1a:
        if (uVar9 < 0xc) {
          return 9;
        }
        uVar9 = *(uint *)(param_2 + 4);
        lVar11 = 0;
        if (uVar9 != 0) {
          pbVar10 = *(byte **)pbVar4;
          pbVar15 = pbVar4;
          if (*(byte **)pbVar4 == (byte *)0x0) {
            return 7;
          }
          do {
            while (pbVar14 = pbVar10, uVar9 <= *(uint *)(pbVar14 + 0x20)) {
              pbVar10 = *(byte **)pbVar14;
              pbVar15 = pbVar14;
              if (*(byte **)pbVar14 == (byte *)0x0) goto LAB_10034602b;
            }
            pbVar1 = pbVar14 + 8;
            pbVar14 = pbVar15;
            pbVar10 = *(byte **)pbVar1;
          } while (*(byte **)pbVar1 != (byte *)0x0);
LAB_10034602b:
          if (pbVar14 == pbVar4) {
            return 7;
          }
          if (uVar9 < *(uint *)(pbVar14 + 0x20)) {
            return 7;
          }
          lVar11 = *(long *)(pbVar14 + 0x28);
        }
        if (*(long *)(param_1 + 0x48) != lVar11) {
          *(long *)(param_1 + 0x48) = lVar11;
          *param_1 = *param_1 | 4;
        }
        goto switchD_1003456d8_caseD_0;
      case 0x1b:
        uVar12 = FUN_100347420(param_1,param_2);
        break;
      case 0x1c:
        uVar12 = FUN_100347640(param_1,param_2);
        break;
      case 0x1d:
        uVar12 = FUN_1003477a0(param_1,param_2);
        break;
      case 0x1e:
        if (uVar9 < 0x1c) {
          return 9;
        }
        if (*(byte **)pbVar5 == (byte *)0x0) {
          return 7;
        }
        pbVar10 = *(byte **)pbVar5;
        pbVar15 = pbVar5;
        do {
          while (pbVar14 = pbVar10, *(uint *)(param_2 + 4) <= *(uint *)(pbVar14 + 0x20)) {
            pbVar10 = *(byte **)pbVar14;
            pbVar15 = pbVar14;
            if (*(byte **)pbVar14 == (byte *)0x0) goto LAB_100345ebf;
          }
          pbVar1 = pbVar14 + 8;
          pbVar14 = pbVar15;
          pbVar10 = *(byte **)pbVar1;
        } while (*(byte **)pbVar1 != (byte *)0x0);
LAB_100345ebf:
        if (pbVar14 == pbVar5) {
          return 7;
        }
        if (*(uint *)(param_2 + 4) < *(uint *)(pbVar14 + 0x20)) {
          return 7;
        }
        FUN_1003656d0(*(undefined8 *)(param_1 + 0x2778),param_1,*(undefined8 *)(pbVar14 + 0x28),
                      param_2 + 6,0,0);
        goto switchD_1003456d8_caseD_0;
      case 0x1f:
        if (uVar9 < 0x18) {
          return 9;
        }
        if (*(byte **)pbVar6 == (byte *)0x0) {
          return 7;
        }
        pbVar10 = *(byte **)pbVar6;
        pbVar15 = pbVar6;
        do {
          while (pbVar14 = pbVar10, *(uint *)(param_2 + 4) <= *(uint *)(pbVar14 + 0x20)) {
            pbVar10 = *(byte **)pbVar14;
            pbVar15 = pbVar14;
            if (*(byte **)pbVar14 == (byte *)0x0) goto LAB_100345ef3;
          }
          pbVar1 = pbVar14 + 8;
          pbVar14 = pbVar15;
          pbVar10 = *(byte **)pbVar1;
        } while (*(byte **)pbVar1 != (byte *)0x0);
LAB_100345ef3:
        if (pbVar14 == pbVar6) {
          return 7;
        }
        if (*(uint *)(param_2 + 4) < *(uint *)(pbVar14 + 0x20)) {
          return 7;
        }
        FUN_100365a60(*(undefined4 *)(param_2 + 8),*(undefined8 *)(param_1 + 0x2778),param_1,
                      *(undefined8 *)(pbVar14 + 0x28),*(undefined4 *)(param_2 + 6),
                      *(undefined1 *)(param_2 + 10));
        goto switchD_1003456d8_caseD_0;
      case 0x20:
        (*DAT_1011c5d48)();
        goto switchD_1003456d8_caseD_0;
      case 0x21:
        if (uVar9 < 0xc) {
          return 9;
        }
        uVar9 = *(uint *)(param_2 + 4);
        puVar13 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                            (ulong)((uVar9 >> 0xc ^ uVar9) & 0xfff ^ uVar9 >> 0x18) * 8);
        while( true ) {
          if (puVar13 == (uint *)0x0) {
            return 7;
          }
          if (*puVar13 == uVar9) break;
          puVar13 = *(uint **)(puVar13 + 4);
        }
        if (*(long *)(puVar13 + 2) == 0) {
          return 7;
        }
        if (*(char *)(*(long *)(*(long *)(puVar13 + 2) + 8) + 0xac) != '\0') {
          FUN_10035f3e0(*(undefined8 *)(param_1 + 0x2778));
        }
        goto switchD_1003456d8_caseD_0;
      case 0x22:
        uVar12 = FUN_100347b50(param_1,param_2);
        break;
      case 0x23:
        uVar12 = FUN_100348cc0(param_1,param_2);
        break;
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 99:
      case 100:
      case 0x65:
      case 0x69:
      case 0x6a:
        uVar12 = FUN_10034a9f0(param_1,param_2);
        break;
      case 0x28:
        uVar12 = FUN_10034b300(param_1,param_2);
        break;
      case 0x2a:
        uVar12 = FUN_10034b5a0(param_1,param_2);
        break;
      case 0x2b:
        uVar12 = FUN_10034b690(param_1,param_2);
        break;
      case 0x2c:
      case 0x68:
        uVar12 = FUN_10034b7c0(param_1,param_2);
        break;
      case 0x2d:
        uVar12 = FUN_10034bb00(param_1,param_2);
        break;
      case 0x2e:
        uVar12 = FUN_10034bc10(param_1,param_2);
        break;
      case 0x2f:
        uVar12 = FUN_10034bde0(param_1,param_2);
        break;
      case 0x30:
        uVar12 = FUN_10034bf50(param_1,param_2);
        break;
      case 0x31:
        uVar12 = FUN_10034c070(param_1,param_2);
        break;
      case 0x32:
        uVar12 = FUN_10034c1e0(param_1,param_2);
        break;
      case 0x33:
        uVar12 = FUN_10034c300(param_1,param_2);
        break;
      case 0x34:
      case 0x62:
        uVar12 = FUN_10034c410(param_1,param_2);
        break;
      case 0x35:
        uVar12 = FUN_10034c570(param_1,param_2);
        break;
      case 0x36:
        uVar12 = FUN_10034c680(param_1,param_2);
        break;
      case 0x37:
        uVar12 = FUN_10034cbd0(param_1,param_2);
        break;
      case 0x38:
      case 0x46:
        uVar12 = FUN_10034ce70(param_1,param_2);
        break;
      case 0x39:
        uVar12 = FUN_10034d0b0(param_1,param_2);
        break;
      case 0x3a:
        uVar12 = FUN_10034d220(param_1,param_2);
        break;
      case 0x3b:
        uVar12 = FUN_10034d3c0(param_1,param_2);
        break;
      case 0x3c:
        uVar12 = FUN_10034d510(param_1,param_2);
        break;
      case 0x3d:
        if (uVar9 < 0xc) {
          return 9;
        }
        if (*(byte **)pbVar7 == (byte *)0x0) {
          return 4;
        }
        pbVar10 = *(byte **)pbVar7;
        pbVar15 = pbVar7;
        do {
          while (pbVar14 = pbVar10, *(uint *)(param_2 + 4) <= *(uint *)(pbVar14 + 0x20)) {
            pbVar10 = *(byte **)pbVar14;
            pbVar15 = pbVar14;
            if (*(byte **)pbVar14 == (byte *)0x0) goto LAB_100345f2a;
          }
          pbVar1 = pbVar14 + 8;
          pbVar10 = *(byte **)pbVar1;
          pbVar14 = pbVar15;
        } while (*(byte **)pbVar1 != (byte *)0x0);
LAB_100345f2a:
        if (pbVar14 == pbVar7) {
          return 4;
        }
        if (*(uint *)(param_2 + 4) < *(uint *)(pbVar14 + 0x20)) {
          return 4;
        }
        if ((*(byte *)**(undefined8 **)(pbVar14 + 0x28) & 0x10) == 0) {
          FUN_10035bdc0(*(undefined8 *)(*(long *)(param_1 + 0x2778) + 8));
        }
        else {
          FUN_10035d2c0(*(undefined8 *)(*(long *)(param_1 + 0x2778) + 0xc0));
        }
        goto switchD_1003456d8_caseD_0;
      case 0x3e:
        uVar12 = FUN_10034d6d0(param_1,param_2);
        break;
      case 0x3f:
        uVar9 = *(uint *)(param_2 + 4);
        puVar13 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                            (ulong)((uVar9 >> 0xc ^ uVar9) & 0xfff ^ uVar9 >> 0x18) * 8);
        while( true ) {
          if (puVar13 == (uint *)0x0) {
            return 7;
          }
          if (*puVar13 == uVar9) break;
          puVar13 = *(uint **)(puVar13 + 4);
        }
        if (*(long *)(puVar13 + 2) == 0) {
          return 7;
        }
        lVar11 = *(long *)(*(long *)(puVar13 + 2) + 8);
        if (lVar11 == 0) {
          return 4;
        }
        lVar16 = *(long *)(param_1 + 0x2778);
        FUN_10035c440(*(undefined8 *)(lVar16 + 8),lVar11);
        FUN_10035d690(*(undefined8 *)(lVar16 + 0xc0),lVar11);
        goto switchD_1003456d8_caseD_0;
      case 0x40:
        uVar9 = *(uint *)(param_2 + 4);
        if (uVar9 == 0) {
          param_1[0x2760] = 0;
          param_1[0x2761] = 0;
          param_1[0x2762] = 0;
          param_1[0x2763] = 0;
          param_1[0x2764] = 0;
          param_1[0x2765] = 0;
          param_1[0x2766] = 0;
          param_1[0x2767] = 0;
          param_1[0x2768] = 0;
        }
        else {
          pbVar10 = *(byte **)pbVar7;
          pbVar15 = pbVar7;
          if (*(byte **)pbVar7 == (byte *)0x0) {
            return 4;
          }
          do {
            while (pbVar14 = pbVar10, uVar9 <= *(uint *)(pbVar14 + 0x20)) {
              pbVar10 = *(byte **)pbVar14;
              pbVar15 = pbVar14;
              if (*(byte **)pbVar14 == (byte *)0x0) goto LAB_100345f64;
            }
            pbVar1 = pbVar14 + 8;
            pbVar14 = pbVar15;
            pbVar10 = *(byte **)pbVar1;
          } while (*(byte **)pbVar1 != (byte *)0x0);
LAB_100345f64:
          if (pbVar14 == pbVar7) {
            return 4;
          }
          if (uVar9 < *(uint *)(pbVar14 + 0x20)) {
            return 4;
          }
          uVar9 = *(uint *)**(undefined8 **)(pbVar14 + 0x28);
          if (0x12 < uVar9) {
            return 4;
          }
          if ((0x40030U >> (uVar9 & 0x1f) & 1) == 0) {
            return 4;
          }
          iVar8 = *(int *)(param_2 + 6);
          *(undefined8 **)(param_1 + 0x2760) = *(undefined8 **)(pbVar14 + 0x28);
          param_1[0x2768] = iVar8 != 0;
        }
        goto switchD_1003456d8_caseD_0;
      case 0x41:
        uVar12 = FUN_10034c860(param_1,param_2);
        break;
      case 0x42:
        uVar12 = FUN_10034d8c0(param_1,param_2);
        break;
      case 0x43:
        uVar12 = FUN_10034e1f0(param_1,param_2);
        break;
      case 0x44:
        if (uVar9 < 0x18) {
          return 9;
        }
        uVar9 = *(uint *)(param_2 + 4);
        puVar13 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                            (ulong)((uVar9 >> 0xc ^ uVar9) & 0xfff ^ uVar9 >> 0x18) * 8);
        while( true ) {
          if (puVar13 == (uint *)0x0) {
            return 7;
          }
          if (*puVar13 == uVar9) break;
          puVar13 = *(uint **)(puVar13 + 4);
        }
        if (*(long *)(puVar13 + 2) == 0) {
          return 7;
        }
        lVar11 = *(long *)(*(long *)(puVar13 + 2) + 8);
        lVar16 = 0x1000;
        if (*(int *)(param_2 + 6) != 5) {
          lVar16 = (ulong)(*(int *)(param_2 + 6) == 4) << 0xd;
        }
        (**(code **)(**(long **)(param_1 + 0x2778) + 0x20))
                  (*(long **)(param_1 + 0x2778),lVar11,
                   **(int **)(lVar11 + 0x28) + *(int *)(param_2 + 8),*(int *)(param_2 + 8),
                   *(undefined4 *)(param_2 + 10),lVar16);
        goto switchD_1003456d8_caseD_0;
      case 0x45:
        uVar12 = FUN_10034ea10(param_1,param_2);
        break;
      case 0x4e:
        uVar12 = FUN_10034eb60(param_1,param_2);
        break;
      case 0x4f:
        uVar12 = FUN_10034ed00(param_1,param_2);
        break;
      case 0x59:
      case 0x61:
        uVar12 = FUN_10034eed0(param_1,param_2);
        break;
      case 0x5a:
        if (uVar9 < 0x14) {
          return 9;
        }
        goto switchD_1003456d8_caseD_0;
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
        uVar12 = FUN_100346df0(param_1,param_2);
        break;
      case 0x66:
      case 0x67:
        uVar12 = FUN_10034f0f0(param_1,param_2);
        break;
      case 0x6b:
        uVar12 = FUN_10034f210(param_1,param_2);
      }
      if ((int)uVar12 != 0) {
        return uVar12;
      }
switchD_1003456d8_caseD_0:
      puVar13 = (uint *)(param_2 + 2);
      param_2 = (undefined2 *)((long)param_2 + (ulong)*puVar13);
      param_3 = param_3 - *puVar13;
    } while (param_3 != 0);
  }
  uVar12 = 0;
switchD_1003456d8_caseD_3:
  return uVar12;
}

