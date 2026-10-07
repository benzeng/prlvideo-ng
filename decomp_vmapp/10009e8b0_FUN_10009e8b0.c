
int FUN_10009e8b0(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  char cVar8;
  uint uVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  QArrayData *pQVar14;
  _func_void_Node_ptr_void_ptr *p_Var15;
  _func_void_Node_ptr_void_ptr *p_Var16;
  int local_44;
  
  p_Var10 = *(_func_void_Node_ptr_void_ptr **)param_1;
  local_44 = *(int *)(p_Var10 + 0x14);
  if (local_44 == 0) {
    return 0;
  }
  if (1 < *(uint *)(p_Var10 + 0x10)) {
    p_Var10 = (_func_void_Node_ptr_void_ptr *)
              QHashData::detach_helper(p_Var10,FUN_10009ef30,0x9eda0,0x20);
    p_Var13 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var13 + 0x10) != -1) {
      if (*(int *)(p_Var13 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var13 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_10009e93b;
        p_Var13 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var13);
    }
LAB_10009e93b:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var10;
    local_44 = *(int *)(p_Var10 + 0x14);
  }
  uVar3 = *(uint *)(p_Var10 + 0x20);
  p_Var15 = p_Var10;
  p_Var16 = param_1;
  if (uVar3 != 0) {
    uVar9 = qHash(param_2,*(uint *)(p_Var10 + 0x24));
    uVar6 = (ulong)uVar9 % (ulong)uVar3;
    p_Var16 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var10 + 8) + uVar6 * 8);
    p_Var11 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var10 + 8) + uVar6 * 8);
    if (p_Var11 != p_Var10) {
      do {
        p_Var12 = p_Var11;
        p_Var15 = p_Var10;
        if (*(uint *)(p_Var11 + 8) == uVar9) {
          cVar8 = operator==(param_2,(QString *)(p_Var11 + 0x10));
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var16;
          p_Var12 = p_Var10;
          p_Var15 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar8 != '\0') break;
        }
        p_Var10 = p_Var15;
        p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
        p_Var15 = p_Var10;
        p_Var16 = p_Var12;
      } while (p_Var11 != p_Var10);
    }
  }
  if (p_Var10 == p_Var15) goto LAB_10009eb08;
  while (p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var10, p_Var11 != p_Var15) {
    cVar8 = operator==((QString *)(p_Var11 + 0x10),(QString *)(p_Var10 + 0x10));
    lVar4 = *(long *)p_Var16;
    plVar5 = *(long **)(lVar4 + 0x18);
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    pQVar14 = *(QArrayData **)(lVar4 + 0x10);
    if (*(int *)pQVar14 != -1) {
      if (*(int *)pQVar14 != 0) {
        LOCK();
        *(int *)pQVar14 = *(int *)pQVar14 + -1;
        UNLOCK();
        if (*(int *)pQVar14 != 0) goto LAB_10009ea4e;
        pQVar14 = *(QArrayData **)(lVar4 + 0x10);
      }
      QArrayData::deallocate(pQVar14,2,8);
    }
LAB_10009ea4e:
    QHashData::freeNode(*(void **)param_1);
    *(_func_void_Node_ptr_void_ptr **)p_Var16 = p_Var11;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + -1;
    if (cVar8 == '\0') goto LAB_10009eadc;
    p_Var15 = *(_func_void_Node_ptr_void_ptr **)param_1;
    p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var16;
  }
  plVar5 = *(long **)(p_Var10 + 0x18);
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
  pQVar14 = *(QArrayData **)(p_Var10 + 0x10);
  if (*(int *)pQVar14 != -1) {
    if (*(int *)pQVar14 != 0) {
      LOCK();
      *(int *)pQVar14 = *(int *)pQVar14 + -1;
      UNLOCK();
      if (*(int *)pQVar14 != 0) goto LAB_10009eac0;
      pQVar14 = *(QArrayData **)(p_Var10 + 0x10);
    }
    QArrayData::deallocate(pQVar14,2,8);
  }
LAB_10009eac0:
  QHashData::freeNode(*(void **)param_1);
  *(_func_void_Node_ptr_void_ptr **)p_Var16 = p_Var15;
  *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + -1;
LAB_10009eadc:
  lVar4 = *(long *)param_1;
  if ((*(int *)(lVar4 + 0x14) <= *(int *)(lVar4 + 0x20) >> 3) &&
     (*(short *)(lVar4 + 0x1c) < *(short *)(lVar4 + 0x1e))) {
    QHashData::rehash((int)lVar4);
  }
LAB_10009eb08:
  return local_44 - *(int *)(*(long *)param_1 + 0x14);
}

