
undefined8 FUN_10068f230(_func_void_Node_ptr_void_ptr *param_1,ulong *param_2,long *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  int *piVar13;
  _func_void_Node_ptr_void_ptr *p_Var14;
  _func_void_Node_ptr *p_Var15;
  _func_void_Node_ptr_void_ptr *p_Var16;
  int *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var8 + 0x10) < 2) goto LAB_10068f2b2;
  p_Var8 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var8,FUN_1006900c0,0x68fd00,0x20);
  p_Var15 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var15 + 0x10) != -1) {
    if (*(int *)(p_Var15 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var15 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10068f2ab;
      p_Var15 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var15);
  }
LAB_10068f2ab:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var8;
LAB_10068f2b2:
  uVar2 = *(uint *)(p_Var8 + 0x20);
  uVar4 = *param_2;
  uVar11 = (uint)(uVar4 >> 0x1f) ^ (uint)uVar4 ^ *(uint *)(p_Var8 + 0x24);
  p_Var14 = p_Var8;
  p_Var16 = param_1;
  if (uVar2 != 0) {
    p_Var16 = (_func_void_Node_ptr_void_ptr *)
              (*(long *)(p_Var8 + 8) + ((ulong)uVar11 % (ulong)uVar2) * 8);
    for (p_Var7 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var8 + 8) + ((ulong)uVar11 % (ulong)uVar2) * 8);
        (p_Var14 = p_Var8, p_Var7 != p_Var8 &&
        ((*(uint *)(p_Var7 + 8) != uVar11 || (p_Var14 = p_Var7, uVar4 != *(ulong *)(p_Var7 + 0x10)))
        )); p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var7) {
      p_Var16 = p_Var7;
    }
  }
  if (p_Var14 == p_Var8) {
    if ((int)uVar2 <= *(int *)(p_Var8 + 0x14)) {
      QHashData::rehash((int)p_Var8);
      p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar4 = *param_2;
      uVar11 = (uint)(uVar4 >> 0x1f) ^ (uint)uVar4 ^ *(uint *)(p_Var8 + 0x24);
      p_Var16 = param_1;
      if (*(uint *)(p_Var8 + 0x20) != 0) {
        uVar6 = (ulong)uVar11 % (ulong)*(uint *)(p_Var8 + 0x20);
        p_Var16 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var8 + 8) + uVar6 * 8);
        for (p_Var14 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var8 + 8) + uVar6 * 8);
            (p_Var14 != p_Var8 &&
            ((*(uint *)(p_Var14 + 8) != uVar11 || (uVar4 != *(ulong *)(p_Var14 + 0x10)))));
            p_Var14 = *(_func_void_Node_ptr_void_ptr **)p_Var14) {
          p_Var16 = p_Var14;
        }
      }
    }
    uVar10 = FUN_10068ffd0(param_1,uVar11,param_2,param_3,p_Var16);
  }
  else {
    local_40 = (int *)*param_3;
    if (*(int **)(p_Var14 + 0x18) != local_40) {
      if (*local_40 != -1) {
        if (*local_40 == 0) {
          QListData::detach((int)&local_40);
          iVar3 = local_40[2];
          if (iVar3 != local_40[3]) {
            puVar12 = (undefined8 *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 8) * 8);
            piVar13 = local_40 + (long)iVar3 * 2 + 4;
            lVar9 = (long)local_40[3] * 8 + (long)iVar3 * -8;
            do {
              piVar5 = (int *)*puVar12;
              *(int **)piVar13 = piVar5;
              if (1 < *piVar5 + 1U) {
                LOCK();
                *piVar5 = *piVar5 + 1;
                local_31 = *piVar5 != 0;
                UNLOCK();
              }
              piVar13 = piVar13 + 2;
              puVar12 = puVar12 + 1;
              lVar9 = lVar9 + -8;
            } while (lVar9 != 0);
          }
        }
        else {
          LOCK();
          *local_40 = *local_40 + 1;
          local_32 = *local_40 != 0;
          UNLOCK();
        }
      }
      piVar13 = *(int **)(p_Var14 + 0x18);
      *(int **)(p_Var14 + 0x18) = local_40;
      local_40 = piVar13;
      FUN_100039a80(&local_40);
    }
    uVar10 = *(undefined8 *)p_Var16;
  }
  return uVar10;
}

