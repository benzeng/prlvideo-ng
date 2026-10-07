
void FUN_10071f210(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != param_1) {
      _free((void *)puVar2[3]);
      puVar1 = (undefined8 *)*puVar2;
      _free(puVar2);
      puVar2 = puVar1;
    }
    param_1[1] = param_1;
    *param_1 = param_1;
  }
  return;
}

