
undefined8 FUN_1007451b0(byte *param_1,uint param_2,void *param_3,uint *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  byte bVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  size_t sVar20;
  uint uVar21;
  long lVar22;
  void *pvVar23;
  long *plVar24;
  byte bVar25;
  long *plVar26;
  ulong uVar27;
  void *pvVar28;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
  long *plVar32;
  byte *pbVar33;
  
  pbVar31 = param_1 + param_2;
  uVar13 = *param_4;
  lVar7 = *param_5;
  plVar24 = param_5 + 0x400;
  plVar1 = param_5 + 0x200;
  cVar11 = -1;
  iVar12 = 0;
  plVar32 = param_5;
  pvVar28 = param_3;
  while (param_1 < pbVar31) {
    bVar25 = *param_1;
    if ((bVar25 & 0x80) == 0) {
      bVar25 = bVar25 + 1;
      uVar16 = (int)pbVar31 - (int)(param_1 + 1);
      uVar19 = (ulong)bVar25;
      if (uVar16 < bVar25) {
        return 0xffffffff;
      }
      if ((uVar16 < 0x10) || (0x10 < bVar25)) {
        _memcpy(plVar32,param_1 + 1,uVar19);
      }
      else {
        *plVar32 = *(long *)(param_1 + 1);
        plVar32[1] = *(long *)(param_1 + 9);
      }
      pbVar33 = param_1 + uVar19 + 1;
      plVar32 = (long *)((long)plVar32 + uVar19);
    }
    else {
      uVar16 = bVar25 >> 4 & 7;
      if (uVar16 == 7) {
        pbVar33 = param_1 + 3;
        if (pbVar31 < pbVar33) {
          return 0xffffffff;
        }
        bVar5 = param_1[2];
        uVar21 = (uint)param_1[1] | (bVar25 & 0xf) << 8;
        uVar16 = uVar21 + 1;
        uVar19 = (ulong)uVar16;
        plVar26 = (long *)((long)plVar32 - uVar19);
        if (plVar26 < param_5) {
          return 0xffffffff;
        }
        iVar17 = bVar5 + 3;
        if (3 < uVar16) {
          plVar15 = plVar32;
          if ((bVar5 + 3 & 7) != 0) {
            lVar22 = -(ulong)(uVar21 + 1);
            iVar18 = -((byte)(bVar5 + 3) & 7);
            plVar26 = plVar32;
            do {
              plVar15 = plVar26;
              *(undefined4 *)plVar15 = *(undefined4 *)(lVar22 + (long)plVar15);
              iVar17 = iVar17 + -1;
              iVar18 = iVar18 + 1;
              plVar26 = (long *)((long)plVar15 + 4);
            } while (iVar18 != 0);
            plVar26 = (long *)((long)plVar15 + lVar22 + 4);
            plVar15 = (long *)((long)plVar15 + 4);
          }
          if (6 < bVar5 + 2) {
            do {
              *(int *)plVar15 = (int)*plVar26;
              *(undefined4 *)((long)plVar15 + 4) = *(undefined4 *)((long)plVar26 + 4);
              *(int *)(plVar15 + 1) = (int)plVar26[1];
              *(undefined4 *)((long)plVar15 + 0xc) = *(undefined4 *)((long)plVar26 + 0xc);
              *(int *)(plVar15 + 2) = (int)plVar26[2];
              *(undefined4 *)((long)plVar15 + 0x14) = *(undefined4 *)((long)plVar26 + 0x14);
              *(int *)(plVar15 + 3) = (int)plVar26[3];
              *(undefined4 *)((long)plVar15 + 0x1c) = *(undefined4 *)((long)plVar26 + 0x1c);
              plVar26 = plVar26 + 4;
              plVar15 = plVar15 + 4;
              iVar17 = iVar17 + -8;
            } while (iVar17 != 0);
          }
          plVar32 = (long *)((ulong)bVar5 * 4 + 0xc + (long)plVar32);
          goto LAB_100745510;
        }
        uVar16 = iVar17 * 4;
      }
      else {
        pbVar33 = param_1 + 2;
        if (pbVar31 < pbVar33) {
          return 0xffffffff;
        }
        uVar19 = (ulong)(((uint)param_1[1] | (bVar25 & 0xf) << 8) + 1);
        if ((long *)((long)plVar32 - uVar19) < param_5) {
          return 0xffffffff;
        }
        uVar16 = uVar16 + 4;
      }
      lVar22 = -uVar19;
      uVar29 = (ulong)(uVar16 - 1);
      uVar30 = uVar29 + 1 & 0x1ffffffe0;
      if ((uVar30 == 0) ||
         ((plVar32 <= (long *)((uVar29 - uVar19) + (long)plVar32) &&
          ((undefined1 *)((long)plVar32 - uVar19) <= (undefined1 *)((long)plVar32 + uVar29))))) {
        uVar30 = 0;
        plVar26 = plVar32;
      }
      else {
        lVar22 = uVar30 - uVar19;
        uVar16 = uVar16 - (int)uVar30;
        plVar26 = (long *)((long)plVar32 + uVar30);
        plVar15 = plVar32 + 2;
        uVar27 = uVar29 + 1 & 0xffffffffffffffe0;
        do {
          plVar4 = (long *)(-uVar19 + -0x10 + (long)plVar15);
          lVar8 = plVar4[1];
          plVar2 = (long *)(-uVar19 + (long)plVar15);
          lVar9 = *plVar2;
          lVar10 = plVar2[1];
          plVar15[-2] = *plVar4;
          plVar15[-1] = lVar8;
          *plVar15 = lVar9;
          plVar15[1] = lVar10;
          plVar15 = plVar15 + 4;
          uVar27 = uVar27 - 0x20;
        } while (uVar27 != 0);
      }
      puVar14 = (undefined1 *)((long)plVar32 + lVar22);
      if (uVar29 + 1 != uVar30) {
        uVar21 = uVar16 - 1;
        if ((uVar16 & 7) != 0) {
          iVar17 = -(uVar16 & 7);
          do {
            uVar6 = *puVar14;
            puVar14 = puVar14 + 1;
            *(undefined1 *)plVar26 = uVar6;
            plVar26 = (long *)((long)plVar26 + 1);
            uVar16 = uVar16 - 1;
            iVar17 = iVar17 + 1;
          } while (iVar17 != 0);
        }
        if (6 < uVar21) {
          do {
            *(undefined1 *)plVar26 = *puVar14;
            *(undefined1 *)((long)plVar26 + 1) = puVar14[1];
            *(undefined1 *)((long)plVar26 + 2) = puVar14[2];
            *(undefined1 *)((long)plVar26 + 3) = puVar14[3];
            *(undefined1 *)((long)plVar26 + 4) = puVar14[4];
            *(undefined1 *)((long)plVar26 + 5) = puVar14[5];
            *(undefined1 *)((long)plVar26 + 6) = puVar14[6];
            *(undefined1 *)((long)plVar26 + 7) = puVar14[7];
            puVar14 = puVar14 + 8;
            plVar26 = plVar26 + 1;
            uVar16 = uVar16 - 8;
          } while (uVar16 != 0);
        }
      }
      plVar32 = (long *)(uVar29 + 1 + (long)plVar32);
    }
LAB_100745510:
    param_1 = pbVar33;
    if (plVar24 <= plVar32) {
      if ((void *)((ulong)uVar13 + (long)param_3) < (void *)((long)pvVar28 + 0x1000U)) {
        return 0xfffffffe;
      }
      plVar26 = plVar1;
      if (cVar11 < '\0') {
        uVar16 = 0;
        plVar15 = param_5;
        do {
          if (((((((plVar15[1] != 0 || *plVar15 != 0) || plVar15[2] != 0) || plVar15[3] != 0) ||
                plVar15[4] != 0) || plVar15[5] != 0) || plVar15[6] != 0) || plVar15[7] != 0) {
            uVar19 = (ulong)(uint)((int)plVar1 - (int)plVar15);
            _memcpy((void *)((long)pvVar28 + (0x1000 - uVar19)),plVar15,uVar19);
            uVar16 = 0;
            goto LAB_100745620;
          }
          plVar15 = plVar15 + 8;
          uVar16 = uVar16 + 1;
        } while (uVar16 < 0x40);
LAB_10074559c:
        iVar12 = iVar12 + 1;
        uVar16 = 0;
        if (lVar7 != 0) {
          uVar19 = ((ulong)((long)pvVar28 - (long)param_3 >> 0x3f) >> 0x34) +
                   ((long)pvVar28 - (long)param_3);
          puVar3 = (uint *)(lVar7 + ((long)uVar19 >> 0x11) * 4);
          *puVar3 = *puVar3 | 1 << ((byte)(uVar19 >> 0xc) & 0x1f);
        }
        do {
          if (((((((plVar26[1] != 0 || *plVar26 != 0) || plVar26[2] != 0) || plVar26[3] != 0) ||
                plVar26[4] != 0) || plVar26[5] != 0) || plVar26[6] != 0) || plVar26[7] != 0) {
            uVar19 = (ulong)(uint)((int)plVar24 - (int)plVar26);
            _memcpy((undefined1 *)((0x1000 - uVar19) + (long)param_5),plVar26,uVar19);
            cVar11 = '\x01';
            goto LAB_100745210;
          }
          uVar16 = uVar16 + 1;
          plVar26 = plVar26 + 8;
        } while (uVar16 < 0x40);
        cVar11 = '\0';
      }
      else {
        if (cVar11 == '\0') goto LAB_10074559c;
        _memcpy(pvVar28,param_5,0x1000);
        uVar16 = 0;
LAB_100745620:
        do {
          plVar26[-0x200] = *plVar26;
          plVar26[-0x1ff] = plVar26[1];
          plVar26[-0x1fe] = plVar26[2];
          plVar26[-0x1fd] = plVar26[3];
          plVar26[-0x1fc] = plVar26[4];
          plVar26[-0x1fb] = plVar26[5];
          plVar26[-0x1fa] = plVar26[6];
          plVar26[-0x1f9] = plVar26[7];
          if (((((((plVar26[1] != 0 || *plVar26 != 0) || plVar26[2] != 0) || plVar26[3] != 0) ||
                plVar26[4] != 0) || plVar26[5] != 0) || plVar26[6] != 0) || plVar26[7] != 0) {
            _memcpy(plVar26 + -0x200,plVar26,(long)plVar1 - (long)(plVar26 + -0x200));
            cVar11 = '\x01';
            goto LAB_100745210;
          }
          uVar16 = uVar16 + 1;
          plVar26 = plVar26 + 8;
        } while (uVar16 < 0x40);
        cVar11 = '\0';
      }
LAB_100745210:
      _memcpy(plVar1,plVar24,(long)plVar32 - (long)plVar24);
      plVar32 = plVar32 + -0x200;
      pvVar28 = (void *)((long)pvVar28 + 0x1000U);
    }
  }
  pvVar23 = pvVar28;
  if (param_5 < plVar32) {
    if (plVar32 != plVar1) {
      return 0xffffffff;
    }
    pvVar23 = (void *)((long)pvVar28 + 0x1000);
    if ((void *)((ulong)uVar13 + (long)param_3) < pvVar23) {
      return 0xfffffffe;
    }
    plVar24 = param_5;
    if (cVar11 < '\0') {
      uVar13 = 0;
      do {
        if (((((((plVar24[1] != 0 || *plVar24 != 0) || plVar24[2] != 0) || plVar24[3] != 0) ||
              plVar24[4] != 0) || plVar24[5] != 0) || plVar24[6] != 0) || plVar24[7] != 0) {
          sVar20 = (size_t)(uint)((int)plVar1 - (int)plVar24);
          pvVar28 = (void *)((long)pvVar28 + (0x1000 - sVar20));
          goto LAB_100745862;
        }
        plVar24 = plVar24 + 8;
        uVar13 = uVar13 + 1;
      } while (uVar13 < 0x40);
    }
    else if (cVar11 != '\0') {
      sVar20 = 0x1000;
LAB_100745862:
      _memcpy(pvVar28,plVar24,sVar20);
      goto LAB_1007457a6;
    }
    iVar12 = iVar12 + 1;
    if (lVar7 != 0) {
      uVar19 = ((ulong)((long)pvVar28 - (long)param_3 >> 0x3f) >> 0x34) +
               ((long)pvVar28 - (long)param_3);
      puVar3 = (uint *)(lVar7 + ((long)uVar19 >> 0x11) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)(uVar19 >> 0xc) & 0x1f);
    }
  }
LAB_1007457a6:
  *param_5 = lVar7;
  *(int *)(param_5 + 1) = iVar12;
  *param_4 = (int)pvVar23 - (int)param_3;
  return 0;
}

