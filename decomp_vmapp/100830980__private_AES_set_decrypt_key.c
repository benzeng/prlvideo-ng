
undefined8 _private_AES_set_decrypt_key(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  int iVar28;
  
  uVar7 = FUN_1008306f0();
  if ((int)uVar7 == 0) {
    uVar5 = param_3[0x1e];
    puVar16 = param_3 + (ulong)(uint)uVar5 * 2;
    puVar15 = param_3;
    do {
      uVar1 = puVar15[1];
      uVar2 = *puVar16;
      uVar3 = puVar16[1];
      *puVar16 = *puVar15;
      puVar16[1] = uVar1;
      *puVar15 = uVar2;
      puVar15[1] = uVar3;
      uVar3 = DAT_100831d78;
      uVar2 = DAT_100831d70;
      uVar1 = DAT_100831d68;
      puVar15 = puVar15 + 2;
      puVar16 = puVar16 + -2;
    } while (puVar16 != puVar15);
    iVar28 = (uint)uVar5 - 1;
    do {
      puVar15 = param_3 + 2;
      uVar5 = *puVar15;
      uVar4 = param_3[3];
      uVar13 = (uVar5 & uVar1) - ((uVar5 & uVar1) >> 7) & uVar3 ^ uVar5 * 2 & uVar2;
      uVar10 = (uVar4 & uVar1) - ((uVar4 & uVar1) >> 7) & uVar3 ^ uVar4 * 2 & uVar2;
      uVar14 = (uVar13 & uVar1) - ((uVar13 & uVar1) >> 7) & uVar3 ^ uVar13 * 2 & uVar2;
      uVar11 = (uVar10 & uVar1) - ((uVar10 & uVar1) >> 7) & uVar3 ^ uVar10 * 2 & uVar2;
      uVar21 = uVar14 * 2 & uVar2 ^ (uVar14 & uVar1) - ((uVar14 & uVar1) >> 7) & uVar3;
      uVar27 = uVar11 * 2 & uVar2 ^ (uVar11 & uVar1) - ((uVar11 & uVar1) >> 7) & uVar3;
      uVar19 = uVar13 ^ uVar5 ^ uVar21;
      uVar24 = uVar10 ^ uVar4 ^ uVar27;
      uVar14 = uVar14 ^ uVar5 ^ uVar21;
      uVar25 = uVar11 ^ uVar4 ^ uVar27;
      uVar6 = (uint)(uVar5 ^ uVar21);
      uVar8 = (uint)(uVar4 ^ uVar27);
      uVar11 = uVar13 ^ uVar5 ^ uVar14;
      uVar10 = uVar10 ^ uVar4 ^ uVar25;
      uVar12 = (uint)((uVar5 ^ uVar21) >> 0x20);
      uVar9 = (uint)((uVar4 ^ uVar27) >> 0x20);
      uVar17 = (uint)uVar19;
      uVar22 = (uint)uVar24;
      uVar20 = (uint)(uVar19 >> 0x20);
      uVar26 = (uint)(uVar24 >> 0x20);
      uVar18 = (uint)(uVar14 >> 0x20);
      uVar23 = (uint)(uVar25 >> 0x20);
      *(uint *)puVar15 =
           (uVar6 << 8 | uVar6 >> 0x18) ^ (uint)uVar11 ^ (uVar17 << 0x18 | uVar17 >> 8) ^
           ((uint)uVar14 << 0x10 | (uint)uVar14 >> 0x10);
      *(uint *)((long)param_3 + 0x14) =
           (uVar12 << 8 | uVar12 >> 0x18) ^ (uint)(uVar11 >> 0x20) ^ (uVar20 << 0x18 | uVar20 >> 8)
           ^ (uVar18 << 0x10 | uVar18 >> 0x10);
      *(uint *)(param_3 + 3) =
           (uVar8 << 8 | uVar8 >> 0x18) ^ (uint)uVar10 ^ (uVar22 << 0x18 | uVar22 >> 8) ^
           ((uint)uVar25 << 0x10 | (uint)uVar25 >> 0x10);
      *(uint *)((long)param_3 + 0x1c) =
           (uVar9 << 8 | uVar9 >> 0x18) ^ (uint)(uVar10 >> 0x20) ^ (uVar26 << 0x18 | uVar26 >> 8) ^
           (uVar23 << 0x10 | uVar23 >> 0x10);
      iVar28 = iVar28 + -1;
      param_3 = puVar15;
    } while (iVar28 != 0);
    uVar7 = 0;
  }
  return uVar7;
}

