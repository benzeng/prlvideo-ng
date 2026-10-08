
void FUN_1007db780(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr *p_Var6;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar2;
  piVar3 = *(int **)(param_1 + 0x10);
  param_2[2] = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  p_Var5 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x18);
  param_2[3] = p_Var5;
  if (1 < *(int *)(p_Var5 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var5 + 0x10) = *(int *)(p_Var5 + 0x10) + 1;
    UNLOCK();
    p_Var5 = (_func_void_Node_ptr_void_ptr *)param_2[3];
  }
  if (((byte)p_Var5[0x28] & 1) != 0) {
    return;
  }
  if (*(uint *)(p_Var5 + 0x10) < 2) {
    return;
  }
  uVar4 = QHashData::detach_helper(p_Var5,FUN_10002c570,0x2c4b0,0x20);
  p_Var6 = (_func_void_Node_ptr *)param_2[3];
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1007db82f;
      p_Var6 = (_func_void_Node_ptr *)param_2[3];
    }
    QHashData::free_helper(p_Var6);
  }
LAB_1007db82f:
  param_2[3] = uVar4;
  return;
}

