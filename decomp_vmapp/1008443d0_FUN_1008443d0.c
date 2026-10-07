
void FUN_1008443d0(byte *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  uint *puVar15;
  ulong uVar16;
  byte *pbVar17;
  uint *puVar18;
  byte bVar19;
  byte bVar20;
  ulong uVar21;
  byte bVar22;
  long lVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  ulong uVar28;
  byte bVar29;
  byte bVar30;
  uint uVar31;
  ulong local_38;
  
  pcVar6 = *(code **)(param_1 + 0x160);
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  if (param_3 == 0xc) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    param_1[0xf] = 1;
    uVar31 = 2;
  }
  else {
    uVar28 = param_3;
    if (0xf < param_3) {
      uVar28 = param_3 - 0x10;
      bVar5 = 0;
      bVar4 = 0;
      bVar3 = 0;
      bVar2 = 0;
      bVar1 = 0;
      bVar29 = 0;
      bVar13 = 0;
      bVar19 = 0;
      bVar27 = 0;
      bVar20 = 0;
      bVar30 = 0;
      bVar22 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar14 = 0;
      pbVar17 = param_2;
      local_38 = uVar28;
      while( true ) {
        *param_1 = bVar26 ^ *pbVar17;
        param_1[1] = bVar25 ^ pbVar17[1];
        param_1[2] = bVar24 ^ pbVar17[2];
        param_1[3] = bVar22 ^ pbVar17[3];
        param_1[4] = bVar30 ^ pbVar17[4];
        param_1[5] = bVar20 ^ pbVar17[5];
        param_1[6] = bVar27 ^ pbVar17[6];
        param_1[7] = bVar19 ^ pbVar17[7];
        param_1[8] = bVar13 ^ pbVar17[8];
        param_1[9] = bVar29 ^ pbVar17[9];
        param_1[10] = bVar1 ^ pbVar17[10];
        param_1[0xb] = bVar2 ^ pbVar17[0xb];
        param_1[0xc] = bVar3 ^ pbVar17[0xc];
        param_1[0xd] = bVar4 ^ pbVar17[0xd];
        param_1[0xe] = bVar5 ^ pbVar17[0xe];
        param_1[0xf] = bVar14 ^ pbVar17[0xf];
        (*pcVar6)(param_1,param_1 + 0x60);
        if (local_38 < 0x10) break;
        bVar26 = *param_1;
        bVar25 = param_1[1];
        bVar24 = param_1[2];
        bVar22 = param_1[3];
        bVar30 = param_1[4];
        bVar20 = param_1[5];
        bVar27 = param_1[6];
        bVar19 = param_1[7];
        bVar13 = param_1[8];
        bVar29 = param_1[9];
        bVar1 = param_1[10];
        bVar2 = param_1[0xb];
        bVar3 = param_1[0xc];
        bVar4 = param_1[0xd];
        local_38 = local_38 - 0x10;
        pbVar17 = pbVar17 + 0x10;
        bVar5 = param_1[0xe];
        bVar14 = param_1[0xf];
      }
      param_2 = param_2 + (uVar28 & 0xfffffffffffffff0) + 0x10;
      uVar28 = uVar28 - (uVar28 & 0xfffffffffffffff0);
    }
    if (uVar28 != 0) {
      uVar16 = 0;
      if ((uVar28 & 0xffffffffffffffe0) != 0) {
        if ((param_2 + (uVar28 - 1) < param_1) || (uVar16 = 0, param_1 + (uVar28 - 1) < param_2)) {
          puVar15 = (uint *)(param_1 + 0x10);
          puVar18 = (uint *)(param_2 + 0x10);
          uVar21 = uVar28 & 0xffffffffffffffe0;
          do {
            uVar31 = puVar18[-3];
            uVar7 = puVar18[-2];
            uVar8 = puVar18[-1];
            uVar9 = *puVar18;
            uVar10 = puVar18[1];
            uVar11 = puVar18[2];
            uVar12 = puVar18[3];
            puVar15[-4] = puVar15[-4] ^ puVar18[-4];
            puVar15[-3] = puVar15[-3] ^ uVar31;
            puVar15[-2] = puVar15[-2] ^ uVar7;
            puVar15[-1] = puVar15[-1] ^ uVar8;
            *puVar15 = *puVar15 ^ uVar9;
            puVar15[1] = puVar15[1] ^ uVar10;
            puVar15[2] = puVar15[2] ^ uVar11;
            puVar15[3] = puVar15[3] ^ uVar12;
            puVar15 = puVar15 + 8;
            puVar18 = puVar18 + 8;
            uVar21 = uVar21 - 0x20;
            uVar16 = uVar28 & 0xffffffffffffffe0;
          } while (uVar21 != 0);
        }
      }
      lVar23 = uVar28 - uVar16;
      if (lVar23 != 0) {
        param_2 = param_2 + uVar16;
        pbVar17 = param_1 + uVar16;
        do {
          *pbVar17 = *pbVar17 ^ *param_2;
          param_2 = param_2 + 1;
          pbVar17 = pbVar17 + 1;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      (*pcVar6)(param_1,param_1 + 0x60);
    }
    uVar28 = param_3 << 3;
    *(ulong *)(param_1 + 8) =
         *(ulong *)(param_1 + 8) ^
         ((param_3 & 0x1fffffffffffffff) >> 0x35 | (uVar28 & 0xff000000000000) >> 0x28 |
          (uVar28 & 0xff0000000000) >> 0x18 | (uVar28 & 0xff00000000) >> 8 |
          (uVar28 & 0xff000000) << 8 | (uVar28 & 0xff0000) << 0x18 | (uVar28 & 0xff00) << 0x28 |
         param_3 << 0x3b);
    (*pcVar6)(param_1,param_1 + 0x60);
    uVar31 = *(uint *)(param_1 + 0xc);
    uVar31 = (uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 | uVar31 << 0x18) +
             1;
  }
  (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x180));
  *(uint *)(param_1 + 0xc) =
       uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 | uVar31 << 0x18;
  return;
}

