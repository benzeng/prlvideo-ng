
code * FUN_1002ee4c0(_func_void_Node_ptr_void_ptr *param_1,ushort *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr *p_Var8;
  uint uVar9;
  
  p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var5 + 0x10) < 2) goto LAB_1002ee535;
  p_Var5 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var5,FUN_1002eebb0,0x2eeba0,0x28);
  p_Var8 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1002ee532;
      p_Var8 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var8);
  }
LAB_1002ee532:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var5;
LAB_1002ee535:
  uVar2 = *(uint *)(p_Var5 + 0x20);
  uVar9 = *(uint *)(p_Var5 + 0x24) ^ (uint)*param_2;
  p_Var6 = p_Var5;
  p_Var7 = param_1;
  if (uVar2 != 0) {
    p_Var7 = (_func_void_Node_ptr_void_ptr *)
             (*(long *)(p_Var5 + 8) + ((ulong)uVar9 % (ulong)uVar2) * 8);
    for (p_Var4 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var5 + 8) + ((ulong)uVar9 % (ulong)uVar2) * 8);
        (p_Var6 = p_Var5, p_Var4 != p_Var5 &&
        ((*(uint *)(p_Var4 + 8) != uVar9 || (p_Var6 = p_Var4, *param_2 != *(ushort *)(p_Var4 + 0xc))
         ))); p_Var4 = *(_func_void_Node_ptr_void_ptr **)p_Var4) {
      p_Var7 = p_Var4;
    }
  }
  if (p_Var6 == p_Var5) {
    if ((int)uVar2 <= *(int *)(p_Var5 + 0x14)) {
      QHashData::rehash((int)p_Var5);
      p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar9 = *(uint *)(p_Var5 + 0x24) ^ (uint)*param_2;
      p_Var7 = param_1;
      if (*(uint *)(p_Var5 + 0x20) != 0) {
        uVar3 = (ulong)uVar9 % (ulong)*(uint *)(p_Var5 + 0x20);
        p_Var7 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var5 + 8) + uVar3 * 8);
        for (p_Var6 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var5 + 8) + uVar3 * 8);
            (p_Var6 != p_Var5 &&
            ((*(uint *)(p_Var6 + 8) != uVar9 || (*param_2 != *(ushort *)(p_Var6 + 0xc)))));
            p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var6) {
          p_Var7 = p_Var6;
        }
      }
    }
    p_Var6 = (_func_void_Node_ptr_void_ptr *)QHashData::allocateNode((int)p_Var5);
    *(undefined8 *)p_Var6 = *(undefined8 *)p_Var7;
    *(uint *)(p_Var6 + 8) = uVar9;
    *(ushort *)(p_Var6 + 0xc) = *param_2;
    *(undefined8 *)(p_Var6 + 0x20) = 0;
    *(undefined8 *)(p_Var6 + 0x18) = 0;
    *(undefined8 *)(p_Var6 + 0x10) = 0;
    *(_func_void_Node_ptr_void_ptr **)p_Var7 = p_Var6;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  return p_Var6 + 0x10;
}

