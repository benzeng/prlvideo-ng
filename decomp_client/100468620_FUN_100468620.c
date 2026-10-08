
void FUN_100468620(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_100458870();
  *param_1 = &PTR_FUN_1022141c0;
  param_1[2] = &PTR_FUN_1022143c8;
  pvVar1 = operator_new(0xd8);
  param_1[0xd] = pvVar1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  FUN_10046bad0(pvVar1,param_1);
  return;
}

