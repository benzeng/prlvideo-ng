
undefined8 FUN_1008446d0(long param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  code *pcVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  byte *pbVar15;
  uint *puVar16;
  ulong uVar17;
  bool bVar18;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return 0xfffffffe;
  }
  uVar12 = *(ulong *)(param_1 + 0x30) + param_3;
  if (0x2000000000000000 < uVar12) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x30),param_3)) {
    return 0xffffffff;
  }
  pcVar2 = *(code **)(param_1 + 0x160);
  pcVar3 = *(code **)(param_1 + 0x168);
  *(ulong *)(param_1 + 0x30) = uVar12;
  uVar10 = *(uint *)(param_1 + 0x174);
  if (uVar10 == 0) {
LAB_10084478d:
    uVar12 = param_3 & 0xfffffffffffffff0;
    if (uVar12 != 0) {
      (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_2,uVar12);
      param_2 = param_2 + uVar12;
      param_3 = param_3 - uVar12;
    }
    uVar11 = 0;
    if (param_3 != 0) {
      uVar12 = 0;
      if (((param_3 & 0xffffffffffffffe0) != 0) &&
         ((param_2 + (param_3 - 1) < (byte *)(param_1 + 0x40U) ||
          (uVar12 = 0, (byte *)(param_3 + 0x3f + param_1) < param_2)))) {
        puVar14 = (uint *)(param_1 + 0x50);
        puVar16 = (uint *)(param_2 + 0x10);
        uVar17 = param_3 & 0xffffffffffffffe0;
        do {
          uVar10 = puVar16[-3];
          uVar4 = puVar16[-2];
          uVar5 = puVar16[-1];
          uVar6 = *puVar16;
          uVar7 = puVar16[1];
          uVar8 = puVar16[2];
          uVar9 = puVar16[3];
          puVar14[-4] = puVar14[-4] ^ puVar16[-4];
          puVar14[-3] = puVar14[-3] ^ uVar10;
          puVar14[-2] = puVar14[-2] ^ uVar4;
          puVar14[-1] = puVar14[-1] ^ uVar5;
          *puVar14 = *puVar14 ^ uVar6;
          puVar14[1] = puVar14[1] ^ uVar7;
          puVar14[2] = puVar14[2] ^ uVar8;
          puVar14[3] = puVar14[3] ^ uVar9;
          puVar14 = puVar14 + 8;
          puVar16 = puVar16 + 8;
          uVar17 = uVar17 - 0x20;
          uVar12 = param_3 & 0xffffffffffffffe0;
        } while (uVar17 != 0);
      }
      lVar13 = param_3 - uVar12;
      if (lVar13 != 0) {
        param_2 = param_2 + uVar12;
        pbVar15 = (byte *)(param_1 + 0x40 + uVar12);
        do {
          *pbVar15 = *pbVar15 ^ *param_2;
          param_2 = param_2 + 1;
          pbVar15 = pbVar15 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      uVar11 = (undefined4)param_3;
    }
    *(undefined4 *)(param_1 + 0x174) = uVar11;
  }
  else {
    if (param_3 != 0) {
      do {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        pbVar15 = (byte *)(param_1 + 0x40 + (ulong)uVar10);
        *pbVar15 = *pbVar15 ^ bVar1;
        uVar10 = uVar10 + 1 & 0xf;
        bVar18 = param_3 == 1;
        param_3 = param_3 - 1;
        if (bVar18) break;
      } while (uVar10 != 0);
      if (uVar10 == 0) {
        (*pcVar2)(param_1 + 0x40,param_1 + 0x60);
        goto LAB_10084478d;
      }
    }
    *(uint *)(param_1 + 0x174) = uVar10;
  }
  return 0;
}

