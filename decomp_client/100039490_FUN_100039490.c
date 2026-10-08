
long * FUN_100039490(_func_void_Node_ptr_void_ptr *param_1,QString *param_2,undefined8 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  ulong uVar6;
  char cVar7;
  uint uVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  int *piVar10;
  long *plVar11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  _func_void_Node_ptr *p_Var14;
  _func_void_Node_ptr_void_ptr *p_Var15;
  _func_void_Node_ptr_void_ptr *p_Var16;
  
  p_Var9 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var9 + 0x10) < 2) goto LAB_10003950e;
  p_Var9 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var9,FUN_100039d40,0x39bf0,0x28);
  p_Var14 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var14 + 0x10) != -1) {
    if (*(int *)(p_Var14 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var14 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10003950a;
      p_Var14 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var14);
  }
LAB_10003950a:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var9;
LAB_10003950e:
  uVar2 = *(uint *)(p_Var9 + 0x20);
  uVar8 = qHash(param_2,*(uint *)(p_Var9 + 0x24));
  p_Var15 = param_1;
  p_Var16 = p_Var9;
  if (uVar2 != 0) {
    uVar6 = (ulong)uVar8 % (ulong)uVar2;
    p_Var15 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var9 + 8) + uVar6 * 8);
    p_Var13 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var9 + 8) + uVar6 * 8);
    if (p_Var13 != p_Var9) {
      do {
        p_Var12 = p_Var13;
        p_Var16 = p_Var9;
        if (*(uint *)(p_Var13 + 8) == uVar8) {
          cVar7 = operator==(param_2,(QString *)(p_Var13 + 0x10));
          p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var15;
          p_Var12 = p_Var9;
          p_Var16 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar7 != '\0') break;
        }
        p_Var9 = p_Var16;
        p_Var13 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
        p_Var15 = p_Var12;
        p_Var16 = p_Var9;
      } while (p_Var13 != p_Var9);
    }
  }
  if (p_Var9 == p_Var16) {
    if (*(int *)(p_Var16 + 0x20) <= *(int *)(p_Var16 + 0x14)) {
      QHashData::rehash((int)p_Var16);
      p_Var16 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var16 + 0x20);
      uVar8 = qHash(param_2,*(uint *)(p_Var16 + 0x24));
      p_Var15 = param_1;
      if (uVar2 != 0) {
        uVar6 = (ulong)uVar8 % (ulong)uVar2;
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var16 + 8) + uVar6 * 8);
        p_Var15 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var16 + 8) + uVar6 * 8);
        while (p_Var13 = p_Var9, p_Var13 != p_Var16) {
          if (*(uint *)(p_Var13 + 8) == uVar8) {
            cVar7 = operator==(param_2,(QString *)(p_Var13 + 0x10));
            if (cVar7 != '\0') {
              p_Var16 = *(_func_void_Node_ptr_void_ptr **)param_1;
              break;
            }
            p_Var13 = *(_func_void_Node_ptr_void_ptr **)p_Var15;
            p_Var16 = *(_func_void_Node_ptr_void_ptr **)param_1;
          }
          p_Var15 = p_Var13;
          p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
        }
      }
    }
    plVar11 = (long *)QHashData::allocateNode((int)p_Var16);
    *plVar11 = *(long *)p_Var15;
    *(uint *)(plVar11 + 1) = uVar8;
    pQVar5 = param_2->field0_0x0;
    plVar11[2] = (long)pQVar5;
    if (1 < *(int *)pQVar5 + 1U) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      UNLOCK();
    }
    piVar3 = (int *)*param_3;
    lVar4 = param_3[1];
    plVar11[3] = (long)piVar3;
    plVar11[4] = lVar4;
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    *(long **)p_Var15 = plVar11;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  else {
    piVar3 = (int *)*param_3;
    piVar10 = *(int **)(p_Var9 + 0x18);
    if (piVar10 != piVar3) {
      lVar4 = param_3[1];
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        piVar10 = *(int **)(p_Var9 + 0x18);
      }
      if (piVar10 != (int *)0x0) {
        LOCK();
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if ((*piVar10 == 0) && (*(void **)(p_Var9 + 0x18) != (void *)0x0)) {
          operator_delete(*(void **)(p_Var9 + 0x18));
        }
      }
      *(int **)(p_Var9 + 0x18) = piVar3;
      *(long *)(p_Var9 + 0x20) = lVar4;
    }
    plVar11 = *(long **)p_Var15;
  }
  return plVar11;
}

