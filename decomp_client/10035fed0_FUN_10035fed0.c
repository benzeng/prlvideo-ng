
void FUN_10035fed0(QCursor *param_1)

{
  QCursor::QCursor(param_1);
  param_1[8] = (QCursor)0x0;
  QCursor::QCursor(param_1 + 0x10);
  param_1[0x18] = (QCursor)0x0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  param_1[0x34] = (QCursor)0x1;
  param_1[0x38] = (QCursor)0x0;
  return;
}

