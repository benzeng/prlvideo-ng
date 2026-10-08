
undefined8 FUN_100cbeff0(long param_1,uint *param_2,size_t *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 0x128) != -1) {
    uVar6 = FUN_100c6fb80(param_1);
    *param_3 = (long)(int)uVar6;
    uVar7 = 1;
    if (param_2 != (uint *)0x0) {
      uVar10 = *(uint *)(param_1 + 0x128);
      if (uVar6 == uVar10) {
        if (0 < (int)uVar6) {
          uVar8 = (ulong)(uVar6 - 1);
          uVar17 = uVar8 + 1 & 0x1fffffff0;
          uVar12 = 0;
          if (uVar17 != 0) {
            puVar15 = (uint *)(param_1 + 0xa8);
            uVar12 = 0;
            if (((uint *)((long)param_2 + uVar8) < (uint *)(param_1 + 0x108U) ||
                 (uint *)(uVar8 + 0x108 + param_1) < param_2) &&
               ((uint *)(uVar8 + 0xa8 + param_1) < param_2 ||
                (uint *)((long)param_2 + uVar8) < puVar15)) {
              uVar11 = uVar8 + 1 & 0xfffffffffffffff0;
              puVar16 = param_2;
              do {
                uVar10 = puVar15[1];
                uVar1 = puVar15[2];
                uVar2 = puVar15[3];
                uVar3 = puVar15[0x19];
                uVar4 = puVar15[0x1a];
                uVar5 = puVar15[0x1b];
                *puVar16 = puVar15[0x18] ^ *puVar15;
                puVar16[1] = uVar3 ^ uVar10;
                puVar16[2] = uVar4 ^ uVar1;
                puVar16[3] = uVar5 ^ uVar2;
                puVar15 = puVar15 + 4;
                puVar16 = puVar16 + 4;
                uVar11 = uVar11 - 0x10;
                uVar12 = uVar17;
              } while (uVar11 != 0);
            }
          }
          if (uVar8 + 1 != uVar12) {
            uVar10 = (uint)uVar12;
            if ((uVar6 & 1) != 0) {
              *(byte *)((long)param_2 + uVar12) =
                   *(byte *)(param_1 + 0xa8 + uVar12) ^ *(byte *)(param_1 + 0x108 + uVar12);
              uVar12 = uVar12 + 1;
            }
            if (uVar6 - 1 != uVar10) {
              pbVar9 = (byte *)((long)param_2 + uVar12 + 1);
              pbVar13 = (byte *)(uVar12 + 0x109 + param_1);
              iVar14 = (uVar6 + 1) - ((int)uVar12 + 1);
              do {
                pbVar9[-1] = pbVar13[-0x61] ^ pbVar13[-1];
                *pbVar9 = pbVar13[-0x60] ^ *pbVar13;
                pbVar9 = pbVar9 + 2;
                pbVar13 = pbVar13 + 2;
                iVar14 = iVar14 + -2;
              } while (iVar14 != 0);
            }
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x108 + (long)(int)uVar10) = 0x80;
        if (1 < (int)(uVar6 - uVar10)) {
          ___bzero((long)(int)uVar10 + 0x109 + param_1,(long)(int)((uVar6 - uVar10) + -1));
        }
        if (0 < (int)uVar6) {
          uVar8 = (ulong)(uVar6 - 1);
          uVar17 = uVar8 + 1 & 0x1fffffff0;
          uVar12 = 0;
          if (uVar17 != 0) {
            puVar15 = (uint *)(param_1 + 0x108);
            uVar12 = 0;
            if (((uint *)((long)param_2 + uVar8) < puVar15 ||
                 (uint *)(uVar8 + 0x108 + param_1) < param_2) &&
               ((uint *)(uVar8 + 200 + param_1) < param_2 ||
                (uint *)((long)param_2 + uVar8) < (uint *)(param_1 + 200U))) {
              uVar11 = uVar8 + 1 & 0xfffffffffffffff0;
              puVar16 = param_2;
              do {
                uVar10 = puVar15[-0xf];
                uVar1 = puVar15[-0xe];
                uVar2 = puVar15[-0xd];
                uVar3 = puVar15[1];
                uVar4 = puVar15[2];
                uVar5 = puVar15[3];
                *puVar16 = *puVar15 ^ puVar15[-0x10];
                puVar16[1] = uVar3 ^ uVar10;
                puVar16[2] = uVar4 ^ uVar1;
                puVar16[3] = uVar5 ^ uVar2;
                puVar15 = puVar15 + 4;
                puVar16 = puVar16 + 4;
                uVar11 = uVar11 - 0x10;
                uVar12 = uVar17;
              } while (uVar11 != 0);
            }
          }
          if (uVar8 + 1 != uVar12) {
            uVar10 = (uint)uVar12;
            if ((uVar6 & 1) != 0) {
              *(byte *)((long)param_2 + uVar12) =
                   *(byte *)(param_1 + 200 + uVar12) ^ *(byte *)(param_1 + 0x108 + uVar12);
              uVar12 = uVar12 + 1;
            }
            if (uVar6 - 1 != uVar10) {
              pbVar9 = (byte *)((long)param_2 + uVar12 + 1);
              pbVar13 = (byte *)(uVar12 + 0x109 + param_1);
              iVar14 = (uVar6 + 1) - ((int)uVar12 + 1);
              do {
                pbVar9[-1] = pbVar13[-0x41] ^ pbVar13[-1];
                *pbVar9 = pbVar13[-0x40] ^ *pbVar13;
                pbVar9 = pbVar9 + 2;
                pbVar13 = pbVar13 + 2;
                iVar14 = iVar14 + -2;
              } while (iVar14 != 0);
            }
          }
        }
      }
      iVar14 = FUN_100c6fb90(param_1,param_2,param_2,uVar6);
      uVar7 = 1;
      if (iVar14 == 0) {
        _OPENSSL_cleanse(param_2,(long)(int)uVar6);
        uVar7 = 0;
      }
    }
  }
  return uVar7;
}

