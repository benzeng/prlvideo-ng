
code * FUN_1007c2930(_func_void_Node_ptr_void_ptr *param_1,ulong *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr *p_Var9;
  uint uVar10;
  
  p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var5 + 0x10) < 2) goto LAB_1007c29a2;
  p_Var5 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var5,FUN_1007c4b50,0x7c4360,0x20);
  p_Var9 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1007c299f;
      p_Var9 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var9);
  }
LAB_1007c299f:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var5;
LAB_1007c29a2:
  uVar2 = *(uint *)(p_Var5 + 0x20);
  uVar3 = *param_2;
  uVar10 = (uint)(uVar3 >> 0x1f) ^ (uint)uVar3 ^ *(uint *)(p_Var5 + 0x24);
  p_Var7 = p_Var5;
  p_Var8 = param_1;
  if (uVar2 != 0) {
    p_Var8 = (_func_void_Node_ptr_void_ptr *)
             (*(long *)(p_Var5 + 8) + ((ulong)uVar10 % (ulong)uVar2) * 8);
    for (p_Var6 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var5 + 8) + ((ulong)uVar10 % (ulong)uVar2) * 8);
        (p_Var7 = p_Var5, p_Var6 != p_Var5 &&
        ((*(uint *)(p_Var6 + 8) != uVar10 || (p_Var7 = p_Var6, uVar3 != *(ulong *)(p_Var6 + 0x10))))
        ); p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var6) {
      p_Var8 = p_Var6;
    }
  }
  if (p_Var7 == p_Var5) {
    if ((int)uVar2 <= *(int *)(p_Var5 + 0x14)) {
      QHashData::rehash((int)p_Var5);
      p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar3 = *param_2;
      uVar10 = (uint)(uVar3 >> 0x1f) ^ (uint)uVar3 ^ *(uint *)(p_Var5 + 0x24);
      p_Var8 = param_1;
      if (*(uint *)(p_Var5 + 0x20) != 0) {
        uVar4 = (ulong)uVar10 % (ulong)*(uint *)(p_Var5 + 0x20);
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var5 + 8) + uVar4 * 8);
        p_Var8 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var5 + 8) + uVar4 * 8);
        while ((p_Var6 = p_Var7, p_Var6 != p_Var5 &&
               ((*(uint *)(p_Var6 + 8) != uVar10 || (uVar3 != *(ulong *)(p_Var6 + 0x10)))))) {
          p_Var8 = p_Var6;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var6;
        }
      }
    }
    p_Var7 = (_func_void_Node_ptr_void_ptr *)QHashData::allocateNode((int)p_Var5);
    *(undefined8 *)p_Var7 = *(undefined8 *)p_Var8;
    *(uint *)(p_Var7 + 8) = uVar10;
    *(ulong *)(p_Var7 + 0x10) = *param_2;
    *(undefined8 *)(p_Var7 + 0x18) = 0;
    *(_func_void_Node_ptr_void_ptr **)p_Var8 = p_Var7;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  return p_Var7 + 0x18;
}

