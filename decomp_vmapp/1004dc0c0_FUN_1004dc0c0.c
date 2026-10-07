
void FUN_1004dc0c0(_func_void_Node_ptr_void_ptr *param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  undefined8 *puVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr *p_Var9;
  uint uVar10;
  
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_1004dc132;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_1004dc230,0x4dc060,0x10);
  p_Var9 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1004dc12f;
      p_Var9 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var9);
  }
LAB_1004dc12f:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var4;
LAB_1004dc132:
  uVar2 = *(uint *)(p_Var4 + 0x20);
  uVar10 = *(uint *)(p_Var4 + 0x24) ^ *param_2;
  p_Var5 = p_Var4;
  p_Var8 = param_1;
  if (uVar2 != 0) {
    p_Var8 = (_func_void_Node_ptr_void_ptr *)
             (*(long *)(p_Var4 + 8) + ((ulong)uVar10 % (ulong)uVar2) * 8);
    for (p_Var6 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var4 + 8) + ((ulong)uVar10 % (ulong)uVar2) * 8);
        (p_Var5 = p_Var4, p_Var6 != p_Var4 &&
        ((*(uint *)(p_Var6 + 8) != uVar10 || (p_Var5 = p_Var6, *param_2 != *(uint *)(p_Var6 + 0xc)))
        )); p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var6) {
      p_Var8 = p_Var6;
    }
  }
  if (p_Var5 == p_Var4) {
    if ((int)uVar2 <= *(int *)(p_Var4 + 0x14)) {
      QHashData::rehash((int)p_Var4);
      p_Var4 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar10 = *(uint *)(p_Var4 + 0x24) ^ *param_2;
      p_Var8 = param_1;
      if (*(uint *)(p_Var4 + 0x20) != 0) {
        uVar3 = (ulong)uVar10 % (ulong)*(uint *)(p_Var4 + 0x20);
        p_Var5 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var4 + 8) + uVar3 * 8);
        p_Var8 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var4 + 8) + uVar3 * 8);
        while ((p_Var6 = p_Var5, p_Var6 != p_Var4 &&
               ((*(uint *)(p_Var6 + 8) != uVar10 || (*param_2 != *(uint *)(p_Var6 + 0xc)))))) {
          p_Var8 = p_Var6;
          p_Var5 = *(_func_void_Node_ptr_void_ptr **)p_Var6;
        }
      }
    }
    puVar7 = (undefined8 *)QHashData::allocateNode((int)p_Var4);
    *puVar7 = *(undefined8 *)p_Var8;
    *(uint *)(puVar7 + 1) = uVar10;
    *(uint *)((long)puVar7 + 0xc) = *param_2;
    *(undefined8 **)p_Var8 = puVar7;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  return;
}

