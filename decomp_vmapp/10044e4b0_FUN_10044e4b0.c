
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044e4b0(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  
  uVar11 = _UNK_100b42e1c;
  uVar10 = _UNK_100b42e18;
  uVar9 = _UNK_100b42e14;
  uVar1 = _DAT_100b42e10;
  if (param_3 != 0) {
    uVar12 = (ulong)(param_3 - 1);
    uVar18 = uVar12 + 1 & 0x1fffffff8;
    puVar15 = param_2;
    puVar16 = param_1;
    uVar17 = 0;
    if ((uVar18 != 0) && ((param_2 + uVar12 < param_1 || (uVar17 = 0, param_1 + uVar12 < param_2))))
    {
      puVar16 = param_1 + uVar18;
      puVar15 = param_2 + uVar18;
      param_3 = param_3 - (int)uVar18;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
      uVar13 = uVar12 + 1 & 0xfffffffffffffff8;
      do {
        uVar2 = param_2[-3];
        uVar3 = param_2[-2];
        uVar4 = param_2[-1];
        uVar5 = *param_2;
        uVar6 = param_2[1];
        uVar7 = param_2[2];
        uVar8 = param_2[3];
        param_1[-4] = param_2[-4] & uVar1;
        param_1[-3] = uVar2 & uVar9;
        param_1[-2] = uVar3 & uVar10;
        param_1[-1] = uVar4 & uVar11;
        *param_1 = uVar5 & uVar1;
        param_1[1] = uVar6 & uVar9;
        param_1[2] = uVar7 & uVar10;
        param_1[3] = uVar8 & uVar11;
        param_1 = param_1 + 8;
        param_2 = param_2 + 8;
        uVar13 = uVar13 - 8;
        uVar17 = uVar18;
      } while (uVar13 != 0);
    }
    if (uVar12 + 1 != uVar17) {
      uVar1 = param_3 - 1;
      if ((param_3 & 3) != 0) {
        lVar19 = 0;
        lVar14 = 0;
        do {
          puVar16[lVar14] = puVar15[lVar14] & 0xffffff;
          lVar14 = lVar14 + 1;
          lVar19 = lVar19 + -4;
        } while ((param_3 & 3) != (uint)lVar14);
        puVar16 = (uint *)((long)puVar16 - lVar19);
        puVar15 = (uint *)((long)puVar15 - lVar19);
        param_3 = param_3 - (uint)lVar14;
      }
      if (2 < uVar1) {
        do {
          *puVar16 = *puVar15 & 0xffffff;
          puVar16[1] = puVar15[1] & 0xffffff;
          puVar16[2] = puVar15[2] & 0xffffff;
          puVar16[3] = puVar15[3] & 0xffffff;
          puVar15 = puVar15 + 4;
          puVar16 = puVar16 + 4;
          param_3 = param_3 - 4;
        } while (param_3 != 0);
      }
    }
  }
  return;
}

