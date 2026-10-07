
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1000dd560(int *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ushort *puVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  *param_1 = 2;
  *param_2 = 0;
  uVar1 = _DAT_100bfbba0;
  if (((uint)_DAT_100bfbba0 & 0xffff) != 0xffff) {
    uVar1 = _DAT_100bfbba0 >> 0x28;
    uVar4 = _DAT_100bfbba0 & 0xffff;
    uVar6 = 1;
    uVar2 = 0;
    puVar5 = &DAT_100bfbba0;
    while( true ) {
      if (((uint)uVar1 & 0xff) == 0xff) {
        bVar7 = (&DAT_100bfbba6)[uVar2 * 0x10] == -1;
      }
      else {
        bVar7 = false;
      }
      lVar3 = uVar2 * 0x10;
      if ((&DAT_100bfbba8)[lVar3] == -1) {
        bVar8 = (&DAT_100bfbba9)[lVar3] == -1;
      }
      else {
        bVar8 = false;
      }
      if ((&DAT_100bfbbab)[lVar3] == -1) {
        bVar9 = (&DAT_100bfbbac)[lVar3] == -1;
      }
      else {
        bVar9 = false;
      }
      if ((&DAT_100bfbbae)[lVar3] == -1) {
        bVar10 = (&DAT_100bfbbaf)[lVar3] == -1;
      }
      else {
        bVar10 = false;
      }
      *param_2 = (bVar8 ^ 1) + (bVar7 ^ 1) + (bVar9 ^ 1) + *param_2 + (bVar10 ^ 1);
      if ((uint)uVar4 != (uint)*puVar5) {
        *param_1 = *param_1 + 1;
        uVar4 = (ulong)*puVar5;
      }
      uVar2 = (ulong)uVar6;
      uVar1 = uVar2 * 0x10;
      if ((&DAT_100bfbba0)[uVar2 * 8] == -1) break;
      puVar5 = &DAT_100bfbba0 + uVar2 * 8;
      uVar1 = (ulong)(byte)(&DAT_100bfbba5)[uVar1];
      uVar6 = uVar6 + 1;
    }
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}

