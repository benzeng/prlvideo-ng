
bool FUN_1000751f0(QString *param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  _func_void_Node_ptr *p_Var6;
  _func_void_Node_ptr *p_Var7;
  _func_void_Node_ptr *p_Var8;
  _func_void_Node_ptr *p_Var9;
  _func_void_Node_ptr *local_40;
  undefined1 local_32;
  
  FUN_100074d70(&local_40);
  uVar2 = *(uint *)(local_40 + 0x20);
  p_Var6 = local_40;
  if (uVar2 != 0) {
    uVar5 = qHash(param_1,*(uint *)(local_40 + 0x24));
    uVar3 = (ulong)uVar5 % (ulong)uVar2;
    p_Var7 = *(_func_void_Node_ptr **)(*(long *)(local_40 + 8) + uVar3 * 8);
    if (p_Var7 != local_40) {
      p_Var9 = (_func_void_Node_ptr *)(*(long *)(local_40 + 8) + uVar3 * 8);
      do {
        p_Var8 = p_Var7;
        if (*(uint *)(p_Var7 + 8) == uVar5) {
          cVar4 = operator==(param_1,(QString *)(p_Var7 + 0x10));
          p_Var8 = *(_func_void_Node_ptr **)p_Var9;
          p_Var6 = p_Var8;
          if (cVar4 != '\0') break;
        }
        p_Var7 = *(_func_void_Node_ptr **)p_Var8;
        p_Var6 = local_40;
        p_Var9 = p_Var8;
      } while (p_Var7 != local_40);
    }
  }
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_32 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1000752a3;
    }
    QHashData::free_helper(local_40);
  }
LAB_1000752a3:
  return p_Var6 != local_40;
}

