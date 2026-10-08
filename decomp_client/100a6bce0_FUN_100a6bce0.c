
int FUN_100a6bce0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = *(uint *)(param_1 + 0x4c);
  uVar9 = (ulong)uVar1;
  if (uVar9 == 0) {
    return 0x52;
  }
  iVar6 = 0x5a;
  if (1 < uVar1) {
    iVar6 = uVar1 * 8 + 0x52;
  }
  uVar8 = 1;
  if (1 < uVar1) {
    uVar8 = uVar9;
  }
  uVar7 = 0;
  iVar2 = 0;
  if (uVar1 != 0) {
    uVar7 = 0;
    iVar2 = 0;
    iVar5 = 0;
    if (uVar1 != (uVar1 & 1)) {
      uVar7 = uVar9 - (uVar1 & 1);
      piVar4 = (int *)(param_1 + 0x8c + uVar8 * 8);
      lVar3 = uVar9 - (uVar9 & 1);
      iVar2 = 0;
      iVar5 = 0;
      do {
        iVar2 = iVar2 + piVar4[-2];
        iVar5 = iVar5 + *piVar4;
        piVar4 = piVar4 + 4;
        lVar3 = lVar3 + -2;
      } while (lVar3 != 0);
    }
    iVar2 = iVar2 + iVar5;
    if (uVar9 == uVar7) goto LAB_100a6bd9b;
  }
  lVar3 = uVar9 - uVar7;
  piVar4 = (int *)(param_1 + 0x84 + (uVar8 + uVar7) * 8);
  do {
    iVar2 = iVar2 + *piVar4;
    piVar4 = piVar4 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
LAB_100a6bd9b:
  return iVar2 + iVar6;
}

