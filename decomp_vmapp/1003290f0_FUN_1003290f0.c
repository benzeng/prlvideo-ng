
void FUN_1003290f0(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar7 = 0;
  do {
    pvVar6 = *(void **)(param_1 + 8 + lVar7 * 8);
    while (pvVar6 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar6 + 8);
      pvVar2 = *(void **)((long)pvVar6 + 0x10);
      if (pvVar1 != (void *)0x0) {
        FUN_100307370((undefined8 *)((long)pvVar1 + 0x218));
        puVar8 = *(undefined8 **)((long)pvVar1 + 0x220);
        puVar3 = *(undefined8 **)((long)pvVar1 + 0x228);
        if (puVar8 != puVar3) {
          do {
            operator_delete((void *)*puVar8);
            puVar8 = puVar8 + 1;
          } while (puVar3 != puVar8);
          lVar4 = *(long *)((long)pvVar1 + 0x228);
          if (lVar4 != *(long *)((long)pvVar1 + 0x220)) {
            *(ulong *)((long)pvVar1 + 0x228) =
                 (~((lVar4 + -8) - *(long *)((long)pvVar1 + 0x220)) & 0xfffffffffffffff8U) + lVar4;
          }
        }
        pvVar5 = *(void **)((long)pvVar1 + 0x218);
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
        }
        FUN_100307460((undefined8 *)((long)pvVar1 + 0x168));
        puVar8 = *(undefined8 **)((long)pvVar1 + 0x170);
        puVar3 = *(undefined8 **)((long)pvVar1 + 0x178);
        if (puVar8 != puVar3) {
          do {
            operator_delete((void *)*puVar8);
            puVar8 = puVar8 + 1;
          } while (puVar3 != puVar8);
          lVar4 = *(long *)((long)pvVar1 + 0x178);
          if (lVar4 != *(long *)((long)pvVar1 + 0x170)) {
            *(ulong *)((long)pvVar1 + 0x178) =
                 (~((lVar4 + -8) - *(long *)((long)pvVar1 + 0x170)) & 0xfffffffffffffff8U) + lVar4;
          }
        }
        pvVar5 = *(void **)((long)pvVar1 + 0x168);
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
        }
        operator_delete(pvVar1);
      }
      operator_delete(pvVar6);
      pvVar6 = pvVar2;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x100);
  ___bzero(param_1 + 8,0x800);
  return;
}

