
QKeySequence * FUN_10055a0c0(QKeySequence *param_1,QKeySequence *param_2)

{
  QKeySequence local_30 [8];
  QKeySequence local_28 [8];
  
  if (param_2 == (QKeySequence *)0x0) {
    QKeySequence::QKeySequence(local_28);
    QKeySequence::QKeySequence(local_30);
    FUN_100714b00(param_1,local_28,local_30,2);
    QKeySequence::~QKeySequence(local_30);
    QKeySequence::~QKeySequence(local_28);
  }
  else {
    QKeySequence::QKeySequence(param_1,param_2);
    QKeySequence::QKeySequence(param_1 + 8,param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  return param_1;
}

