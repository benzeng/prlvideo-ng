
void FUN_1000a45d0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x1940);
  if (pvVar1 != (void *)0x0) {
    FUN_10008abf0(pvVar1);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x1940) = 0;
  return;
}

