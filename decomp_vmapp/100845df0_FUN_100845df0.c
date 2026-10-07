
undefined8 FUN_100845df0(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar17;
  ulong *puVar18;
  ulong *local_80;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulong uVar16;
  
  bVar1 = *param_1;
  pcVar3 = *(code **)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar1 & 0x40) == 0) {
    (*pcVar3)(param_1,param_1 + 0x10,uVar4);
  }
  uVar15 = bVar1 & 7 ^ 0xf;
  uVar16 = (ulong)uVar15;
  uVar14 = 0;
  uVar17 = bVar1 & 7;
  *param_1 = (byte)uVar17;
  if ((bVar1 & 7) != 0) {
    uVar5 = uVar15 + 1;
    uVar13 = 0xf;
    if (0xf < uVar5) {
      uVar13 = uVar5;
    }
    uVar14 = 0;
    uVar8 = uVar16;
    uVar6 = uVar15;
    if ((uVar13 - uVar15 & 1) != 0) {
      bVar11 = param_1[uVar16];
      param_1[uVar16] = 0;
      uVar14 = (ulong)bVar11 << 8;
      uVar8 = uVar16 + 1;
      uVar6 = uVar5;
    }
    if (uVar13 - 1 != uVar15) {
      pbVar12 = param_1 + uVar8 + 1;
      do {
        bVar11 = pbVar12[-1];
        pbVar12[-1] = 0;
        bVar2 = *pbVar12;
        *pbVar12 = 0;
        uVar14 = ((ulong)bVar2 | (bVar11 | uVar14) << 8) << 8;
        uVar6 = uVar6 + 2;
        pbVar12 = pbVar12 + 2;
      } while (uVar6 < 0xf);
    }
  }
  bVar11 = param_1[0xf];
  param_1[0xf] = 1;
  uVar7 = 0xffffffff;
  if ((bVar11 | uVar14) == param_4) {
    local_80 = param_3;
    if (0xf < param_4) {
      uVar14 = param_4 - 0x10;
      uVar8 = uVar14 & 0xfffffffffffffff0;
      local_80 = (ulong *)((long)param_3 + uVar8 + 0x10);
      puVar18 = param_2;
      do {
        (*pcVar3)(param_1,&local_48,uVar4);
        lVar9 = 0xf;
        do {
          bVar11 = param_1[lVar9];
          param_1[lVar9] = bVar11 + 1;
          if ((int)lVar9 == 8) break;
          lVar9 = lVar9 + -1;
        } while ((byte)(bVar11 + 1) == 0);
        uVar10 = *puVar18 ^ CONCAT44(uStack_44,local_48);
        *param_3 = uVar10;
        *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ uVar10;
        uVar10 = puVar18[1] ^ CONCAT44(uStack_3c,uStack_40);
        param_3[1] = uVar10;
        *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ uVar10;
        (*pcVar3)(param_1 + 0x10,param_1 + 0x10,uVar4);
        puVar18 = puVar18 + 2;
        param_3 = param_3 + 2;
        param_4 = param_4 - 0x10;
      } while (0xf < param_4);
      param_4 = uVar14 - uVar8;
      param_2 = (ulong *)((long)param_2 + uVar8 + 0x10);
    }
    if (param_4 != 0) {
      (*pcVar3)(param_1,&local_48,uVar4);
      pbVar12 = param_1 + 0x10;
      uVar15 = 1;
      uVar14 = 0;
      do {
        bVar11 = *(byte *)((long)param_2 + uVar14) ^ *(byte *)((long)&local_48 + uVar14);
        *(byte *)((long)local_80 + uVar14) = bVar11;
        pbVar12[uVar14] = pbVar12[uVar14] ^ bVar11;
        uVar14 = (ulong)uVar15;
        uVar15 = uVar15 + 1;
      } while (uVar14 < param_4);
      (*pcVar3)(pbVar12,pbVar12,uVar4);
    }
    ___bzero(param_1 + uVar16,uVar17 + 1);
    (*pcVar3)(param_1,&local_48,uVar4);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) ^ local_48;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) ^ uStack_44;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) ^ uStack_40;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) ^ uStack_3c;
    *param_1 = bVar1;
    uVar7 = 0;
  }
  return uVar7;
}

