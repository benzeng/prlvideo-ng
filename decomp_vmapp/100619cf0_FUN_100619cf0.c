
void FUN_100619cf0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr *p_Var6;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    puVar3 = operator_new(0x20);
    uVar4 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar4;
    p_Var5 = (_func_void_Node_ptr_void_ptr *)param_2[2];
    puVar3[2] = p_Var5;
    if (1 < *(int *)(p_Var5 + 0x10) + 1U) {
      LOCK();
      *(int *)(p_Var5 + 0x10) = *(int *)(p_Var5 + 0x10) + 1;
      UNLOCK();
      p_Var5 = (_func_void_Node_ptr_void_ptr *)puVar3[2];
    }
    if ((((byte)p_Var5[0x28] & 1) != 0) || (*(uint *)(p_Var5 + 0x10) < 2)) goto LAB_100619e7b;
    uVar4 = QHashData::detach_helper(p_Var5,FUN_100619440,0x619150,0x20);
    p_Var6 = (_func_void_Node_ptr *)puVar3[2];
    if (*(int *)(p_Var6 + 0x10) != -1) {
      if (*(int *)(p_Var6 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var6 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_100619e77;
        p_Var6 = (_func_void_Node_ptr *)puVar3[2];
      }
      QHashData::free_helper(p_Var6);
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_100619f10(param_1,0x7fffffff,1);
    puVar3 = operator_new(0x20);
    uVar4 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar4;
    p_Var5 = (_func_void_Node_ptr_void_ptr *)param_2[2];
    puVar3[2] = p_Var5;
    if (1 < *(int *)(p_Var5 + 0x10) + 1U) {
      LOCK();
      *(int *)(p_Var5 + 0x10) = *(int *)(p_Var5 + 0x10) + 1;
      UNLOCK();
      p_Var5 = (_func_void_Node_ptr_void_ptr *)puVar3[2];
    }
    if ((((byte)p_Var5[0x28] & 1) != 0) || (*(uint *)(p_Var5 + 0x10) < 2)) goto LAB_100619e7b;
    uVar4 = QHashData::detach_helper(p_Var5,FUN_100619440,0x619150,0x20);
    p_Var6 = (_func_void_Node_ptr *)puVar3[2];
    if (*(int *)(p_Var6 + 0x10) != -1) {
      if (*(int *)(p_Var6 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var6 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_100619e77;
        p_Var6 = (_func_void_Node_ptr *)puVar3[2];
      }
      QHashData::free_helper(p_Var6);
    }
  }
LAB_100619e77:
  puVar3[2] = uVar4;
LAB_100619e7b:
  puVar3[3] = param_2[3];
  *puVar2 = puVar3;
  return;
}

