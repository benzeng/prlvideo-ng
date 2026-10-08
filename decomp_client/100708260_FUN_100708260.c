
void FUN_100708260(long *param_1,long *param_2)

{
  int iVar1;
  Data *pDVar2;
  Data *this;
  long lVar3;
  Data *local_30;
  undefined1 local_21;
  
  if (*param_1 != *param_2) {
    FUN_1005607f0(&local_30);
    pDVar2 = (Data *)*param_1;
    *param_1 = (long)local_30;
    if (*(int *)pDVar2 != -1) {
      if (*(int *)pDVar2 != 0) {
        LOCK();
        *(int *)pDVar2 = *(int *)pDVar2 + -1;
        UNLOCK();
        if (*(int *)pDVar2 != 0) {
          return;
        }
        local_21 = 0;
      }
      iVar1 = *(int *)(pDVar2 + 0xc);
      local_30 = pDVar2;
      if (iVar1 != *(int *)(pDVar2 + 8)) {
        lVar3 = (long)*(int *)(pDVar2 + 8) * 8 + (long)iVar1 * -8;
        this = pDVar2 + (long)iVar1 * 8 + 8;
        do {
          QKeySequence::~QKeySequence((QKeySequence *)this);
          this = this + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose(pDVar2);
    }
  }
  return;
}

