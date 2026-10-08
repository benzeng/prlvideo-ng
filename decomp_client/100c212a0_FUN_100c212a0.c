
undefined8 FUN_100c212a0(byte *param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  bVar1 = *param_1;
  pcVar4 = *(code **)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar1 & 0x40) == 0) {
    (*pcVar4)(param_1,param_1 + 0x10,uVar5);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  uVar14 = bVar1 & 7 ^ 0xf;
  uVar10 = 0;
  uVar16 = bVar1 & 7;
  *param_1 = (byte)uVar16;
  if ((bVar1 & 7) != 0) {
    uVar11 = (ulong)uVar14;
    uVar7 = uVar14 + 1;
    uVar15 = 0xf;
    if (0xf < uVar7) {
      uVar15 = uVar7;
    }
    uVar10 = 0;
    uVar6 = uVar14;
    if ((uVar15 - uVar14 & 1) != 0) {
      bVar2 = param_1[uVar11];
      param_1[uVar11] = 0;
      uVar10 = (ulong)bVar2 << 8;
      uVar11 = uVar11 + 1;
      uVar6 = uVar7;
    }
    if (uVar15 - 1 != uVar14) {
      pbVar12 = param_1 + uVar11 + 1;
      do {
        bVar2 = pbVar12[-1];
        pbVar12[-1] = 0;
        bVar3 = *pbVar12;
        *pbVar12 = 0;
        uVar10 = ((ulong)bVar3 | (bVar2 | uVar10) << 8) << 8;
        uVar6 = uVar6 + 2;
        pbVar12 = pbVar12 + 2;
      } while (uVar6 < 0xf);
    }
  }
  bVar2 = param_1[0xf];
  param_1[0xf] = 1;
  uVar8 = 0xffffffff;
  if ((bVar2 | uVar10) == param_4) {
    uVar10 = (param_4 + 0xf >> 3 | 1) + *(long *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = uVar10;
    uVar8 = 0xfffffffe;
    if (uVar10 < 0x2000000000000001) {
      uVar10 = param_4 >> 4;
      if (uVar10 != 0) {
        (*param_5)(param_2,param_3,uVar10,uVar5,param_1,param_1 + 0x10);
        param_2 = param_2 + uVar10 * 0x10;
        param_3 = param_3 + uVar10 * 0x10;
        uVar11 = 0;
        lVar9 = 0xf;
        param_4 = param_4 + uVar10 * -0x10;
        for (uVar13 = param_4; uVar13 != 0; uVar13 = uVar13 >> 8) {
          uVar13 = (uVar10 & 0xff) + uVar11 + (ulong)param_1[lVar9];
          param_1[lVar9] = (byte)uVar13;
          if (lVar9 == 8) break;
          uVar11 = uVar13 >> 8;
          uVar13 = uVar13 | uVar10;
          uVar10 = uVar10 >> 8;
          lVar9 = lVar9 + -1;
        }
      }
      if (param_4 != 0) {
        pbVar12 = param_1 + 0x10;
        uVar7 = 1;
        uVar10 = 0;
        do {
          pbVar12[uVar10] = pbVar12[uVar10] ^ *(byte *)(param_2 + uVar10);
          uVar10 = (ulong)uVar7;
          uVar7 = uVar7 + 1;
        } while (uVar10 < param_4);
        (*pcVar4)(pbVar12,pbVar12,uVar5);
        (*pcVar4)(param_1,&local_48,uVar5);
        uVar7 = 1;
        uVar10 = 0;
        do {
          *(byte *)(param_3 + uVar10) =
               *(byte *)(param_2 + uVar10) ^ *(byte *)((long)&local_48 + uVar10);
          uVar10 = (ulong)uVar7;
          uVar7 = uVar7 + 1;
        } while (uVar10 < param_4);
      }
      ___bzero(param_1 + uVar14,uVar16 + 1);
      (*pcVar4)(param_1,&local_48,uVar5);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) ^ local_48;
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) ^ uStack_44;
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) ^ uStack_40;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) ^ uStack_3c;
      *param_1 = bVar1;
      uVar8 = 0;
    }
  }
  return uVar8;
}

