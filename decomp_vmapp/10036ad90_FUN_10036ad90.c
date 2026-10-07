
undefined1 FUN_10036ad90(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  uVar5 = *(uint *)(param_1 + 0x18);
  if (uVar5 != 0) {
    uVar2 = 0;
    do {
      if ((uVar5 & 1) != 0) {
        lVar6 = uVar2 * 0x20;
        iVar4 = *(int *)(param_1 + 0x34 + lVar6);
        if (iVar4 == 0x80e1) {
          iVar4 = 4;
        }
        uVar1 = *(int *)(param_1 + 0x30 + lVar6) - 0x1400;
        if (uVar1 < 0xc) {
          if ((0x80cU >> (uVar1 & 0x1f) & 1) == 0) {
            if ((0x70U >> (uVar1 & 0x1f) & 1) == 0) {
              if ((3U >> (uVar1 & 0x1f) & 1) == 0) goto LAB_10036ae20;
            }
            else {
              iVar4 = iVar4 << 2;
            }
          }
          else {
            iVar4 = iVar4 * 2;
          }
        }
        else {
LAB_10036ae20:
          iVar4 = 0;
        }
        uVar1 = *(uint *)(param_1 + 0x3c + lVar6);
        if (uVar1 == 0) {
          uVar1 = *(uint *)(param_1 + 0x10);
        }
        else {
          uVar1 = *(uint *)(param_1 + 0xc) / uVar1;
        }
        iVar3 = *(int *)(param_1 + 0x2c + lVar6);
        if (iVar3 == 0) {
          iVar3 = iVar4;
        }
        if (*(uint *)(param_1 + 0x40 + lVar6) <
            iVar4 + *(int *)(param_1 + 0x28 + lVar6) + (uVar1 - 1) * iVar3) {
          return 0;
        }
      }
      uVar2 = (ulong)((int)uVar2 + 1);
      uVar5 = uVar5 * 2;
    } while (uVar5 != 0);
  }
  return 1;
}

