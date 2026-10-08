
long FUN_10007af00(_func_void_Node_ptr_void_ptr *param_1,QString *param_2,QVariant *param_3)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  long lVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  ulong uVar12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  
  p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var6 + 0x10) < 2) goto LAB_10007af7c;
  p_Var6 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var6,FUN_100076890,0x76530,0x28);
  p_Var10 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var10 + 0x10) != -1) {
    if (*(int *)(p_Var10 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var10 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10007af78;
      p_Var10 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var10);
  }
LAB_10007af78:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var6;
LAB_10007af7c:
  uVar2 = *(uint *)(p_Var6 + 0x20);
  uVar5 = qHash(param_2,*(uint *)(p_Var6 + 0x24));
  uVar12 = (ulong)uVar5;
  p_Var11 = p_Var6;
  p_Var13 = param_1;
  if (uVar2 != 0) {
    uVar3 = uVar12 % (ulong)uVar2;
    p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar3 * 8);
    p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar3 * 8);
    if (p_Var9 != p_Var6) {
      do {
        p_Var8 = p_Var9;
        if (*(uint *)(p_Var9 + 8) == uVar5) {
          cVar4 = operator==(param_2,(QString *)(p_Var9 + 0x10));
          p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
          p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
          p_Var11 = p_Var8;
          if (cVar4 != '\0') break;
        }
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
        p_Var11 = p_Var6;
        p_Var13 = p_Var8;
      } while (p_Var9 != p_Var6);
    }
  }
  if (p_Var11 == p_Var6) {
    if (*(int *)(p_Var6 + 0x20) <= *(int *)(p_Var6 + 0x14)) {
      QHashData::rehash((int)p_Var6);
      p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var6 + 0x20);
      uVar5 = qHash(param_2,*(uint *)(p_Var6 + 0x24));
      uVar12 = (ulong)uVar5;
      p_Var13 = param_1;
      if (uVar2 != 0) {
        uVar3 = uVar12 % (ulong)uVar2;
        p_Var11 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar3 * 8);
        p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar3 * 8);
        while (p_Var9 = p_Var11, p_Var9 != p_Var6) {
          if (*(uint *)(p_Var9 + 8) == uVar5) {
            cVar4 = operator==(param_2,(QString *)(p_Var9 + 0x10));
            if (cVar4 != '\0') break;
            p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
            p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
          }
          p_Var13 = p_Var9;
          p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var9;
        }
      }
    }
    lVar7 = FUN_100076bc0(param_1,uVar12,param_2,param_3,p_Var13);
  }
  else {
    QVariant::operator=((QVariant *)(p_Var11 + 0x18),param_3);
    lVar7 = *(long *)p_Var13;
  }
  return lVar7;
}

