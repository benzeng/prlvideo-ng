
void FUN_100586bb0(long param_1)

{
  QString *pQVar1;
  QArrayData *pQVar2;
  QKeySequence local_38 [8];
  QKeySequence local_30 [15];
  undefined1 local_21;
  
  QKeySequence::QKeySequence(local_30);
  FUN_100585370(param_1 + 0x70,local_30);
  QKeySequence::~QKeySequence(local_30);
  QKeySequence::QKeySequence(local_38);
  FUN_100585370(param_1 + 0x78);
  QKeySequence::~QKeySequence(local_38);
  QLineEdit::clear();
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x98);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("",0);
  QComboBox::setEditText(pQVar1);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100586c6e;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100586c6e:
  FUN_100585870(param_1);
  FUN_100585c20(param_1);
  FUN_100586430(param_1);
  return;
}

