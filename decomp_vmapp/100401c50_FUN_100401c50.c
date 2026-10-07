
void FUN_100401c50(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  pvVar1 = *(void **)(param_1 + 0x160);
  if (pvVar1 != (void *)0x0) {
    FUN_100405d70(pvVar1);
    operator_delete(pvVar1);
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_1003fcbb0();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_100403ba0((undefined8 *)(param_1 + 0x108));
  puVar4 = *(undefined8 **)(param_1 + 0x110);
  puVar2 = *(undefined8 **)(param_1 + 0x118);
  if (puVar4 != puVar2) {
    do {
      operator_delete((void *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar2 != puVar4);
    lVar3 = *(long *)(param_1 + 0x118);
    if (lVar3 != *(long *)(param_1 + 0x110)) {
      *(ulong *)(param_1 + 0x118) =
           (~((lVar3 + -8) - *(long *)(param_1 + 0x110)) & 0xfffffffffffffff8U) + lVar3;
    }
  }
  pvVar1 = *(void **)(param_1 + 0x108);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

