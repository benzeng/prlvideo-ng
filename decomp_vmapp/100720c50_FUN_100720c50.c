
void FUN_100720c50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0xc];
  while (puVar2 != param_1 + 0xc) {
    puVar1 = (undefined8 *)*puVar2;
    if ((void *)puVar2[2] != (void *)0x0) {
      _free((void *)puVar2[2]);
    }
    if ((void *)puVar2[3] != (void *)0x0) {
      _free((void *)puVar2[3]);
    }
    _free(puVar2);
    puVar2 = puVar1;
  }
  if ((void *)*param_1 != (void *)0x0) {
    _free((void *)*param_1);
  }
  _free(param_1);
  return;
}

