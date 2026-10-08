
void FUN_1005653b0(long param_1,undefined8 param_2)

{
  int iVar1;
  QKeySequence *this;
  long lVar2;
  Data *local_40 [2];
  undefined1 local_29;
  
  FUN_100560f00(local_40,param_1 + 0x20,param_2);
  FUN_100708300(local_40);
  if (*(int *)local_40[0] != -1) {
    if (*(int *)local_40[0] != 0) {
      LOCK();
      *(int *)local_40[0] = *(int *)local_40[0] + -1;
      UNLOCK();
      if (*(int *)local_40[0] != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_40[0] + 0xc);
    if (iVar1 != *(int *)(local_40[0] + 8)) {
      lVar2 = (long)*(int *)(local_40[0] + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(local_40[0] + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0);
    }
    QListData::dispose(local_40[0]);
  }
  return;
}

