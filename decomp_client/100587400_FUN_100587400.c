
undefined1 * FUN_100587400(undefined1 *param_1,long param_2)

{
  long lVar1;
  QKeySequence local_30 [8];
  
  lVar1 = *(long *)(param_2 + 0x60);
  *param_1 = *(undefined1 *)(lVar1 + 0x60);
  QKeySequence::QKeySequence((QKeySequence *)(param_1 + 8),(QKeySequence *)(lVar1 + 0x68));
  *param_1 = *(undefined1 *)(lVar1 + 0x60);
  FUN_1005867d0(local_30,*(undefined8 *)(param_2 + 0x60));
  QKeySequence::operator=((QKeySequence *)(param_1 + 8),local_30);
  QKeySequence::~QKeySequence(local_30);
  return param_1;
}

