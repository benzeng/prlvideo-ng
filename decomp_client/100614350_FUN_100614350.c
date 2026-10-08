
void FUN_100614350(long param_1)

{
  code *pcVar1;
  QArrayData *pQVar2;
  _func_void_Node_ptr *p_Var3;
  
  pQVar2 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100614389;
      pQVar2 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100614389:
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x20);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1006143b8;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x20);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1006143b8:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100614350();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100614350();
  }
  return;
}

