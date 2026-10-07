
undefined8 FUN_10046aa10(long param_1,undefined4 param_2,long param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined8 in_RAX;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  undefined8 uVar5;
  _func_void_Node_ptr *p_Var6;
  undefined4 local_38;
  undefined4 uStack_34;
  
  _local_38 = CONCAT44((int)((ulong)in_RAX >> 0x20),param_2);
  plVar1 = (long *)(param_1 + 8);
  p_Var3 = (_func_void_Node_ptr_void_ptr *)FUN_10046aba0(plVar1,&local_38);
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 8);
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_10046aa9e;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_10046af70,0x46af60,0x28);
  p_Var6 = (_func_void_Node_ptr *)*plVar1;
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var6 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      _local_38 = CONCAT17(*(int *)pcVar2 != 0,_local_38);
      if (*(int *)pcVar2 != 0) goto LAB_10046aa9a;
      p_Var6 = (_func_void_Node_ptr *)*plVar1;
    }
    QHashData::free_helper(p_Var6);
  }
LAB_10046aa9a:
  *plVar1 = (long)p_Var4;
LAB_10046aa9e:
  if (p_Var4 == p_Var3) {
    uVar5 = 0;
  }
  else if (*(long *)(p_Var3 + 0x18) == param_3) {
    if (*(long *)(p_Var3 + 0x20) == param_4) {
      FUN_10046ae10(plVar1,p_Var3);
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

