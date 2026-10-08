
void FUN_100ab0c30(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_102239cf0;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  FUN_100aaf790(param_1 + 8);
  FUN_100ab2eb0(param_1 + 2);
  puVar4 = (undefined8 *)param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  if (puVar4 != puVar1) {
    do {
      operator_delete((void *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
    lVar2 = param_1[4];
    if (lVar2 != param_1[3]) {
      param_1[4] = (~((lVar2 + -8) - param_1[3]) & 0xfffffffffffffff8U) + lVar2;
    }
  }
  pvVar3 = (void *)param_1[2];
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  *param_1 = &PTR_FUN_102239bf8;
  return;
}

