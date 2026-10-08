
long FUN_1005871a0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  QKeySequence *this;
  long lVar3;
  QKeySequence local_48 [8];
  Data *local_40;
  undefined1 local_31;
  
  lVar3 = *(long *)(param_2 + 0x60);
  FUN_1005607f0(param_1,lVar3 + 0x48);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar3 + 0x50);
  FUN_100708240(&local_40,param_1);
  uVar2 = *(uint *)(local_40 + 8);
  if ((int)uVar2 < (int)*(uint *)(local_40 + 0xc)) {
    if (1 < *(uint *)local_40) {
      FUN_100560930(&local_40,*(uint *)(local_40 + 4));
      uVar2 = *(uint *)(local_40 + 8);
    }
    QKeySequence::~QKeySequence((QKeySequence *)(local_40 + (long)(int)uVar2 * 8 + 0x10));
    QListData::remove((int)&local_40);
  }
  FUN_1005864f0(local_48,*(undefined8 *)(param_2 + 0x60));
  FUN_10058a2e0(&local_40,local_48);
  QKeySequence::~QKeySequence(local_48);
  FUN_100708260(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar3 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(local_40 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_40);
  }
  return param_1;
}

