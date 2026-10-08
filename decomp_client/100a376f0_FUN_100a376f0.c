
void FUN_100a376f0(QObject *param_1)

{
  code *pcVar1;
  int *piVar2;
  QArrayData *pQVar3;
  _func_void_Node_ptr *p_Var4;
  
  *(undefined ***)param_1 = &PTR_FUN_1022380b0;
  QMutex::lock();
  FUN_100a400f0(param_1 + 0x60);
  FUN_100a400f0();
  FUN_100a400f0();
  FUN_100a400f0();
  FUN_100a400f0();
  FUN_100a400f0();
  FUN_100a400f0(param_1 + 0x58);
  param_1[0x28] = (QObject)0x0;
  QMutex::unlock();
  *(undefined ***)(param_1 + 0x90) = &PTR_FUN_102238170;
  pQVar3 = *(QArrayData **)(param_1 + 0xa8);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100a377db;
      pQVar3 = *(QArrayData **)(param_1 + 0xa8);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100a377db:
  QObject::~QObject(param_1 + 0x90);
  piVar2 = *(int **)(param_1 + 0x88);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_100a37816;
      piVar2 = *(int **)(param_1 + 0x88);
    }
    FUN_100a3fda0(param_1 + 0x88,piVar2);
  }
LAB_100a37816:
  FUN_100039a80(param_1 + 0x78);
  piVar2 = *(int **)(param_1 + 0x68);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_100a37848;
      piVar2 = *(int **)(param_1 + 0x68);
    }
    FUN_100a3f590(param_1 + 0x68,piVar2);
  }
LAB_100a37848:
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x60);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100a37877;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x60);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_100a37877:
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x58);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100a378a6;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x58);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_100a378a6:
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x50);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100a378df;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x50);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_100a378df:
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x48);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100a37919;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x48);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_100a37919:
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x40);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100a37953;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x40);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_100a37953:
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x38);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100a3798d;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x38);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_100a3798d:
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x30);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100a379ce;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x30);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_100a379ce:
  QMutex::~QMutex((QMutex *)(param_1 + 0x20));
  QObject::~QObject(param_1);
  return;
}

