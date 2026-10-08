
void FUN_100d312b0(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = *(ulong *)(param_1 + 0x40);
  if (3 < uVar3) {
    uVar4 = *(ulong *)(param_1 + 0x38);
    do {
      uVar3 = uVar3 - 1;
      *(ulong *)(param_1 + 0x40) = uVar3;
      uVar4 = uVar4 + 1;
      *(ulong *)(param_1 + 0x38) = uVar4;
      if (0x3ff < uVar4) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x20));
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
        uVar4 = *(long *)(param_1 + 0x38) - 0x200;
        *(ulong *)(param_1 + 0x38) = uVar4;
        uVar3 = *(ulong *)(param_1 + 0x40);
      }
    } while (3 < uVar3);
  }
  uVar1 = *(uint *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x20);
  lVar7 = 0;
  lVar6 = *(long *)(param_1 + 0x28) - lVar5;
  if (lVar6 != 0) {
    lVar7 = lVar6 * 0x40 + -1;
  }
  lVar6 = *(long *)(param_1 + 0x38);
  if (lVar7 - lVar6 == uVar3) {
    FUN_100d31420(param_1 + 0x18);
    uVar3 = *(ulong *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x20);
    lVar6 = *(long *)(param_1 + 0x38);
  }
  *(ulong *)(*(long *)(lVar5 + (lVar6 + uVar3 >> 9) * 8) + (lVar6 + uVar3 & 0x1ff) * 8) =
       param_2 & 0xffffffff | (ulong)uVar1 << 0x20;
  lVar5 = *(long *)(param_1 + 0x40);
  uVar3 = lVar5 + 1;
  *(ulong *)(param_1 + 0x40) = uVar3;
  if (1 < uVar3) {
    uVar3 = *(ulong *)(param_1 + 0x38);
    uVar4 = lVar5 + uVar3;
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (uVar4 >> 9) * 8);
    uVar4 = uVar4 & 0x1ff;
    iVar2 = *(int *)(lVar5 + uVar4 * 8);
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + (uVar3 >> 9) * 8);
    *(int *)(param_1 + 0x10) =
         ((*(int *)(lVar5 + 4 + uVar4 * 8) - *(int *)(lVar6 + 4 + (uVar3 & 0x1ff) * 8)) *
         (100 - iVar2)) / (iVar2 - *(int *)(lVar6 + (uVar3 & 0x1ff) * 8));
  }
  return;
}

