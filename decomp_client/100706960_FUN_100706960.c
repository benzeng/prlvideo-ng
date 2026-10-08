
code * FUN_100706960(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  Data *pDVar5;
  char cVar6;
  uint uVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  long lVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  _func_void_Node_ptr_void_ptr *p_Var14;
  ulong uVar15;
  QKeySequence *pQVar16;
  Data *local_50;
  Data *local_48 [2];
  undefined1 local_31;
  
  p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (1 < *(uint *)(p_Var8 + 0x10)) {
    p_Var8 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var8,FUN_100707880,0x707920,0x28);
    p_Var13 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var13 + 0x10) != -1) {
      if (*(int *)(p_Var13 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var13 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007069d3;
        p_Var13 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var13);
    }
LAB_1007069d3:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var8;
  }
  uVar2 = *(uint *)(p_Var8 + 0x20);
  uVar7 = qHash(param_2,*(uint *)(p_Var8 + 0x24));
  uVar15 = (ulong)uVar7;
  p_Var14 = p_Var8;
  p_Var12 = param_1;
  if (uVar2 != 0) {
    uVar4 = uVar15 % (ulong)uVar2;
    p_Var12 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var8 + 8) + uVar4 * 8);
    p_Var10 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var8 + 8) + uVar4 * 8);
    if (p_Var10 != p_Var8) {
      do {
        p_Var11 = p_Var10;
        p_Var14 = p_Var8;
        if (*(uint *)(p_Var10 + 8) == uVar7) {
          cVar6 = operator==(param_2,(QString *)(p_Var10 + 0x10));
          p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
          p_Var8 = p_Var11;
          p_Var14 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar6 != '\0') break;
        }
        p_Var8 = p_Var14;
        p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
        p_Var14 = p_Var8;
        p_Var12 = p_Var11;
      } while (p_Var10 != p_Var8);
    }
  }
  if (p_Var8 != p_Var14) goto LAB_100706bfa;
  if (*(int *)(p_Var14 + 0x20) <= *(int *)(p_Var14 + 0x14)) {
    QHashData::rehash((int)p_Var14);
    p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
    uVar2 = *(uint *)(p_Var8 + 0x20);
    uVar7 = qHash(param_2,*(uint *)(p_Var8 + 0x24));
    uVar15 = (ulong)uVar7;
    p_Var12 = param_1;
    if (uVar2 != 0) {
      uVar4 = uVar15 % (ulong)uVar2;
      p_Var14 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var8 + 8) + uVar4 * 8);
      p_Var10 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var8 + 8) + uVar4 * 8);
      p_Var12 = p_Var14;
      if (p_Var10 != p_Var8) {
        do {
          p_Var12 = p_Var10;
          if (*(uint *)(p_Var12 + 8) == uVar7) {
            cVar6 = operator==(param_2,(QString *)(p_Var12 + 0x10));
            p_Var12 = p_Var14;
            if (cVar6 != '\0') break;
            p_Var12 = *(_func_void_Node_ptr_void_ptr **)p_Var14;
            p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
          }
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
          p_Var14 = p_Var12;
        } while (*(_func_void_Node_ptr_void_ptr **)p_Var12 != p_Var8);
      }
    }
  }
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100708220(local_48,&local_50,2);
  p_Var8 = (_func_void_Node_ptr_void_ptr *)FUN_1007077b0(param_1,uVar15,param_2,local_48,p_Var12);
  if (*(int *)local_48[0] != -1) {
    if (*(int *)local_48[0] != 0) {
      LOCK();
      *(int *)local_48[0] = *(int *)local_48[0] + -1;
      local_31 = *(int *)local_48[0] != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100706b9a;
    }
    iVar3 = *(int *)(local_48[0] + 0xc);
    if (iVar3 != *(int *)(local_48[0] + 8)) {
      lVar9 = (long)*(int *)(local_48[0] + 8) * 8 + (long)iVar3 * -8;
      pQVar16 = (QKeySequence *)(local_48[0] + (long)iVar3 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar16);
        pQVar16 = pQVar16 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_48[0]);
  }
LAB_100706b9a:
  pDVar5 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_100706bfa;
      local_31 = 0;
    }
    iVar3 = *(int *)(local_50 + 0xc);
    if (iVar3 != *(int *)(local_50 + 8)) {
      lVar9 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar3 * -8;
      pQVar16 = (QKeySequence *)(local_50 + (long)iVar3 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar16);
        pQVar16 = pQVar16 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_100706bfa:
  return p_Var8 + 0x18;
}

