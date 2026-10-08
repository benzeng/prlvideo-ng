
void FUN_10033d860(QObject *param_1,undefined4 param_2)

{
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220c9c0;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x24) = in_stack_00000018;
  *(undefined8 *)(param_1 + 0x1c) = in_stack_00000010;
  *(undefined8 *)(param_1 + 0x14) = in_stack_00000008;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x30] = (QObject)0x1;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}

