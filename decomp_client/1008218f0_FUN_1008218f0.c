
void FUN_1008218f0(CAbstractTask *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  _func_void_Node_ptr *p_Var6;
  long lVar7;
  Data *pDVar8;
  
  *(undefined ***)param_1 = &PTR_FUN_102208050;
  pDVar8 = *(Data **)(param_1 + 0x50);
  if (*(int *)pDVar8 != -1) {
    if (*(int *)pDVar8 != 0) {
      LOCK();
      *(int *)pDVar8 = *(int *)pDVar8 + -1;
      UNLOCK();
      if (*(int *)pDVar8 != 0) goto LAB_1008219a1;
      pDVar8 = *(Data **)(param_1 + 0x50);
    }
    iVar2 = *(int *)(pDVar8 + 0xc);
    if (iVar2 != *(int *)(pDVar8 + 8)) {
      lVar7 = (long)*(int *)(pDVar8 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = pDVar8 + (long)iVar2 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_100821980:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          UNLOCK();
          if (*(int *)pQVar5 == 0) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_100821980;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_1008219a1:
  p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x48);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1008219d0;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x48);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_1008219d0:
  piVar3 = *(int **)(param_1 + 0x38);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x38));
    }
  }
  pDVar8 = *(Data **)(param_1 + 0x30);
  if (*(int *)pDVar8 != -1) {
    if (*(int *)pDVar8 != 0) {
      LOCK();
      *(int *)pDVar8 = *(int *)pDVar8 + -1;
      UNLOCK();
      if (*(int *)pDVar8 != 0) goto LAB_100821a81;
      pDVar8 = *(Data **)(param_1 + 0x30);
    }
    iVar2 = *(int *)(pDVar8 + 0xc);
    if (iVar2 != *(int *)(pDVar8 + 8)) {
      lVar7 = (long)*(int *)(pDVar8 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = pDVar8 + (long)iVar2 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_100821a60:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          UNLOCK();
          if (*(int *)pQVar5 == 0) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_100821a60;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_100821a81:
  piVar3 = *(int **)(param_1 + 0x20);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x18);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100821ad5;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x18);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_100821ad5:
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

