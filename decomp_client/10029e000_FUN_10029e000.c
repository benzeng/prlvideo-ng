
void FUN_10029e000(CAbstractTask *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int *piVar2;
  CTaskGenericId *pCVar3;
  undefined8 uVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr *p_Var6;
  
  pCVar3 = operator_new(0x18);
  FUN_10029f110(pCVar3,param_3);
  CAbstractTask::CAbstractTask(param_1,pCVar3);
  *(undefined ***)param_1 = &PTR_FUN_1022075c0;
  p_Var5 = (_func_void_Node_ptr_void_ptr *)*param_2;
  *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x18) = p_Var5;
  if (1 < *(int *)(p_Var5 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var5 + 0x10) = *(int *)(p_Var5 + 0x10) + 1;
    UNLOCK();
    p_Var5 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x18);
  }
  if ((((byte)p_Var5[0x28] & 1) != 0) || (*(uint *)(p_Var5 + 0x10) < 2)) goto LAB_10029e0cd;
  uVar4 = QHashData::detach_helper(p_Var5,FUN_10002c570,0x2c4b0,0x20);
  p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x18);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10029e0c8;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x18);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_10029e0c8:
  *(undefined8 *)(param_1 + 0x18) = uVar4;
LAB_10029e0cd:
  piVar2 = (int *)*param_3;
  *(int **)(param_1 + 0x20) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

