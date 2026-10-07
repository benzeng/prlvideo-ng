
undefined8 FUN_1003c98e0(long param_1,uint *param_2,uint *param_3,uint *param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *param_4;
  iVar4 = *(int *)(param_1 + 0xc);
  uVar16 = param_4[3] - param_4[1];
  if (uVar16 != 0) {
    lVar12 = *(long *)(param_1 + 0x10);
    uVar5 = param_2[2];
    uVar6 = param_4[2];
    uVar7 = param_2[3];
    uVar14 = param_3[3];
    puVar17 = (uint *)((ulong)(param_4[1] * uVar14) + (ulong)uVar3 * 4 + *(long *)(param_3 + 4));
    uVar8 = *(uint *)(&DAT_100b3f714 + (ulong)*param_3 * 8);
    uVar20 = param_5 ^ 0xff;
    uVar15 = 0;
    do {
      if (uVar6 != uVar3) {
        iVar9 = *(int *)(param_1 + 0xc);
        puVar18 = puVar17;
        uVar14 = uVar5 - uVar1;
        iVar21 = uVar6 - uVar3;
        do {
          uVar10 = *(uint *)((ulong)(uint)((int)((ulong)((uVar15 * 2 + 1) * (uVar7 - uVar2)) /
                                                 (ulong)uVar16 >> 1) * iVar9) +
                             (ulong)(iVar4 * uVar2) + (ulong)uVar1 * 4 + lVar12 +
                            ((ulong)uVar14 / (ulong)(uVar6 - uVar3) >> 1) * 4);
          uVar11 = *puVar18;
          uVar13 = uVar11 >> 0x18;
          uVar19 = (uint)param_5;
          if ((uVar8 & 1) != 0) {
            uVar13 = (uVar13 * uVar20) / 0xff + ((uVar10 >> 0x18) * uVar19) / 0xff;
          }
          *puVar18 = (((uVar11 >> 8 & 0xff) * uVar20) / 0xff +
                      ((uVar10 >> 8 & 0xff) * uVar19) / 0xff & 0xff) << 8 |
                     (((uVar11 >> 0x10 & 0xff) * uVar20) / 0xff +
                      ((uVar10 >> 0x10 & 0xff) * (uint)param_5) / 0xff & 0xff) << 0x10 |
                     ((uVar11 & 0xff) * uVar20) / 0xff + ((uVar10 & 0xff) * uVar19) / 0xff & 0xff |
                     uVar13 << 0x18;
          puVar18 = puVar18 + 1;
          uVar14 = uVar14 + uVar5 * 2 + uVar1 * -2;
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
        uVar14 = param_3[3];
      }
      puVar17 = (uint *)((long)puVar17 + (ulong)uVar14);
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar16);
  }
  return 1;
}

