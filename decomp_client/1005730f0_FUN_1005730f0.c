
void FUN_1005730f0(long param_1)

{
  QString *pQVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x30) + 0x90);
  QHostAddress::toString();
  QLineEdit::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100573157;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100573157:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x30) + 0x50);
  QHostAddress::toString();
  QLineEdit::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1005731aa;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005731aa:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x30) + 0x70);
  QHostAddress::toString();
  QLineEdit::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

