
undefined8 *
FUN_100706570(undefined8 *param_1,_func_void_Node_ptr_void_ptr *param_2,QString *param_3)

{
  code *pcVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  QKeySequence *this;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  QArrayData *pQVar14;
  long lVar15;
  Data *pDVar16;
  _func_void_Node_ptr_void_ptr *p_Var17;
  
  p_Var9 = *(_func_void_Node_ptr_void_ptr **)param_2;
  if (*(int *)(p_Var9 + 0x14) == 0) goto LAB_1007066ab;
  if (1 < *(uint *)(p_Var9 + 0x10)) {
    p_Var9 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var9,FUN_100707dd0,0x707a20,0x20);
    p_Var13 = *(_func_void_Node_ptr **)param_2;
    if (*(int *)(p_Var13 + 0x10) != -1) {
      if (*(int *)(p_Var13 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var13 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_1007065ea;
        p_Var13 = *(_func_void_Node_ptr **)param_2;
      }
      QHashData::free_helper(p_Var13);
    }
LAB_1007065ea:
    *(_func_void_Node_ptr_void_ptr **)param_2 = p_Var9;
  }
  uVar2 = *(uint *)(p_Var9 + 0x20);
  p_Var10 = p_Var9;
  p_Var17 = param_2;
  if (uVar2 != 0) {
    uVar7 = qHash(param_3,*(uint *)(p_Var9 + 0x24));
    uVar5 = (ulong)uVar7 % (ulong)uVar2;
    p_Var17 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var9 + 8) + uVar5 * 8);
    p_Var11 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var9 + 8) + uVar5 * 8);
    if (p_Var11 != p_Var9) {
      do {
        p_Var10 = p_Var9;
        p_Var12 = p_Var11;
        if (*(uint *)(p_Var11 + 8) == uVar7) {
          cVar6 = operator==(param_3,(QString *)(p_Var11 + 0x10));
          p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var17;
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)param_2;
          p_Var12 = p_Var9;
          if (cVar6 != '\0') break;
        }
        p_Var9 = p_Var10;
        p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
        p_Var10 = p_Var9;
        p_Var17 = p_Var12;
      } while (p_Var11 != p_Var9);
    }
  }
  if (p_Var9 == p_Var10) {
LAB_1007066ab:
    *param_1 = PTR_shared_null_1021e15e8;
    return param_1;
  }
  FUN_1005607f0(param_1,p_Var9 + 0x18);
  plVar3 = *(long **)p_Var17;
  lVar4 = *plVar3;
  pDVar16 = (Data *)plVar3[3];
  if (*(int *)pDVar16 != -1) {
    if (*(int *)pDVar16 != 0) {
      LOCK();
      *(int *)pDVar16 = *(int *)pDVar16 + -1;
      UNLOCK();
      if (*(int *)pDVar16 != 0) goto LAB_100706722;
      pDVar16 = (Data *)plVar3[3];
    }
    iVar8 = *(int *)(pDVar16 + 0xc);
    if (iVar8 != *(int *)(pDVar16 + 8)) {
      lVar15 = (long)*(int *)(pDVar16 + 8) * 8 + (long)iVar8 * -8;
      this = (QKeySequence *)(pDVar16 + (long)iVar8 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar15 = lVar15 + 8;
      } while (lVar15 != 0);
    }
    QListData::dispose(pDVar16);
  }
LAB_100706722:
  pQVar14 = (QArrayData *)plVar3[2];
  if (*(int *)pQVar14 != -1) {
    if (*(int *)pQVar14 != 0) {
      LOCK();
      *(int *)pQVar14 = *(int *)pQVar14 + -1;
      UNLOCK();
      if (*(int *)pQVar14 != 0) goto LAB_100706756;
      pQVar14 = (QArrayData *)plVar3[2];
    }
    QArrayData::deallocate(pQVar14,2,8);
  }
LAB_100706756:
  QHashData::freeNode(*(void **)param_2);
  *(long *)p_Var17 = lVar4;
  lVar4 = *(long *)param_2;
  iVar8 = *(int *)(lVar4 + 0x14) + -1;
  *(int *)(lVar4 + 0x14) = iVar8;
  if (*(int *)(lVar4 + 0x20) >> 3 < iVar8) {
    return param_1;
  }
  if (*(short *)(lVar4 + 0x1e) <= *(short *)(lVar4 + 0x1c)) {
    return param_1;
  }
  QHashData::rehash((int)lVar4);
  return param_1;
}

