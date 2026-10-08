
void FUN_100c1de50(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                  code *param_6)

{
  long lVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  ulong *puVar5;
  uint *puVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong *puVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  ulong *puVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined8 *puVar38;
  ulong uVar39;
  ulong uVar40;
  ulong *puVar41;
  ulong uVar42;
  undefined8 *puVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  ulong *puVar48;
  ulong *puVar49;
  ulong *local_d8;
  ulong *local_c8;
  undefined8 local_40;
  undefined8 local_38;
  
  local_c8 = param_1;
  if (param_1 == param_2) {
    local_d8 = param_1;
    if (0xf < param_3) {
      uVar37 = param_3 - 0x10;
      uVar39 = uVar37 & 0xfffffffffffffff0;
      local_d8 = (ulong *)(uVar39 + 0x10 + (long)param_1);
      do {
        (*param_6)(param_1,&local_40,param_4);
        uVar45 = *param_1;
        *param_1 = *param_5 ^ local_40;
        *param_5 = uVar45;
        uVar45 = param_1[1];
        param_1[1] = param_5[1] ^ local_38;
        param_5[1] = uVar45;
        param_3 = param_3 - 0x10;
        param_1 = param_1 + 2;
      } while (0xf < param_3);
      param_3 = uVar37 - uVar39;
      local_c8 = local_d8;
    }
  }
  else {
    puVar33 = param_5;
    local_d8 = param_2;
    if (0xf < param_3) {
      uVar37 = param_3 - 0x10;
      uVar39 = uVar37 & 0xfffffffffffffff0;
      local_d8 = (ulong *)((long)param_2 + uVar39 + 0x10);
      puVar33 = param_1;
      puVar49 = param_5;
      do {
        puVar29 = puVar33;
        (*param_6)(puVar29,param_2,param_4);
        *param_2 = *param_2 ^ *puVar49;
        param_2[1] = param_2[1] ^ puVar49[1];
        param_3 = param_3 - 0x10;
        param_2 = param_2 + 2;
        puVar33 = puVar29 + 2;
        puVar49 = puVar29;
      } while (0xf < param_3);
      local_c8 = (ulong *)(uVar39 + 0x10 + (long)param_1);
      puVar33 = (ulong *)(uVar39 + (long)param_1);
      param_3 = uVar37 - uVar39;
    }
    uVar37 = *puVar33;
    param_5[1] = puVar33[1];
    *param_5 = uVar37;
  }
  if (param_3 != 0) {
    uVar45 = -param_3;
    lVar44 = 0;
    uVar37 = param_3;
    uVar39 = param_3 - 1;
    lVar46 = param_3 + 0xf;
    puVar33 = local_c8;
    puVar49 = local_d8;
    do {
      uVar30 = 0xf;
      if (0xf < uVar39) {
        uVar30 = uVar39;
      }
      uVar47 = (param_3 - 1) + lVar44 * -0x10;
      lVar34 = -uVar47;
      if (uVar47 < 0x10) {
        lVar34 = -0xf;
        uVar47 = 0xf;
      }
      lVar31 = param_3 + 0xe + lVar44 * -0x10;
      uVar32 = -uVar45;
      uVar35 = 0x10;
      if (0xfffffffffffffff0 < uVar45) {
        uVar35 = uVar32;
      }
      (*param_6)(puVar33,&local_40,param_4);
      uVar36 = 0;
      if (lVar31 - uVar47 == -1) {
LAB_100c1e280:
        do {
          uVar7 = *(undefined1 *)((long)puVar33 + uVar36);
          *(byte *)((long)puVar49 + uVar36) =
               *(byte *)((long)param_5 + uVar36) ^ *(byte *)((long)&local_40 + uVar36);
          *(undefined1 *)((long)param_5 + uVar36) = uVar7;
          uVar36 = uVar36 + 1;
        } while (lVar46 - uVar30 != uVar36);
      }
      else {
        uVar47 = (param_3 + 0xf + lVar44 * -0x10) - uVar47;
        uVar40 = uVar47 & 0xffffffffffffffe0;
        uVar36 = 0;
        if (uVar40 != 0) {
          puVar29 = local_d8 + lVar44 * 2;
          lVar1 = param_3 + 0xe + lVar34;
          puVar2 = (ulong *)((long)local_d8 + lVar1);
          puVar48 = (ulong *)(lVar31 + lVar34 + (long)param_5);
          puVar41 = (ulong *)(lVar1 + (long)local_c8);
          puVar5 = (ulong *)((long)&local_38 + lVar34 + param_3 + lVar44 * -0x10 + 6);
          if (puVar48 < puVar29 || puVar2 < param_5) {
            if (puVar41 < puVar29 || puVar2 < local_c8 + lVar44 * 2) {
              if (puVar5 < puVar29 || puVar2 < &local_40) {
                if (puVar41 < param_5 || puVar48 < local_c8 + lVar44 * 2) {
                  if (puVar5 < param_5 || puVar48 < &local_40) {
                    uVar42 = 0;
                    do {
                      puVar3 = (undefined4 *)((long)puVar33 + uVar42);
                      uVar8 = *puVar3;
                      uVar9 = puVar3[1];
                      uVar10 = puVar3[2];
                      uVar11 = puVar3[3];
                      puVar38 = (undefined8 *)((long)puVar33 + uVar42 + 0x10);
                      uVar26 = *puVar38;
                      uVar27 = puVar38[1];
                      uVar12 = *(uint *)((long)&local_40 + uVar42 + 4);
                      uVar13 = *(uint *)((long)&local_38 + uVar42);
                      uVar14 = *(uint *)((long)&local_38 + uVar42 + 4);
                      uVar15 = *(uint *)(&stack0xffffffffffffffd0 + uVar42);
                      uVar16 = *(uint *)(&stack0xffffffffffffffd4 + uVar42);
                      uVar17 = *(uint *)(&stack0xffffffffffffffd8 + uVar42);
                      uVar18 = *(uint *)(&stack0xffffffffffffffdc + uVar42);
                      puVar4 = (uint *)((long)param_5 + uVar42);
                      uVar19 = puVar4[1];
                      uVar20 = puVar4[2];
                      uVar21 = puVar4[3];
                      puVar6 = (uint *)((long)param_5 + uVar42 + 0x10);
                      uVar22 = *puVar6;
                      uVar23 = puVar6[1];
                      uVar24 = puVar6[2];
                      uVar25 = puVar6[3];
                      puVar6 = (uint *)((long)puVar49 + uVar42);
                      *puVar6 = *puVar4 ^ *(uint *)((long)&local_40 + uVar42);
                      puVar6[1] = uVar19 ^ uVar12;
                      puVar6[2] = uVar20 ^ uVar13;
                      puVar6[3] = uVar21 ^ uVar14;
                      puVar4 = (uint *)((long)puVar49 + uVar42 + 0x10);
                      *puVar4 = uVar22 ^ uVar15;
                      puVar4[1] = uVar23 ^ uVar16;
                      puVar4[2] = uVar24 ^ uVar17;
                      puVar4[3] = uVar25 ^ uVar18;
                      puVar3 = (undefined4 *)((long)param_5 + uVar42);
                      *puVar3 = uVar8;
                      puVar3[1] = uVar9;
                      puVar3[2] = uVar10;
                      puVar3[3] = uVar11;
                      puVar38 = (undefined8 *)((long)param_5 + uVar42 + 0x10);
                      *puVar38 = uVar26;
                      puVar38[1] = uVar27;
                      uVar42 = uVar42 + 0x20;
                      uVar36 = uVar40;
                    } while ((lVar46 - uVar30 & 0xffffffffffffffe0) != uVar42);
                  }
                  else {
                    uVar36 = 0;
                  }
                }
                else {
                  uVar36 = 0;
                }
              }
              else {
                uVar36 = 0;
              }
            }
            else {
              uVar36 = 0;
            }
          }
          else {
            uVar36 = 0;
          }
        }
        if (uVar47 != uVar36) goto LAB_100c1e280;
      }
      if (uVar37 < 0x11) {
        if (0xf < uVar35) {
          return;
        }
        if (uVar45 == 0xfffffffffffffff0) goto LAB_100c1e365;
        uVar37 = uVar45 + 0x10 & 0xffffffffffffffe0;
        uVar45 = uVar37 - uVar45;
        if ((uVar45 != uVar32) &&
           (((long)puVar33 + 0xfU < (long)param_5 + uVar32 ||
            ((long)param_5 + 0xfU < (long)puVar33 + uVar32)))) {
          puVar38 = (undefined8 *)((long)param_5 + uVar32 + 0x10);
          puVar43 = (undefined8 *)((long)puVar33 + uVar32 + 0x10);
          do {
            uVar26 = puVar43[-1];
            uVar27 = *puVar43;
            uVar28 = puVar43[1];
            puVar38[-2] = puVar43[-2];
            puVar38[-1] = uVar26;
            *puVar38 = uVar27;
            puVar38[1] = uVar28;
            puVar38 = puVar38 + 4;
            puVar43 = puVar43 + 4;
            uVar37 = uVar37 - 0x20;
            uVar32 = uVar45;
          } while (uVar37 != 0);
        }
        for (; uVar32 != 0x10; uVar32 = uVar32 + 1) {
LAB_100c1e365:
          *(undefined1 *)((long)param_5 + uVar32) = *(undefined1 *)((long)puVar33 + uVar32);
        }
        return;
      }
      puVar33 = puVar33 + 2;
      puVar49 = puVar49 + 2;
      uVar45 = uVar45 + 0x10;
      lVar44 = lVar44 + 1;
      lVar46 = lVar46 + -0x10;
      uVar39 = uVar39 - 0x10;
      uVar37 = uVar37 - 0x10;
    } while (uVar37 != 0);
  }
  return;
}

