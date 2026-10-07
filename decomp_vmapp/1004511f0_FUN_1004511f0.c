
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004511f0(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar2 = _DAT_100b2ddb0;
  if (param_3 != 0) {
    uVar3 = (ulong)(param_3 - 1);
    uVar12 = uVar3 + 1 & 0x1fffffff8;
    puVar7 = param_2;
    puVar9 = param_1;
    uVar10 = 0;
    if ((uVar12 != 0) &&
       ((param_2 + uVar3 * 4 < param_1 || (uVar10 = 0, param_1 + uVar3 < param_2)))) {
      param_3 = param_3 - (int)uVar12;
      puVar7 = param_2 + uVar12 * 4;
      puVar9 = param_1 + uVar12;
      puVar8 = (undefined4 *)(param_1 + 4);
      pauVar6 = (undefined1 (*) [16])(param_2 + 0x10);
      uVar4 = uVar3 + 1 & 0xfffffffffffffff8;
      do {
        auVar14 = *pauVar6;
        auVar13 = pshufb(pauVar6[-1],auVar2);
        puVar8[-1] = auVar13._0_4_;
        auVar14 = pshufb(auVar14,auVar2);
        *puVar8 = auVar14._0_4_;
        puVar8 = puVar8 + 2;
        pauVar6 = pauVar6 + 2;
        uVar4 = uVar4 - 8;
        uVar10 = uVar12;
      } while (uVar4 != 0);
    }
    if (uVar3 + 1 != uVar10) {
      uVar1 = param_3 - 1;
      if ((param_3 & 7) != 0) {
        lVar11 = 0;
        lVar5 = 0;
        do {
          puVar9[lVar5] = puVar7[lVar5 * 4];
          lVar5 = lVar5 + 1;
          lVar11 = lVar11 + -4;
        } while ((param_3 & 7) != (uint)lVar5);
        puVar9 = puVar9 + lVar5;
        param_3 = param_3 - (uint)lVar5;
        puVar7 = puVar7 + -lVar11;
      }
      if (6 < uVar1) {
        do {
          *puVar9 = *puVar7;
          puVar9[1] = puVar7[4];
          puVar9[2] = puVar7[8];
          puVar9[3] = puVar7[0xc];
          puVar9[4] = puVar7[0x10];
          puVar9[5] = puVar7[0x14];
          puVar9[6] = puVar7[0x18];
          puVar9[7] = puVar7[0x1c];
          puVar7 = puVar7 + 0x20;
          puVar9 = puVar9 + 8;
          param_3 = param_3 - 8;
        } while (param_3 != 0);
      }
    }
  }
  return;
}

