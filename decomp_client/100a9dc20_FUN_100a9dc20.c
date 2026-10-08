
long * FUN_100a9dc20(long *param_1,_func_void_Node_ptr_void_ptr *param_2,QString *param_3)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  _func_void_Node_ptr_void_ptr *p_Var14;
  _func_void_Node_ptr_void_ptr *p_Var15;
  _func_void_Node_ptr *p_Var16;
  QArrayData *pQVar17;
  _func_void_Node_ptr_void_ptr *p_Var18;
  
  p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_2;
  if (*(int *)(p_Var12 + 0x14) == 0) goto LAB_100a9de1a;
  if (1 < *(uint *)(p_Var12 + 0x10)) {
    p_Var12 = (_func_void_Node_ptr_void_ptr *)
              QHashData::detach_helper(p_Var12,FUN_100a9fa80,0xa9e990,0x20);
    p_Var16 = *(_func_void_Node_ptr **)param_2;
    if (*(int *)(p_Var16 + 0x10) != -1) {
      if (*(int *)(p_Var16 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var16 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_100a9dc9e;
        p_Var16 = *(_func_void_Node_ptr **)param_2;
      }
      QHashData::free_helper(p_Var16);
    }
LAB_100a9dc9e:
    *(_func_void_Node_ptr_void_ptr **)param_2 = p_Var12;
  }
  uVar3 = *(uint *)(p_Var12 + 0x20);
  p_Var13 = p_Var12;
  p_Var18 = param_2;
  if (uVar3 != 0) {
    uVar10 = qHash(param_3,*(uint *)(p_Var12 + 0x24));
    uVar8 = (ulong)uVar10 % (ulong)uVar3;
    p_Var18 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var12 + 8) + uVar8 * 8);
    p_Var14 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var12 + 8) + uVar8 * 8);
    if (p_Var14 != p_Var12) {
      do {
        p_Var13 = p_Var12;
        p_Var15 = p_Var14;
        if (*(uint *)(p_Var14 + 8) == uVar10) {
          cVar9 = operator==(param_3,(QString *)(p_Var14 + 0x10));
          p_Var12 = *(_func_void_Node_ptr_void_ptr **)p_Var18;
          p_Var13 = *(_func_void_Node_ptr_void_ptr **)param_2;
          p_Var15 = p_Var12;
          if (cVar9 != '\0') break;
        }
        p_Var12 = p_Var13;
        p_Var14 = *(_func_void_Node_ptr_void_ptr **)p_Var15;
        p_Var13 = p_Var12;
        p_Var18 = p_Var15;
      } while (p_Var14 != p_Var12);
    }
  }
  if (p_Var12 == p_Var13) {
LAB_100a9de1a:
    *param_1 = 0;
    return param_1;
  }
  lVar4 = *(long *)(p_Var12 + 0x18);
  *param_1 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  puVar5 = *(undefined8 **)p_Var18;
  uVar6 = *puVar5;
  plVar7 = (long *)puVar5[3];
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  pQVar17 = (QArrayData *)puVar5[2];
  if (*(int *)pQVar17 != -1) {
    if (*(int *)pQVar17 != 0) {
      LOCK();
      *(int *)pQVar17 = *(int *)pQVar17 + -1;
      UNLOCK();
      if (*(int *)pQVar17 != 0) goto LAB_100a9dd95;
      pQVar17 = (QArrayData *)puVar5[2];
    }
    QArrayData::deallocate(pQVar17,2,8);
  }
LAB_100a9dd95:
  QHashData::freeNode(*(void **)param_2);
  *(undefined8 *)p_Var18 = uVar6;
  lVar4 = *(long *)param_2;
  iVar11 = *(int *)(lVar4 + 0x14) + -1;
  *(int *)(lVar4 + 0x14) = iVar11;
  if (*(int *)(lVar4 + 0x20) >> 3 < iVar11) {
    return param_1;
  }
  if (*(short *)(lVar4 + 0x1e) <= *(short *)(lVar4 + 0x1c)) {
    return param_1;
  }
  QHashData::rehash((int)lVar4);
  return param_1;
}

