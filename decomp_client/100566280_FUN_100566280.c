
code * FUN_100566280(_func_void_Node_ptr_void_ptr *param_1,uint *param_2)

{
  code *pcVar1;
  ulong uVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  uint uVar6;
  uint uVar7;
  _func_void_Node_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  ulong uVar8;
  
  p_Var3 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (1 < *(uint *)(p_Var3 + 0x10)) {
    p_Var3 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var3,FUN_100568210,0x568040,0x18);
    p_Var9 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var9 + 0x10) != -1) {
      if (*(int *)(p_Var9 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var9 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_2b = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_2b) goto LAB_1005662f1;
        p_Var9 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var9);
    }
LAB_1005662f1:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var3;
  }
  uVar7 = *(uint *)(p_Var3 + 0x20);
  uVar6 = *(uint *)(p_Var3 + 0x24) ^ *param_2;
  uVar8 = (ulong)uVar6;
  p_Var5 = p_Var3;
  p_Var10 = param_1;
  if (uVar7 != 0) {
    p_Var10 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var3 + 8) + (uVar8 % (ulong)uVar7) * 8);
    for (p_Var4 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var3 + 8) + (uVar8 % (ulong)uVar7) * 8);
        (p_Var5 = p_Var3, p_Var4 != p_Var3 &&
        ((*(uint *)(p_Var4 + 8) != uVar6 || (p_Var5 = p_Var4, *param_2 != *(uint *)(p_Var4 + 0xc))))
        ); p_Var4 = *(_func_void_Node_ptr_void_ptr **)p_Var4) {
      p_Var10 = p_Var4;
    }
  }
  if (p_Var5 == p_Var3) {
    if ((int)uVar7 <= *(int *)(p_Var3 + 0x14)) {
      QHashData::rehash((int)p_Var3);
      p_Var3 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar7 = *(uint *)(p_Var3 + 0x24) ^ *param_2;
      uVar8 = (ulong)uVar7;
      p_Var10 = param_1;
      if (*(uint *)(p_Var3 + 0x20) != 0) {
        uVar2 = uVar8 % (ulong)*(uint *)(p_Var3 + 0x20);
        p_Var5 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var3 + 8) + uVar2 * 8);
        p_Var10 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var3 + 8) + uVar2 * 8);
        while ((p_Var4 = p_Var5, p_Var4 != p_Var3 &&
               ((*(uint *)(p_Var4 + 8) != uVar7 || (*param_2 != *(uint *)(p_Var4 + 0xc)))))) {
          p_Var10 = p_Var4;
          p_Var5 = *(_func_void_Node_ptr_void_ptr **)p_Var4;
        }
      }
    }
    local_38 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    p_Var5 = (_func_void_Node_ptr_void_ptr *)FUN_100568120(param_1,uVar8,param_2,&local_38,p_Var10);
    if (*(int *)(local_38 + 0x10) != -1) {
      if (*(int *)(local_38 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_38 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_2a = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_2a) goto LAB_1005663f2;
      }
      QHashData::free_helper(local_38);
    }
  }
LAB_1005663f2:
  return p_Var5 + 0x10;
}

