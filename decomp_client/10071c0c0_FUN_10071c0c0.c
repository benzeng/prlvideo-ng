
void FUN_10071c0c0(QObject *param_1)

{
  QObject *pQVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  Data *pDVar5;
  _func_void_Node_ptr *p_Var6;
  QArrayData *pQVar7;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f5c80;
  FUN_10071c320();
  pQVar1 = param_1 + 0x28;
  lVar3 = *(long *)(param_1 + 0x28);
  while (*(int *)(lVar3 + 0xc) != *(int *)(lVar3 + 8)) {
    plVar4 = (long *)FUN_100720e90(pQVar1);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    lVar3 = *(long *)pQVar1;
  }
  FUN_1001c26f0(param_1 + 0x40);
  pDVar5 = *(Data **)(param_1 + 0x38);
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) goto LAB_10071c156;
      pDVar5 = *(Data **)(param_1 + 0x38);
    }
    QListData::dispose(pDVar5);
  }
LAB_10071c156:
  pDVar5 = *(Data **)(param_1 + 0x30);
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) goto LAB_10071c17c;
      pDVar5 = *(Data **)(param_1 + 0x30);
    }
    QListData::dispose(pDVar5);
  }
LAB_10071c17c:
  pDVar5 = *(Data **)pQVar1;
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) goto LAB_10071c1a0;
      pDVar5 = *(Data **)pQVar1;
    }
    QListData::dispose(pDVar5);
  }
LAB_10071c1a0:
  p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x20);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var6 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_10071c1cf;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x20);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_10071c1cf:
  pQVar7 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_10071c1ff;
      pQVar7 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_10071c1ff:
  QObject::~QObject(param_1);
  return;
}

