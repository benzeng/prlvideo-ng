
void FUN_100567a90(QAbstractItemModel *param_1)

{
  code *pcVar1;
  int iVar2;
  Data *pDVar3;
  _func_void_Node_ptr *p_Var4;
  long lVar5;
  Data *pDVar6;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f3210;
  pDVar6 = *(Data **)(param_1 + 0x18);
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_100567b0f;
      pDVar6 = *(Data **)(param_1 + 0x18);
    }
    iVar2 = *(int *)(pDVar6 + 0xc);
    if (iVar2 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = pDVar6 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100567b0f:
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x10);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100567b3e;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x10);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_100567b3e:
  QAbstractItemModel::~QAbstractItemModel(param_1);
  operator_delete(param_1);
  return;
}

