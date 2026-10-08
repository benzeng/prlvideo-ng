
void FUN_1009ab740(QObject *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  *(undefined **)param_1 = &DAT_10227ddc0;
  FUN_1009ab7f0(param_1 + 0x30);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar4 != puVar1) {
    do {
      operator_delete((void *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != *(long *)(param_1 + 0x38)) {
      *(ulong *)(param_1 + 0x40) =
           (~((lVar2 + -8) - *(long *)(param_1 + 0x38)) & 0xfffffffffffffff8U) + lVar2;
    }
  }
  pvVar3 = *(void **)(param_1 + 0x30);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

