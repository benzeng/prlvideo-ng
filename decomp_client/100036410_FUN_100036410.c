
undefined8 FUN_100036410(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  QArrayData *pQVar14;
  _func_void_Node_ptr_void_ptr *p_Var15;
  _func_void_Node_ptr_void_ptr *p_Var16;
  
  p_Var10 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(int *)(p_Var10 + 0x14) == 0) {
    return 0;
  }
  if (1 < *(uint *)(p_Var10 + 0x10)) {
    p_Var10 = (_func_void_Node_ptr_void_ptr *)
              QHashData::detach_helper(p_Var10,FUN_100036c00,0x36a40,0x20);
    p_Var13 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var13 + 0x10) != -1) {
      if (*(int *)(p_Var13 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var13 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_100036491;
        p_Var13 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var13);
    }
LAB_100036491:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var10;
  }
  uVar2 = *(uint *)(p_Var10 + 0x20);
  p_Var15 = p_Var10;
  p_Var16 = param_1;
  if (uVar2 != 0) {
    uVar8 = qHash(param_2,*(uint *)(p_Var10 + 0x24));
    uVar6 = (ulong)uVar8 % (ulong)uVar2;
    p_Var16 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var10 + 8) + uVar6 * 8);
    p_Var11 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var10 + 8) + uVar6 * 8);
    if (p_Var11 != p_Var10) {
      do {
        p_Var12 = p_Var11;
        p_Var15 = p_Var10;
        if (*(uint *)(p_Var11 + 8) == uVar8) {
          cVar7 = operator==(param_2,(QString *)(p_Var11 + 0x10));
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var16;
          p_Var12 = p_Var10;
          p_Var15 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar7 != '\0') break;
        }
        p_Var10 = p_Var15;
        p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
        p_Var15 = p_Var10;
        p_Var16 = p_Var12;
      } while (p_Var11 != p_Var10);
    }
  }
  if (p_Var10 == p_Var15) {
    return 0;
  }
  uVar3 = *(undefined8 *)(p_Var10 + 0x18);
  uVar4 = *(undefined8 *)p_Var10;
  pQVar14 = *(QArrayData **)(p_Var10 + 0x10);
  if (*(int *)pQVar14 != -1) {
    if (*(int *)pQVar14 != 0) {
      LOCK();
      *(int *)pQVar14 = *(int *)pQVar14 + -1;
      UNLOCK();
      if (*(int *)pQVar14 != 0) goto LAB_10003654a;
      pQVar14 = *(QArrayData **)(p_Var10 + 0x10);
    }
    QArrayData::deallocate(pQVar14,2,8);
  }
LAB_10003654a:
  QHashData::freeNode(*(void **)param_1);
  *(undefined8 *)p_Var16 = uVar4;
  lVar5 = *(long *)param_1;
  iVar9 = *(int *)(lVar5 + 0x14) + -1;
  *(int *)(lVar5 + 0x14) = iVar9;
  if ((iVar9 <= *(int *)(lVar5 + 0x20) >> 3) &&
     (*(short *)(lVar5 + 0x1c) < *(short *)(lVar5 + 0x1e))) {
    QHashData::rehash((int)lVar5);
  }
  return uVar3;
}

