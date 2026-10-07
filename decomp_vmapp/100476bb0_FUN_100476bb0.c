
int FUN_100476bb0(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  long lVar7;
  _func_void_Node_ptr *p_Var8;
  undefined *local_40;
  undefined1 local_31;
  
  local_40 = PTR_shared_null_100ba2188;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0xc) != *(int *)(lVar7 + 8)) {
    lVar7 = lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8;
    plVar1 = (long *)(param_1 + 0x18);
    do {
      p_Var5 = (_func_void_Node_ptr_void_ptr *)FUN_100478ba0(plVar1,lVar7);
      p_Var6 = (_func_void_Node_ptr_void_ptr *)*plVar1;
      if (1 < *(uint *)(p_Var6 + 0x10)) {
        p_Var6 = (_func_void_Node_ptr_void_ptr *)
                 QHashData::detach_helper(p_Var6,FUN_100479de0,0x471d80,0x20);
        p_Var8 = (_func_void_Node_ptr *)*plVar1;
        if (*(int *)(p_Var8 + 0x10) != -1) {
          if (*(int *)(p_Var8 + 0x10) != 0) {
            LOCK();
            pcVar2 = p_Var8 + 0x10;
            *(int *)pcVar2 = *(int *)pcVar2 + -1;
            local_31 = *(int *)pcVar2 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100476c6c;
            p_Var8 = (_func_void_Node_ptr *)*plVar1;
          }
          QHashData::free_helper(p_Var8);
        }
LAB_100476c6c:
        *plVar1 = (long)p_Var6;
      }
      if (p_Var6 != p_Var5) {
        FUN_1004790b0(plVar1,p_Var5);
        FUN_10000c490(&local_40,lVar7);
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 != *param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8);
  }
  FUN_100478320(param_1,&local_40,*(int *)(*(long *)(param_1 + 0x18) + 0x14) == 0);
  iVar3 = *(int *)(local_40 + 0xc);
  iVar4 = *(int *)(local_40 + 8);
  FUN_100013180(&local_40);
  return iVar3 - iVar4;
}

