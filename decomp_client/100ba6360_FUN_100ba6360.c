
void FUN_100ba6360(uint *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  
  if (0 < (int)param_2) {
    puVar1 = param_3 + 4;
    do {
      *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)param_3;
      FUN_100ba5b10(puVar1,param_3 + 8,0x20);
      if (0 < (int)param_2) {
        uVar14 = ~param_2;
        uVar4 = 0xfffffffe;
        if (-3 < (int)uVar14) {
          uVar4 = uVar14;
        }
        uVar10 = param_2 + 1 + uVar4;
        uVar17 = ~(ulong)uVar10;
        uVar16 = (uint)uVar17;
        if (uVar17 < 0xfffffffffffffff1) {
          uVar16 = 0xfffffff0;
          uVar17 = 0xfffffffffffffff0;
        }
        if (uVar10 < 0x10) {
          uVar10 = 0xf;
        }
        uVar8 = (ulong)((param_2 + 0x10 + uVar4) - uVar10);
        uVar15 = uVar8 + 1 & 0x1fffffff0;
        puVar11 = param_1;
        uVar13 = 0;
        if (uVar15 != 0) {
          if ((uint *)(uVar8 + (long)param_3) < param_1 || (uint *)((long)param_1 + uVar8) < param_3
             ) {
            uVar13 = 0;
            if ((uint *)((long)param_3 + uVar8 + 0x10) < param_1 ||
                (uint *)((long)param_1 + uVar8) < puVar1) {
              puVar11 = (uint *)((long)param_1 + uVar15);
              uVar4 = 0xfffffffe;
              if (-3 < (int)uVar14) {
                uVar4 = uVar14;
              }
              uVar10 = param_2 + 1 + uVar4;
              if (uVar10 < 0x10) {
                uVar10 = 0xf;
              }
              uVar9 = (ulong)((param_2 + 0x10 + uVar4) - uVar10) + 1 & 0xfffffffffffffff0;
              puVar5 = puVar1;
              puVar12 = param_1;
              do {
                uVar3 = *(undefined8 *)(puVar12 + 2);
                *(undefined8 *)(puVar5 + -4) = *(undefined8 *)puVar12;
                *(undefined8 *)(puVar5 + -2) = uVar3;
                uVar4 = puVar5[1];
                uVar10 = puVar5[2];
                uVar2 = puVar5[3];
                *puVar12 = *puVar12 ^ *puVar5;
                puVar12[1] = puVar12[1] ^ uVar4;
                puVar12[2] = puVar12[2] ^ uVar10;
                puVar12[3] = puVar12[3] ^ uVar2;
                puVar5 = puVar5 + 4;
                puVar12 = puVar12 + 4;
                uVar9 = uVar9 - 0x10;
                uVar13 = uVar15;
              } while (uVar9 != 0);
            }
          }
          else {
            uVar13 = 0;
          }
        }
        if (uVar8 + 1 != uVar13) {
          uVar4 = 0xfffffffe;
          if (-3 < (int)uVar14) {
            uVar4 = uVar14;
          }
          uVar10 = param_2 + 1 + uVar4;
          if (uVar10 < 0x10) {
            uVar10 = 0xf;
          }
          iVar7 = (int)uVar13;
          if (((param_2 + 0x11 + uVar4) - uVar10 & 1) != 0) {
            *(byte *)((long)param_3 + uVar13) = (byte)*puVar11;
            *(byte *)puVar11 = (byte)*puVar11 ^ *(byte *)((long)param_3 + uVar13 + 0x10);
            puVar11 = (uint *)((long)puVar11 + 1);
            uVar13 = uVar13 + 1;
          }
          if ((param_2 + 0x10 + uVar4) - uVar10 != iVar7) {
            pbVar6 = (byte *)((long)param_3 + uVar13 + 0x11);
            if ((int)uVar14 < -2) {
              uVar14 = 0xfffffffe;
            }
            uVar4 = param_2 + 1 + uVar14;
            if (uVar4 < 0x10) {
              uVar4 = 0xf;
            }
            iVar7 = ((param_2 + 0x12 + uVar14) - uVar4) - ((int)uVar13 + 1);
            do {
              pbVar6[-0x11] = (byte)*puVar11;
              *(byte *)puVar11 = (byte)*puVar11 ^ pbVar6[-1];
              pbVar6[-0x10] = *(byte *)((long)puVar11 + 1);
              *(byte *)((long)puVar11 + 1) = *(byte *)((long)puVar11 + 1) ^ *pbVar6;
              pbVar6 = pbVar6 + 2;
              puVar11 = (uint *)((long)puVar11 + 2);
              iVar7 = iVar7 + -2;
            } while (iVar7 != 0);
          }
        }
        param_2 = (param_2 - 1) - ~uVar16;
        param_1 = (uint *)((long)param_1 - uVar17);
      }
    } while (0 < (int)param_2);
  }
  return;
}

