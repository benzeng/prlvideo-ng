
undefined4 * FUN_1001e42f0(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr *p_Var4;
  
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    *(undefined **)(param_1 + 2) = PTR_shared_null_1021e15d0;
    return param_1;
  }
  *param_1 = *param_2;
  p_Var3 = *(_func_void_Node_ptr_void_ptr **)(param_2 + 2);
  *(_func_void_Node_ptr_void_ptr **)(param_1 + 2) = p_Var3;
  if (1 < *(int *)(p_Var3 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var3 + 0x10) = *(int *)(p_Var3 + 0x10) + 1;
    UNLOCK();
    p_Var3 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 2);
  }
  if ((((byte)p_Var3[0x28] & 1) != 0) || (*(uint *)(p_Var3 + 0x10) < 2)) goto LAB_1001e438d;
  uVar2 = QHashData::detach_helper(p_Var3,FUN_1001e43c0,0x1e3ae0,0x20);
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 2);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1001e4389;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 2);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_1001e4389:
  *(undefined8 *)(param_1 + 2) = uVar2;
LAB_1001e438d:
  *param_1 = *param_2;
  return param_1;
}

