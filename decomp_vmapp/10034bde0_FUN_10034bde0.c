
undefined8 FUN_10034bde0(long param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  
  if (*(uint *)(param_2 + 4) < 0xc) {
    return 9;
  }
  uVar2 = *(uint *)(param_2 + 8);
  puVar7 = *(uint **)(param_1 + 0xa850 + (ulong)((uVar2 >> 0xc ^ uVar2) & 0xfff ^ uVar2 >> 0x18) * 8
                     );
  while( true ) {
    if (puVar7 == (uint *)0x0) {
      return 0;
    }
    if (*puVar7 == uVar2) break;
    puVar7 = *(uint **)(puVar7 + 4);
  }
  pvVar3 = *(void **)(puVar7 + 2);
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  iVar6 = *(int *)((long)pvVar3 + 0x28);
  lVar8 = 0x1c1;
  while (iVar6 != 0) {
    pvVar4 = *(void **)(param_1 + lVar8 * 8);
    if ((pvVar4 == pvVar3) && (pvVar4 != (void *)0x0)) {
      iVar6 = iVar6 + -1;
      *(int *)((long)pvVar3 + 0x28) = iVar6;
      *(undefined8 *)(param_1 + lVar8 * 8) = 0;
    }
    if (0x2ff < lVar8 - 0x1c0U) break;
    lVar8 = lVar8 + 1;
  }
  if (*(long **)((long)pvVar3 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)((long)pvVar3 + 0x20) + 8))();
  }
  pvVar4 = *(void **)((long)pvVar3 + 8);
  if (pvVar4 != (void *)0x0) {
    piVar1 = (int *)((long)pvVar4 + 0x80);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_10032d8f0(pvVar4);
      operator_delete(pvVar4);
    }
  }
  operator_delete(pvVar3);
  uVar2 = *(uint *)(param_2 + 8);
  puVar7 = (uint *)(param_1 + 0xa850 + (ulong)((uVar2 >> 0xc ^ uVar2) & 0xfff ^ uVar2 >> 0x18) * 8);
  do {
    puVar9 = puVar7;
    puVar5 = *(uint **)puVar9;
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    puVar7 = puVar5 + 4;
  } while (*puVar5 != uVar2);
  *(undefined8 *)puVar9 = *(undefined8 *)(puVar5 + 4);
  *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_1 + 0xa840);
  *(uint **)(param_1 + 0xa840) = puVar5;
  return 0;
}

