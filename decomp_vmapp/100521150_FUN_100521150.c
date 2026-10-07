
void FUN_100521150(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_100bc4df0;
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[5];
    if (pvVar2 != pvVar1) {
      param_1[5] = (~((long)pvVar2 + (-0x10 - (long)pvVar1)) & 0xfffffffffffffff0U) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  FUN_100521310(param_1);
  return;
}

