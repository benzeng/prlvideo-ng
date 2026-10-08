
code * FUN_10071b730(_func_void_Node_ptr_void_ptr *param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr *p_Var8;
  uint uVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  
  p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (1 < *(uint *)(p_Var5 + 0x10)) {
    p_Var5 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var5,FUN_10071b960,0x71b9a0,0x18);
    p_Var8 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var8 + 0x10) != -1) {
      if (*(int *)(p_Var8 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var8 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_10071b7a2;
        p_Var8 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var8);
    }
LAB_10071b7a2:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var5;
  }
  uVar2 = *(uint *)(p_Var5 + 0x20);
  uVar9 = *(uint *)(p_Var5 + 0x24) ^ *param_2;
  p_Var7 = p_Var5;
  p_Var10 = param_1;
  if (uVar2 != 0) {
    p_Var10 = (_func_void_Node_ptr_void_ptr *)
              (*(long *)(p_Var5 + 8) + ((ulong)uVar9 % (ulong)uVar2) * 8);
    for (p_Var6 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var5 + 8) + ((ulong)uVar9 % (ulong)uVar2) * 8);
        (p_Var7 = p_Var5, p_Var6 != p_Var5 &&
        ((*(uint *)(p_Var6 + 8) != uVar9 || (p_Var7 = p_Var6, *param_2 != *(uint *)(p_Var6 + 0xc))))
        ); p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var6) {
      p_Var10 = p_Var6;
    }
  }
  if (p_Var7 == p_Var5) {
    if ((int)uVar2 <= *(int *)(p_Var5 + 0x14)) {
      QHashData::rehash((int)p_Var5);
      p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar9 = *(uint *)(p_Var5 + 0x24) ^ *param_2;
      p_Var10 = param_1;
      if (*(uint *)(p_Var5 + 0x20) != 0) {
        uVar3 = (ulong)uVar9 % (ulong)*(uint *)(p_Var5 + 0x20);
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var5 + 8) + uVar3 * 8);
        p_Var10 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var5 + 8) + uVar3 * 8);
        while ((p_Var6 = p_Var7, p_Var6 != p_Var5 &&
               ((*(uint *)(p_Var6 + 8) != uVar9 || (*param_2 != *(uint *)(p_Var6 + 0xc)))))) {
          p_Var10 = p_Var6;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var6;
        }
      }
    }
    p_Var7 = (_func_void_Node_ptr_void_ptr *)QHashData::allocateNode((int)p_Var5);
    *(undefined8 *)p_Var7 = *(undefined8 *)p_Var10;
    *(uint *)(p_Var7 + 8) = uVar9;
    *(uint *)(p_Var7 + 0xc) = *param_2;
    puVar4 = PTR_shared_null_1021e1288;
    *(undefined **)(p_Var7 + 0x10) = PTR_shared_null_1021e1288;
    if (1 < *(int *)puVar4 + 1U) {
      LOCK();
      *(int *)puVar4 = *(int *)puVar4 + 1;
      UNLOCK();
    }
    *(_func_void_Node_ptr_void_ptr **)p_Var10 = p_Var7;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
    if (*(int *)puVar4 != -1) {
      if (*(int *)puVar4 != 0) {
        LOCK();
        *(int *)puVar4 = *(int *)puVar4 + -1;
        UNLOCK();
        if (*(int *)puVar4 != 0) goto LAB_10071b8f2;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
LAB_10071b8f2:
  return p_Var7 + 0x10;
}

