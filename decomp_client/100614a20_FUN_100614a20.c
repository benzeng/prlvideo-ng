
long FUN_100614a20(int param_1,undefined8 *param_2,long *param_3,bool param_4)

{
  code *pcVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr *p_Var6;
  
  lVar3 = QMapDataBase::createNode(param_1,0x28,(QMapNodeBase *)0x8,param_4);
  piVar2 = (int *)*param_2;
  *(int **)(lVar3 + 0x18) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  p_Var5 = (_func_void_Node_ptr_void_ptr *)*param_3;
  *(_func_void_Node_ptr_void_ptr **)(lVar3 + 0x20) = p_Var5;
  if (1 < *(int *)(p_Var5 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var5 + 0x10) = *(int *)(p_Var5 + 0x10) + 1;
    UNLOCK();
    p_Var5 = *(_func_void_Node_ptr_void_ptr **)(lVar3 + 0x20);
  }
  if (((byte)p_Var5[0x28] & 1) != 0) {
    return lVar3;
  }
  if (*(uint *)(p_Var5 + 0x10) < 2) {
    return lVar3;
  }
  uVar4 = QHashData::detach_helper(p_Var5,FUN_1006146b0,0x613ec0,0x48);
  p_Var6 = *(_func_void_Node_ptr **)(lVar3 + 0x20);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100614ae5;
      p_Var6 = *(_func_void_Node_ptr **)(lVar3 + 0x20);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_100614ae5:
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  return lVar3;
}

