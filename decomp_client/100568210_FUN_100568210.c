
void FUN_100568210(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr *p_Var5;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar2;
  *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x10);
  param_2[2] = p_Var4;
  if (1 < *(int *)(p_Var4 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var4 + 0x10) = *(int *)(p_Var4 + 0x10) + 1;
    UNLOCK();
    p_Var4 = (_func_void_Node_ptr_void_ptr *)param_2[2];
  }
  if (((byte)p_Var4[0x28] & 1) != 0) {
    return;
  }
  if (*(uint *)(p_Var4 + 0x10) < 2) {
    return;
  }
  uVar3 = QHashData::detach_helper(p_Var4,FUN_1005682c0,0x568080,0x20);
  p_Var5 = (_func_void_Node_ptr *)param_2[2];
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1005682ac;
      p_Var5 = (_func_void_Node_ptr *)param_2[2];
    }
    QHashData::free_helper(p_Var5);
  }
LAB_1005682ac:
  param_2[2] = uVar3;
  return;
}

