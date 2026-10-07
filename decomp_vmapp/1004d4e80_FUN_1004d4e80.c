
undefined8 * FUN_1004d4e80(_func_void_Node_ptr_void_ptr *param_1,uint *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  undefined8 *puVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr *p_Var11;
  uint uVar12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  
  p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var7 + 0x10) < 2) goto LAB_1004d4f01;
  p_Var7 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var7,FUN_1004d7090,0x4d6b40,0x18);
  p_Var11 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var11 + 0x10) != -1) {
    if (*(int *)(p_Var11 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var11 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1004d4efa;
      p_Var11 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var11);
  }
LAB_1004d4efa:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var7;
LAB_1004d4f01:
  uVar3 = *(uint *)(p_Var7 + 0x20);
  uVar12 = *(uint *)(p_Var7 + 0x24) ^ *param_2;
  p_Var10 = p_Var7;
  p_Var13 = param_1;
  if (uVar3 != 0) {
    p_Var13 = (_func_void_Node_ptr_void_ptr *)
              (*(long *)(p_Var7 + 8) + ((ulong)uVar12 % (ulong)uVar3) * 8);
    for (p_Var8 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var7 + 8) + ((ulong)uVar12 % (ulong)uVar3) * 8);
        (p_Var10 = p_Var7, p_Var8 != p_Var7 &&
        ((*(uint *)(p_Var8 + 8) != uVar12 || (p_Var10 = p_Var8, *param_2 != *(uint *)(p_Var8 + 0xc))
         ))); p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var8) {
      p_Var13 = p_Var8;
    }
  }
  if (p_Var10 == p_Var7) {
    if ((int)uVar3 <= *(int *)(p_Var7 + 0x14)) {
      QHashData::rehash((int)p_Var7);
      p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar12 = *(uint *)(p_Var7 + 0x24) ^ *param_2;
      p_Var13 = param_1;
      if (*(uint *)(p_Var7 + 0x20) != 0) {
        uVar6 = (ulong)uVar12 % (ulong)*(uint *)(p_Var7 + 0x20);
        p_Var10 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar6 * 8);
        p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar6 * 8);
        while ((p_Var8 = p_Var10, p_Var8 != p_Var7 &&
               ((*(uint *)(p_Var8 + 8) != uVar12 || (*param_2 != *(uint *)(p_Var8 + 0xc)))))) {
          p_Var13 = p_Var8;
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
        }
      }
    }
    puVar9 = (undefined8 *)QHashData::allocateNode((int)p_Var7);
    *puVar9 = *(undefined8 *)p_Var13;
    *(uint *)(puVar9 + 1) = uVar12;
    *(uint *)((long)puVar9 + 0xc) = *param_2;
    lVar4 = *param_3;
    puVar9[2] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 **)p_Var13 = puVar9;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  else {
    lVar4 = *param_3;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(long **)(p_Var10 + 0x10);
    *(long *)(p_Var10 + 0x10) = lVar4;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    puVar9 = *(undefined8 **)p_Var13;
  }
  return puVar9;
}

