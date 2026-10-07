
undefined8 FUN_100436360(undefined8 param_1,_func_void_Node_ptr_void_ptr *param_2,QString *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  _func_void_Node_ptr_void_ptr *p_Var14;
  
  p_Var9 = *(_func_void_Node_ptr_void_ptr **)param_2;
  if (*(int *)(p_Var9 + 0x14) == 0) {
    FUN_100431730(param_1);
    return param_1;
  }
  if (*(uint *)(p_Var9 + 0x10) < 2) goto LAB_1004363fb;
  p_Var9 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var9,FUN_100438460,0x438260,0x3b8);
  p_Var13 = *(_func_void_Node_ptr **)param_2;
  if (*(int *)(p_Var13 + 0x10) != -1) {
    if (*(int *)(p_Var13 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var13 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1004363dd;
      p_Var13 = *(_func_void_Node_ptr **)param_2;
    }
    QHashData::free_helper(p_Var13);
  }
LAB_1004363dd:
  *(_func_void_Node_ptr_void_ptr **)param_2 = p_Var9;
LAB_1004363fb:
  uVar2 = *(uint *)(p_Var9 + 0x20);
  p_Var10 = p_Var9;
  p_Var14 = param_2;
  if (uVar2 != 0) {
    uVar7 = qHash(param_3,*(uint *)(p_Var9 + 0x24));
    uVar5 = (ulong)uVar7 % (ulong)uVar2;
    p_Var14 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var9 + 8) + uVar5 * 8);
    p_Var11 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var9 + 8) + uVar5 * 8);
    if (p_Var11 != p_Var9) {
      do {
        p_Var10 = p_Var9;
        p_Var12 = p_Var11;
        if (*(uint *)(p_Var11 + 8) == uVar7) {
          cVar6 = operator==(param_3,(QString *)(p_Var11 + 0x10));
          p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var14;
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)param_2;
          p_Var12 = p_Var9;
          if (cVar6 != '\0') break;
        }
        p_Var9 = p_Var10;
        p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
        p_Var10 = p_Var9;
        p_Var14 = p_Var12;
      } while (p_Var11 != p_Var9);
    }
  }
  if (p_Var9 == p_Var10) {
    FUN_100431730(param_1);
  }
  else {
    FUN_100436d60(param_1,p_Var9 + 0x18);
    uVar3 = **(undefined8 **)p_Var14;
    FUN_100438260(*(undefined8 **)p_Var14);
    QHashData::freeNode(*(void **)param_2);
    *(undefined8 *)p_Var14 = uVar3;
    lVar4 = *(long *)param_2;
    iVar8 = *(int *)(lVar4 + 0x14) + -1;
    *(int *)(lVar4 + 0x14) = iVar8;
    if ((iVar8 <= *(int *)(lVar4 + 0x20) >> 3) &&
       (*(short *)(lVar4 + 0x1c) < *(short *)(lVar4 + 0x1e))) {
      QHashData::rehash((int)lVar4);
    }
  }
  return param_1;
}

