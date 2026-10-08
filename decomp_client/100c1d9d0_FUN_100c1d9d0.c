
void FUN_100c1d9d0(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                  code *param_6)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong *puVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 *puVar32;
  long lVar33;
  undefined8 *puVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ulong *puVar39;
  ulong *puVar40;
  ulong uVar41;
  ulong *puVar42;
  ulong *local_b0;
  ulong local_68;
  long local_60;
  
  puVar24 = param_5;
  local_b0 = param_2;
  if (0xf < param_3) {
    uVar35 = param_3 - 0x10;
    uVar30 = uVar35 & 0xfffffffffffffff0;
    local_b0 = (ulong *)((long)param_2 + uVar30 + 0x10);
    puVar39 = param_2;
    puVar40 = param_1;
    do {
      *puVar39 = *puVar24 ^ *puVar40;
      puVar39[1] = puVar24[1] ^ puVar40[1];
      (*param_6)(puVar39,puVar39,param_4);
      param_3 = param_3 - 0x10;
      puVar40 = puVar40 + 2;
      puVar24 = puVar39;
      puVar39 = puVar39 + 2;
    } while (0xf < param_3);
    param_1 = (ulong *)((long)param_1 + uVar30 + 0x10);
    param_3 = uVar35 - uVar30;
    puVar24 = (ulong *)((long)param_2 + uVar30);
  }
  if (param_3 != 0) {
    uVar41 = -param_3;
    lVar1 = param_3 + 0xe;
    local_60 = param_3 + 0x10;
    lVar33 = 0;
    lVar26 = param_3 + 0xf;
    puVar39 = local_b0;
    uVar35 = param_3 - 1;
    uVar30 = param_3;
    puVar40 = puVar24;
    puVar42 = param_1;
    local_68 = 0x10 - param_3;
    do {
      puVar24 = puVar39;
      uVar27 = 0xf;
      if (0xf < uVar35) {
        uVar27 = uVar35;
      }
      lVar37 = lVar33 * 0x10;
      uVar36 = (param_3 - 1) + lVar33 * -0x10;
      if (uVar36 < 0x10) {
        uVar36 = 0xf;
      }
      uVar28 = -uVar41;
      uVar29 = 0x10;
      if (0xfffffffffffffff0 < uVar41) {
        uVar29 = uVar28;
      }
      uVar31 = 0;
      if ((lVar1 + lVar33 * -0x10) - uVar36 == -1) {
LAB_100c1dcf0:
        do {
          *(byte *)((long)puVar24 + uVar31) =
               *(byte *)((long)puVar40 + uVar31) ^ *(byte *)((long)puVar42 + uVar31);
          uVar31 = uVar31 + 1;
        } while (lVar26 - uVar27 != uVar31);
      }
      else {
        uVar38 = (param_3 + 0xf + lVar33 * -0x10) - uVar36;
        uVar25 = uVar38 & 0xffffffffffffffe0;
        uVar31 = 0;
        if (uVar25 != 0) {
          puVar39 = (ulong *)((long)local_b0 + (lVar1 - uVar36));
          if (puVar39 < param_1 + lVar33 * 2 ||
              (ulong *)((lVar1 - uVar36) + (long)param_1) < local_b0 + lVar33 * 2) {
            uVar31 = 0;
            if ((ulong *)(((lVar33 * -0x10 + lVar1) - uVar36) + (long)puVar40) <
                local_b0 + lVar33 * 2 || puVar39 < puVar40) {
              uVar36 = 0;
              do {
                puVar2 = (uint *)((long)puVar42 + uVar36);
                uVar5 = puVar2[1];
                uVar6 = puVar2[2];
                uVar7 = puVar2[3];
                puVar3 = (uint *)((long)puVar42 + uVar36 + 0x10);
                uVar8 = *puVar3;
                uVar9 = puVar3[1];
                uVar10 = puVar3[2];
                uVar11 = puVar3[3];
                puVar3 = (uint *)((long)puVar40 + uVar36);
                uVar12 = puVar3[1];
                uVar13 = puVar3[2];
                uVar14 = puVar3[3];
                puVar4 = (uint *)((long)puVar40 + uVar36 + 0x10);
                uVar15 = *puVar4;
                uVar16 = puVar4[1];
                uVar17 = puVar4[2];
                uVar18 = puVar4[3];
                puVar4 = (uint *)((long)puVar24 + uVar36);
                *puVar4 = *puVar3 ^ *puVar2;
                puVar4[1] = uVar12 ^ uVar5;
                puVar4[2] = uVar13 ^ uVar6;
                puVar4[3] = uVar14 ^ uVar7;
                puVar2 = (uint *)((long)puVar24 + uVar36 + 0x10);
                *puVar2 = uVar15 ^ uVar8;
                puVar2[1] = uVar16 ^ uVar9;
                puVar2[2] = uVar17 ^ uVar10;
                puVar2[3] = uVar18 ^ uVar11;
                uVar36 = uVar36 + 0x20;
                uVar31 = uVar25;
              } while ((lVar26 - uVar27 & 0xffffffffffffffe0) != uVar36);
            }
          }
          else {
            uVar31 = 0;
          }
        }
        if (uVar38 != uVar31) goto LAB_100c1dcf0;
      }
      if (uVar29 < 0x10) {
        if ((0xf - param_3) + lVar37 != -1) {
          uVar27 = (0x10 - param_3) + lVar37;
          uVar36 = (uVar27 & 0xffffffffffffffe0) - uVar41;
          if ((uVar36 != uVar28) &&
             (((long)puVar40 + 0xfU < (long)local_b0 + param_3 ||
              ((ulong)((long)local_b0 + lVar37 + 0xf) < param_3 + lVar33 * -0x10 + (long)puVar40))))
          {
            uVar29 = local_68 & 0xffffffffffffffe0;
            puVar32 = (undefined8 *)((long)puVar40 + local_60);
            puVar34 = (undefined8 *)((long)local_b0 + param_3 + 0x10);
            do {
              uVar19 = *(undefined4 *)((long)puVar32 + -0xc);
              uVar20 = *(undefined4 *)(puVar32 + -1);
              uVar21 = *(undefined4 *)((long)puVar32 + -4);
              uVar22 = *puVar32;
              uVar23 = puVar32[1];
              *(undefined4 *)(puVar34 + -2) = *(undefined4 *)(puVar32 + -2);
              *(undefined4 *)((long)puVar34 + -0xc) = uVar19;
              *(undefined4 *)(puVar34 + -1) = uVar20;
              *(undefined4 *)((long)puVar34 + -4) = uVar21;
              *puVar34 = uVar22;
              puVar34[1] = uVar23;
              puVar34 = puVar34 + 4;
              puVar32 = puVar32 + 4;
              uVar29 = uVar29 - 0x20;
              uVar28 = uVar36;
            } while (uVar29 != 0);
          }
          if (uVar27 - uVar41 == uVar28) goto LAB_100c1ddd0;
        }
        do {
          *(undefined1 *)((long)puVar24 + uVar28) = *(undefined1 *)((long)puVar40 + uVar28);
          uVar28 = uVar28 + 1;
        } while (uVar28 != 0x10);
      }
LAB_100c1ddd0:
      (*param_6)(puVar24,puVar24,param_4);
      if (uVar30 < 0x11) break;
      puVar42 = puVar42 + 2;
      uVar41 = uVar41 + 0x10;
      lVar33 = lVar33 + 1;
      lVar26 = lVar26 + -0x10;
      uVar35 = uVar35 - 0x10;
      local_60 = local_60 + -0x10;
      local_68 = local_68 + 0x10;
      uVar30 = uVar30 - 0x10;
      puVar39 = puVar24 + 2;
      puVar40 = puVar24;
    } while (uVar30 != 0);
  }
  uVar35 = *puVar24;
  param_5[1] = puVar24[1];
  *param_5 = uVar35;
  return;
}

