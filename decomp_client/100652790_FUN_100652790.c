
void FUN_100652790(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  
  FUN_10063f400(param_1,param_2,5,0);
  *param_1 = &PTR_FUN_102223590;
  pvVar2 = operator_new(0xf0);
  param_1[9] = pvVar2;
  puVar1 = PTR_shared_null_1021e15e8;
  auVar3._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar3._0_8_ = PTR_shared_null_1021e15e8;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x1f) = auVar3;
  param_1[0x21] = puVar1;
  param_1[0x22] = PTR_shared_null_1021e12f0;
  FUN_100652900(param_1);
  FUN_100657b80(param_1);
  return;
}

