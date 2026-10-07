
void FUN_1003609e0(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  lVar2 = *(long *)(param_1 + 0x98);
  uVar7 = 0xf0000;
  if (((*(byte *)(param_2 + 0xbb6c) & 1) == 0) && (*(long *)(lVar2 + 0x30) != 0)) {
    uVar7 = *(int *)(*(long *)(lVar2 + 0x30) + 0xf0) << 0x10;
  }
  uVar8 = 0xffff;
  if (*(long *)(lVar2 + 0x40) != 0) {
    uVar8 = *(uint *)(*(long *)(lVar2 + 0x40) + 0xe0);
  }
  piVar6 = (int *)(param_2 + 0x8770);
  lVar5 = 0;
  uVar3 = 0;
  do {
    if (piVar6[-0x40] != 0) {
      uVar3 = uVar3 | 1 << ((byte)lVar5 & 0x1f);
    }
    if (*piVar6 != 0) {
      uVar3 = uVar3 | 1 << ((byte)lVar5 + 1 & 0x1f);
    }
    lVar5 = lVar5 + 2;
    piVar6 = piVar6 + 0x80;
  } while (lVar5 != 0x14);
  uVar4 = FUN_1003516c0(lVar2,uVar3 & (uVar8 | uVar7));
  lVar2 = *(long *)(param_1 + 0x98);
  uVar1 = *(undefined4 *)(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = uVar4;
  *(undefined4 *)(lVar2 + 0x14) = uVar1;
  return;
}

