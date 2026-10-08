
code * FUN_100a6e4b0(_func_void_Node_ptr_void_ptr *param_1,uint *param_2)

{
  code *pcVar1;
  ulong uVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr *p_Var7;
  uint uVar8;
  uint uVar9;
  
  p_Var3 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var3 + 0x10) < 2) goto LAB_100a6e522;
  p_Var3 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var3,FUN_100a6e720,0xa746b0,0x20);
  p_Var7 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var7 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100a6e51f;
      p_Var7 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_100a6e51f:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var3;
LAB_100a6e522:
  uVar9 = *(uint *)(p_Var3 + 0x20);
  uVar8 = *(uint *)(p_Var3 + 0x24) ^ *param_2;
  uVar8 = (uVar8 << 0x10 | uVar8 >> 0x10) ^ param_2[1];
  p_Var4 = p_Var3;
  p_Var6 = param_1;
  if (uVar9 != 0) {
    p_Var6 = (_func_void_Node_ptr_void_ptr *)
             (*(long *)(p_Var3 + 8) + ((ulong)uVar8 % (ulong)uVar9) * 8);
    for (p_Var5 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var3 + 8) + ((ulong)uVar8 % (ulong)uVar9) * 8);
        (p_Var4 = p_Var3, p_Var5 != p_Var3 &&
        (((*(uint *)(p_Var5 + 8) != uVar8 || (*param_2 != *(uint *)(p_Var5 + 0xc))) ||
         (p_Var4 = p_Var5, param_2[1] != *(uint *)(p_Var5 + 0x10)))));
        p_Var5 = *(_func_void_Node_ptr_void_ptr **)p_Var5) {
      p_Var6 = p_Var5;
    }
  }
  if (p_Var4 == p_Var3) {
    if ((int)uVar9 <= *(int *)(p_Var3 + 0x14)) {
      QHashData::rehash((int)p_Var3);
      p_Var3 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar9 = *(uint *)(p_Var3 + 0x24) ^ *param_2;
      uVar8 = (uVar9 << 0x10 | uVar9 >> 0x10) ^ param_2[1];
      p_Var6 = param_1;
      if (*(uint *)(p_Var3 + 0x20) != 0) {
        uVar2 = (ulong)uVar8 % (ulong)*(uint *)(p_Var3 + 0x20);
        p_Var4 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var3 + 8) + uVar2 * 8);
        p_Var6 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var3 + 8) + uVar2 * 8);
        while ((p_Var5 = p_Var4, p_Var5 != p_Var3 &&
               (((*(uint *)(p_Var5 + 8) != uVar8 || (*param_2 != *(uint *)(p_Var5 + 0xc))) ||
                (param_2[1] != *(uint *)(p_Var5 + 0x10)))))) {
          p_Var6 = p_Var5;
          p_Var4 = *(_func_void_Node_ptr_void_ptr **)p_Var5;
        }
      }
    }
    p_Var4 = (_func_void_Node_ptr_void_ptr *)QHashData::allocateNode((int)p_Var3);
    *(undefined8 *)p_Var4 = *(undefined8 *)p_Var6;
    *(uint *)(p_Var4 + 8) = uVar8;
    *(undefined8 *)(p_Var4 + 0xc) = *(undefined8 *)param_2;
    *(undefined8 *)(p_Var4 + 0x14) = 0;
    *(_func_void_Node_ptr_void_ptr **)p_Var6 = p_Var4;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  return p_Var4 + 0x14;
}

