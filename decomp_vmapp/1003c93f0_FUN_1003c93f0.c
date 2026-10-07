
undefined8 FUN_1003c93f0(long param_1,uint *param_2,uint *param_3,uint *param_4,byte param_5)

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
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *param_4;
  iVar4 = *(int *)(param_1 + 0xc);
  uVar15 = param_4[3] - param_4[1];
  if (uVar15 != 0) {
    lVar12 = *(long *)(param_1 + 0x10);
    uVar5 = param_2[2];
    uVar6 = param_4[2];
    uVar7 = param_2[3];
    uVar20 = param_3[3];
    puVar13 = (uint *)((ulong)(param_4[1] * uVar20) + (ulong)uVar3 * 4 + *(long *)(param_3 + 4));
    uVar8 = *(uint *)(&DAT_100b3f714 + (ulong)*param_3 * 8);
    uVar14 = 0;
    do {
      if (uVar6 != uVar3) {
        iVar9 = *(int *)(param_1 + 0xc);
        puVar17 = puVar13;
        uVar20 = uVar5 - uVar1;
        iVar18 = uVar6 - uVar3;
        do {
          uVar10 = *(uint *)((ulong)(uint)((int)((ulong)((uVar14 * 2 + 1) * (uVar7 - uVar2)) /
                                                 (ulong)uVar15 >> 1) * iVar9) +
                             (ulong)(iVar4 * uVar2) + (ulong)uVar1 * 4 + lVar12 +
                            ((ulong)uVar20 / (ulong)(uVar6 - uVar3) >> 1) * 4);
          uVar11 = *puVar17;
          uVar21 = ((uVar10 >> 0x18) * (uint)param_5) / 0xff & 0xff;
          uVar19 = uVar21 ^ 0xff;
          uVar16 = uVar11 >> 0x18;
          if ((uVar8 & 1) != 0) {
            uVar16 = (uVar19 * uVar16) / 0xff + uVar21;
          }
          *puVar17 = (((uVar11 >> 8 & 0xff) * uVar19) / 0xff +
                      ((uVar10 >> 8 & 0xff) * (uint)param_5) / 0xff & 0xff) << 8 |
                     (((uVar11 >> 0x10 & 0xff) * uVar19) / 0xff +
                      ((uVar10 >> 0x10 & 0xff) * (uint)param_5) / 0xff & 0xff) << 0x10 |
                     ((uVar11 & 0xff) * uVar19) / 0xff + ((uVar10 & 0xff) * (uint)param_5) / 0xff &
                     0xff | uVar16 << 0x18;
          puVar17 = puVar17 + 1;
          uVar20 = uVar20 + uVar5 * 2 + uVar1 * -2;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
        uVar20 = param_3[3];
      }
      puVar13 = (uint *)((long)puVar13 + (ulong)uVar20);
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar15);
  }
  return 1;
}

