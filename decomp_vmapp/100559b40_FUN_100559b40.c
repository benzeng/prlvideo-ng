
undefined1  [16] FUN_100559b40(ushort *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  
  lVar5 = -1;
  if (param_2 < *(uint *)(param_1 + 4)) {
    iVar2 = *(int *)(param_1 + 6);
    uVar3 = *(uint *)(param_1 + 0x12);
    uVar8 = 1;
    if (*param_1 < 0x201) {
      uVar8 = uVar3;
    }
    if (uVar3 != 0) {
      lVar9 = (ulong)((uVar3 >> 3) * param_2) + *(long *)(param_1 + 0x24);
      iVar10 = 0;
      iVar11 = 0;
      uVar12 = 0;
      if ((uVar3 & 0xfffffffe) != 0) {
        uVar6 = 0;
        iVar10 = 0;
        iVar11 = 0;
        do {
          uVar12 = *(uint *)(lVar9 + (ulong)(uVar6 >> 5) * 4);
          iVar10 = iVar10 + (uint)((uVar12 >> (uVar6 & 0x1e) & 1) != 0);
          iVar11 = iVar11 + (uint)((uVar12 >> (uVar6 & 0x1e) + 1 & 1) != 0);
          uVar6 = uVar6 + 2;
          uVar12 = uVar3 & 0xfffffffe;
        } while ((uVar3 & 0xfffffffe) != uVar6);
      }
      uVar6 = iVar10 + iVar11;
      if (uVar3 != uVar12) {
        uVar1 = uVar12 + 1;
        uVar4 = uVar1;
        if (uVar1 < uVar3) {
          uVar4 = uVar3;
        }
        uVar7 = uVar12;
        if ((uVar4 & 1) != 0) {
          uVar6 = uVar6 + ((*(uint *)(lVar9 + (ulong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0
                          );
          uVar7 = uVar1;
        }
        if (uVar4 - 1 != uVar12) {
          do {
            uVar6 = uVar6 + ((*(uint *)(lVar9 + (ulong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0
                            ) +
                    (uint)((*(uint *)(lVar9 + (ulong)(uVar7 + 1 >> 5) * 4) >> (uVar7 + 1 & 0x1f) & 1
                           ) != 0);
            uVar7 = uVar7 + 2;
          } while (uVar7 < uVar3);
        }
      }
      if (uVar6 != 0) {
        iVar10 = (int)param_3;
        *(int *)(*(long *)(param_1 + 0x28) + (ulong)param_2 * 4) = iVar10;
        if (iVar10 != 0) {
          uVar6 = iVar10 + 0xfffU >> 0xc;
        }
        uVar6 = (uVar8 - 1) + uVar6;
        param_3 = (ulong)uVar6 % (ulong)uVar8;
        *(uint *)(param_1 + 6) = uVar6 / uVar8 + *(int *)(param_1 + 6);
        *(int *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 4) = iVar2;
        lVar5 = (ulong)(uVar8 * iVar2 + *(int *)(param_1 + 10)) << 0xc;
      }
    }
  }
  auVar13._8_8_ = param_3;
  auVar13._0_8_ = lVar5;
  return auVar13;
}

