
undefined8 FUN_100845b00(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong *puVar17;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulong uVar16;
  
  bVar2 = *param_1;
  pcVar5 = *(code **)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar2 & 0x40) == 0) {
    (*pcVar5)(param_1,param_1 + 0x10,uVar6);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  uVar15 = bVar2 & 7 ^ 0xf;
  uVar16 = (ulong)uVar15;
  uVar14 = 0;
  *param_1 = bVar2 & 7;
  if ((bVar2 & 7) != 0) {
    uVar7 = uVar15 + 1;
    uVar13 = 0xf;
    if (0xf < uVar7) {
      uVar13 = uVar7;
    }
    uVar14 = 0;
    uVar10 = uVar16;
    uVar8 = uVar15;
    if ((uVar13 - uVar15 & 1) != 0) {
      bVar3 = param_1[uVar16];
      param_1[uVar16] = 0;
      uVar14 = (ulong)bVar3 << 8;
      uVar10 = uVar16 + 1;
      uVar8 = uVar7;
    }
    if (uVar13 - 1 != uVar15) {
      pbVar12 = param_1 + uVar10 + 1;
      do {
        bVar3 = pbVar12[-1];
        pbVar12[-1] = 0;
        bVar4 = *pbVar12;
        *pbVar12 = 0;
        uVar14 = ((ulong)bVar4 | (bVar3 | uVar14) << 8) << 8;
        uVar8 = uVar8 + 2;
        pbVar12 = pbVar12 + 2;
      } while (uVar8 < 0xf);
    }
  }
  bVar3 = param_1[0xf];
  param_1[0xf] = 1;
  uVar9 = 0xffffffff;
  if ((bVar3 | uVar14) == param_4) {
    uVar14 = (param_4 + 0xf >> 3 | 1) + *(long *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = uVar14;
    uVar9 = 0xfffffffe;
    if (uVar14 < 0x2000000000000001) {
      if (0xf < param_4) {
        uVar14 = param_4 - 0x10;
        uVar10 = uVar14 & 0xfffffffffffffff0;
        puVar1 = (ulong *)((long)param_3 + uVar10 + 0x10);
        puVar17 = param_2;
        do {
          *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ *puVar17;
          *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ puVar17[1];
          (*pcVar5)(param_1 + 0x10,param_1 + 0x10,uVar6);
          (*pcVar5)(param_1,&local_48,uVar6);
          lVar11 = 0xf;
          do {
            bVar3 = param_1[lVar11];
            param_1[lVar11] = bVar3 + 1;
            if ((int)lVar11 == 8) break;
            lVar11 = lVar11 + -1;
          } while ((byte)(bVar3 + 1) == 0);
          *param_3 = *puVar17 ^ CONCAT44(uStack_44,local_48);
          param_3[1] = puVar17[1] ^ CONCAT44(uStack_3c,uStack_40);
          puVar17 = puVar17 + 2;
          param_3 = param_3 + 2;
          param_4 = param_4 - 0x10;
        } while (0xf < param_4);
        param_4 = uVar14 - uVar10;
        param_2 = (ulong *)((long)param_2 + uVar10 + 0x10);
        param_3 = puVar1;
      }
      if (param_4 != 0) {
        pbVar12 = param_1 + 0x10;
        uVar15 = 1;
        uVar14 = 0;
        do {
          pbVar12[uVar14] = pbVar12[uVar14] ^ *(byte *)((long)param_2 + uVar14);
          uVar14 = (ulong)uVar15;
          uVar15 = uVar15 + 1;
        } while (uVar14 < param_4);
        (*pcVar5)(pbVar12,pbVar12,uVar6);
        (*pcVar5)(param_1,&local_48,uVar6);
        uVar15 = 1;
        uVar14 = 0;
        do {
          *(byte *)((long)param_3 + uVar14) =
               *(byte *)((long)param_2 + uVar14) ^ *(byte *)((long)&local_48 + uVar14);
          uVar14 = (ulong)uVar15;
          uVar15 = uVar15 + 1;
        } while (uVar14 < param_4);
      }
      ___bzero(param_1 + uVar16,(bVar2 & 7) + 1);
      (*pcVar5)(param_1,&local_48,uVar6);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) ^ local_48;
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) ^ uStack_44;
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) ^ uStack_40;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) ^ uStack_3c;
      *param_1 = bVar2;
      uVar9 = 0;
    }
  }
  return uVar9;
}

