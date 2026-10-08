
void FUN_10037bdc0(QObject *param_1,QObject *param_2)

{
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f0280;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0xffffffffffffffff;
  DeclarativeWidgets::initialize();
  return;
}

