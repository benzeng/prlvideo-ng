
void FUN_100521220(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    if (pvVar2 != pvVar1) {
      param_1[1] = (~((long)pvVar2 + (-0x10 - (long)pvVar1)) & 0xfffffffffffffff0U) + (long)pvVar2;
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

