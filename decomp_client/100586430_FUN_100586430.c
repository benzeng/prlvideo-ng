
void FUN_100586430(long param_1)

{
  uint uVar1;
  QKeySequence local_30 [8];
  QKeySequence local_28 [8];
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 < 2) {
    FUN_1005864f0(local_28,param_1);
    QKeySequence::isEmpty();
    QKeySequence::~QKeySequence(local_28);
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar1 | 2) == 2) {
    FUN_1005867d0(local_30,param_1);
    QKeySequence::isEmpty();
    QKeySequence::~QKeySequence(local_30);
  }
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 200),0));
  return;
}

