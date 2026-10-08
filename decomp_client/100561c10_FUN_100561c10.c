
void FUN_100561c10(long param_1,undefined8 param_2,long *param_3,undefined1 param_4)

{
  int iVar1;
  Data *pDVar2;
  Data *pDVar3;
  long lVar4;
  Data *local_40;
  undefined1 local_31;
  
  FUN_100566590(param_1 + 0x10);
  if (*(long *)(param_1 + 0x18) != *param_3) {
    FUN_1000722f0(&local_40,param_3);
    pDVar2 = *(Data **)(param_1 + 0x18);
    *(Data **)(param_1 + 0x18) = local_40;
    local_40 = pDVar2;
    if (*(int *)pDVar2 != -1) {
      if (*(int *)pDVar2 != 0) {
        LOCK();
        *(int *)pDVar2 = *(int *)pDVar2 + -1;
        local_31 = *(int *)pDVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100561cbf;
      }
      iVar1 = *(int *)(pDVar2 + 0xc);
      if (iVar1 != *(int *)(pDVar2 + 8)) {
        lVar4 = (long)*(int *)(pDVar2 + 8) * 8 + (long)iVar1 * -8;
        pDVar3 = pDVar2 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar3 != (void *)0x0) {
            operator_delete(*(void **)pDVar3);
          }
          pDVar3 = pDVar3 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose(pDVar2);
    }
  }
LAB_100561cbf:
  *(undefined1 *)(param_1 + 0x20) = param_4;
  QAbstractItemModel::beginResetModel();
  QAbstractItemModel::endResetModel();
  return;
}

