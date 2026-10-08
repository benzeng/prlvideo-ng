
void FUN_100714820(long *param_1)

{
  int iVar1;
  Data *pDVar2;
  undefined *puVar3;
  Data *this;
  QKeySequence *this_00;
  long lVar4;
  undefined *local_40;
  Data *local_38;
  undefined1 local_29;
  
  puVar3 = PTR_shared_null_1021e15e8;
  local_40 = PTR_shared_null_1021e15e8;
  if ((undefined *)*param_1 != PTR_shared_null_1021e15e8) {
    FUN_1005607f0(&local_38,&local_40);
    pDVar2 = (Data *)*param_1;
    *param_1 = (long)local_38;
    local_38 = pDVar2;
    if (*(int *)pDVar2 != -1) {
      if (*(int *)pDVar2 != 0) {
        LOCK();
        *(int *)pDVar2 = *(int *)pDVar2 + -1;
        local_29 = *(int *)pDVar2 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007148ba;
      }
      iVar1 = *(int *)(pDVar2 + 0xc);
      if (iVar1 != *(int *)(pDVar2 + 8)) {
        lVar4 = (long)*(int *)(pDVar2 + 8) * 8 + (long)iVar1 * -8;
        this = pDVar2 + (long)iVar1 * 8 + 8;
        do {
          QKeySequence::~QKeySequence((QKeySequence *)this);
          this = this + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose(pDVar2);
    }
  }
LAB_1007148ba:
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      UNLOCK();
      local_38 = (Data *)CONCAT71(local_38._1_7_,*(int *)puVar3 != 0);
      if (*(int *)puVar3 != 0) {
        return;
      }
    }
    iVar1 = *(int *)(puVar3 + 0xc);
    if (iVar1 != *(int *)(puVar3 + 8)) {
      lVar4 = (long)*(int *)(puVar3 + 8) * 8 + (long)iVar1 * -8;
      this_00 = (QKeySequence *)(puVar3 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this_00);
        this_00 = this_00 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
  return;
}

