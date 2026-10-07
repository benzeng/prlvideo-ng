
undefined8 FUN_1003c6c40(int *param_1,uint *param_2,long param_3,uint *param_4)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  void *pvVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  void *pvVar28;
  long lVar29;
  
  iVar10 = *param_1;
  uVar12 = 0;
  switch(iVar10) {
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
    uVar19 = param_2[1];
    uVar27 = param_2[3];
    uVar11 = param_1[3];
    uVar3 = (ulong)uVar11;
    uVar22 = *(uint *)(param_3 + 0xc);
    uVar13 = (ulong)uVar22;
    iVar10 = uVar27 - uVar19;
    uVar15 = ((param_2[2] + 1 >> 1) - (*param_2 >> 1)) * 4;
    uVar5 = (ulong)(uVar11 * uVar19 + (*param_2 >> 1) * 4);
    pvVar28 = (void *)(*(long *)(param_1 + 4) + uVar5);
    uVar4 = (ulong)(param_4[1] * uVar22 + (*param_4 & 0x7ffffffe) * 2);
    pvVar8 = (void *)(*(long *)(param_3 + 0x10) + uVar4);
    uVar12 = 1;
    if (pvVar8 < pvVar28) {
      uVar11 = uVar27 - uVar19;
      if (uVar11 != 0) {
        uVar4 = (ulong)uVar15;
        if ((uVar11 & 3) != 0) {
          iVar16 = -(uVar11 & 3);
          do {
            iVar10 = iVar10 + -1;
            _memcpy(pvVar8,pvVar28,uVar4);
            pvVar8 = (void *)((long)pvVar8 + uVar13);
            pvVar28 = (void *)((long)pvVar28 + uVar3);
            iVar16 = iVar16 + 1;
          } while (iVar16 != 0);
        }
        if ((uVar27 - 1) - uVar19 < 3) {
          uVar12 = 1;
        }
        else {
          do {
            _memcpy(pvVar8,pvVar28,uVar4);
            _memcpy((void *)((long)pvVar8 + uVar13),(void *)((long)pvVar28 + uVar3),uVar4);
            pvVar8 = (void *)((long)((long)pvVar8 + uVar13) + uVar13);
            pvVar28 = (void *)((long)((long)pvVar28 + uVar3) + uVar3);
            _memcpy(pvVar8,pvVar28,uVar4);
            pvVar8 = (void *)((long)pvVar8 + uVar13);
            pvVar28 = (void *)((long)pvVar28 + uVar3);
            _memcpy(pvVar8,pvVar28,uVar4);
            pvVar8 = (void *)((long)pvVar8 + uVar13);
            pvVar28 = (void *)((long)pvVar28 + uVar3);
            iVar10 = iVar10 + -4;
          } while (iVar10 != 0);
          uVar12 = 1;
        }
      }
    }
    else {
      uVar7 = uVar27 - uVar19;
      if (uVar7 != 0) {
        pvVar28 = (void *)(*(long *)(param_3 + 0x10) + uVar4 + uVar22 * iVar10);
        pvVar8 = (void *)(*(long *)(param_1 + 4) + uVar5 + uVar11 * iVar10);
        uVar4 = (ulong)uVar15;
        if ((uVar7 & 3) != 0) {
          iVar10 = 0;
          do {
            pvVar28 = (void *)((long)pvVar28 + -uVar13);
            pvVar8 = (void *)((long)pvVar8 + -uVar3);
            _memmove(pvVar28,pvVar8,uVar4);
            iVar10 = iVar10 + -1;
          } while (-(uVar7 & 3) != iVar10);
          iVar10 = uVar7 + iVar10;
        }
        uVar12 = 1;
        if (2 < (uVar27 - 1) - uVar19) {
          do {
            pvVar1 = (void *)((long)pvVar28 + -uVar13);
            pvVar2 = (void *)((long)pvVar8 + -uVar3);
            _memmove(pvVar1,pvVar2,uVar4);
            _memmove((void *)((long)pvVar28 + uVar13 * -2),(void *)((long)pvVar8 + uVar3 * -2),uVar4
                    );
            _memmove((void *)((long)pvVar28 + uVar13 * -3),(void *)((long)pvVar8 + uVar3 * -3),uVar4
                    );
            _memmove((void *)((long)pvVar28 + uVar13 * -4),(void *)((long)pvVar8 + uVar3 * -4),uVar4
                    );
            iVar10 = iVar10 + -4;
            pvVar28 = (void *)((long)pvVar1 + uVar13 * -3);
            pvVar8 = (void *)((long)pvVar2 + uVar3 * -3);
          } while (iVar10 != 0);
          uVar12 = 1;
        }
      }
    }
    break;
  case 0x57:
  case 0x58:
  case 0x59:
    lVar29 = *(long *)(param_1 + 4);
    lVar26 = *(long *)(param_3 + 0x10);
    uVar23 = *param_2 >> 1;
    uVar19 = param_2[2];
    uVar15 = param_2[1] >> 1;
    uVar20 = param_2[3] + 1 >> 1;
    uVar27 = *param_4;
    uVar11 = param_4[1];
    FUN_1003c7cd0(lVar29,param_1[3],param_2,lVar26,*(undefined4 *)(param_3 + 0xc),param_4,1);
    uVar18 = (ulong)(uint)(param_1[2] * param_1[3]);
    uVar5 = (ulong)(uint)(*(int *)(param_3 + 0xc) * *(int *)(param_3 + 8));
    uVar22 = (uint)param_1[1] >> 1;
    uVar3 = (ulong)uVar22;
    uVar7 = *(uint *)(param_3 + 4) >> 1;
    uVar14 = (ulong)uVar7;
    iVar10 = uVar20 - uVar15;
    uVar19 = (uVar19 + 1 >> 1) - uVar23;
    uVar4 = (ulong)(uVar22 * uVar15 + uVar23);
    pvVar8 = (void *)(uVar4 + uVar18 + lVar29);
    uVar13 = (ulong)(uVar7 * (uVar11 >> 1) + (uVar27 >> 1));
    pvVar28 = (void *)(uVar13 + uVar5 + lVar26);
    if (pvVar28 < pvVar8) {
      uVar22 = uVar20 - uVar15;
      if (uVar22 != 0) {
        uVar4 = (ulong)uVar19;
        iVar16 = iVar10;
        if ((uVar22 & 3) != 0) {
          iVar21 = -(uVar22 & 3);
          do {
            iVar16 = iVar16 + -1;
            _memcpy(pvVar28,pvVar8,uVar4);
            pvVar28 = (void *)((long)pvVar28 + (ulong)uVar7);
            pvVar8 = (void *)((long)pvVar8 + uVar3);
            iVar21 = iVar21 + 1;
          } while (iVar21 != 0);
        }
        if (2 < (uVar20 - 1) - uVar15) {
          do {
            _memcpy(pvVar28,pvVar8,uVar4);
            _memcpy((void *)((long)pvVar28 + uVar14),(void *)((long)pvVar8 + uVar3),uVar4);
            _memcpy((void *)((long)pvVar28 + uVar14 * 2),(void *)((long)pvVar8 + uVar3 * 2),uVar4);
            _memcpy((void *)((long)pvVar28 + uVar14 * 3),(void *)((long)pvVar8 + uVar3 * 3),uVar4);
            iVar16 = iVar16 + -4;
            pvVar28 = (void *)((long)pvVar28 + (ulong)uVar7 * 4);
            pvVar8 = (void *)((long)pvVar8 + uVar3 * 4);
          } while (iVar16 != 0);
        }
      }
    }
    else {
      uVar17 = uVar20 - uVar15;
      if (uVar17 != 0) {
        lVar6 = uVar7 * iVar10 + uVar5 + uVar13 + lVar26;
        lVar24 = uVar22 * iVar10 + uVar18 + uVar4 + lVar29;
        uVar4 = (ulong)uVar19;
        iVar16 = iVar10;
        if ((uVar17 & 3) != 0) {
          iVar16 = 0;
          lVar9 = lVar6;
          lVar25 = lVar24;
          do {
            lVar24 = lVar25 - (ulong)uVar22;
            lVar6 = lVar9 - (ulong)uVar7;
            _memmove((void *)(lVar9 - uVar14),(void *)(lVar25 - uVar3),uVar4);
            iVar16 = iVar16 + -1;
            lVar9 = lVar6;
            lVar25 = lVar24;
          } while (-(uVar17 & 3) != iVar16);
          iVar16 = uVar17 + iVar16;
        }
        if (2 < (uVar20 - 1) - uVar15) {
          do {
            _memmove((void *)(lVar6 - uVar14),(void *)(lVar24 - uVar3),uVar4);
            _memmove((void *)(lVar6 + uVar14 * -2),(void *)(lVar24 + uVar3 * -2),uVar4);
            _memmove((void *)(lVar6 + uVar14 * -3),(void *)(lVar24 + uVar3 * -3),uVar4);
            _memmove((void *)(lVar6 + uVar14 * -4),(void *)(lVar24 + uVar3 * -4),uVar4);
            iVar16 = iVar16 + -4;
            lVar6 = lVar6 + (ulong)uVar7 * -4;
            lVar24 = lVar24 + (ulong)uVar22 * -4;
          } while (iVar16 != 0);
        }
      }
    }
    uVar7 = (uint)param_1[1] >> 1;
    uVar13 = (ulong)uVar7;
    uVar14 = (ulong)(((uint)param_1[2] >> 1) * uVar7);
    lVar24 = uVar14 + uVar18;
    uVar22 = *(uint *)(param_3 + 4) >> 1;
    uVar3 = (ulong)uVar22;
    lVar6 = (*(uint *)(param_3 + 8) >> 1) * uVar22 + uVar5;
    uVar4 = (ulong)(uVar7 * uVar15 + uVar23);
    pvVar8 = (void *)(lVar24 + uVar4 + lVar29);
    uVar5 = (ulong)((uVar11 >> 1) * uVar22 + (uVar27 >> 1));
    pvVar28 = (void *)(lVar6 + uVar5 + lVar26);
    if (pvVar28 < pvVar8) {
      uVar27 = uVar20 - uVar15;
      if (uVar27 == 0) {
        uVar12 = 1;
      }
      else {
        uVar4 = (ulong)uVar19;
        if ((uVar27 & 3) != 0) {
          iVar16 = -(uVar27 & 3);
          do {
            iVar10 = iVar10 + -1;
            _memcpy(pvVar28,pvVar8,uVar4);
            pvVar28 = (void *)((long)pvVar28 + (ulong)uVar22);
            pvVar8 = (void *)((long)pvVar8 + uVar13);
            iVar16 = iVar16 + 1;
          } while (iVar16 != 0);
        }
        if ((uVar20 - 1) - uVar15 < 3) {
          uVar12 = 1;
        }
        else {
          do {
            _memcpy(pvVar28,pvVar8,uVar4);
            _memcpy((void *)((long)pvVar28 + uVar3),(void *)((long)pvVar8 + uVar13),uVar4);
            _memcpy((void *)((long)pvVar28 + uVar3 * 2),(void *)((long)pvVar8 + uVar13 * 2),uVar4);
            _memcpy((void *)((long)pvVar28 + uVar3 * 3),(void *)((long)pvVar8 + uVar13 * 3),uVar4);
            iVar10 = iVar10 + -4;
            pvVar28 = (void *)((long)pvVar28 + (ulong)uVar22 * 4);
            pvVar8 = (void *)((long)pvVar8 + uVar13 * 4);
          } while (iVar10 != 0);
          uVar12 = 1;
        }
      }
    }
    else {
      uVar12 = 1;
      uVar27 = uVar20 - uVar15;
      if (uVar27 != 0) {
        lVar26 = lVar26 + uVar5 + uVar22 * iVar10 + lVar6;
        uVar5 = (ulong)uVar19;
        if ((uVar27 & 3) == 0) {
          lVar29 = lVar29 + uVar7 * iVar10 + uVar4 + lVar24;
        }
        else {
          lVar29 = lVar29 + (ulong)(uVar7 * uVar27) + uVar14 + uVar18;
          iVar10 = 0;
          lVar24 = lVar26;
          do {
            lVar26 = lVar24 - uVar3;
            _memmove((void *)(lVar24 - uVar3),(void *)(lVar29 + (uVar4 - uVar13)),uVar5);
            lVar29 = lVar29 - uVar13;
            iVar10 = iVar10 + -1;
            lVar24 = lVar26;
          } while (-(uVar27 & 3) != iVar10);
          lVar29 = lVar29 + uVar4;
          iVar10 = uVar27 + iVar10;
        }
        if ((uVar20 - 1) - uVar15 < 3) {
          uVar12 = 1;
        }
        else {
          do {
            _memmove((void *)(lVar26 - uVar3),(void *)(lVar29 - uVar13),uVar5);
            _memmove((void *)(lVar26 + uVar3 * -2),(void *)(lVar29 + uVar13 * -2),uVar5);
            _memmove((void *)(lVar26 + uVar3 * -3),(void *)(lVar29 + uVar13 * -3),uVar5);
            _memmove((void *)(lVar26 + uVar3 * -4),(void *)(lVar29 + uVar13 * -4),uVar5);
            iVar10 = iVar10 + -4;
            lVar29 = lVar29 + (ulong)uVar7 * -4;
            lVar26 = lVar26 + uVar3 * -4;
          } while (iVar10 != 0);
          uVar12 = 1;
        }
      }
    }
    break;
  case 0x5b:
    uVar12 = FUN_1003c7cd0(*(undefined8 *)(param_1 + 4),param_1[3],param_2,
                           *(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0xc),param_4,4)
    ;
    return uVar12;
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
    uVar22 = param_2[1] >> 2;
    uVar11 = param_2[3] + 3 >> 2;
    uVar19 = param_1[3];
    uVar3 = (ulong)uVar19;
    uVar27 = *(uint *)(param_3 + 0xc);
    uVar4 = (ulong)uVar27;
    if ((0x25 < iVar10 - 0x65U) ||
       (iVar16 = 8, (0x2400000043U >> ((ulong)(iVar10 - 0x65U) & 0x3f) & 1) == 0)) {
      iVar16 = (uint)(iVar10 != 0x6c) * 8 + 8;
    }
    iVar10 = uVar11 - uVar22;
    uVar15 = ((param_2[2] + 3 >> 2) - (*param_2 >> 2)) * iVar16;
    uVar13 = (ulong)((*param_2 >> 2) * iVar16 + uVar19 * uVar22);
    pvVar28 = (void *)(*(long *)(param_1 + 4) + uVar13);
    uVar5 = (ulong)((*param_4 >> 2) * iVar16 + (param_4[1] >> 2) * uVar27);
    pvVar8 = (void *)(*(long *)(param_3 + 0x10) + uVar5);
    if (pvVar8 < pvVar28) {
      uVar12 = 1;
      uVar19 = uVar11 - uVar22;
      if (uVar19 != 0) {
        uVar5 = (ulong)uVar15;
        if ((uVar19 & 3) != 0) {
          iVar16 = -(uVar19 & 3);
          do {
            iVar10 = iVar10 + -1;
            _memcpy(pvVar8,pvVar28,uVar5);
            pvVar8 = (void *)((long)pvVar8 + uVar4);
            pvVar28 = (void *)((long)pvVar28 + uVar3);
            iVar16 = iVar16 + 1;
          } while (iVar16 != 0);
        }
        if ((uVar11 - 1) - uVar22 < 3) {
          uVar12 = 1;
        }
        else {
          do {
            _memcpy(pvVar8,pvVar28,uVar5);
            _memcpy((void *)((long)pvVar8 + uVar4),(void *)((long)pvVar28 + uVar3),uVar5);
            pvVar8 = (void *)((long)((long)pvVar8 + uVar4) + uVar4);
            pvVar28 = (void *)((long)((long)pvVar28 + uVar3) + uVar3);
            _memcpy(pvVar8,pvVar28,uVar5);
            pvVar8 = (void *)((long)pvVar8 + uVar4);
            pvVar28 = (void *)((long)pvVar28 + uVar3);
            _memcpy(pvVar8,pvVar28,uVar5);
            pvVar8 = (void *)((long)pvVar8 + uVar4);
            pvVar28 = (void *)((long)pvVar28 + uVar3);
            iVar10 = iVar10 + -4;
          } while (iVar10 != 0);
          uVar12 = 1;
        }
      }
    }
    else {
      uVar7 = uVar11 - uVar22;
      if (uVar7 == 0) {
        uVar12 = 1;
      }
      else {
        pvVar28 = (void *)(*(long *)(param_3 + 0x10) + uVar5 + uVar27 * iVar10);
        pvVar8 = (void *)(*(long *)(param_1 + 4) + uVar13 + uVar19 * iVar10);
        uVar5 = (ulong)uVar15;
        if ((uVar7 & 3) != 0) {
          iVar10 = 0;
          do {
            pvVar28 = (void *)((long)pvVar28 + -uVar4);
            pvVar8 = (void *)((long)pvVar8 + -uVar3);
            _memmove(pvVar28,pvVar8,uVar5);
            iVar10 = iVar10 + -1;
          } while (-(uVar7 & 3) != iVar10);
          iVar10 = uVar7 + iVar10;
        }
        uVar12 = 1;
        if (2 < (uVar11 - 1) - uVar22) {
          do {
            pvVar1 = (void *)((long)pvVar28 + -uVar4);
            pvVar2 = (void *)((long)pvVar8 + -uVar3);
            _memmove(pvVar1,pvVar2,uVar5);
            _memmove((void *)((long)pvVar28 + uVar4 * -2),(void *)((long)pvVar8 + uVar3 * -2),uVar5)
            ;
            _memmove((void *)((long)pvVar28 + uVar4 * -3),(void *)((long)pvVar8 + uVar3 * -3),uVar5)
            ;
            _memmove((void *)((long)pvVar28 + uVar4 * -4),(void *)((long)pvVar8 + uVar3 * -4),uVar5)
            ;
            iVar10 = iVar10 + -4;
            pvVar28 = (void *)((long)pvVar1 + uVar4 * -3);
            pvVar8 = (void *)((long)pvVar2 + uVar3 * -3);
          } while (iVar10 != 0);
          uVar12 = 1;
        }
      }
    }
  }
  return uVar12;
}

