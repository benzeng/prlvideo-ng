
undefined8 * FUN_1002e5270(_func_void_Node_ptr_void_ptr *param_1,uint *param_2,undefined8 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  int *piVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  undefined8 *puVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr *p_Var11;
  uint uVar12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  
  p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var6 + 0x10) < 2) goto LAB_1002e52f2;
  p_Var6 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var6,FUN_1002e9240,0x2e9200,0x20);
  p_Var11 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var11 + 0x10) != -1) {
    if (*(int *)(p_Var11 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var11 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1002e52eb;
      p_Var11 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var11);
  }
LAB_1002e52eb:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var6;
LAB_1002e52f2:
  uVar2 = *(uint *)(p_Var6 + 0x20);
  uVar12 = *(uint *)(p_Var6 + 0x24) ^ *param_2;
  p_Var10 = p_Var6;
  p_Var13 = param_1;
  if (uVar2 != 0) {
    p_Var13 = (_func_void_Node_ptr_void_ptr *)
              (*(long *)(p_Var6 + 8) + ((ulong)uVar12 % (ulong)uVar2) * 8);
    for (p_Var8 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var6 + 8) + ((ulong)uVar12 % (ulong)uVar2) * 8);
        (p_Var10 = p_Var6, p_Var8 != p_Var6 &&
        ((*(uint *)(p_Var8 + 8) != uVar12 || (p_Var10 = p_Var8, *param_2 != *(uint *)(p_Var8 + 0xc))
         ))); p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var8) {
      p_Var13 = p_Var8;
    }
  }
  if (p_Var10 == p_Var6) {
    if ((int)uVar2 <= *(int *)(p_Var6 + 0x14)) {
      QHashData::rehash((int)p_Var6);
      p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar12 = *(uint *)(p_Var6 + 0x24) ^ *param_2;
      p_Var13 = param_1;
      if (*(uint *)(p_Var6 + 0x20) != 0) {
        uVar5 = (ulong)uVar12 % (ulong)*(uint *)(p_Var6 + 0x20);
        p_Var10 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar5 * 8);
        p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar5 * 8);
        while ((p_Var8 = p_Var10, p_Var8 != p_Var6 &&
               ((*(uint *)(p_Var8 + 8) != uVar12 || (*param_2 != *(uint *)(p_Var8 + 0xc)))))) {
          p_Var13 = p_Var8;
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
        }
      }
    }
    puVar9 = (undefined8 *)QHashData::allocateNode((int)p_Var6);
    *puVar9 = *(undefined8 *)p_Var13;
    *(uint *)(puVar9 + 1) = uVar12;
    *(uint *)((long)puVar9 + 0xc) = *param_2;
    piVar3 = (int *)*param_3;
    uVar4 = param_3[1];
    puVar9[2] = piVar3;
    puVar9[3] = uVar4;
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    *(undefined8 **)p_Var13 = puVar9;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  else {
    piVar3 = (int *)*param_3;
    piVar7 = *(int **)(p_Var10 + 0x10);
    if (piVar7 != piVar3) {
      uVar4 = param_3[1];
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        piVar7 = *(int **)(p_Var10 + 0x10);
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if ((*piVar7 == 0) && (*(void **)(p_Var10 + 0x10) != (void *)0x0)) {
          operator_delete(*(void **)(p_Var10 + 0x10));
        }
      }
      *(int **)(p_Var10 + 0x10) = piVar3;
      *(undefined8 *)(p_Var10 + 0x18) = uVar4;
    }
    puVar9 = *(undefined8 **)p_Var13;
  }
  return puVar9;
}

