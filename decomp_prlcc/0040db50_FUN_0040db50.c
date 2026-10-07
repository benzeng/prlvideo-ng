
void FUN_0040db50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while (param_1 != puVar2) {
    puVar1 = (undefined8 *)*puVar2;
    operator_delete(puVar2);
    puVar2 = puVar1;
  }
  return;
}

