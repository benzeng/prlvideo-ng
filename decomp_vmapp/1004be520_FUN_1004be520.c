
void FUN_1004be520(int *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  
  uVar3 = param_1[2];
  if ((uVar3 & 5) == 5) {
    uVar9 = *param_1 * param_1[1];
    if (uVar9 != 0) {
      uVar2 = (uint)*(byte *)((long)param_1 + 0xe) |
              (uint)*(byte *)((long)param_1 + 0xd) << 8 | (uint)*(byte *)(param_1 + 3) << 0x10;
      uVar3 = uVar9 - 1;
      uVar1 = (ulong)uVar3 + 1;
      uVar8 = uVar1 & 0x1fffffffe;
      uVar5 = 0;
      if (uVar8 != 0) {
        puVar4 = (uint *)(param_1 + 9);
        uVar6 = (ulong)uVar3 + 1 & 0xfffffffffffffffe;
        do {
          if ((puVar4[-1] & 0xffffff) == uVar2) {
            puVar4[-1] = uVar2;
          }
          if ((*puVar4 & 0xffffff) == uVar2) {
            *puVar4 = uVar2;
          }
          puVar4 = puVar4 + 2;
          uVar6 = uVar6 - 2;
          uVar5 = uVar8;
        } while (uVar6 != 0);
      }
      if (uVar1 != uVar5) {
        uVar7 = (uint)uVar5;
        if ((uVar9 & 1) != 0) {
          if ((param_1[uVar5 + 8] & 0xffffffU) == uVar2) {
            param_1[uVar5 + 8] = uVar2;
          }
          uVar5 = uVar5 + 1;
        }
        if (uVar3 != uVar7) {
          puVar4 = (uint *)(param_1 + uVar5 + 9);
          iVar10 = (uVar9 + 1) - ((int)uVar5 + 1);
          do {
            if ((puVar4[-1] & 0xffffff) == uVar2) {
              puVar4[-1] = uVar2;
            }
            if ((*puVar4 & 0xffffff) == uVar2) {
              *puVar4 = uVar2;
            }
            puVar4 = puVar4 + 2;
            iVar10 = iVar10 + -2;
          } while (iVar10 != 0);
        }
      }
      uVar3 = param_1[2];
    }
    uVar3 = uVar3 & 0xfffffffe;
    param_1[2] = uVar3;
  }
  if (((uVar3 & 4) != 0) && (iVar10 = *param_1 * param_1[1], iVar10 != 0)) {
    puVar4 = (uint *)(param_1 + 8);
    do {
      uVar3 = *puVar4;
      if (uVar3 != 0) {
        uVar9 = uVar3 >> 0x18;
        uVar7 = uVar3 >> 0x10 & 0xff;
        uVar2 = uVar3 >> 8 & 0xff;
        if (((uVar9 < (uVar3 & 0xff)) || (uVar9 < uVar7)) || (uVar9 < uVar2)) {
          *puVar4 = uVar9 << 0x18 |
                    ((uint)((ulong)(uVar7 * uVar9) * 0x80808081 >> 0x20) & 0xffffff80) << 9 |
                    ((uint)((ulong)(uVar2 * uVar9) * 0x80808081 >> 0x20) & 0xffffff80) << 1 |
                    ((uVar3 & 0xff) * uVar9) / 0xff;
        }
      }
      puVar4 = puVar4 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}

