
void FUN_10055e3c0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  QKeySequence *this;
  long lVar4;
  Data *local_40 [2];
  undefined1 local_29;
  
  if (DAT_102310998 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1006faf60(pvVar3);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar3;
  }
  uVar2 = FUN_1006fb750(DAT_102310998,1);
  FUN_10055de50(param_1,uVar2);
  if (DAT_102310998 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1006faf60(pvVar3);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar3;
  }
  FUN_1006fb7b0(local_40,DAT_102310998,1);
  FUN_10055e570(param_1,local_40);
  if (*(int *)local_40[0] != -1) {
    if (*(int *)local_40[0] != 0) {
      LOCK();
      *(int *)local_40[0] = *(int *)local_40[0] + -1;
      local_29 = *(int *)local_40[0] != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10055e4ca;
    }
    iVar1 = *(int *)(local_40[0] + 0xc);
    if (iVar1 != *(int *)(local_40[0] + 8)) {
      lVar4 = (long)*(int *)(local_40[0] + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(local_40[0] + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_40[0]);
  }
LAB_10055e4ca:
  FUN_10083d580(*(undefined8 *)(param_1 + 0x10));
  return;
}

