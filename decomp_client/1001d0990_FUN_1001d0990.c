
void FUN_1001d0990(QObject *param_1)

{
  undefined *puVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021ff4e0;
  *(undefined4 *)(param_1 + 0x10) = 0x80000007;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar1 = PTR_shared_null_1021e15e8;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e15e8;
  param_1[0x30] = (QObject)0x0;
  param_1[0x31] = (QObject)0x0;
  param_1[0x32] = (QObject)0x0;
  param_1[0x33] = (QObject)0x1;
  param_1[0x34] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0x38) = 0xffff;
  *(undefined **)(param_1 + 0x40) = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x48) = puVar1;
  FUN_1001d0af0(param_1);
  return;
}

