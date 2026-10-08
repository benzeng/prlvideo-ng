
void FUN_10059e460(QObject *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  _func_void_Node_ptr *p_Var4;
  Data *pDVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_10221d610;
  if (param_1[0x48] != (QObject)0x0) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
    }
    FUN_100161ad0(uVar3);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
    }
    FUN_100161a10(uVar3);
  }
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x88))();
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x88))();
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x88))();
  }
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x58);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10059e528;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x58);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_10059e528:
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x50);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10059e557;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x50);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_10059e557:
  piVar2 = *(int **)(param_1 + 0x38);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x38));
    }
  }
  pDVar5 = *(Data **)(param_1 + 0x30);
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) goto LAB_10059e5a2;
      pDVar5 = *(Data **)(param_1 + 0x30);
    }
    QListData::dispose(pDVar5);
  }
LAB_10059e5a2:
  QObject::~QObject(param_1);
  return;
}

