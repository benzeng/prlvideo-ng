
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100499990(long param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar2 = _DAT_100b447c0;
  if (3 < param_2) {
    uVar3 = (ulong)((int)(((uint)(param_2 >> 0x1f) >> 0x1e) + param_2) >> 2);
    uVar4 = 1;
    if (0 < (long)uVar3) {
      uVar4 = uVar3;
    }
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = 0;
      if ((uVar4 & 0xfffffffffffffff8) != 0) {
        pauVar6 = (undefined1 (*) [16])(param_1 + 0x10);
        uVar5 = 0;
        if (0 < (long)uVar3) {
          uVar5 = uVar3;
        }
        uVar5 = uVar5 & 0xfffffffffffffff8;
        do {
          auVar8 = pshufb(pauVar6[-1],auVar2);
          auVar9 = pshufb(*pauVar6,auVar2);
          pauVar6[-1] = auVar8;
          *pauVar6 = auVar9;
          pauVar6 = pauVar6 + 2;
          uVar5 = uVar5 - 8;
          uVar7 = uVar4 & 0xfffffffffffffff8;
        } while (uVar5 != 0);
      }
      if (uVar4 == uVar7) {
        return;
      }
    }
    do {
      uVar1 = *(uint *)(param_1 + uVar7 * 4);
      *(uint *)(param_1 + uVar7 * 4) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)uVar3);
  }
  return;
}

