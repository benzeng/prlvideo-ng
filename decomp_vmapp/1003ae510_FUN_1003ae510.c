
undefined8 FUN_1003ae510(long param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != *(long *)(param_1 + 0x10)) {
      *(ulong *)(param_1 + 0x18) =
           (~((lVar1 + -0x40) - *(long *)(param_1 + 0x10)) & 0xffffffffffffffc0U) + lVar1;
    }
  }
  *(long **)(param_1 + 8) = param_2;
  *(long **)(param_1 + 0x28) = param_2 + 2;
  *(long **)(param_1 + 0x30) = param_2 + 3;
  *(long **)(param_1 + 0x40) = param_2 + 4;
  *(long **)(param_1 + 0x48) = param_2 + 5;
  *(long **)(param_1 + 0x50) = param_2 + 6;
  *(long **)(param_1 + 0x58) = param_2 + 7;
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x38) = lVar1 + 0x1c8;
  }
  lVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x38) = lVar1 + 0x1c8;
  }
  FUN_10033f0e0(*(long *)(param_1 + 8) + 0xa0,*(undefined8 *)(*(long *)(param_1 + 8) + 0xa0),param_3
                ,param_3 + (ulong)*(uint *)(param_3 + 4) * 4);
  uVar2 = FUN_1003ae000(param_1,*(undefined8 *)(*(long *)(param_1 + 8) + 0xa0));
  if ((int)uVar2 == 0) {
    FUN_1003ae630(param_1);
    lVar1 = **(long **)(*(long *)(param_1 + 8) + 0x108);
    uVar2 = 0;
    if (lVar1 != 0) {
      iVar3 = 0;
      do {
        *(int *)(lVar1 + 0x78) = iVar3;
        iVar3 = iVar3 + 1;
        lVar1 = **(long **)(lVar1 + 8);
      } while (lVar1 != 0);
    }
  }
  return uVar2;
}

