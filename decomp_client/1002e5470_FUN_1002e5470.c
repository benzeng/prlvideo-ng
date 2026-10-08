
void FUN_1002e5470(undefined8 *param_1)

{
  code *pcVar1;
  int *piVar2;
  _func_void_Node_ptr *p_Var3;
  QArrayData *pQVar4;
  
  piVar2 = (int *)param_1[0xe];
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && ((void *)param_1[0xe] != (void *)0x0)) {
      operator_delete((void *)param_1[0xe]);
    }
  }
  p_Var3 = (_func_void_Node_ptr *)param_1[0xd];
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1002e54d2;
      p_Var3 = (_func_void_Node_ptr *)param_1[0xd];
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1002e54d2:
  FUN_100039a80(param_1 + 0xc);
  piVar2 = (int *)param_1[10];
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && ((void *)param_1[10] != (void *)0x0)) {
      operator_delete((void *)param_1[10]);
    }
  }
  piVar2 = (int *)param_1[9];
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_1002e5529;
      piVar2 = (int *)param_1[9];
    }
    FUN_1001c45d0(param_1 + 9,piVar2);
  }
LAB_1002e5529:
  pQVar4 = (QArrayData *)param_1[7];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1002e5559;
      pQVar4 = (QArrayData *)param_1[7];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1002e5559:
  pQVar4 = (QArrayData *)param_1[6];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1002e5589;
      pQVar4 = (QArrayData *)param_1[6];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1002e5589:
  pQVar4 = (QArrayData *)param_1[2];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1002e55b9;
      pQVar4 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1002e55b9:
  pQVar4 = (QArrayData *)*param_1;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) {
        return;
      }
      pQVar4 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
  return;
}

