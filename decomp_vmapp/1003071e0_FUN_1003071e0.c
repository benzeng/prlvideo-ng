
undefined8 FUN_1003071e0(long param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  uVar1 = *param_2;
  uVar11 = (ulong)uVar1;
  if (*(uint *)(param_1 + 0x808) < 0x20) {
    uVar8 = 0x20;
    uVar11 = (ulong)uVar1;
    do {
      uVar8 = uVar8 >> 1;
      uVar11 = (ulong)((uint)uVar11 ^ (uint)uVar11 >> (sbyte)uVar8);
    } while (*(uint *)(param_1 + 0x808) < uVar8);
  }
  puVar7 = (uint *)(param_1 + 8 + (uVar11 & 0xff) * 8);
  do {
    puVar9 = puVar7;
    puVar2 = *(uint **)puVar9;
    if (puVar2 == (uint *)0x0) {
      return 0;
    }
    puVar7 = puVar2 + 4;
  } while (uVar1 != *puVar2);
  *(undefined8 *)puVar9 = *(undefined8 *)(puVar2 + 4);
  pvVar3 = *(void **)(puVar2 + 2);
  if (pvVar3 != (void *)0x0) {
    FUN_100307370((undefined8 *)((long)pvVar3 + 0x218));
    puVar10 = *(undefined8 **)((long)pvVar3 + 0x220);
    puVar4 = *(undefined8 **)((long)pvVar3 + 0x228);
    if (puVar10 != puVar4) {
      do {
        operator_delete((void *)*puVar10);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      lVar5 = *(long *)((long)pvVar3 + 0x228);
      if (lVar5 != *(long *)((long)pvVar3 + 0x220)) {
        *(ulong *)((long)pvVar3 + 0x228) =
             (~((lVar5 + -8) - *(long *)((long)pvVar3 + 0x220)) & 0xfffffffffffffff8U) + lVar5;
      }
    }
    pvVar6 = *(void **)((long)pvVar3 + 0x218);
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    FUN_100307460((undefined8 *)((long)pvVar3 + 0x168));
    puVar10 = *(undefined8 **)((long)pvVar3 + 0x170);
    puVar4 = *(undefined8 **)((long)pvVar3 + 0x178);
    if (puVar10 != puVar4) {
      do {
        operator_delete((void *)*puVar10);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      lVar5 = *(long *)((long)pvVar3 + 0x178);
      if (lVar5 != *(long *)((long)pvVar3 + 0x170)) {
        *(ulong *)((long)pvVar3 + 0x178) =
             (~((lVar5 + -8) - *(long *)((long)pvVar3 + 0x170)) & 0xfffffffffffffff8U) + lVar5;
      }
    }
    pvVar6 = *(void **)((long)pvVar3 + 0x168);
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    operator_delete(pvVar3);
  }
  operator_delete(puVar2);
  return 1;
}

