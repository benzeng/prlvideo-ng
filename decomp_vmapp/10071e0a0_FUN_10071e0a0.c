
void FUN_10071e0a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while (puVar2 != param_1) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_100719320(puVar2 + 0xf);
    if ((*(int *)(puVar2 + 2) == 1) && ((void *)puVar2[0xd] != (void *)0x0)) {
      _free((void *)puVar2[0xd]);
    }
    _free(puVar2);
    puVar2 = puVar1;
  }
  param_1[1] = param_1;
  *param_1 = param_1;
  return;
}

