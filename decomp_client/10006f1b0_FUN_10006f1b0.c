
void FUN_10006f1b0(_func_void_Node_ptr_void_ptr *param_1,uint *param_2)

{
  code *pcVar1;
  ulong uVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  undefined8 *puVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr *p_Var8;
  uint uVar9;
  uint uVar10;
  
  p_Var3 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var3 + 0x10) < 2) goto LAB_10006f222;
  p_Var3 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var3,FUN_10006f350,0x6f1a0,0x18);
  p_Var8 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10006f21f;
      p_Var8 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var8);
  }
LAB_10006f21f:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var3;
LAB_10006f222:
  uVar10 = *(uint *)(p_Var3 + 0x20);
  uVar9 = *(uint *)(p_Var3 + 0x24) ^ *param_2;
  uVar9 = (uVar9 << 0x10 | uVar9 >> 0x10) ^ param_2[1];
  p_Var4 = p_Var3;
  p_Var7 = param_1;
  if (uVar10 != 0) {
    p_Var7 = (_func_void_Node_ptr_void_ptr *)
             (*(long *)(p_Var3 + 8) + ((ulong)uVar9 % (ulong)uVar10) * 8);
    for (p_Var6 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var3 + 8) + ((ulong)uVar9 % (ulong)uVar10) * 8);
        (p_Var4 = p_Var3, p_Var6 != p_Var3 &&
        (((*(uint *)(p_Var6 + 8) != uVar9 || (*param_2 != *(uint *)(p_Var6 + 0xc))) ||
         (p_Var4 = p_Var6, param_2[1] != *(uint *)(p_Var6 + 0x10)))));
        p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var6) {
      p_Var7 = p_Var6;
    }
  }
  if (p_Var4 == p_Var3) {
    if ((int)uVar10 <= *(int *)(p_Var3 + 0x14)) {
      QHashData::rehash((int)p_Var3);
      p_Var3 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar10 = *(uint *)(p_Var3 + 0x24) ^ *param_2;
      uVar9 = (uVar10 << 0x10 | uVar10 >> 0x10) ^ param_2[1];
      p_Var7 = param_1;
      if (*(uint *)(p_Var3 + 0x20) != 0) {
        uVar2 = (ulong)uVar9 % (ulong)*(uint *)(p_Var3 + 0x20);
        p_Var4 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var3 + 8) + uVar2 * 8);
        p_Var7 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var3 + 8) + uVar2 * 8);
        while ((p_Var6 = p_Var4, p_Var6 != p_Var3 &&
               (((*(uint *)(p_Var6 + 8) != uVar9 || (*param_2 != *(uint *)(p_Var6 + 0xc))) ||
                (param_2[1] != *(uint *)(p_Var6 + 0x10)))))) {
          p_Var7 = p_Var6;
          p_Var4 = *(_func_void_Node_ptr_void_ptr **)p_Var6;
        }
      }
    }
    puVar5 = (undefined8 *)QHashData::allocateNode((int)p_Var3);
    *puVar5 = *(undefined8 *)p_Var7;
    *(uint *)(puVar5 + 1) = uVar9;
    *(undefined8 *)((long)puVar5 + 0xc) = *(undefined8 *)param_2;
    *(undefined8 **)p_Var7 = puVar5;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  return;
}

