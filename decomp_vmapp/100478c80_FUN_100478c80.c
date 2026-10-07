
long * FUN_100478c80(_func_void_Node_ptr_void_ptr *param_1,QString *param_2,long *param_3)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  _func_void_Node_ptr_void_ptr *p_Var14;
  _func_void_Node_ptr *p_Var15;
  _func_void_Node_ptr_void_ptr *p_Var16;
  
  p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var8 + 0x10) < 2) goto LAB_100478cfc;
  p_Var8 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var8,FUN_100479de0,0x471d80,0x20);
  p_Var15 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var15 + 0x10) != -1) {
    if (*(int *)(p_Var15 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var15 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100478cf8;
      p_Var15 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var15);
  }
LAB_100478cf8:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var8;
LAB_100478cfc:
  uVar2 = *(uint *)(p_Var8 + 0x20);
  uVar7 = qHash(param_2,*(uint *)(p_Var8 + 0x24));
  p_Var12 = p_Var8;
  p_Var16 = param_1;
  if (uVar2 != 0) {
    uVar5 = (ulong)uVar7 % (ulong)uVar2;
    p_Var16 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var8 + 8) + uVar5 * 8);
    p_Var14 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var8 + 8) + uVar5 * 8);
    if (p_Var14 != p_Var8) {
      do {
        p_Var12 = p_Var8;
        p_Var13 = p_Var14;
        if (*(uint *)(p_Var14 + 8) == uVar7) {
          cVar6 = operator==(param_2,(QString *)(p_Var14 + 0x10));
          p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var16;
          p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
          p_Var13 = p_Var8;
          if (cVar6 != '\0') break;
        }
        p_Var8 = p_Var12;
        p_Var14 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
        p_Var12 = p_Var8;
        p_Var16 = p_Var13;
      } while (p_Var14 != p_Var8);
    }
  }
  if (p_Var8 == p_Var12) {
    if (*(int *)(p_Var12 + 0x20) <= *(int *)(p_Var12 + 0x14)) {
      QHashData::rehash((int)p_Var12);
      p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var12 + 0x20);
      uVar7 = qHash(param_2,*(uint *)(p_Var12 + 0x24));
      p_Var16 = param_1;
      if (uVar2 != 0) {
        uVar5 = (ulong)uVar7 % (ulong)uVar2;
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var12 + 8) + uVar5 * 8);
        p_Var16 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var12 + 8) + uVar5 * 8);
        while (p_Var14 = p_Var8, p_Var14 != p_Var12) {
          if (*(uint *)(p_Var14 + 8) == uVar7) {
            cVar6 = operator==(param_2,(QString *)(p_Var14 + 0x10));
            if (cVar6 != '\0') {
              p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
              break;
            }
            p_Var14 = *(_func_void_Node_ptr_void_ptr **)p_Var16;
            p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
          }
          p_Var16 = p_Var14;
          p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var14;
        }
      }
    }
    plVar9 = (long *)QHashData::allocateNode((int)p_Var12);
    *plVar9 = *(long *)p_Var16;
    *(uint *)(plVar9 + 1) = uVar7;
    pQVar4 = param_2->field0_0x0;
    plVar9[2] = (long)pQVar4;
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      UNLOCK();
    }
    piVar3 = (int *)*param_3;
    plVar9[3] = (long)piVar3;
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    *(long **)p_Var16 = plVar9;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  else {
    piVar3 = (int *)*param_3;
    piVar11 = *(int **)(p_Var8 + 0x18);
    if (piVar3 != piVar11) {
      lVar10 = 0;
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        piVar11 = *(int **)(p_Var8 + 0x18);
        lVar10 = *param_3;
      }
      *(long *)(p_Var8 + 0x18) = lVar10;
      if (piVar11 != (int *)0x0) {
        LOCK();
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          FUN_100031ed0(piVar11);
          operator_delete(piVar11);
        }
      }
    }
    plVar9 = *(long **)p_Var16;
  }
  return plVar9;
}

