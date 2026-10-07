
void FUN_10071d430(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    pvVar1 = (void *)*param_1;
    puVar2 = param_1;
    while (pvVar1 != (void *)0x0) {
      puVar2 = puVar2 + 1;
      _free(pvVar1);
      pvVar1 = (void *)*puVar2;
    }
    _free(param_1);
    return;
  }
  return;
}

