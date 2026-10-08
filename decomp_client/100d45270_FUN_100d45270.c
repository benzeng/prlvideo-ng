
undefined8 * FUN_100d45270(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x10);
  *puVar2 = 0;
  lVar1 = *param_2;
  puVar2[1] = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  *param_1 = puVar2;
  return param_1;
}

