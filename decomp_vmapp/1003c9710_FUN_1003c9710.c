
undefined8 FUN_1003c9710(uint *param_1,int *param_2,uint *param_3,int *param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  
  uVar8 = param_2[1];
  uVar13 = param_2[3];
  if (uVar8 < uVar13) {
    uVar1 = param_1[3];
    uVar11 = *(uint *)(&DAT_100b3f714 + (ulong)*param_1 * 8) >> 0x18;
    lVar5 = *(long *)(param_1 + 4);
    lVar6 = *(long *)(param_3 + 4);
    uVar2 = param_3[3];
    uVar9 = (param_2[2] - *param_2) * uVar11;
    uVar10 = param_4[1] * uVar2 + uVar11 * *param_4;
    uVar12 = uVar8 * uVar1 + *param_2 * uVar11;
    uVar11 = *(uint *)(&DAT_100b3f714 + (ulong)*param_3 * 8);
    uVar16 = param_5 ^ 0xff;
    do {
      if (uVar9 != 0) {
        uVar13 = 0;
        do {
          uVar3 = *(uint *)(lVar5 + (ulong)uVar13 + (ulong)uVar12);
          lVar15 = (ulong)uVar13 + (ulong)uVar10;
          uVar4 = *(uint *)(lVar6 + lVar15);
          uVar14 = (uint)param_5;
          uVar7 = uVar4 >> 0x18;
          if ((uVar11 & 1) != 0) {
            uVar7 = (uVar7 * uVar16) / 0xff + ((uVar3 >> 0x18) * uVar14) / 0xff;
          }
          *(uint *)(lVar6 + lVar15) =
               (((uVar4 >> 8 & 0xff) * uVar16) / 0xff + ((uVar3 >> 8 & 0xff) * uVar14) / 0xff & 0xff
               ) << 8 | (((uVar4 >> 0x10 & 0xff) * uVar16) / 0xff +
                         ((uVar3 >> 0x10 & 0xff) * (uint)param_5) / 0xff & 0xff) << 0x10 |
               ((uVar4 & 0xff) * uVar16) / 0xff + ((uVar3 & 0xff) * uVar14) / 0xff & 0xff |
               uVar7 << 0x18;
          uVar13 = uVar13 + 4;
        } while (uVar13 < uVar9);
        uVar13 = param_2[3];
      }
      uVar10 = uVar10 + uVar2;
      uVar12 = uVar12 + uVar1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar13);
  }
  return 1;
}

