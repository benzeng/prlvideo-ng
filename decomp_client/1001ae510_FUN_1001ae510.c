
void FUN_1001ae510(QObject *param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  _func_void_Node_ptr *p_Var4;
  
  *(undefined ***)param_1 = &PTR_FUN_1021eeae0;
  piVar3 = *(int **)(param_1 + 0x48);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x48));
    }
  }
  FUN_100039a80(param_1 + 0x40);
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x38);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1001ae587;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x38);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_1001ae587:
  piVar3 = *(int **)(param_1 + 0x30);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar2 = piVar3 + 1;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(piVar3 + 2))(piVar3);
    }
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      operator_delete(piVar3);
    }
  }
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  QObject::~QObject(param_1);
  return;
}

