
ulong FUN_100ba6730(long param_1,uint param_2,long param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong local_40;
  byte local_34 [4];
  
  uVar9 = 0;
  if (param_2 != 0) {
    uVar11 = 0;
    local_40 = 0;
    iVar3 = 0;
    do {
      iVar10 = (int)uVar11;
      if (iVar10 < (int)param_2) {
        bVar1 = *(byte *)(param_1 + uVar11);
      }
      else {
        bVar1 = 0;
      }
      if ((int)(uVar11 + 1) < (int)param_2) {
        bVar7 = *(byte *)(param_1 + uVar11 + 1);
      }
      else {
        bVar7 = 0;
      }
      if ((int)(iVar10 + 2U) < (int)param_2) {
        bVar4 = *(byte *)(param_1 + (ulong)(iVar10 + 2U));
      }
      else {
        bVar4 = 0;
      }
      local_34[0] = bVar1 >> 2;
      local_34[1] = bVar7 >> 4 | (bVar1 & 3) << 4;
      local_34[2] = bVar4 >> 6 | (bVar7 & 0xf) << 2;
      local_34[3] = bVar4 & 0x3f;
      uVar2 = (param_2 - iVar10 != 2) + 3;
      if (param_2 - iVar10 == 1) {
        uVar2 = 2;
      }
      lVar8 = (long)(int)local_40;
      *(undefined *)(param_3 + lVar8) = (&DAT_101da2470)[local_34[0]];
      lVar6 = 1;
      do {
        *(undefined *)(param_3 + lVar8 + lVar6) = (&DAT_101da2470)[local_34[lVar6]];
        lVar6 = lVar6 + 1;
      } while (lVar6 < (long)(ulong)uVar2);
      if (uVar2 < 4) {
        uVar5 = 3;
        if (4 < uVar2 + 1) {
          uVar5 = uVar2;
        }
        _memset((void *)((ulong)uVar2 + lVar8 + param_3),0x3d,(ulong)(uVar5 - uVar2) + 1);
      }
      uVar9 = lVar8 + 4;
      uVar11 = (ulong)(iVar10 + 3U);
      iVar3 = iVar3 + 4;
      if ((0 < param_4) && (param_4 <= iVar3)) {
        *(undefined1 *)(param_3 + uVar9) = 10;
        iVar3 = 0;
        uVar9 = (ulong)((int)local_40 + 5);
      }
      local_40 = uVar9 & 0xffffffff;
    } while (iVar10 + 3U < param_2);
  }
  return uVar9 & 0xffffffff;
}

