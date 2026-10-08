
void FUN_100a40280(_func_void_Node_ptr_void_ptr *param_1,ulong *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  undefined8 *puVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr *p_Var10;
  uint uVar11;
  
  p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var5 + 0x10) < 2) goto LAB_100a402f2;
  p_Var5 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var5,FUN_100a40260,0xa3f580,0x18);
  p_Var10 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var10 + 0x10) != -1) {
    if (*(int *)(p_Var10 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var10 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100a402ef;
      p_Var10 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var10);
  }
LAB_100a402ef:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var5;
LAB_100a402f2:
  uVar2 = *(uint *)(p_Var5 + 0x20);
  uVar3 = *param_2;
  uVar11 = (uint)(uVar3 >> 0x1f) ^ (uint)uVar3 ^ *(uint *)(p_Var5 + 0x24);
  p_Var6 = p_Var5;
  p_Var9 = param_1;
  if (uVar2 != 0) {
    p_Var9 = (_func_void_Node_ptr_void_ptr *)
             (*(long *)(p_Var5 + 8) + ((ulong)uVar11 % (ulong)uVar2) * 8);
    for (p_Var7 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var5 + 8) + ((ulong)uVar11 % (ulong)uVar2) * 8);
        (p_Var6 = p_Var5, p_Var7 != p_Var5 &&
        ((*(uint *)(p_Var7 + 8) != uVar11 || (p_Var6 = p_Var7, uVar3 != *(ulong *)(p_Var7 + 0x10))))
        ); p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var7) {
      p_Var9 = p_Var7;
    }
  }
  if (p_Var6 == p_Var5) {
    if ((int)uVar2 <= *(int *)(p_Var5 + 0x14)) {
      QHashData::rehash((int)p_Var5);
      p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar3 = *param_2;
      uVar11 = (uint)(uVar3 >> 0x1f) ^ (uint)uVar3 ^ *(uint *)(p_Var5 + 0x24);
      p_Var9 = param_1;
      if (*(uint *)(p_Var5 + 0x20) != 0) {
        uVar4 = (ulong)uVar11 % (ulong)*(uint *)(p_Var5 + 0x20);
        p_Var6 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var5 + 8) + uVar4 * 8);
        p_Var9 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var5 + 8) + uVar4 * 8);
        while ((p_Var7 = p_Var6, p_Var7 != p_Var5 &&
               ((*(uint *)(p_Var7 + 8) != uVar11 || (uVar3 != *(ulong *)(p_Var7 + 0x10)))))) {
          p_Var9 = p_Var7;
          p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var7;
        }
      }
    }
    puVar8 = (undefined8 *)QHashData::allocateNode((int)p_Var5);
    *puVar8 = *(undefined8 *)p_Var9;
    *(uint *)(puVar8 + 1) = uVar11;
    puVar8[2] = *param_2;
    *(undefined8 **)p_Var9 = puVar8;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  return;
}

