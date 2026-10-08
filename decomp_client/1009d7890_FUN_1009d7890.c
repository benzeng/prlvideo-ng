
void FUN_1009d7890(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 8);
  pvVar2 = *(void **)(param_1 + 0x10);
  if (0 < (int)((ulong)((long)pvVar2 - (long)pvVar4) >> 3)) {
    lVar3 = 0;
    do {
      puVar1 = *(undefined8 **)((long)pvVar4 + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        std::string::~string((string *)(puVar1 + 9));
        pvVar4 = (void *)*puVar1;
        if (pvVar4 != (void *)0x0) {
          if ((void *)puVar1[1] != pvVar4) {
            puVar1[1] = pvVar4;
          }
          operator_delete(pvVar4);
        }
        operator_delete(puVar1);
        pvVar4 = *(void **)(param_1 + 8);
        pvVar2 = *(void **)(param_1 + 0x10);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)((ulong)((long)pvVar2 - (long)pvVar4) >> 3));
  }
  if (pvVar4 != (void *)0x0) {
    if (pvVar2 != pvVar4) {
      *(ulong *)(param_1 + 0x10) =
           (~((long)pvVar2 + (-8 - (long)pvVar4)) & 0xfffffffffffffff8U) + (long)pvVar2;
    }
    operator_delete(pvVar4);
    return;
  }
  return;
}

