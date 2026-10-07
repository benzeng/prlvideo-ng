
undefined8 * FUN_1007c6350(undefined8 *param_1,int param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = _malloc((long)((int)(param_2 + 7 + ((uint)(param_2 + 7 >> 0x1f) >> 0x1d)) >> 3));
  puVar2 = operator_new(0x20);
  *(undefined4 *)(puVar2 + 1) = 1;
  puVar2[2] = pvVar1;
  *puVar2 = &PTR_FUN_1011a5eb0;
  puVar2[3] = PTR__free_100ba2378;
  *param_1 = puVar2;
  return param_1;
}

