
void FUN_10081c3c0(CAbstractTask *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  QArrayData *pQVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_102206290;
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x298);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10081c40d;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x298);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_10081c40d:
  CHostHardwareInfo::~CHostHardwareInfo((CHostHardwareInfo *)(param_1 + 0xd0));
  FUN_1002868a0(param_1 + 0xb0);
  FUN_100286840(param_1 + 0x90);
  pQVar3 = *(QArrayData **)(param_1 + 0x80);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10081c467;
      pQVar3 = *(QArrayData **)(param_1 + 0x80);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10081c467:
  FUN_10005e410(param_1 + 0x18);
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

