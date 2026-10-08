
void FUN_100561d90(long param_1,undefined4 param_2,long *param_3)

{
  int iVar1;
  Data *pDVar2;
  long *plVar3;
  Data *this;
  long lVar4;
  undefined4 local_44;
  Data *local_40;
  undefined1 local_31;
  
  local_44 = param_2;
  plVar3 = (long *)FUN_100565d60(param_1 + 0x10,&local_44);
  if (*plVar3 != *param_3) {
    FUN_1005607f0(&local_40,param_3);
    pDVar2 = (Data *)*plVar3;
    *plVar3 = (long)local_40;
    local_40 = pDVar2;
    if (*(int *)pDVar2 != -1) {
      if (*(int *)pDVar2 != 0) {
        LOCK();
        *(int *)pDVar2 = *(int *)pDVar2 + -1;
        local_31 = *(int *)pDVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100561e5e;
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
LAB_100561e5e:
  *(int *)(plVar3 + 1) = (int)param_3[1];
  QAbstractItemModel::beginResetModel();
  QAbstractItemModel::endResetModel();
  return;
}

