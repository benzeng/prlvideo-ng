
void FUN_1003601d0(QCursor *param_1,QCursor *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  QCursor::operator=(param_1,param_2);
  param_1[8] = param_2[8];
  QCursor::operator=(param_1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  param_1[0x34] = *(QCursor *)(param_3 + 1);
  *(undefined4 *)(param_1 + 0x30) = *param_3;
  param_1[0x38] = (QCursor)0x1;
  return;
}

