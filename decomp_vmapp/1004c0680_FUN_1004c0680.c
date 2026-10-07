
void FUN_1004c0680(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_100bc2ce0;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    if (pvVar2 != pvVar1) {
      param_1[3] = (~((long)pvVar2 + (-8 - (long)pvVar1)) & 0xfffffffffffffff8U) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  FUN_1002a5960(param_1);
  return;
}

