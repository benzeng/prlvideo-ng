
undefined8 FUN_100c21550(byte *param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  byte *pbVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulong uVar17;
  
  bVar1 = *param_1;
  pcVar3 = *(code **)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar1 & 0x40) == 0) {
    (*pcVar3)(param_1,param_1 + 0x10,uVar4);
  }
  uVar16 = bVar1 & 7 ^ 0xf;
  uVar17 = (ulong)uVar16;
  uVar9 = 0;
  uVar15 = bVar1 & 7;
  *param_1 = (byte)uVar15;
  if ((bVar1 & 7) != 0) {
    uVar5 = uVar16 + 1;
    uVar14 = 0xf;
    if (0xf < uVar5) {
      uVar14 = uVar5;
    }
    uVar9 = 0;
    uVar10 = uVar17;
    uVar6 = uVar16;
    if ((uVar14 - uVar16 & 1) != 0) {
      bVar11 = param_1[uVar17];
      param_1[uVar17] = 0;
      uVar9 = (ulong)bVar11 << 8;
      uVar10 = uVar17 + 1;
      uVar6 = uVar5;
    }
    if (uVar14 - 1 != uVar16) {
      pbVar12 = param_1 + uVar10 + 1;
      do {
        bVar11 = pbVar12[-1];
        pbVar12[-1] = 0;
        bVar2 = *pbVar12;
        *pbVar12 = 0;
        uVar9 = ((ulong)bVar2 | (bVar11 | uVar9) << 8) << 8;
        uVar6 = uVar6 + 2;
        pbVar12 = pbVar12 + 2;
      } while (uVar6 < 0xf);
    }
  }
  bVar11 = param_1[0xf];
  param_1[0xf] = 1;
  uVar7 = 0xffffffff;
  if ((bVar11 | uVar9) == param_4) {
    uVar9 = param_4 >> 4;
    if (uVar9 != 0) {
      (*param_5)(param_2,param_3,uVar9,uVar4,param_1,param_1 + 0x10);
      param_2 = param_2 + uVar9 * 0x10;
      param_3 = param_3 + uVar9 * 0x10;
      uVar10 = 0;
      lVar8 = 0xf;
      param_4 = param_4 + uVar9 * -0x10;
      for (uVar13 = param_4; uVar13 != 0; uVar13 = uVar13 >> 8) {
        uVar13 = (uVar9 & 0xff) + uVar10 + (ulong)param_1[lVar8];
        param_1[lVar8] = (byte)uVar13;
        if (lVar8 == 8) break;
        uVar10 = uVar13 >> 8;
        uVar13 = uVar13 | uVar9;
        uVar9 = uVar9 >> 8;
        lVar8 = lVar8 + -1;
      }
    }
    if (param_4 != 0) {
      (*pcVar3)(param_1,&local_48,uVar4);
      pbVar12 = param_1 + 0x10;
      uVar16 = 1;
      uVar9 = 0;
      do {
        bVar11 = *(byte *)(param_2 + uVar9) ^ *(byte *)((long)&local_48 + uVar9);
        *(byte *)(param_3 + uVar9) = bVar11;
        pbVar12[uVar9] = pbVar12[uVar9] ^ bVar11;
        uVar9 = (ulong)uVar16;
        uVar16 = uVar16 + 1;
      } while (uVar9 < param_4);
      (*pcVar3)(pbVar12,pbVar12,uVar4);
    }
    ___bzero(param_1 + uVar17,uVar15 + 1);
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

