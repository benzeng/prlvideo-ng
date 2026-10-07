
void FUN_100723060(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  while (puVar2 = puVar1, puVar2 != param_1) {
    puVar1 = (undefined8 *)*puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      if ((void *)puVar2[2] != (void *)0x0) {
        _free((void *)puVar2[2]);
      }
      if ((void *)puVar2[3] != (void *)0x0) {
        _free((void *)puVar2[3]);
      }
      _free(puVar2);
    }
  }
  return;
}

