
long FUN_100597f30(long param_1,long param_2)

{
  int iVar1;
  Data *pDVar2;
  QKeySequence *this;
  long lVar3;
  Data *local_38;
  undefined1 local_29;
  
  if (param_2 == 0) {
    local_38 = (Data *)PTR_shared_null_1021e15e8;
    FUN_100708220(param_1,&local_38,2);
    pDVar2 = local_38;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_38 + 0xc);
      if (iVar1 != *(int *)(local_38 + 8)) {
        lVar3 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
        this = (QKeySequence *)(local_38 + (long)iVar1 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(this);
          this = this + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose(pDVar2);
    }
  }
  else {
    FUN_1005607f0(param_1,param_2);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  return param_1;
}

