
long * FUN_100478980(_func_void_Node_ptr_void_ptr *param_1,QString *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  ulong uVar6;
  char cVar7;
  uint uVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  long *plVar10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  _func_void_Node_ptr *p_Var14;
  _func_void_Node_ptr_void_ptr *p_Var15;
  
  p_Var9 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var9 + 0x10) < 2) goto LAB_1004789fc;
  p_Var9 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var9,FUN_100479d20,0x472060,0x20);
  p_Var14 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var14 + 0x10) != -1) {
    if (*(int *)(p_Var14 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var14 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1004789f8;
      p_Var14 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var14);
  }
LAB_1004789f8:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var9;
LAB_1004789fc:
  uVar3 = *(uint *)(p_Var9 + 0x20);
  uVar8 = qHash(param_2,*(uint *)(p_Var9 + 0x24));
  p_Var11 = p_Var9;
  p_Var15 = param_1;
  if (uVar3 != 0) {
    uVar6 = (ulong)uVar8 % (ulong)uVar3;
    p_Var15 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var9 + 8) + uVar6 * 8);
    p_Var13 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var9 + 8) + uVar6 * 8);
    if (p_Var13 != p_Var9) {
      do {
        p_Var11 = p_Var9;
        p_Var12 = p_Var13;
        if (*(uint *)(p_Var13 + 8) == uVar8) {
          cVar7 = operator==(param_2,(QString *)(p_Var13 + 0x10));
          p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var15;
          p_Var11 = *(_func_void_Node_ptr_void_ptr **)param_1;
          p_Var12 = p_Var9;
          if (cVar7 != '\0') break;
        }
        p_Var9 = p_Var11;
        p_Var13 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
        p_Var11 = p_Var9;
        p_Var15 = p_Var12;
      } while (p_Var13 != p_Var9);
    }
  }
  if (p_Var9 == p_Var11) {
    if (*(int *)(p_Var11 + 0x20) <= *(int *)(p_Var11 + 0x14)) {
      QHashData::rehash((int)p_Var11);
      p_Var11 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar3 = *(uint *)(p_Var11 + 0x20);
      uVar8 = qHash(param_2,*(uint *)(p_Var11 + 0x24));
      p_Var15 = param_1;
      if (uVar3 != 0) {
        uVar6 = (ulong)uVar8 % (ulong)uVar3;
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var11 + 8) + uVar6 * 8);
        p_Var15 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var11 + 8) + uVar6 * 8);
        while (p_Var13 = p_Var9, p_Var13 != p_Var11) {
          if (*(uint *)(p_Var13 + 8) == uVar8) {
            cVar7 = operator==(param_2,(QString *)(p_Var13 + 0x10));
            if (cVar7 != '\0') {
              p_Var11 = *(_func_void_Node_ptr_void_ptr **)param_1;
              break;
            }
            p_Var13 = *(_func_void_Node_ptr_void_ptr **)p_Var15;
            p_Var11 = *(_func_void_Node_ptr_void_ptr **)param_1;
          }
          p_Var15 = p_Var13;
          p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
        }
      }
    }
    plVar10 = (long *)QHashData::allocateNode((int)p_Var11);
    *plVar10 = *(long *)p_Var15;
    *(uint *)(plVar10 + 1) = uVar8;
    pQVar5 = param_2->field0_0x0;
    plVar10[2] = (long)pQVar5;
    if (1 < *(int *)pQVar5 + 1U) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      UNLOCK();
    }
    lVar4 = *param_3;
    plVar10[3] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    *(long **)p_Var15 = plVar10;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  else {
    lVar4 = *param_3;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar10 = *(long **)(p_Var9 + 0x18);
    *(long *)(p_Var9 + 0x18) = lVar4;
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar2 = plVar10 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    plVar10 = *(long **)p_Var15;
  }
  return plVar10;
}

