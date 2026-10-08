
code * FUN_1006a9e50(_func_void_Node_ptr_void_ptr *param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr *p_Var7;
  uint uVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr *local_40;
  undefined1 local_33;
  undefined1 local_32;
  
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (1 < *(uint *)(p_Var4 + 0x10)) {
    p_Var4 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var4,FUN_1006aa6b0,0x6aa3e0,0x18);
    p_Var7 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var7 + 0x10) != -1) {
      if (*(int *)(p_Var7 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var7 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_33 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_33) goto LAB_1006a9ec2;
        p_Var7 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var7);
    }
LAB_1006a9ec2:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var4;
  }
  uVar2 = *(uint *)(p_Var4 + 0x20);
  uVar8 = *(uint *)(p_Var4 + 0x24) ^ *param_2;
  p_Var6 = p_Var4;
  p_Var9 = param_1;
  if (uVar2 != 0) {
    p_Var9 = (_func_void_Node_ptr_void_ptr *)
             (*(long *)(p_Var4 + 8) + ((ulong)uVar8 % (ulong)uVar2) * 8);
    for (p_Var5 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var4 + 8) + ((ulong)uVar8 % (ulong)uVar2) * 8);
        (p_Var6 = p_Var4, p_Var5 != p_Var4 &&
        ((*(uint *)(p_Var5 + 8) != uVar8 || (p_Var6 = p_Var5, *param_2 != *(uint *)(p_Var5 + 0xc))))
        ); p_Var5 = *(_func_void_Node_ptr_void_ptr **)p_Var5) {
      p_Var9 = p_Var5;
    }
  }
  if (p_Var6 == p_Var4) {
    if ((int)uVar2 <= *(int *)(p_Var4 + 0x14)) {
      QHashData::rehash((int)p_Var4);
      p_Var4 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar8 = *(uint *)(p_Var4 + 0x24) ^ *param_2;
      p_Var9 = param_1;
      if (*(uint *)(p_Var4 + 0x20) != 0) {
        uVar3 = (ulong)uVar8 % (ulong)*(uint *)(p_Var4 + 0x20);
        p_Var6 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var4 + 8) + uVar3 * 8);
        p_Var9 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var4 + 8) + uVar3 * 8);
        while ((p_Var5 = p_Var6, p_Var5 != p_Var4 &&
               ((*(uint *)(p_Var5 + 8) != uVar8 || (*param_2 != *(uint *)(p_Var5 + 0xc)))))) {
          p_Var9 = p_Var5;
          p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var5;
        }
      }
    }
    local_40 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    p_Var6 = (_func_void_Node_ptr_void_ptr *)QHashData::allocateNode((int)p_Var4);
    *(undefined8 *)p_Var6 = *(undefined8 *)p_Var9;
    *(uint *)(p_Var6 + 8) = uVar8;
    *(uint *)(p_Var6 + 0xc) = *param_2;
    FUN_1006aa450(p_Var6 + 0x10,&local_40);
    *(_func_void_Node_ptr_void_ptr **)p_Var9 = p_Var6;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
    if (*(int *)(local_40 + 0x10) != -1) {
      if (*(int *)(local_40 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_40 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_32 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_1006aa00d;
      }
      QHashData::free_helper(local_40);
    }
  }
LAB_1006aa00d:
  return p_Var6 + 0x10;
}

