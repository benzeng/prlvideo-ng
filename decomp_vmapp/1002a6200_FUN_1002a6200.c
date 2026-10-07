
void FUN_1002a6200(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  uVar1 = uVar2 - 1;
  *(uint *)(param_1 + 0x40) = uVar1;
  while (uVar5 = uVar1, uVar2 != 0) {
    pvVar4 = *(void **)(param_1 + 0x60 + (ulong)uVar5 * 0x20);
    if (pvVar4 != (void *)0x0) {
      while( true ) {
        iVar3 = *(int *)((long)pvVar4 + 0x14);
        uVar1 = iVar3 - 1;
        *(uint *)((long)pvVar4 + 0x14) = uVar1;
        if (iVar3 == 0) break;
        uVar6 = *(ulong *)((long)pvVar4 + (ulong)uVar1 * 0x10 + 0x18);
        if ((0xafffffff < uVar6) && (bVar7 = uVar6 < 0x100000000, uVar6 = uVar6 - 0x50000000, bVar7)
           ) {
          uVar6 = 0xffffffffffffffff;
        }
        FUN_10008c640(DAT_1011c3688,uVar6,0x1000,0,1,1);
      }
      operator_delete__(pvVar4);
      uVar5 = *(uint *)(param_1 + 0x40);
    }
    *(uint *)(param_1 + 0x40) = uVar5 - 1;
    uVar1 = uVar5 - 1;
    uVar2 = uVar5;
  }
  pvVar4 = *(void **)(param_1 + 0x30);
  if (pvVar4 != (void *)0x0) {
    iVar3 = *(int *)((long)pvVar4 + 0x14);
    uVar1 = iVar3 - 1;
    *(uint *)((long)pvVar4 + 0x14) = uVar1;
    while (iVar3 != 0) {
      uVar6 = *(ulong *)((long)pvVar4 + (ulong)uVar1 * 0x10 + 0x18);
      if ((0xafffffff < uVar6) && (bVar7 = uVar6 < 0x100000000, uVar6 = uVar6 - 0x50000000, bVar7))
      {
        uVar6 = 0xffffffffffffffff;
      }
      FUN_10008c640(DAT_1011c3688,uVar6,0x1000,0,1,1);
      iVar3 = *(int *)((long)pvVar4 + 0x14);
      uVar1 = iVar3 - 1;
      *(uint *)((long)pvVar4 + 0x14) = uVar1;
    }
    operator_delete__(pvVar4);
  }
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x38));
    return;
  }
  return;
}

