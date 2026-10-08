
void FUN_10035f010(QCursor *param_1)

{
  QCursor::QCursor(param_1,10);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x18] = (QCursor)0x1;
  return;
}

