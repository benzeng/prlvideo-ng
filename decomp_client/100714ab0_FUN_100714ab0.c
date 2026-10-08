
void FUN_100714ab0(QKeySequence *param_1,QKeySequence *param_2,QKeySequence *param_3,
                  undefined4 param_4)

{
  QKeySequence::QKeySequence(param_1,param_2);
  QKeySequence::QKeySequence(param_1 + 8,param_3);
  *(undefined4 *)(param_1 + 0x10) = param_4;
  return;
}

