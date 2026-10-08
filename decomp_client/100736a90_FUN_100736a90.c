
void FUN_100736a90(QObject *param_1)

{
  code *pcVar1;
  QObject *pQVar2;
  int iVar3;
  undefined8 *puVar4;
  _func_void_Node_ptr *p_Var5;
  Data *pDVar6;
  long lVar7;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f6000;
  pQVar2 = param_1 + 0x18;
  lVar7 = *(long *)(param_1 + 0x18);
  iVar3 = *(int *)(lVar7 + 8);
  if (iVar3 != *(int *)(lVar7 + 0xc)) {
    puVar4 = (undefined8 *)(lVar7 + 0x10 + (long)iVar3 * 8);
    lVar7 = (long)*(int *)(lVar7 + 0xc) * 8 + (long)iVar3 * -8;
    do {
      if ((void *)*puVar4 != (void *)0x0) {
        operator_delete((void *)*puVar4);
      }
      puVar4 = puVar4 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  FUN_1007388e0(pQVar2);
  p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0x28);
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100736b30;
      p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0x28);
    }
    QHashData::free_helper(p_Var5);
  }
LAB_100736b30:
  p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0x20);
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100736b61;
      p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0x20);
    }
    QHashData::free_helper(p_Var5);
  }
LAB_100736b61:
  pDVar6 = *(Data **)pQVar2;
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_100736b85;
      pDVar6 = *(Data **)pQVar2;
    }
    QListData::dispose(pDVar6);
  }
LAB_100736b85:
  QObject::~QObject(param_1);
  return;
}

