
int FUN_100476890(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr *p_Var5;
  int iVar6;
  undefined *local_40;
  undefined1 local_31;
  
  plVar1 = (long *)(param_1 + 0x18);
  p_Var3 = (_func_void_Node_ptr_void_ptr *)FUN_100478ba0(plVar1);
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x18);
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_10047691c;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_100479de0,0x471d80,0x20);
  p_Var5 = (_func_void_Node_ptr *)*plVar1;
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var5 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_31 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100476914;
      p_Var5 = (_func_void_Node_ptr *)*plVar1;
    }
    QHashData::free_helper(p_Var5);
  }
LAB_100476914:
  *plVar1 = (long)p_Var4;
LAB_10047691c:
  iVar6 = 0;
  if (p_Var4 != p_Var3) {
    FUN_1004790b0(plVar1,p_Var3);
    local_40 = PTR_shared_null_100ba2188;
    FUN_10000c490(&local_40,param_2);
    FUN_100478320(param_1,&local_40,*(int *)(*(long *)(param_1 + 0x18) + 0x14) == 0);
    iVar6 = *(int *)(local_40 + 0xc) - *(int *)(local_40 + 8);
    FUN_100013180(&local_40);
  }
  return iVar6;
}

