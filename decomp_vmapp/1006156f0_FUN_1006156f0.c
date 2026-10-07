
void FUN_1006156f0(undefined8 *param_1)

{
  code *pcVar1;
  int *piVar2;
  _func_void_Node_ptr *p_Var3;
  QArrayData *pQVar4;
  
  FUN_100615870();
  FUN_100619110(param_1 + 0xe,param_1[0xf]);
  p_Var3 = (_func_void_Node_ptr *)param_1[0xd];
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10061573f;
      p_Var3 = (_func_void_Node_ptr *)param_1[0xd];
    }
    QHashData::free_helper(p_Var3);
  }
LAB_10061573f:
  QMutex::~QMutex((QMutex *)(param_1 + 0xc));
  pQVar4 = (QArrayData *)param_1[3];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100615778;
      pQVar4 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100615778:
  piVar2 = (int *)*param_1;
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return;
      }
      piVar2 = (int *)*param_1;
    }
    FUN_1006197a0(param_1,piVar2);
  }
  return;
}

