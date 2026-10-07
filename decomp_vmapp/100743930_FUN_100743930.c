
undefined8 FUN_100743930(uint *param_1,uint param_2,long *param_3,uint *param_4,long *param_5)

{
  uint uVar1;
  ushort *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  ushort uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char cVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 *puVar26;
  long *plVar27;
  ulong uVar28;
  ushort uVar29;
  long *plVar30;
  size_t sVar31;
  long *plVar32;
  long *plVar33;
  undefined1 *puVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  ulong uVar41;
  long *plVar42;
  ulong uVar43;
  long lVar44;
  ulong uVar45;
  
  plVar32 = (long *)((ulong)*param_4 + (long)param_3);
  iVar19 = 0;
  lVar23 = 0;
  plVar37 = param_3;
  plVar27 = plVar32;
  if (param_5 != (long *)0x0) {
    lVar23 = *param_5;
    plVar27 = param_5 + 0x600;
    plVar37 = param_5;
  }
  plVar36 = param_3;
  if (param_2 != 0) {
    puVar8 = (uint *)(((ulong)param_2 - 1) + (long)param_1);
    plVar3 = param_5 + 0x400;
    plVar4 = param_5 + 0x200;
    iVar19 = 0;
    cVar18 = -1;
    uVar22 = 0;
    uVar20 = 0;
    plVar33 = plVar37;
LAB_1007439f0:
    do {
      uVar20 = uVar20 * 2;
      if (uVar20 == 0) {
        uVar22 = *param_1;
        param_1 = param_1 + 1;
        uVar20 = 1;
      }
      if ((uVar22 & uVar20) == 0) {
        if (plVar27 <= plVar33) {
          return 0xffffffff;
        }
        if (puVar8 < param_1) {
          return 0xffffffff;
        }
        uVar39 = *param_1;
        param_1 = (uint *)((long)param_1 + 1);
        *(char *)plVar33 = (char)uVar39;
        plVar30 = (long *)((long)plVar33 + 1);
      }
      else {
        uVar12 = (ushort)*param_1;
        if (uVar12 < 0xf000) {
          if (puVar8 <= param_1) {
            return 0xffffffff;
          }
          uVar29 = (uVar12 & 0xfff) + 1;
          uVar24 = (ulong)((uVar12 >> 0xc) + 3);
          param_1 = (uint *)((long)param_1 + 2);
          uVar28 = 0;
        }
        else {
          if (puVar8 <= (uint *)((long)param_1 + 1U)) {
            return 0xffffffff;
          }
          uVar29 = (uVar12 & 0xfff) + 1;
          puVar2 = (ushort *)((long)param_1 + 2);
          param_1 = (uint *)((long)param_1 + 3);
          if (uVar29 < 4) {
            uVar24 = (ulong)((uint)*(byte *)puVar2 * 4 + 0x12);
            uVar28 = 0;
          }
          else {
            uVar28 = (ulong)(*(byte *)puVar2 + 4);
            uVar24 = 2;
          }
        }
        plVar42 = (long *)((long)plVar33 + uVar24);
        if (plVar27 < plVar42) {
          return 0xffffffff;
        }
        uVar41 = (ulong)uVar29;
        plVar30 = (long *)((long)plVar33 - uVar41);
        if (plVar30 < plVar37) {
          return 0xffffffff;
        }
        iVar21 = (int)uVar24;
        if (iVar21 != 0) {
          uVar43 = (ulong)(iVar21 - 1);
          uVar45 = uVar43 + 1 & 0x1ffffffe0;
          if ((uVar45 == 0) ||
             ((plVar33 <= (long *)((uVar43 - uVar41) + (long)plVar33) &&
              ((undefined1 *)((long)plVar33 - uVar41) <= (undefined1 *)(uVar43 + (long)plVar33)))))
          {
            uVar45 = 0;
            plVar35 = plVar33;
            uVar40 = uVar24;
          }
          else {
            uVar40 = (ulong)(uint)(iVar21 - (int)uVar45);
            plVar30 = (long *)((uVar45 - uVar41) + (long)plVar33);
            plVar35 = (long *)((long)plVar33 + uVar45);
            plVar25 = plVar33 + 2;
            uVar38 = (ulong)(iVar21 - 1) + 1 & 0xffffffffffffffe0;
            do {
              plVar9 = (long *)(-uVar41 + -0x10 + (long)plVar25);
              lVar44 = plVar9[1];
              plVar5 = (long *)(-uVar41 + (long)plVar25);
              lVar13 = *plVar5;
              lVar14 = plVar5[1];
              plVar25[-2] = *plVar9;
              plVar25[-1] = lVar44;
              *plVar25 = lVar13;
              plVar25[1] = lVar14;
              plVar25 = plVar25 + 4;
              uVar38 = uVar38 - 0x20;
            } while (uVar38 != 0);
          }
          if (uVar43 + 1 != uVar45) {
            uVar39 = (uint)uVar40;
            if ((uVar40 & 7) != 0) {
              iVar21 = -(uVar39 & 7);
              do {
                lVar44 = *plVar30;
                plVar30 = (long *)((long)plVar30 + 1);
                *(char *)plVar35 = (char)lVar44;
                plVar35 = (long *)((long)plVar35 + 1);
                uVar40 = (ulong)((int)uVar40 - 1);
                iVar21 = iVar21 + 1;
              } while (iVar21 != 0);
            }
            if (6 < uVar39 - 1) {
              do {
                *(char *)plVar35 = (char)*plVar30;
                *(undefined1 *)((long)plVar35 + 1) = *(undefined1 *)((long)plVar30 + 1);
                *(undefined1 *)((long)plVar35 + 2) = *(undefined1 *)((long)plVar30 + 2);
                *(undefined1 *)((long)plVar35 + 3) = *(undefined1 *)((long)plVar30 + 3);
                *(undefined1 *)((long)plVar35 + 4) = *(undefined1 *)((long)plVar30 + 4);
                *(undefined1 *)((long)plVar35 + 5) = *(undefined1 *)((long)plVar30 + 5);
                *(undefined1 *)((long)plVar35 + 6) = *(undefined1 *)((long)plVar30 + 6);
                *(undefined1 *)((long)plVar35 + 7) = *(undefined1 *)((long)plVar30 + 7);
                plVar30 = plVar30 + 1;
                plVar35 = plVar35 + 1;
                uVar39 = (int)uVar40 - 8;
                uVar40 = (ulong)uVar39;
              } while (uVar39 != 0);
            }
          }
        }
        plVar30 = plVar42;
        if ((short)uVar28 != 0) {
          plVar30 = (long *)(uVar24 + uVar28 * 4 + (long)plVar33);
          if (plVar27 < plVar30) {
            return 0xffffffff;
          }
          iVar21 = (int)uVar28;
          uVar39 = iVar21 * 4;
          puVar34 = (undefined1 *)((long)plVar33 + (uVar24 - uVar41));
          uVar45 = (ulong)(iVar21 * 4 - 1);
          uVar28 = uVar45 + 1;
          uVar43 = uVar28 & 0x1ffffffe0;
          if (uVar43 == 0) {
            uVar43 = 0;
          }
          else {
            lVar44 = uVar45 + uVar24;
            if (((undefined1 *)((lVar44 - uVar41) + (long)plVar33) <
                 (undefined1 *)((long)plVar33 + uVar24)) ||
               ((undefined1 *)(lVar44 + (long)plVar33) <
                (undefined1 *)((uVar24 - uVar41) + (long)plVar33))) {
              uVar39 = uVar39 - (int)uVar43;
              puVar34 = (undefined1 *)((uVar24 - uVar41) + uVar43 + (long)plVar33);
              plVar42 = (long *)(uVar24 + uVar43 + (long)plVar33);
              puVar26 = (undefined8 *)((long)plVar33 + uVar24 + 0x10);
              uVar24 = (ulong)(iVar21 * 4 - 1) + 1 & 0xffffffffffffffe0;
              do {
                puVar10 = (undefined8 *)(-uVar41 + -0x10 + (long)puVar26);
                uVar15 = puVar10[1];
                puVar6 = (undefined8 *)(-uVar41 + (long)puVar26);
                uVar16 = *puVar6;
                uVar17 = puVar6[1];
                puVar26[-2] = *puVar10;
                puVar26[-1] = uVar15;
                *puVar26 = uVar16;
                puVar26[1] = uVar17;
                puVar26 = puVar26 + 4;
                uVar24 = uVar24 - 0x20;
              } while (uVar24 != 0);
            }
            else {
              uVar43 = 0;
            }
          }
          if (uVar28 != uVar43) {
            uVar1 = uVar39 - 1;
            if ((uVar39 & 7) != 0) {
              iVar21 = -(uVar39 & 7);
              do {
                uVar11 = *puVar34;
                puVar34 = puVar34 + 1;
                *(undefined1 *)plVar42 = uVar11;
                plVar42 = (long *)((long)plVar42 + 1);
                uVar39 = uVar39 - 1;
                iVar21 = iVar21 + 1;
              } while (iVar21 != 0);
            }
            if (6 < uVar1) {
              do {
                *(undefined1 *)plVar42 = *puVar34;
                *(undefined1 *)((long)plVar42 + 1) = puVar34[1];
                *(undefined1 *)((long)plVar42 + 2) = puVar34[2];
                *(undefined1 *)((long)plVar42 + 3) = puVar34[3];
                *(undefined1 *)((long)plVar42 + 4) = puVar34[4];
                *(undefined1 *)((long)plVar42 + 5) = puVar34[5];
                *(undefined1 *)((long)plVar42 + 6) = puVar34[6];
                *(undefined1 *)((long)plVar42 + 7) = puVar34[7];
                puVar34 = puVar34 + 8;
                plVar42 = plVar42 + 1;
                uVar39 = uVar39 - 8;
              } while (uVar39 != 0);
            }
          }
        }
      }
      if ((plVar3 <= plVar30) && (param_5 != (long *)0x0)) {
        plVar42 = plVar36 + 0x200;
        if (plVar32 < plVar42) {
          return 0xffffffff;
        }
        plVar33 = plVar4;
        if (cVar18 < '\0') {
          uVar39 = 0;
          plVar35 = param_5;
          do {
            if (((((((plVar35[1] != 0 || *plVar35 != 0) || plVar35[2] != 0) || plVar35[3] != 0) ||
                  plVar35[4] != 0) || plVar35[5] != 0) || plVar35[6] != 0) || plVar35[7] != 0)
            goto LAB_100743f4a;
            uVar39 = uVar39 + 1;
            plVar35 = plVar35 + 8;
          } while (uVar39 < 0x40);
LAB_100743ea0:
          iVar19 = iVar19 + 1;
          uVar39 = 0;
          if (lVar23 != 0) {
            uVar24 = (long)(((ulong)((long)plVar36 - (long)param_3 >> 0x3f) >> 0x34) +
                           ((long)plVar36 - (long)param_3)) >> 0xc;
            puVar7 = (uint *)(lVar23 + (uVar24 >> 3 & 0x1ffffffc));
            *puVar7 = *puVar7 | 1 << ((byte)uVar24 & 0x1f);
          }
LAB_100743f00:
          if (((((((plVar33[1] == 0 && *plVar33 == 0) && plVar33[2] == 0) && plVar33[3] == 0) &&
                plVar33[4] == 0) && plVar33[5] == 0) && plVar33[6] == 0) && plVar33[7] == 0)
          goto code_r0x000100743f25;
          sVar31 = (size_t)(uint)((int)plVar3 - (int)plVar33);
          plVar36 = (long *)((0x1000 - sVar31) + (long)param_5);
LAB_10074402c:
          _memcpy(plVar36,plVar33,sVar31);
          cVar18 = '\x01';
          goto LAB_100744039;
        }
        if (cVar18 == '\0') goto LAB_100743ea0;
LAB_100743f4a:
        _memcpy(plVar36,param_5,0x1000);
        uVar39 = 0;
        do {
          plVar33[-0x200] = *plVar33;
          plVar33[-0x1ff] = plVar33[1];
          plVar33[-0x1fe] = plVar33[2];
          plVar33[-0x1fd] = plVar33[3];
          plVar33[-0x1fc] = plVar33[4];
          plVar33[-0x1fb] = plVar33[5];
          plVar33[-0x1fa] = plVar33[6];
          plVar33[-0x1f9] = plVar33[7];
          if (((((((plVar33[1] != 0 || *plVar33 != 0) || plVar33[2] != 0) || plVar33[3] != 0) ||
                plVar33[4] != 0) || plVar33[5] != 0) || plVar33[6] != 0) || plVar33[7] != 0) {
            plVar36 = plVar33 + -0x200;
            sVar31 = (long)plVar4 - (long)plVar36;
            goto LAB_10074402c;
          }
          plVar33 = plVar33 + 8;
          uVar39 = uVar39 + 1;
        } while (uVar39 < 0x40);
        cVar18 = '\0';
        goto LAB_100744039;
      }
      plVar33 = plVar30;
    } while (param_1 <= puVar8);
    goto LAB_1007440a5;
  }
  cVar18 = -1;
  plVar30 = plVar37;
LAB_1007440a5:
  if (param_5 == (long *)0x0) {
    uVar22 = (int)plVar30 - (int)param_3;
    goto LAB_1007441f4;
  }
  uVar24 = (long)plVar30 - (long)param_5;
  if (plVar32 < (long *)((uVar24 & 0xffffffff) + (long)plVar36)) {
    return 0xffffffff;
  }
  plVar27 = param_5;
  if (param_5 + 0x200 <= plVar30) {
    if (cVar18 < '\0') {
      uVar22 = 0;
      do {
        if (((((((plVar27[1] != 0 || *plVar27 != 0) || plVar27[2] != 0) || plVar27[3] != 0) ||
              plVar27[4] != 0) || plVar27[5] != 0) || plVar27[6] != 0) || plVar27[7] != 0)
        goto LAB_100744198;
        uVar22 = uVar22 + 1;
        plVar27 = plVar27 + 8;
      } while (uVar22 < 0x40);
LAB_10074414c:
      iVar19 = iVar19 + 1;
      if (lVar23 != 0) {
        uVar28 = (long)(((ulong)((long)plVar36 - (long)param_3 >> 0x3f) >> 0x34) +
                       ((long)plVar36 - (long)param_3)) >> 0xc;
        puVar8 = (uint *)(lVar23 + (uVar28 >> 3 & 0x1ffffffc));
        *puVar8 = *puVar8 | 1 << ((byte)uVar28 & 0x1f);
      }
    }
    else {
      if (cVar18 == '\0') goto LAB_10074414c;
LAB_100744198:
      _memcpy(plVar36,param_5,0x1000);
    }
    plVar36 = plVar36 + 0x200;
    uVar24 = uVar24 - 0x1000;
    plVar27 = param_5 + 0x200;
  }
  _memcpy(plVar36,plVar27,uVar24 & 0xffffffff);
  *param_5 = lVar23;
  *(int *)(param_5 + 1) = iVar19;
  uVar22 = ((int)plVar36 - (int)param_3) + (int)uVar24;
LAB_1007441f4:
  *param_4 = uVar22;
  return 0;
code_r0x000100743f25:
  uVar39 = uVar39 + 1;
  plVar33 = plVar33 + 8;
  if (0x3f < uVar39) goto code_r0x000100743f30;
  goto LAB_100743f00;
code_r0x000100743f30:
  cVar18 = '\0';
LAB_100744039:
  _memcpy(plVar4,plVar3,(long)plVar30 - (long)plVar3);
  plVar33 = plVar30 + -0x200;
  plVar36 = plVar42;
  plVar30 = plVar33;
  if (puVar8 < param_1) goto LAB_1007440a5;
  goto LAB_1007439f0;
}

