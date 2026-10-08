
void FUN_100a1bc80(QObject *param_1)

{
  code *pcVar1;
  int *piVar2;
  QMapNodeBase *pQVar3;
  _func_void_Node_ptr *p_Var4;
  
  *(undefined ***)param_1 = &PTR_FUN_102236f50;
  piVar2 = *(int **)(param_1 + 0x78);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x78) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x78));
    }
  }
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x70);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100a1bd08;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x70);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100a1bd08:
  QVariant::~QVariant((QVariant *)(param_1 + 0x60));
  QVariant::~QVariant((QVariant *)(param_1 + 0x40));
  piVar2 = *(int **)(param_1 + 0x20);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x18);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100a1bd6e;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x18);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_100a1bd6e:
  QObject::~QObject(param_1);
  return;
}

