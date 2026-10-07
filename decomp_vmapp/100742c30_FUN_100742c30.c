
void FUN_100742c30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while (puVar2 != param_1) {
    puVar1 = (undefined8 *)*puVar2;
    _free(puVar2);
    puVar2 = puVar1;
  }
  return;
}

