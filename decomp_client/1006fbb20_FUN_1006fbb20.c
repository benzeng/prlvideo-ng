
void FUN_1006fbb20(QObject *param_1)

{
  code *pcVar1;
  int iVar2;
  QKeySequence *this;
  _func_void_Node_ptr *p_Var3;
  long lVar4;
  Data *pDVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f5b00;
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x30);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1006fbb6a;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x30);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1006fbb6a:
  pDVar5 = *(Data **)(param_1 + 0x20);
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) goto LAB_1006fbbca;
      pDVar5 = *(Data **)(param_1 + 0x20);
    }
    iVar2 = *(int *)(pDVar5 + 0xc);
    if (iVar2 != *(int *)(pDVar5 + 8)) {
      lVar4 = (long)*(int *)(pDVar5 + 8) * 8 + (long)iVar2 * -8;
      this = (QKeySequence *)(pDVar5 + (long)iVar2 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_1006fbbca:
  QObject::~QObject(param_1);
  return;
}

