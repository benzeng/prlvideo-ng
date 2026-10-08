
void FUN_100707bd0(_func_void_Node_ptr_void_ptr *param_1,QString *param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  char cVar4;
  uint uVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr *p_Var8;
  uint uVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  
  p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var6 + 0x10) < 2) goto LAB_100707c4c;
  p_Var6 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var6,FUN_100707dd0,0x707a20,0x20);
  p_Var8 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100707c48;
      p_Var8 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var8);
  }
LAB_100707c48:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var6;
LAB_100707c4c:
  uVar9 = *(uint *)(p_Var6 + 0x20);
  if ((int)uVar9 <= *(int *)(p_Var6 + 0x14)) {
    QHashData::rehash((int)p_Var6);
    p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
    uVar9 = *(uint *)(p_Var6 + 0x20);
  }
  uVar5 = qHash(param_2,*(uint *)(p_Var6 + 0x24));
  p_Var10 = param_1;
  if (uVar9 != 0) {
    uVar2 = (ulong)uVar5 % (ulong)uVar9;
    p_Var3 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar2 * 8);
    p_Var10 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar2 * 8);
    while (p_Var7 = p_Var3, p_Var7 != p_Var6) {
      if (*(uint *)(p_Var7 + 8) == uVar5) {
        cVar4 = operator==(param_2,(QString *)(p_Var7 + 0x10));
        if (cVar4 != '\0') break;
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
        p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
      }
      p_Var10 = p_Var7;
      p_Var3 = *(_func_void_Node_ptr_void_ptr **)p_Var7;
    }
  }
  FUN_100707e60(param_1,(ulong)uVar5,param_2,param_3,p_Var10);
  return;
}

