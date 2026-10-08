
void FUN_1007143b0(long param_1)

{
  QKeySequence local_38 [8];
  QKeySequence local_30 [8];
  QKeySequence local_28 [8];
  QKeySequence local_20 [8];
  
  QKeySequence::QKeySequence(local_20);
  QKeySequence::QKeySequence(local_28);
  FUN_100714b00(param_1,local_20,local_28,2);
  QKeySequence::~QKeySequence(local_28);
  QKeySequence::~QKeySequence(local_20);
  QKeySequence::QKeySequence(local_30);
  QKeySequence::QKeySequence(local_38);
  FUN_100714b00(param_1 + 0x18,local_30,local_38,2);
  QKeySequence::~QKeySequence(local_38);
  QKeySequence::~QKeySequence(local_30);
  return;
}

