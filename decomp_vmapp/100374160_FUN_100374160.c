
undefined8 * FUN_100374160(undefined8 *param_1,long param_2,long param_3)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1a8);
  FUN_100374270((long)pvVar1 + 0x20,param_3);
  FUN_100374270((long)pvVar1 + 0xe0,param_3 + 0xc0);
  *(undefined8 *)((long)pvVar1 + 0x1a0) = 0;
  *param_1 = pvVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0x101;
  return param_1;
}

