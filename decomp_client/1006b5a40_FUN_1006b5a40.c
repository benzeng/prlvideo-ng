
undefined8 * FUN_1006b5a40(_func_void_Node_ptr_void_ptr *param_1,ulong *param_2,undefined8 *param_3)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  int *piVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  undefined8 *puVar10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr *p_Var12;
  uint uVar13;
  _func_void_Node_ptr_void_ptr *p_Var14;
  
  p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var7 + 0x10) < 2) goto LAB_1006b5ac2;
  p_Var7 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var7,FUN_1006b5c90,0x6b5c50,0x28);
  p_Var12 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var12 + 0x10) != -1) {
    if (*(int *)(p_Var12 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var12 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1006b5abb;
      p_Var12 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var12);
  }
LAB_1006b5abb:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var7;
LAB_1006b5ac2:
  uVar2 = *(uint *)(p_Var7 + 0x20);
  uVar3 = *param_2;
  uVar13 = (uint)(uVar3 >> 0x1f) ^ (uint)uVar3 ^ *(uint *)(p_Var7 + 0x24);
  p_Var11 = p_Var7;
  p_Var14 = param_1;
  if (uVar2 != 0) {
    p_Var14 = (_func_void_Node_ptr_void_ptr *)
              (*(long *)(p_Var7 + 8) + ((ulong)uVar13 % (ulong)uVar2) * 8);
    for (p_Var9 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var7 + 8) + ((ulong)uVar13 % (ulong)uVar2) * 8);
        (p_Var11 = p_Var7, p_Var9 != p_Var7 &&
        ((*(uint *)(p_Var9 + 8) != uVar13 || (p_Var11 = p_Var9, uVar3 != *(ulong *)(p_Var9 + 0x10)))
        )); p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var9) {
      p_Var14 = p_Var9;
    }
  }
  if (p_Var11 == p_Var7) {
    if ((int)uVar2 <= *(int *)(p_Var7 + 0x14)) {
      QHashData::rehash((int)p_Var7);
      p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar3 = *param_2;
      uVar13 = (uint)(uVar3 >> 0x1f) ^ (uint)uVar3 ^ *(uint *)(p_Var7 + 0x24);
      p_Var14 = param_1;
      if (*(uint *)(p_Var7 + 0x20) != 0) {
        uVar6 = (ulong)uVar13 % (ulong)*(uint *)(p_Var7 + 0x20);
        p_Var11 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar6 * 8);
        p_Var14 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar6 * 8);
        while ((p_Var9 = p_Var11, p_Var9 != p_Var7 &&
               ((*(uint *)(p_Var9 + 8) != uVar13 || (uVar3 != *(ulong *)(p_Var9 + 0x10)))))) {
          p_Var14 = p_Var9;
          p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var9;
        }
      }
    }
    puVar10 = (undefined8 *)QHashData::allocateNode((int)p_Var7);
    *puVar10 = *(undefined8 *)p_Var14;
    *(uint *)(puVar10 + 1) = uVar13;
    puVar10[2] = *param_2;
    piVar4 = (int *)*param_3;
    uVar5 = param_3[1];
    puVar10[3] = piVar4;
    puVar10[4] = uVar5;
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    *(undefined8 **)p_Var14 = puVar10;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  else {
    piVar4 = (int *)*param_3;
    piVar8 = *(int **)(p_Var11 + 0x18);
    if (piVar8 != piVar4) {
      uVar5 = param_3[1];
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        piVar8 = *(int **)(p_Var11 + 0x18);
      }
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if ((*piVar8 == 0) && (*(void **)(p_Var11 + 0x18) != (void *)0x0)) {
          operator_delete(*(void **)(p_Var11 + 0x18));
        }
      }
      *(int **)(p_Var11 + 0x18) = piVar4;
      *(undefined8 *)(p_Var11 + 0x20) = uVar5;
    }
    puVar10 = *(undefined8 **)p_Var14;
  }
  return puVar10;
}

