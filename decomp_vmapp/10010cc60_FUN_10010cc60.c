
int FUN_10010cc60(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr *p_Var10;
  QArrayData *pQVar11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  int local_44;
  
  p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
  local_44 = *(int *)(p_Var7 + 0x14);
  if (local_44 == 0) {
    return 0;
  }
  if (1 < *(uint *)(p_Var7 + 0x10)) {
    p_Var7 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var7,FUN_10010d2b0,0x10d150,0x28);
    p_Var10 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var10 + 0x10) != -1) {
      if (*(int *)(p_Var10 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var10 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_10010cceb;
        p_Var10 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var10);
    }
LAB_10010cceb:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var7;
    local_44 = *(int *)(p_Var7 + 0x14);
  }
  uVar2 = *(uint *)(p_Var7 + 0x20);
  p_Var12 = p_Var7;
  p_Var13 = param_1;
  if (uVar2 != 0) {
    uVar6 = qHash(param_2,*(uint *)(p_Var7 + 0x24));
    uVar4 = (ulong)uVar6 % (ulong)uVar2;
    p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    p_Var8 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    if (p_Var8 != p_Var7) {
      do {
        p_Var9 = p_Var8;
        p_Var12 = p_Var7;
        if (*(uint *)(p_Var8 + 8) == uVar6) {
          cVar5 = operator==(param_2,(QString *)(p_Var8 + 0x10));
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
          p_Var9 = p_Var7;
          p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar5 != '\0') break;
        }
        p_Var7 = p_Var12;
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var9;
        p_Var12 = p_Var7;
        p_Var13 = p_Var9;
      } while (p_Var8 != p_Var7);
    }
  }
  if (p_Var7 == p_Var12) goto LAB_10010ced6;
  while (p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var7, p_Var8 != p_Var12) {
    cVar5 = operator==((QString *)(p_Var8 + 0x10),(QString *)(p_Var7 + 0x10));
    lVar3 = *(long *)p_Var13;
    pQVar11 = *(QArrayData **)(lVar3 + 0x18);
    if (*(int *)pQVar11 != -1) {
      if (*(int *)pQVar11 != 0) {
        LOCK();
        *(int *)pQVar11 = *(int *)pQVar11 + -1;
        UNLOCK();
        if (*(int *)pQVar11 != 0) goto LAB_10010cdd9;
        pQVar11 = *(QArrayData **)(lVar3 + 0x18);
      }
      QArrayData::deallocate(pQVar11,2,8);
    }
LAB_10010cdd9:
    pQVar11 = *(QArrayData **)(lVar3 + 0x10);
    if (*(int *)pQVar11 != -1) {
      if (*(int *)pQVar11 != 0) {
        LOCK();
        *(int *)pQVar11 = *(int *)pQVar11 + -1;
        UNLOCK();
        if (*(int *)pQVar11 != 0) goto LAB_10010ce0d;
        pQVar11 = *(QArrayData **)(lVar3 + 0x10);
      }
      QArrayData::deallocate(pQVar11,2,8);
    }
LAB_10010ce0d:
    QHashData::freeNode(*(void **)param_1);
    *(_func_void_Node_ptr_void_ptr **)p_Var13 = p_Var8;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + -1;
    if (cVar5 == '\0') goto LAB_10010ceaa;
    p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
    p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
  }
  pQVar11 = *(QArrayData **)(p_Var7 + 0x18);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      UNLOCK();
      if (*(int *)pQVar11 != 0) goto LAB_10010ce5e;
      pQVar11 = *(QArrayData **)(p_Var7 + 0x18);
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10010ce5e:
  pQVar11 = *(QArrayData **)(p_Var7 + 0x10);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      UNLOCK();
      if (*(int *)pQVar11 != 0) goto LAB_10010ce8e;
      pQVar11 = *(QArrayData **)(p_Var7 + 0x10);
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10010ce8e:
  QHashData::freeNode(*(void **)param_1);
  *(_func_void_Node_ptr_void_ptr **)p_Var13 = p_Var12;
  *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + -1;
LAB_10010ceaa:
  lVar3 = *(long *)param_1;
  if ((*(int *)(lVar3 + 0x14) <= *(int *)(lVar3 + 0x20) >> 3) &&
     (*(short *)(lVar3 + 0x1c) < *(short *)(lVar3 + 0x1e))) {
    QHashData::rehash((int)lVar3);
  }
LAB_10010ced6:
  return local_44 - *(int *)(*(long *)param_1 + 0x14);
}

