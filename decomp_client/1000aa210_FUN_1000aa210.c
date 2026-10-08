
undefined8 FUN_1000aa210(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

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
  if (*(uint *)(p_Var6 + 0x10) < 2) goto LAB_1000aa282;
  p_Var6 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var6,FUN_1000aaf90,0xaafd0,0x20);
  p_Var9 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1000aa27f;
      p_Var9 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var9);
  }
LAB_1000aa27f:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var6;
LAB_1000aa282:
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

