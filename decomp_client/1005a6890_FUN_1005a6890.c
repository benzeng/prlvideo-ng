
int FUN_1005a6890(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  int local_44;
  
  p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
  local_44 = *(int *)(p_Var7 + 0x14);
  if (local_44 == 0) {
    return 0;
  }
  if (*(uint *)(p_Var7 + 0x10) < 2) goto LAB_1005a692c;
  p_Var7 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var7,FUN_100076890,0x76530,0x28);
  p_Var10 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var10 + 0x10) != -1) {
    if (*(int *)(p_Var10 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var10 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1005a6919;
      p_Var10 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var10);
  }
LAB_1005a6919:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var7;
  local_44 = *(int *)(p_Var7 + 0x14);
LAB_1005a692c:
  uVar2 = *(uint *)(p_Var7 + 0x20);
  p_Var11 = p_Var7;
  p_Var12 = param_1;
  if (uVar2 != 0) {
    uVar5 = qHash(param_2,*(uint *)(p_Var7 + 0x24));
    uVar3 = (ulong)uVar5 % (ulong)uVar2;
    p_Var12 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar3 * 8);
    p_Var8 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar3 * 8);
    if (p_Var8 != p_Var7) {
      do {
        p_Var9 = p_Var8;
        p_Var11 = p_Var7;
        if (*(uint *)(p_Var8 + 8) == uVar5) {
          cVar4 = operator==(param_2,(QString *)(p_Var8 + 0x10));
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
          p_Var9 = p_Var7;
          p_Var11 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar4 != '\0') break;
        }
        p_Var7 = p_Var11;
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var9;
        p_Var11 = p_Var7;
        p_Var12 = p_Var9;
      } while (p_Var8 != p_Var7);
    }
  }
  if (p_Var7 != p_Var11) {
    do {
      p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var7;
      if (p_Var8 == p_Var11) {
        FUN_100076530(p_Var7);
        QHashData::freeNode(*(void **)param_1);
        *(_func_void_Node_ptr_void_ptr **)p_Var12 = p_Var11;
        p_Var11 = *(_func_void_Node_ptr_void_ptr **)param_1;
        iVar6 = *(int *)(p_Var11 + 0x14) + -1;
        *(int *)(p_Var11 + 0x14) = iVar6;
        break;
      }
      cVar4 = operator==((QString *)(p_Var8 + 0x10),(QString *)(p_Var7 + 0x10));
      FUN_100076530(*(undefined8 *)p_Var12);
      QHashData::freeNode(*(void **)param_1);
      *(_func_void_Node_ptr_void_ptr **)p_Var12 = p_Var8;
      p_Var11 = *(_func_void_Node_ptr_void_ptr **)param_1;
      iVar6 = *(int *)(p_Var11 + 0x14) + -1;
      *(int *)(p_Var11 + 0x14) = iVar6;
      p_Var7 = p_Var8;
    } while (cVar4 != '\0');
    if ((iVar6 <= *(int *)(p_Var11 + 0x20) >> 3) &&
       (*(short *)(p_Var11 + 0x1c) < *(short *)(p_Var11 + 0x1e))) {
      QHashData::rehash((int)p_Var11);
    }
  }
  return local_44 - *(int *)(*(long *)param_1 + 0x14);
}

