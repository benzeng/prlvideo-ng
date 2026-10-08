
undefined8 FUN_100c1feb0(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  byte *pbVar1;
  ulong *puVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  bool bVar17;
  
  uVar12 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar12) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  pcVar4 = *(code **)(param_1 + 0x178);
  uVar5 = *(undefined8 *)(param_1 + 0x180);
  pcVar6 = *(code **)(param_1 + 0x160);
  pcVar7 = *(code **)(param_1 + 0x168);
  *(ulong *)(param_1 + 0x38) = uVar12;
  if (*(int *)(param_1 + 0x174) != 0) {
    (*pcVar6)(param_1 + 0x40,param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar14 = *(uint *)(param_1 + 0xc);
  uVar8 = *(uint *)(param_1 + 0x170);
  if (uVar8 == 0) {
LAB_100c1ffcd:
    uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
    if (0xbff < param_4) {
      uVar12 = param_4 - 0xc00;
      uVar10 = uVar12 / 0xc00;
      puVar2 = param_2 + uVar10 * 0x180 + 0x180;
      uVar8 = uVar14 + 1;
      puVar11 = param_3;
      do {
        (*pcVar7)(param_1 + 0x40,param_1 + 0x60,param_2,0xc00);
        lVar15 = 0;
        uVar16 = uVar8;
        do {
          (*pcVar4)(param_1,param_1 + 0x10,uVar5);
          *(uint *)(param_1 + 0xc) =
               uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
          *(ulong *)((long)puVar11 + lVar15) =
               *(ulong *)(param_1 + 0x10) ^ *(ulong *)((long)param_2 + lVar15);
          *(ulong *)((long)puVar11 + lVar15 + 8) =
               *(ulong *)(param_1 + 0x18) ^ *(ulong *)((long)param_2 + lVar15 + 8);
          lVar15 = lVar15 + 0x10;
          uVar16 = uVar16 + 1;
        } while (lVar15 != 0xc00);
        param_2 = param_2 + 0x180;
        param_4 = param_4 - 0xc00;
        uVar8 = uVar8 + 0xc0;
        puVar11 = puVar11 + 0x180;
      } while (0xbff < param_4);
      param_4 = uVar12 % 0xc00;
      param_3 = param_3 + uVar10 * 0x180 + 0x180;
      uVar14 = (int)uVar10 * 0xc0 + uVar14 + 0xc0;
      param_2 = puVar2;
    }
    if (((param_4 & 0xfffffffffffffff0) != 0) &&
       ((*pcVar7)(param_1 + 0x40,param_1 + 0x60,param_2), 0xf < param_4)) {
      uVar12 = param_4 - 0x10;
      uVar10 = uVar12 >> 4;
      puVar2 = param_2 + uVar10 * 2 + 2;
      iVar9 = (int)uVar10 + uVar14;
      puVar11 = param_3;
      do {
        uVar14 = uVar14 + 1;
        (*pcVar4)(param_1,param_1 + 0x10,uVar5);
        *(uint *)(param_1 + 0xc) =
             uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 * 0x1000000
        ;
        *puVar11 = *(ulong *)(param_1 + 0x10) ^ *param_2;
        puVar11[1] = *(ulong *)(param_1 + 0x18) ^ param_2[1];
        param_4 = param_4 - 0x10;
        param_2 = param_2 + 2;
        puVar11 = puVar11 + 2;
      } while (0xf < param_4);
      param_4 = uVar12 + uVar10 * -0x10;
      param_3 = param_3 + uVar10 * 2 + 2;
      uVar14 = iVar9 + 1;
      param_2 = puVar2;
    }
    uVar13 = 0;
    if (param_4 != 0) {
      (*pcVar4)(param_1,param_1 + 0x10,uVar5);
      uVar14 = uVar14 + 1;
      *(uint *)(param_1 + 0xc) =
           uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 * 0x1000000;
      uVar12 = 0;
      do {
        uVar10 = uVar12 & 0xffffffff;
        bVar3 = *(byte *)((long)param_2 + uVar10);
        pbVar1 = (byte *)(param_1 + 0x40 + uVar10);
        *pbVar1 = *pbVar1 ^ bVar3;
        *(byte *)((long)param_3 + uVar10) = bVar3 ^ *(byte *)(param_1 + 0x10 + uVar10);
        uVar12 = uVar12 + 1;
      } while (param_4 != uVar12);
      uVar13 = (undefined4)param_4;
    }
    *(undefined4 *)(param_1 + 0x170) = uVar13;
  }
  else {
    uVar12 = param_4;
    if (param_4 != 0) {
      do {
        uVar10 = *param_2;
        param_2 = (ulong *)((long)param_2 + 1);
        *(byte *)param_3 = *(byte *)(param_1 + 0x10 + (ulong)uVar8) ^ (byte)uVar10;
        pbVar1 = (byte *)(param_1 + 0x40 + (ulong)uVar8);
        *pbVar1 = *pbVar1 ^ (byte)uVar10;
        param_3 = (ulong *)((long)param_3 + 1);
        param_4 = uVar12 - 1;
        uVar8 = uVar8 + 1 & 0xf;
        if (uVar8 == 0) break;
        bVar17 = uVar12 != 1;
        uVar12 = param_4;
      } while (bVar17);
      if (uVar8 == 0) {
        (*pcVar6)(param_1 + 0x40,param_1 + 0x60);
        goto LAB_100c1ffcd;
      }
    }
    *(uint *)(param_1 + 0x170) = uVar8;
  }
  return 0;
}

