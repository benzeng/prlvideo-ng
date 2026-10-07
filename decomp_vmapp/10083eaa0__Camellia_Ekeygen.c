
undefined8 _Camellia_Ekeygen(long param_1,uint *param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  
  uVar11 = *param_2;
  uVar14 = param_2[1];
  uVar18 = param_2[2];
  uVar24 = param_2[3];
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
  uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
  uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
  *(uint *)param_3 = uVar14;
  *(uint *)((long)param_3 + 4) = uVar11;
  *(uint *)(param_3 + 1) = uVar24;
  *(uint *)((long)param_3 + 0xc) = uVar18;
  if (param_1 != 0x80) {
    uVar11 = param_2[4];
    uVar14 = param_2[5];
    if (param_1 == 0xc0) {
      uVar18 = ~uVar11;
      uVar24 = ~uVar14;
    }
    else {
      uVar18 = param_2[6];
      uVar24 = param_2[7];
    }
    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
    uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
    uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
    *(uint *)(param_3 + 4) = uVar14;
    *(uint *)((long)param_3 + 0x24) = uVar11;
    *(uint *)(param_3 + 5) = uVar24;
    *(uint *)((long)param_3 + 0x2c) = uVar18;
    uVar14 = uVar14 ^ (uint)*param_3;
    uVar11 = uVar11 ^ *(uint *)((long)param_3 + 4);
    uVar24 = uVar24 ^ (uint)param_3[1];
    uVar18 = uVar18 ^ *(uint *)((long)param_3 + 0xc);
  }
  uVar2 = DAT_10083f2a4;
  uVar8 = DAT_10083f2a0;
  uVar1 = DAT_10083f284 ^ uVar11;
  uVar7 = DAT_10083f280 ^ uVar14;
  uVar6 = *(uint *)(&DAT_10083fac4 + (ulong)(uVar1 >> 8 & 0xff) * 8) ^
          *(uint *)((long)&DAT_10083f2c0 + (ulong)(uVar1 & 0xff) * 8 + 4) ^
          *(uint *)(&DAT_10083f2c0 + (uVar1 >> 0x18)) ^
          *(uint *)(&DAT_10083fac0 + (ulong)(uVar1 >> 0x10 & 0xff) * 8);
  uVar1 = *(uint *)(&DAT_10083f2c0 + (uVar7 & 0xff)) ^
          *(uint *)((long)&DAT_10083f2c0 + (ulong)(uVar7 >> 8 & 0xff) * 8 + 4) ^
          *(uint *)(&DAT_10083fac4 + (ulong)(uVar7 >> 0x10 & 0xff) * 8) ^
          *(uint *)(&DAT_10083fac0 + (ulong)(uVar7 >> 0x18) * 8) ^ uVar6;
  uVar18 = uVar18 ^ uVar1;
  uVar7 = uVar24 ^ uVar1 ^ (uVar6 >> 8 | uVar6 << 0x18);
  uVar24 = DAT_10083f28c ^ uVar18;
  uVar6 = DAT_10083f288 ^ uVar7;
  uVar1 = *(uint *)(&DAT_10083fac4 + (ulong)(uVar24 >> 8 & 0xff) * 8) ^
          *(uint *)((long)&DAT_10083f2c0 + (ulong)(uVar24 & 0xff) * 8 + 4) ^
          *(uint *)(&DAT_10083f2c0 + (uVar24 >> 0x18)) ^
          *(uint *)(&DAT_10083fac0 + (ulong)(uVar24 >> 0x10 & 0xff) * 8);
  uVar24 = *(uint *)(&DAT_10083f2c0 + (uVar6 & 0xff)) ^
           *(uint *)((long)&DAT_10083f2c0 + (ulong)(uVar6 >> 8 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_10083fac4 + (ulong)(uVar6 >> 0x10 & 0xff) * 8) ^
           *(uint *)(&DAT_10083fac0 + (ulong)(uVar6 >> 0x18) * 8) ^ uVar1;
  uVar6 = uVar14 ^ uVar24 ^ (uVar1 >> 8 | uVar1 << 0x18) ^ (uint)*param_3;
  uVar1 = uVar11 ^ uVar24 ^ *(uint *)((long)param_3 + 4);
  uVar11 = DAT_10083f294 ^ uVar1;
  uVar24 = DAT_10083f290 ^ uVar6;
  uVar14 = *(uint *)(&DAT_10083fac4 + (ulong)(uVar11 >> 8 & 0xff) * 8) ^
           *(uint *)((long)&DAT_10083f2c0 + (ulong)(uVar11 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_10083f2c0 + (uVar11 >> 0x18)) ^
           *(uint *)(&DAT_10083fac0 + (ulong)(uVar11 >> 0x10 & 0xff) * 8);
  uVar11 = *(uint *)(&DAT_10083f2c0 + (uVar24 & 0xff)) ^
           *(uint *)((long)&DAT_10083f2c0 + (ulong)(uVar24 >> 8 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_10083fac4 + (ulong)(uVar24 >> 0x10 & 0xff) * 8) ^
           *(uint *)(&DAT_10083fac0 + (ulong)(uVar24 >> 0x18) * 8) ^ uVar14;
  uVar24 = uVar18 ^ *(uint *)((long)param_3 + 0xc) ^ uVar11;
  uVar7 = uVar7 ^ (uint)param_3[1] ^ uVar11 ^ (uVar14 >> 8 | uVar14 << 0x18);
  uVar11 = DAT_10083f29c ^ uVar24;
  uVar18 = DAT_10083f298 ^ uVar7;
  uVar14 = *(uint *)(&DAT_10083fac4 + (ulong)(uVar11 >> 8 & 0xff) * 8) ^
           *(uint *)((long)&DAT_10083f2c0 + (ulong)(uVar11 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_10083f2c0 + (uVar11 >> 0x18)) ^
           *(uint *)(&DAT_10083fac0 + (ulong)(uVar11 >> 0x10 & 0xff) * 8);
  uVar11 = *(uint *)(&DAT_10083f2c0 + (uVar18 & 0xff)) ^
           *(uint *)((long)&DAT_10083f2c0 + (ulong)(uVar18 >> 8 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_10083fac4 + (ulong)(uVar18 >> 0x10 & 0xff) * 8) ^
           *(uint *)(&DAT_10083fac0 + (ulong)(uVar18 >> 0x18) * 8) ^ uVar14;
  uVar1 = uVar1 ^ uVar11;
  uVar11 = uVar6 ^ uVar11 ^ (uVar14 >> 8 | uVar14 << 0x18);
  if (param_1 == 0x80) {
    uVar12 = CONCAT44(uVar1,uVar11);
    uVar19 = CONCAT44(uVar24,uVar7);
    uVar4 = *param_3;
    uVar10 = param_3[1];
    param_3[2] = uVar12;
    param_3[3] = uVar19;
    uVar3 = uVar4 << 0xf;
    uVar15 = uVar10 >> 0x31;
    uVar25 = uVar4 >> 0x31;
    uVar9 = uVar10 << 0xf;
    param_3[4] = uVar3 | uVar15;
    param_3[5] = uVar9 | uVar25;
    uVar13 = uVar12 << 0xf | (ulong)(uVar24 >> 0x11);
    uVar20 = uVar19 << 0xf | (ulong)(uVar1 >> 0x11);
    param_3[6] = uVar13;
    param_3[7] = uVar20;
    uVar16 = (uVar19 & 0x1ffffffffffff) >> 0x22;
    uVar26 = (uVar12 & 0x1ffffffffffff) >> 0x22;
    uVar13 = uVar13 << 0xf | uVar16;
    uVar21 = uVar20 << 0xf | uVar26;
    param_3[8] = uVar13;
    param_3[9] = uVar21;
    uVar20 = (uVar10 & 0x1ffffffffffff) >> 0x13;
    uVar27 = (uVar4 & 0x1ffffffffffff) >> 0x13;
    uVar4 = (uVar3 | uVar15) << 0x1e | uVar20;
    uVar10 = (uVar9 | uVar25) << 0x1e | uVar27;
    param_3[10] = uVar4;
    param_3[0xb] = uVar10;
    uVar19 = (uVar19 << 0xf & 0x1ffffffffffff) >> 0x22;
    uVar28 = (uVar12 << 0xf & 0x1ffffffffffff) >> 0x22;
    uVar12 = uVar13 << 0xf | uVar19;
    param_3[0xc] = uVar12;
    uVar13 = (uVar9 & 0x3ffffffff) >> 0x13;
    uVar29 = (uVar3 & 0x3ffffffff) >> 0x13;
    uVar10 = uVar10 << 0xf | uVar29;
    param_3[0xd] = uVar10;
    uVar17 = ((ulong)uVar7 & 0x7ffff) >> 4;
    uVar30 = ((ulong)uVar11 & 0x7ffff) >> 4;
    uVar12 = uVar12 << 0xf | uVar17;
    uVar21 = (uVar21 << 0xf | uVar28) << 0xf | uVar30;
    param_3[0xe] = uVar12;
    param_3[0xf] = uVar21;
    uVar4 = (uVar4 << 0xf | uVar13) << 0x11 | (uVar9 & 0x7ffff | uVar25) >> 2;
    uVar10 = uVar10 << 0x11 | (uVar3 & 0x7ffff | uVar15) >> 2;
    param_3[0x10] = uVar4;
    param_3[0x11] = uVar10;
    uVar4 = uVar4 << 0x11 | ((uVar25 & 3) << 0x1e | uVar27) >> 0xf;
    uVar10 = uVar10 << 0x11 | ((uVar15 & 3) << 0x1e | uVar20) >> 0xf;
    param_3[0x12] = uVar4;
    param_3[0x13] = uVar10;
    uVar3 = uVar12 << 0x22 | (((ulong)uVar7 & 0xf) << 0xf | (ulong)(uVar1 >> 0x11)) << 0xf | uVar26;
    uVar9 = uVar21 << 0x22 |
            (((ulong)uVar11 & 0xf) << 0xf | (ulong)(uVar24 >> 0x11)) << 0xf | uVar16;
    param_3[0x14] = uVar3;
    param_3[0x15] = uVar9;
    param_3[0x16] = uVar4 << 0x11 | ((uVar27 & 0x7fff) << 0xf | uVar29) >> 0xd;
    param_3[0x17] = uVar10 << 0x11 | ((uVar20 & 0x7fff) << 0xf | uVar13) >> 0xd;
    param_3[0x18] = uVar3 << 0x11 | (uVar28 << 0xf | uVar30) >> 0xd;
    param_3[0x19] = uVar9 << 0x11 | (uVar19 << 0xf | uVar17) >> 0xd;
    uVar5 = 3;
  }
  else {
    *(uint *)(param_3 + 6) = uVar11;
    *(uint *)((long)param_3 + 0x34) = uVar1;
    *(uint *)(param_3 + 7) = uVar7;
    *(uint *)((long)param_3 + 0x3c) = uVar24;
    uVar11 = uVar11 ^ (uint)param_3[4];
    uVar1 = uVar1 ^ *(uint *)((long)param_3 + 0x24);
    uVar2 = uVar2 ^ uVar1;
    uVar8 = uVar8 ^ uVar11;
    uVar18 = *(uint *)(&DAT_10083fac4 + (ulong)(uVar2 >> 8 & 0xff) * 8) ^
             *(uint *)((long)&DAT_10083f2c0 + (ulong)(uVar2 & 0xff) * 8 + 4) ^
             *(uint *)(&DAT_10083f2c0 + (uVar2 >> 0x18)) ^
             *(uint *)(&DAT_10083fac0 + (ulong)(uVar2 >> 0x10 & 0xff) * 8);
    uVar14 = *(uint *)(&DAT_10083f2c0 + (uVar8 & 0xff)) ^
             *(uint *)((long)&DAT_10083f2c0 + (ulong)(uVar8 >> 8 & 0xff) * 8 + 4) ^
             *(uint *)(&DAT_10083fac4 + (ulong)(uVar8 >> 0x10 & 0xff) * 8) ^
             *(uint *)(&DAT_10083fac0 + (ulong)(uVar8 >> 0x18) * 8) ^ uVar18;
    uVar8 = uVar24 ^ *(uint *)((long)param_3 + 0x2c) ^ uVar14;
    uVar2 = uVar7 ^ (uint)param_3[5] ^ uVar14 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar14 = DAT_10083f2ac ^ uVar8;
    uVar24 = DAT_10083f2a8 ^ uVar2;
    uVar18 = *(uint *)(&DAT_10083fac4 + (ulong)(uVar14 >> 8 & 0xff) * 8) ^
             *(uint *)((long)&DAT_10083f2c0 + (ulong)(uVar14 & 0xff) * 8 + 4) ^
             *(uint *)(&DAT_10083f2c0 + (uVar14 >> 0x18)) ^
             *(uint *)(&DAT_10083fac0 + (ulong)(uVar14 >> 0x10 & 0xff) * 8);
    uVar14 = *(uint *)(&DAT_10083f2c0 + (uVar24 & 0xff)) ^
             *(uint *)((long)&DAT_10083f2c0 + (ulong)(uVar24 >> 8 & 0xff) * 8 + 4) ^
             *(uint *)(&DAT_10083fac4 + (ulong)(uVar24 >> 0x10 & 0xff) * 8) ^
             *(uint *)(&DAT_10083fac0 + (ulong)(uVar24 >> 0x18) * 8) ^ uVar18;
    uVar1 = uVar1 ^ uVar14;
    uVar4 = *param_3;
    uVar10 = param_3[1];
    uVar3 = param_3[4];
    uVar9 = param_3[5];
    uVar12 = param_3[6];
    uVar13 = param_3[7];
    uVar25 = CONCAT44(uVar1,uVar11 ^ uVar14 ^ (uVar18 >> 8 | uVar18 << 0x18));
    uVar22 = CONCAT44(uVar8,uVar2);
    param_3[2] = uVar25;
    param_3[3] = uVar22;
    uVar16 = uVar3 << 0xf;
    uVar15 = uVar16 | uVar9 >> 0x31;
    uVar19 = uVar9 << 0xf;
    uVar17 = uVar19 | uVar3 >> 0x31;
    param_3[4] = uVar15;
    param_3[5] = uVar17;
    uVar27 = uVar13 >> 0x31;
    uVar31 = uVar12 >> 0x31;
    uVar37 = uVar12 << 0xf | uVar27;
    uVar39 = uVar13 << 0xf | uVar31;
    param_3[6] = uVar37;
    param_3[7] = uVar39;
    uVar28 = (uVar9 & 0x1ffffffffffff) >> 0x22;
    uVar32 = (uVar3 & 0x1ffffffffffff) >> 0x22;
    uVar20 = uVar15 << 0xf | uVar28;
    uVar17 = uVar17 << 0xf | uVar32;
    param_3[8] = uVar20;
    param_3[9] = uVar17;
    uVar26 = uVar25 << 0x1e | (ulong)(uVar8 >> 2);
    uVar23 = uVar22 << 0x1e | (ulong)(uVar1 >> 2);
    param_3[10] = uVar26;
    param_3[0xb] = uVar23;
    uVar29 = uVar10 >> 0x13;
    uVar33 = uVar4 >> 0x13;
    uVar15 = uVar4 << 0x2d | uVar29;
    uVar21 = uVar10 << 0x2d | uVar33;
    param_3[0xc] = uVar15;
    param_3[0xd] = uVar21;
    uVar30 = (uVar13 & 0x1ffffffffffff) >> 0x13;
    uVar34 = (uVar12 & 0x1ffffffffffff) >> 0x13;
    uVar38 = uVar37 << 0x1e | uVar30;
    uVar40 = uVar39 << 0x1e | uVar34;
    param_3[0xe] = uVar38;
    param_3[0xf] = uVar40;
    uVar37 = (uVar10 & 0x7ffff) >> 4;
    uVar35 = (uVar4 & 0x7ffff) >> 4;
    uVar15 = uVar15 << 0xf | uVar37;
    uVar21 = uVar21 << 0xf | uVar35;
    param_3[0x10] = uVar15;
    param_3[0x11] = uVar21;
    uVar39 = (uVar19 & 0x1ffffffffffff) >> 0x13;
    uVar36 = (uVar16 & 0x1ffffffffffff) >> 0x13;
    param_3[0x12] = uVar20 << 0x1e | uVar39;
    param_3[0x13] = uVar17 << 0x1e | uVar36;
    uVar17 = (uVar22 & 0x3ffffffff) >> 4;
    uVar22 = (uVar25 & 0x3ffffffff) >> 4;
    uVar20 = uVar26 << 0x1e | uVar17;
    uVar25 = uVar23 << 0x1e | uVar22;
    param_3[0x14] = uVar20;
    param_3[0x15] = uVar25;
    uVar10 = uVar15 << 0x11 | (uVar10 << 0x2d & 0x1ffffffffffff | uVar33) >> 0x20;
    uVar4 = uVar21 << 0x11 | (uVar4 << 0x2d & 0x1ffffffffffff | uVar29) >> 0x20;
    param_3[0x16] = uVar10;
    param_3[0x17] = uVar4;
    uVar13 = uVar38 << 0x20 | (uVar13 << 0xf & 0x3ffffffff | uVar31) >> 2;
    uVar12 = uVar40 << 0x20 | (uVar12 << 0xf & 0x3ffffffff | uVar27) >> 2;
    param_3[0x18] = uVar13;
    param_3[0x19] = uVar12;
    param_3[0x1a] = uVar39 << 0x22 | (uVar19 & 0x7ffff | uVar3 >> 0x31) << 0xf | uVar32;
    param_3[0x1b] = uVar36 << 0x22 | (uVar16 & 0x7ffff | uVar9 >> 0x31) << 0xf | uVar28;
    param_3[0x1c] = uVar13 << 0x11 | ((uVar31 & 3) << 0x1e | uVar34) >> 0xf;
    param_3[0x1d] = uVar12 << 0x11 | ((uVar27 & 3) << 0x1e | uVar30) >> 0xf;
    param_3[0x1e] = uVar10 << 0x22 | ((uVar33 & 0xffffffff) << 0xf | uVar35) >> 0xd;
    param_3[0x1f] = uVar4 << 0x22 | ((uVar29 & 0xffffffff) << 0xf | uVar37) >> 0xd;
    param_3[0x20] = uVar17 << 0x33 | uVar25 >> 0xd;
    param_3[0x21] = uVar22 << 0x33 | uVar20 >> 0xd;
    uVar5 = 4;
  }
  return uVar5;
}

