
long FUN_100450150(int param_1,undefined8 *param_2,long *param_3,bool param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr *p_Var5;
  
  lVar2 = QMapDataBase::createNode(param_1,0x28,(QMapNodeBase *)0x8,param_4);
  *(undefined8 *)(lVar2 + 0x18) = *param_2;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)*param_3;
  *(_func_void_Node_ptr_void_ptr **)(lVar2 + 0x20) = p_Var4;
  if (1 < *(int *)(p_Var4 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var4 + 0x10) = *(int *)(p_Var4 + 0x10) + 1;
    UNLOCK();
    p_Var4 = *(_func_void_Node_ptr_void_ptr **)(lVar2 + 0x20);
  }
  if (((byte)p_Var4[0x28] & 1) != 0) {
    return lVar2;
  }
  if (*(uint *)(p_Var4 + 0x10) < 2) {
    return lVar2;
  }
  uVar3 = QHashData::detach_helper(p_Var4,FUN_10044f7d0,0x44f7f0,0x10);
  p_Var5 = *(_func_void_Node_ptr **)(lVar2 + 0x20);
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100450204;
      p_Var5 = *(_func_void_Node_ptr **)(lVar2 + 0x20);
    }
    QHashData::free_helper(p_Var5);
  }
LAB_100450204:
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  return lVar2;
}

