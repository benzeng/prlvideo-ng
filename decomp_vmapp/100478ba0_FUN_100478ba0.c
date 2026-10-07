
undefined8 FUN_100478ba0(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr *p_Var9;
  
  p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var6 + 0x10) < 2) goto LAB_100478c12;
  p_Var6 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var6,FUN_100479de0,0x471d80,0x20);
  p_Var9 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100478c0f;
      p_Var9 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var9);
  }
LAB_100478c0f:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var6;
LAB_100478c12:
  uVar2 = *(uint *)(p_Var6 + 0x20);
  p_Var7 = param_1;
  if (uVar2 != 0) {
    uVar5 = qHash(param_2,*(uint *)(p_Var6 + 0x24));
    uVar3 = (ulong)uVar5 % (ulong)uVar2;
    p_Var7 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar3 * 8);
    p_Var8 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar3 * 8);
    while (p_Var8 != p_Var6) {
      if (*(uint *)(p_Var8 + 8) == uVar5) {
        cVar4 = operator==(param_2,(QString *)(p_Var8 + 0x10));
        if (cVar4 != '\0') break;
        p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var7;
      }
      p_Var7 = p_Var8;
      p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var7;
    }
  }
  return *(undefined8 *)p_Var7;
}

