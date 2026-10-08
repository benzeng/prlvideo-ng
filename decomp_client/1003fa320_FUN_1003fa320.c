
void FUN_1003fa320(QObject *param_1)

{
  code *pcVar1;
  QMapNodeBase *pQVar2;
  QArrayData *pQVar3;
  _func_void_Node_ptr *p_Var4;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f2100;
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x48);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1003fa376;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x48);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar2,(int)*(long *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_1003fa376:
  QVariant::~QVariant((QVariant *)(param_1 + 0x38));
  pQVar3 = *(QArrayData **)(param_1 + 0x30);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1003fa3af;
      pQVar3 = *(QArrayData **)(param_1 + 0x30);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003fa3af:
  pQVar3 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1003fa3df;
      pQVar3 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003fa3df:
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x20);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1003fa40e;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x20);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_1003fa40e:
  QObject::~QObject(param_1);
  return;
}

