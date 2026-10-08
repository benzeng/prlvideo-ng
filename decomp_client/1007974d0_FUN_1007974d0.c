
code * FUN_1007974d0(_func_void_Node_ptr_void_ptr *param_1,ulong *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr *p_Var8;
  uint uVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  int *local_40;
  undefined1 local_33;
  undefined1 local_32;
  
  p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (1 < *(uint *)(p_Var5 + 0x10)) {
    p_Var5 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var5,FUN_100797ee0,0x797b00,0x20);
    p_Var8 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var8 + 0x10) != -1) {
      if (*(int *)(p_Var8 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var8 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_33 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_33) goto LAB_100797542;
        p_Var8 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var8);
    }
LAB_100797542:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var5;
  }
  uVar2 = *(uint *)(p_Var5 + 0x20);
  uVar3 = *param_2;
  uVar9 = (uint)(uVar3 >> 0x1f) ^ (uint)uVar3 ^ *(uint *)(p_Var5 + 0x24);
  p_Var7 = p_Var5;
  p_Var10 = param_1;
  if (uVar2 != 0) {
    p_Var10 = (_func_void_Node_ptr_void_ptr *)
              (*(long *)(p_Var5 + 8) + ((ulong)uVar9 % (ulong)uVar2) * 8);
    for (p_Var6 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var5 + 8) + ((ulong)uVar9 % (ulong)uVar2) * 8);
        (p_Var7 = p_Var5, p_Var6 != p_Var5 &&
        ((*(uint *)(p_Var6 + 8) != uVar9 || (p_Var7 = p_Var6, uVar3 != *(ulong *)(p_Var6 + 0x10)))))
        ; p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var6) {
      p_Var10 = p_Var6;
    }
  }
  if (p_Var7 == p_Var5) {
    if ((int)uVar2 <= *(int *)(p_Var5 + 0x14)) {
      QHashData::rehash((int)p_Var5);
      p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar3 = *param_2;
      uVar9 = (uint)(uVar3 >> 0x1f) ^ (uint)uVar3 ^ *(uint *)(p_Var5 + 0x24);
      p_Var10 = param_1;
      if (*(uint *)(p_Var5 + 0x20) != 0) {
        uVar4 = (ulong)uVar9 % (ulong)*(uint *)(p_Var5 + 0x20);
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var5 + 8) + uVar4 * 8);
        p_Var10 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var5 + 8) + uVar4 * 8);
        while ((p_Var6 = p_Var7, p_Var6 != p_Var5 &&
               ((*(uint *)(p_Var6 + 8) != uVar9 || (uVar3 != *(ulong *)(p_Var6 + 0x10)))))) {
          p_Var10 = p_Var6;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var6;
        }
      }
    }
    local_40 = (int *)PTR_shared_null_1021e15e8;
    p_Var7 = (_func_void_Node_ptr_void_ptr *)QHashData::allocateNode((int)p_Var5);
    *(undefined8 *)p_Var7 = *(undefined8 *)p_Var10;
    *(uint *)(p_Var7 + 8) = uVar9;
    *(ulong *)(p_Var7 + 0x10) = *param_2;
    FUN_100797cb0(p_Var7 + 0x18,&local_40);
    *(_func_void_Node_ptr_void_ptr **)p_Var10 = p_Var7;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
    if (*local_40 != -1) {
      if (*local_40 != 0) {
        LOCK();
        *local_40 = *local_40 + -1;
        local_32 = *local_40 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_10079769b;
      }
      FUN_100797e40(&local_40);
    }
  }
LAB_10079769b:
  return p_Var7 + 0x18;
}

