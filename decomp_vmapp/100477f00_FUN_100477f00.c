
code * FUN_100477f00(long param_1,undefined8 param_2,char param_3)

{
  long *plVar1;
  char cVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  long lVar5;
  undefined4 *puVar6;
  _func_void_Node_ptr *p_Var7;
  code *pcVar8;
  int *local_40;
  undefined1 local_33;
  undefined1 local_32;
  
  plVar1 = (long *)(param_1 + 0x18);
  p_Var3 = (_func_void_Node_ptr_void_ptr *)FUN_100478ba0(plVar1);
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x18);
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_100477f87;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_100479de0,0x471d80,0x20);
  p_Var7 = (_func_void_Node_ptr *)*plVar1;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar8 = p_Var7 + 0x10;
      *(int *)pcVar8 = *(int *)pcVar8 + -1;
      local_33 = *(int *)pcVar8 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_100477f84;
      p_Var7 = (_func_void_Node_ptr *)*plVar1;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_100477f84:
  *plVar1 = (long)p_Var4;
LAB_100477f87:
  if (p_Var4 != p_Var3) {
    return p_Var3 + 0x18;
  }
  if (param_3 == '\0') {
    puVar6 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar6 = 8;
  }
  else {
    cVar2 = FUN_100472b80(param_2);
    if (cVar2 != '\0') {
      FUN_100473c40(&local_40,param_2);
      lVar5 = FUN_100478c80(plVar1,param_2,&local_40);
      pcVar8 = (code *)(lVar5 + 0x18);
      if (local_40 == (int *)0x0) {
        return pcVar8;
      }
      LOCK();
      *local_40 = *local_40 + -1;
      local_32 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_32) {
        return pcVar8;
      }
      FUN_100031ed0(local_40);
      operator_delete(local_40);
      return pcVar8;
    }
    puVar6 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar6 = 6;
  }
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar6,PTR_typeinfo_100ba22d8,0);
}

