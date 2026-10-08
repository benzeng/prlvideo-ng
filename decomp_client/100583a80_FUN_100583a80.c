
void FUN_100583a80(QObject *param_1)

{
  code *pcVar1;
  int iVar2;
  QKeySequence *this;
  _func_void_Node_ptr *p_Var3;
  QArrayData *pQVar4;
  long lVar5;
  Data *pDVar6;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f3b10;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x78);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100583ad8;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x78);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_100583ad8:
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x70);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100583b07;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x70);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_100583b07:
  QKeySequence::~QKeySequence((QKeySequence *)(param_1 + 0x68));
  pDVar6 = *(Data **)(param_1 + 0x48);
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_100583b7a;
      pDVar6 = *(Data **)(param_1 + 0x48);
    }
    iVar2 = *(int *)(pDVar6 + 0xc);
    if (iVar2 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar2 * -8;
      this = (QKeySequence *)(pDVar6 + (long)iVar2 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100583b7a:
  pQVar4 = *(QArrayData **)(param_1 + 0x40);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100583baa;
      pQVar4 = *(QArrayData **)(param_1 + 0x40);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100583baa:
  QKeySequence::~QKeySequence((QKeySequence *)(param_1 + 0x30));
  QKeySequence::~QKeySequence((QKeySequence *)(param_1 + 0x28));
  QObject::~QObject(param_1);
  return;
}

