
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087cf70(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  undefined1 *puVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar2 = _DAT_100b59a20;
  lVar6 = param_3 - 1;
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 >> 1 != 0) {
      uVar4 = 0;
      do {
        uVar1 = param_1[lVar6];
        param_1[lVar6] = param_1[uVar4];
        param_1[uVar4] = uVar1;
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + -1;
      } while (uVar4 < param_3 >> 1);
    }
  }
  else if (param_3 != 0) {
    puVar3 = param_1 + (param_3 - 1);
    uVar10 = param_3 & 0xffffffffffffffe0;
    puVar8 = param_2;
    uVar4 = 0;
    if ((uVar10 != 0) && (uVar4 = 0, param_2 != param_1)) {
      puVar3 = param_1 + (lVar6 - uVar10);
      puVar8 = param_2 + uVar10;
      pauVar7 = (undefined1 (*) [16])(param_2 + 0x10);
      pauVar9 = (undefined1 (*) [16])(param_1 + (param_3 - 0x10));
      uVar5 = param_3 & 0xffffffffffffffe0;
      do {
        auVar12 = *pauVar7;
        auVar11 = pshufb(pauVar7[-1],auVar2);
        *pauVar9 = auVar11;
        auVar12 = pshufb(auVar12,auVar2);
        pauVar9[-1] = auVar12;
        pauVar7 = pauVar7 + 2;
        pauVar9 = pauVar9 + -2;
        uVar5 = uVar5 - 0x20;
        uVar4 = uVar10;
      } while (uVar5 != 0);
    }
    if (uVar4 != param_3) {
      lVar6 = param_3 - uVar4;
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + -1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  return;
}

