
QKeySequence * FUN_1005870a0(QKeySequence *param_1,long param_2)

{
  long lVar1;
  QKeySequence local_38 [8];
  QKeySequence local_30 [8];
  
  lVar1 = *(long *)(param_2 + 0x60);
  QKeySequence::QKeySequence(param_1,(QKeySequence *)(lVar1 + 0x28));
  QKeySequence::QKeySequence(param_1 + 8,(QKeySequence *)(lVar1 + 0x30));
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x38);
  FUN_1005864f0(local_30,*(undefined8 *)(param_2 + 0x60));
  FUN_100714b70(param_1,local_30);
  QKeySequence::~QKeySequence(local_30);
  FUN_1005867d0(local_38,*(undefined8 *)(param_2 + 0x60));
  FUN_100714ba0(param_1,local_38);
  QKeySequence::~QKeySequence(local_38);
  return param_1;
}

