
undefined8 * FUN_100d452e0(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x10);
  lVar1 = *param_2;
  *plVar2 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  lVar1 = *param_3;
  plVar2[1] = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  *param_1 = plVar2;
  return param_1;
}

