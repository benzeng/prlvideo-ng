
QVariant * FUN_100a10930(QVariant *param_1,_func_void_Node_ptr_void_ptr *param_2,QString *param_3)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  
  p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_2;
  if (*(int *)(p_Var8 + 0x14) == 0) goto LAB_100a10acc;
  if (1 < *(uint *)(p_Var8 + 0x10)) {
    p_Var8 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var8,FUN_100076890,0x76530,0x28);
    p_Var12 = *(_func_void_Node_ptr **)param_2;
    if (*(int *)(p_Var12 + 0x10) != -1) {
      if (*(int *)(p_Var12 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var12 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_100a109b1;
        p_Var12 = *(_func_void_Node_ptr **)param_2;
      }
      QHashData::free_helper(p_Var12);
    }
LAB_100a109b1:
    *(_func_void_Node_ptr_void_ptr **)param_2 = p_Var8;
  }
  uVar2 = *(uint *)(p_Var8 + 0x20);
  p_Var9 = p_Var8;
  p_Var13 = param_2;
  if (uVar2 != 0) {
    uVar6 = qHash(param_3,*(uint *)(p_Var8 + 0x24));
    uVar4 = (ulong)uVar6 % (ulong)uVar2;
    p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var8 + 8) + uVar4 * 8);
    p_Var10 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var8 + 8) + uVar4 * 8);
    if (p_Var10 != p_Var8) {
      do {
        p_Var9 = p_Var8;
        p_Var11 = p_Var10;
        if (*(uint *)(p_Var10 + 8) == uVar6) {
          cVar5 = operator==(param_3,(QString *)(p_Var10 + 0x10));
          p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
          p_Var9 = *(_func_void_Node_ptr_void_ptr **)param_2;
          p_Var11 = p_Var8;
          if (cVar5 != '\0') break;
        }
        p_Var8 = p_Var9;
        p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
        p_Var9 = p_Var8;
        p_Var13 = p_Var11;
      } while (p_Var10 != p_Var8);
    }
  }
  if (p_Var8 != p_Var9) {
    QVariant::QVariant(param_1,(QVariant *)(p_Var8 + 0x18));
    lVar3 = **(long **)p_Var13;
    FUN_100076530(*(long **)p_Var13);
    QHashData::freeNode(*(void **)param_2);
    *(long *)p_Var13 = lVar3;
    lVar3 = *(long *)param_2;
    iVar7 = *(int *)(lVar3 + 0x14) + -1;
    *(int *)(lVar3 + 0x14) = iVar7;
    if (*(int *)(lVar3 + 0x20) >> 3 < iVar7) {
      return param_1;
    }
    if (*(short *)(lVar3 + 0x1e) <= *(short *)(lVar3 + 0x1c)) {
      return param_1;
    }
    QHashData::rehash((int)lVar3);
    return param_1;
  }
LAB_100a10acc:
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
  return param_1;
}

