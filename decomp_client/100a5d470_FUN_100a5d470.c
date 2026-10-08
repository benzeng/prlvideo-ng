
long * FUN_100a5d470(_func_void_Node_ptr_void_ptr *param_1,QString *param_2,long *param_3)

{
  code *pcVar1;
  uint uVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  long *plVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  
  p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var7 + 0x10) < 2) goto LAB_100a5d4ec;
  p_Var7 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var7,FUN_100a5d870,0xa5d820,0x20);
  p_Var12 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var12 + 0x10) != -1) {
    if (*(int *)(p_Var12 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var12 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100a5d4e8;
      p_Var12 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var12);
  }
LAB_100a5d4e8:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var7;
LAB_100a5d4ec:
  uVar2 = *(uint *)(p_Var7 + 0x20);
  uVar6 = qHash(param_2,*(uint *)(p_Var7 + 0x24));
  p_Var9 = p_Var7;
  p_Var13 = param_1;
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar6 % (ulong)uVar2;
    p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    p_Var11 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    if (p_Var11 != p_Var7) {
      do {
        p_Var9 = p_Var7;
        p_Var10 = p_Var11;
        if (*(uint *)(p_Var11 + 8) == uVar6) {
          cVar5 = operator==(param_2,(QString *)(p_Var11 + 0x10));
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
          p_Var9 = *(_func_void_Node_ptr_void_ptr **)param_1;
          p_Var10 = p_Var7;
          if (cVar5 != '\0') break;
        }
        p_Var7 = p_Var9;
        p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
        p_Var9 = p_Var7;
        p_Var13 = p_Var10;
      } while (p_Var11 != p_Var7);
    }
  }
  if (p_Var7 == p_Var9) {
    if (*(int *)(p_Var9 + 0x20) <= *(int *)(p_Var9 + 0x14)) {
      QHashData::rehash((int)p_Var9);
      p_Var9 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var9 + 0x20);
      uVar6 = qHash(param_2,*(uint *)(p_Var9 + 0x24));
      p_Var13 = param_1;
      if (uVar2 != 0) {
        uVar4 = (ulong)uVar6 % (ulong)uVar2;
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var9 + 8) + uVar4 * 8);
        p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var9 + 8) + uVar4 * 8);
        while (p_Var11 = p_Var7, p_Var11 != p_Var9) {
          if (*(uint *)(p_Var11 + 8) == uVar6) {
            cVar5 = operator==(param_2,(QString *)(p_Var11 + 0x10));
            if (cVar5 != '\0') {
              p_Var9 = *(_func_void_Node_ptr_void_ptr **)param_1;
              break;
            }
            p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
            p_Var9 = *(_func_void_Node_ptr_void_ptr **)param_1;
          }
          p_Var13 = p_Var11;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
        }
      }
    }
    plVar8 = (long *)QHashData::allocateNode((int)p_Var9);
    *plVar8 = *(long *)p_Var13;
    *(uint *)(plVar8 + 1) = uVar6;
    pQVar3 = param_2->field0_0x0;
    plVar8[2] = (long)pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    plVar8[3] = *param_3;
    *(long **)p_Var13 = plVar8;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  else {
    *(long *)(p_Var7 + 0x18) = *param_3;
    plVar8 = *(long **)p_Var13;
  }
  return plVar8;
}

