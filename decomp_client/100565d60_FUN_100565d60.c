
code * FUN_100565d60(_func_void_Node_ptr_void_ptr *param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  Data *pDVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  QKeySequence *pQVar9;
  _func_void_Node_ptr *p_Var10;
  uint uVar11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  long lVar13;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (1 < *(uint *)(p_Var6 + 0x10)) {
    p_Var6 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var6,FUN_100568000,0x567f80,0x20);
    p_Var10 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var10 + 0x10) != -1) {
      if (*(int *)(p_Var10 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var10 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100565dd1;
        p_Var10 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var10);
    }
LAB_100565dd1:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var6;
  }
  uVar2 = *(uint *)(p_Var6 + 0x20);
  uVar11 = *(uint *)(p_Var6 + 0x24) ^ *param_2;
  p_Var8 = p_Var6;
  p_Var12 = param_1;
  if (uVar2 != 0) {
    p_Var12 = (_func_void_Node_ptr_void_ptr *)
              (*(long *)(p_Var6 + 8) + ((ulong)uVar11 % (ulong)uVar2) * 8);
    for (p_Var7 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var6 + 8) + ((ulong)uVar11 % (ulong)uVar2) * 8);
        (p_Var8 = p_Var6, p_Var7 != p_Var6 &&
        ((*(uint *)(p_Var7 + 8) != uVar11 || (p_Var8 = p_Var7, *param_2 != *(uint *)(p_Var7 + 0xc)))
        )); p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var7) {
      p_Var12 = p_Var7;
    }
  }
  if (p_Var8 != p_Var6) goto LAB_100565fda;
  if ((int)uVar2 <= *(int *)(p_Var6 + 0x14)) {
    QHashData::rehash((int)p_Var6);
    p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
    uVar11 = *(uint *)(p_Var6 + 0x24) ^ *param_2;
    p_Var12 = param_1;
    if (*(uint *)(p_Var6 + 0x20) != 0) {
      uVar4 = (ulong)uVar11 % (ulong)*(uint *)(p_Var6 + 0x20);
      p_Var8 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar4 * 8);
      p_Var12 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar4 * 8);
      while ((p_Var7 = p_Var8, p_Var7 != p_Var6 &&
             ((*(uint *)(p_Var7 + 8) != uVar11 || (*param_2 != *(uint *)(p_Var7 + 0xc)))))) {
        p_Var12 = p_Var7;
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var7;
      }
    }
  }
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100708220(&local_48,&local_50,2);
  p_Var8 = (_func_void_Node_ptr_void_ptr *)QHashData::allocateNode((int)*(undefined8 *)param_1);
  *(undefined8 *)p_Var8 = *(undefined8 *)p_Var12;
  *(uint *)(p_Var8 + 8) = uVar11;
  *(uint *)(p_Var8 + 0xc) = *param_2;
  FUN_1005607f0(p_Var8 + 0x10,&local_48);
  *(undefined4 *)(p_Var8 + 0x18) = local_40;
  *(_func_void_Node_ptr_void_ptr **)p_Var12 = p_Var8;
  *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100565f7a;
    }
    iVar3 = *(int *)(local_48 + 0xc);
    if (iVar3 != *(int *)(local_48 + 8)) {
      lVar13 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
      pQVar9 = (QKeySequence *)(local_48 + (long)iVar3 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar9);
        pQVar9 = pQVar9 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_100565f7a:
  pDVar5 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_100565fda;
      local_31 = 0;
    }
    iVar3 = *(int *)(local_50 + 0xc);
    if (iVar3 != *(int *)(local_50 + 8)) {
      lVar13 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar3 * -8;
      pQVar9 = (QKeySequence *)(local_50 + (long)iVar3 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar9);
        pQVar9 = pQVar9 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_100565fda:
  return p_Var8 + 0x10;
}

