
void FUN_1002ad2d0(CAbstractTask *param_1,QObject *param_2,CTaskGenericId *param_3,long *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr *p_Var4;
  
  CAbstractTask::CAbstractTask(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_102207c90;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  p_Var3 = (_func_void_Node_ptr_void_ptr *)*param_4;
  *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x28) = p_Var3;
  if (1 < *(int *)(p_Var3 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var3 + 0x10) = *(int *)(p_Var3 + 0x10) + 1;
    UNLOCK();
    p_Var3 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x28);
  }
  if (((byte)p_Var3[0x28] & 1) != 0) {
    return;
  }
  if (*(uint *)(p_Var3 + 0x10) < 2) {
    return;
  }
  uVar2 = QHashData::detach_helper(p_Var3,FUN_100076890,0x76530,0x28);
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x28);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1002ad38a;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x28);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_1002ad38a:
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return;
}

