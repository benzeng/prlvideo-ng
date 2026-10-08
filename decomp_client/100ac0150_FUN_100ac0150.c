
void FUN_100ac0150(QObject *param_1,undefined8 param_2)

{
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_100aba870(param_1 + 0x10);
  *(undefined ***)param_1 = &PTR_FUN_10223a080;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10223a0f8;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x38] = (QObject)0x0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined **)(param_1 + 0x48) = PTR_shared_null_1021e1288;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_100ac1d50(param_1 + 0x60);
  return;
}

