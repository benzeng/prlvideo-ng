
bool FUN_100714bd0(QKeySequence *param_1,QKeySequence *param_2)

{
  char cVar1;
  bool bVar2;
  QKeySequence local_38 [8];
  QKeySequence local_30 [8];
  QKeySequence local_28 [8];
  QKeySequence local_20 [8];
  
  QKeySequence::QKeySequence(local_20,param_1);
  QKeySequence::QKeySequence(local_28,param_2);
  cVar1 = QKeySequence::operator==(local_20,local_28);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    QKeySequence::QKeySequence(local_30,param_1 + 8);
    QKeySequence::QKeySequence(local_38,param_2 + 8);
    cVar1 = QKeySequence::operator==(local_30,local_38);
    if (cVar1 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10);
    }
    QKeySequence::~QKeySequence(local_38);
    QKeySequence::~QKeySequence(local_30);
  }
  QKeySequence::~QKeySequence(local_28);
  QKeySequence::~QKeySequence(local_20);
  return bVar2;
}

