
undefined8 FUN_100c1fa60(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  uint uVar17;
  bool bVar18;
  ulong *local_58;
  
  uVar14 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar14) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  pcVar2 = *(code **)(param_1 + 0x178);
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  pcVar4 = *(code **)(param_1 + 0x160);
  pcVar5 = *(code **)(param_1 + 0x168);
  *(ulong *)(param_1 + 0x38) = uVar14;
  if (*(int *)(param_1 + 0x174) != 0) {
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar13 = *(uint *)(param_1 + 0xc);
  uVar6 = *(uint *)(param_1 + 0x170);
  if (uVar6 == 0) {
LAB_100c1fb6d:
    uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
    if (0xbff < param_4) {
      puVar15 = param_3 + 0x17e;
      uVar14 = param_4 - 0xc00;
      uVar11 = uVar14 / 0xc00;
      uVar6 = uVar13 + 1;
      puVar12 = param_3;
      local_58 = param_2;
      do {
        lVar16 = 0;
        uVar17 = uVar6;
        do {
          (*pcVar2)(param_1,param_1 + 0x10,uVar3);
          *(uint *)(param_1 + 0xc) =
               uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
          *(ulong *)((long)puVar12 + lVar16) =
               *(ulong *)(param_1 + 0x10) ^ *(ulong *)((long)local_58 + lVar16);
          *(ulong *)((long)puVar12 + lVar16 + 8) =
               *(ulong *)(param_1 + 0x18) ^ *(ulong *)((long)local_58 + lVar16 + 8);
          lVar16 = lVar16 + 0x10;
          uVar17 = uVar17 + 1;
        } while (lVar16 != 0xc00);
        local_58 = local_58 + 0x180;
        (*pcVar5)(param_1 + 0x40,param_1 + 0x60,puVar15 + -0x17e,0xc00);
        param_4 = param_4 - 0xc00;
        puVar15 = puVar15 + 0x180;
        uVar6 = uVar6 + 0xc0;
        puVar12 = puVar12 + 0x180;
      } while (0xbff < param_4);
      param_4 = uVar14 % 0xc00;
      param_3 = param_3 + uVar11 * 0x180 + 0x180;
      uVar13 = (int)uVar11 * 0xc0 + uVar13 + 0xc0;
      param_2 = param_2 + uVar11 * 0x180 + 0x180;
    }
    uVar14 = param_4 & 0xfffffffffffffff0;
    if (uVar14 != 0) {
      if (0xf < param_4) {
        uVar11 = param_4 - 0x10;
        uVar9 = uVar11 >> 4;
        puVar15 = param_2 + uVar9 * 2 + 2;
        iVar7 = (int)uVar9 + uVar13;
        puVar12 = param_3;
        do {
          uVar13 = uVar13 + 1;
          (*pcVar2)(param_1,param_1 + 0x10,uVar3);
          *(uint *)(param_1 + 0xc) =
               uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
               uVar13 * 0x1000000;
          *puVar12 = *(ulong *)(param_1 + 0x10) ^ *param_2;
          puVar12[1] = *(ulong *)(param_1 + 0x18) ^ param_2[1];
          param_4 = param_4 - 0x10;
          param_2 = param_2 + 2;
          puVar12 = puVar12 + 2;
        } while (0xf < param_4);
        param_4 = uVar11 + uVar9 * -0x10;
        param_3 = param_3 + uVar9 * 2 + 2;
        uVar13 = iVar7 + 1;
        param_2 = puVar15;
      }
      (*pcVar5)(param_1 + 0x40,param_1 + 0x60,(long)param_3 - uVar14);
    }
    uVar8 = 0;
    if (param_4 != 0) {
      (*pcVar2)(param_1,param_1 + 0x10,uVar3);
      uVar13 = uVar13 + 1;
      *(uint *)(param_1 + 0xc) =
           uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 * 0x1000000;
      uVar14 = 0;
      do {
        uVar11 = uVar14 & 0xffffffff;
        bVar10 = *(byte *)(param_1 + 0x10 + uVar11) ^ *(byte *)((long)param_2 + uVar11);
        *(byte *)((long)param_3 + uVar11) = bVar10;
        pbVar1 = (byte *)(param_1 + 0x40 + uVar11);
        *pbVar1 = *pbVar1 ^ bVar10;
        uVar14 = uVar14 + 1;
      } while (param_4 != uVar14);
      uVar8 = (undefined4)param_4;
    }
    *(undefined4 *)(param_1 + 0x170) = uVar8;
  }
  else {
    uVar14 = param_4;
    if (param_4 != 0) {
      do {
        bVar10 = *(byte *)(param_1 + 0x10 + (ulong)uVar6) ^ (byte)*param_2;
        param_2 = (ulong *)((long)param_2 + 1);
        *(byte *)param_3 = bVar10;
        pbVar1 = (byte *)(param_1 + 0x40 + (ulong)uVar6);
        *pbVar1 = *pbVar1 ^ bVar10;
        param_3 = (ulong *)((long)param_3 + 1);
        param_4 = uVar14 - 1;
        uVar6 = uVar6 + 1 & 0xf;
        if (uVar6 == 0) break;
        bVar18 = uVar14 != 1;
        uVar14 = param_4;
      } while (bVar18);
      if (uVar6 == 0) {
        (*pcVar4)(param_1 + 0x40,param_1 + 0x60);
        goto LAB_100c1fb6d;
      }
    }
    *(uint *)(param_1 + 0x170) = uVar6;
  }
  return 0;
}

