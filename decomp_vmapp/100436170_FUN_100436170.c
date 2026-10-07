
code * FUN_100436170(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr *p_Var10;
  ulong uVar11;
  undefined1 local_3d8 [935];
  undefined1 local_31;
  
  p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var6 + 0x10) < 2) goto LAB_1004361ec;
  p_Var6 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var6,FUN_100438460,0x438260,0x3b8);
  p_Var10 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var10 + 0x10) != -1) {
    if (*(int *)(p_Var10 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var10 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004361e9;
      p_Var10 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var10);
  }
LAB_1004361e9:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var6;
LAB_1004361ec:
  uVar2 = *(uint *)(p_Var6 + 0x20);
  uVar5 = qHash(param_2,*(uint *)(p_Var6 + 0x24));
  uVar11 = (ulong)uVar5;
  p_Var8 = param_1;
  p_Var7 = p_Var6;
  if (uVar2 != 0) {
    uVar3 = uVar11 % (ulong)uVar2;
    p_Var8 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar3 * 8);
    p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar3 * 8);
    if (p_Var9 != p_Var6) {
      do {
        if (*(uint *)(p_Var9 + 8) == uVar5) {
          cVar4 = operator==(param_2,(QString *)(p_Var9 + 0x10));
          p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
          p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
          if (cVar4 != '\0') break;
        }
        p_Var8 = p_Var9;
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
        p_Var7 = p_Var6;
      } while (p_Var9 != p_Var6);
    }
  }
  if (p_Var7 == p_Var6) {
    if (*(int *)(p_Var6 + 0x20) <= *(int *)(p_Var6 + 0x14)) {
      QHashData::rehash((int)p_Var6);
      p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var6 + 0x20);
      uVar5 = qHash(param_2,*(uint *)(p_Var6 + 0x24));
      uVar11 = (ulong)uVar5;
      p_Var8 = param_1;
      if (uVar2 != 0) {
        uVar3 = uVar11 % (ulong)uVar2;
        p_Var8 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar3 * 8);
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar3 * 8);
        while (p_Var7 != p_Var6) {
          if (*(uint *)(p_Var7 + 8) == uVar5) {
            cVar4 = operator==(param_2,(QString *)(p_Var7 + 0x10));
            if (cVar4 != '\0') break;
            p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
            p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
          }
          p_Var8 = p_Var7;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
        }
      }
    }
    FUN_100431730(local_3d8);
    p_Var7 = (_func_void_Node_ptr_void_ptr *)FUN_100438390(param_1,uVar11,param_2,local_3d8,p_Var8);
    FUN_100436a80(local_3d8);
  }
  return p_Var7 + 0x18;
}

