
void FUN_100ba60f0(uint *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  
  if (0 < (int)param_2) {
    puVar1 = param_3 + 4;
    do {
      *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)param_3;
      FUN_100ba5b10(puVar1,param_3 + 8,0x20);
      if (0 < (int)param_2) {
        uVar19 = ~param_2;
        uVar9 = 0xfffffffe;
        if (-3 < (int)uVar19) {
          uVar9 = uVar19;
        }
        uVar13 = param_2 + 1 + uVar9;
        uVar22 = ~(ulong)uVar13;
        uVar21 = (uint)uVar22;
        if (uVar22 < 0xfffffffffffffff1) {
          uVar21 = 0xfffffff0;
          uVar22 = 0xfffffffffffffff0;
        }
        if (uVar13 < 0x10) {
          uVar13 = 0xf;
        }
        uVar10 = (ulong)((param_2 + 0x10 + uVar9) - uVar13);
        uVar20 = uVar10 + 1 & 0x1fffffff0;
        puVar16 = param_1;
        uVar18 = 0;
        if (uVar20 != 0) {
          if ((uint *)((long)param_1 + uVar10) < param_3 ||
              (uint *)(uVar10 + (long)param_3) < param_1) {
            uVar18 = 0;
            if ((uint *)((long)param_3 + uVar10 + 0x10) < param_1 ||
                (uint *)((long)param_1 + uVar10) < puVar1) {
              puVar16 = (uint *)((long)param_1 + uVar20);
              uVar9 = 0xfffffffe;
              if (-3 < (int)uVar19) {
                uVar9 = uVar19;
              }
              uVar13 = param_2 + 1 + uVar9;
              if (uVar13 < 0x10) {
                uVar13 = 0xf;
              }
              uVar15 = (ulong)((param_2 + 0x10 + uVar9) - uVar13) + 1 & 0xfffffffffffffff0;
              puVar11 = puVar1;
              puVar17 = param_1;
              do {
                uVar9 = *puVar11;
                uVar13 = puVar11[1];
                uVar2 = puVar11[2];
                uVar3 = puVar11[3];
                uVar4 = *puVar17;
                uVar5 = puVar17[1];
                uVar6 = puVar17[2];
                uVar7 = puVar17[3];
                *puVar17 = uVar4 ^ uVar9;
                puVar17[1] = uVar5 ^ uVar13;
                puVar17[2] = uVar6 ^ uVar2;
                puVar17[3] = uVar7 ^ uVar3;
                puVar11[-4] = uVar4 ^ uVar9;
                puVar11[-3] = uVar5 ^ uVar13;
                puVar11[-2] = uVar6 ^ uVar2;
                puVar11[-1] = uVar7 ^ uVar3;
                puVar11 = puVar11 + 4;
                puVar17 = puVar17 + 4;
                uVar15 = uVar15 - 0x10;
                uVar18 = uVar20;
              } while (uVar15 != 0);
            }
          }
          else {
            uVar18 = 0;
          }
        }
        if (uVar10 + 1 != uVar18) {
          uVar9 = 0xfffffffe;
          if (-3 < (int)uVar19) {
            uVar9 = uVar19;
          }
          uVar13 = param_2 + 1 + uVar9;
          if (uVar13 < 0x10) {
            uVar13 = 0xf;
          }
          iVar14 = (int)uVar18;
          if (((param_2 + 0x11 + uVar9) - uVar13 & 1) != 0) {
            bVar8 = (byte)*puVar16 ^ *(byte *)((long)param_3 + uVar18 + 0x10);
            *(byte *)puVar16 = bVar8;
            *(byte *)((long)param_3 + uVar18) = bVar8;
            puVar16 = (uint *)((long)puVar16 + 1);
            uVar18 = uVar18 + 1;
          }
          if ((param_2 + 0x10 + uVar9) - uVar13 != iVar14) {
            pbVar12 = (byte *)((long)param_3 + uVar18 + 0x11);
            if ((int)uVar19 < -2) {
              uVar19 = 0xfffffffe;
            }
            uVar9 = param_2 + 1 + uVar19;
            if (uVar9 < 0x10) {
              uVar9 = 0xf;
            }
            iVar14 = ((param_2 + 0x12 + uVar19) - uVar9) - ((int)uVar18 + 1);
            do {
              bVar8 = (byte)*puVar16 ^ pbVar12[-1];
              *(byte *)puVar16 = bVar8;
              pbVar12[-0x11] = bVar8;
              bVar8 = *(byte *)((long)puVar16 + 1) ^ *pbVar12;
              *(byte *)((long)puVar16 + 1) = bVar8;
              pbVar12[-0x10] = bVar8;
              pbVar12 = pbVar12 + 2;
              puVar16 = (uint *)((long)puVar16 + 2);
              iVar14 = iVar14 + -2;
            } while (iVar14 != 0);
          }
        }
        param_2 = (param_2 - 1) - ~uVar21;
        param_1 = (uint *)((long)param_1 - uVar22);
      }
    } while (0 < (int)param_2);
  }
  return;
}

