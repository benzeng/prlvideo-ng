
void FUN_100a64cf0(undefined8 *param_1,string *param_2)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_102238dc0;
  param_1[1] = 0;
  pvVar1 = operator_new(0xf8);
  FUN_100ab0c20(pvVar1);
  param_1[2] = pvVar1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  std::string::string((string *)(param_1 + 6),param_2);
  param_1[9] = 0;
  param_1[10] = 0xffffffff00000004;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}

