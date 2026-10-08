
void FUN_1006fbcc0(long param_1)

{
  int iVar1;
  QKeySequence *this;
  long lVar2;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  FUN_1006fbdf0(param_1 + 0x30);
  FUN_100701590(&local_40);
  FUN_100707070(param_1 + 0x20,&local_40);
  *(undefined4 *)(param_1 + 0x28) = local_38;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1006fbd5a;
      local_29 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar2 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(local_40 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0);
    }
    QListData::dispose(local_40);
  }
LAB_1006fbd5a:
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

