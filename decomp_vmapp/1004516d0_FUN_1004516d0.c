
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004516d0(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  uint *puVar10;
  ulong *puVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  uVar5 = _UNK_100b3f628;
  uVar4 = _DAT_100b3f620;
  if (param_3 != 0) {
    uVar6 = (ulong)(param_3 - 1);
    uVar14 = uVar6 + 1 & 0x1fffffff8;
    puVar10 = param_2;
    puVar12 = param_1;
    uVar13 = 0;
    if ((uVar14 != 0) && ((param_2 + uVar6 < param_1 || (uVar13 = 0, param_1 + uVar6 < param_2)))) {
      puVar10 = param_2 + uVar14;
      param_3 = param_3 - (int)uVar14;
      puVar12 = param_1 + uVar14;
      puVar11 = (ulong *)(param_1 + 4);
      puVar9 = (ulong *)(param_2 + 4);
      uVar7 = uVar6 + 1 & 0xfffffffffffffff8;
      do {
        uVar13 = puVar9[-1];
        uVar2 = *puVar9;
        uVar3 = puVar9[1];
        puVar11[-2] = puVar9[-2] | uVar4;
        puVar11[-1] = uVar13 | uVar5;
        *puVar11 = uVar2 | uVar4;
        puVar11[1] = uVar3 | uVar5;
        puVar11 = puVar11 + 4;
        puVar9 = puVar9 + 4;
        uVar7 = uVar7 - 8;
        uVar13 = uVar14;
      } while (uVar7 != 0);
    }
    if (uVar6 + 1 != uVar13) {
      uVar1 = param_3 - 1;
      if ((param_3 & 3) != 0) {
        lVar15 = 0;
        lVar8 = 0;
        do {
          puVar12[lVar8] = puVar10[lVar8] | 0xff000000;
          lVar8 = lVar8 + 1;
          lVar15 = lVar15 + -4;
        } while ((param_3 & 3) != (uint)lVar8);
        puVar10 = (uint *)((long)puVar10 - lVar15);
        param_3 = param_3 - (uint)lVar8;
        puVar12 = (uint *)((long)puVar12 - lVar15);
      }
      if (2 < uVar1) {
        do {
          *puVar12 = *puVar10 | 0xff000000;
          puVar12[1] = puVar10[1] | 0xff000000;
          puVar12[2] = puVar10[2] | 0xff000000;
          puVar12[3] = puVar10[3] | 0xff000000;
          puVar10 = puVar10 + 4;
          puVar12 = puVar12 + 4;
          param_3 = param_3 - 4;
        } while (param_3 != 0);
      }
    }
  }
  return;
}

