
int FUN_1000396d0(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  int iVar7;
  int iVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  
  p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
  iVar7 = *(int *)(p_Var6 + 0x14);
  if (iVar7 == 0) {
    return 0;
  }
  if (*(uint *)(p_Var6 + 0x10) < 2) goto LAB_100039761;
  p_Var6 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var6,FUN_100039d40,0x39bf0,0x28);
  p_Var11 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var11 + 0x10) != -1) {
    if (*(int *)(p_Var11 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var11 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100039750;
      p_Var11 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var11);
  }
LAB_100039750:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var6;
  iVar7 = *(int *)(p_Var6 + 0x14);
LAB_100039761:
  uVar2 = *(uint *)(p_Var6 + 0x20);
  p_Var12 = p_Var6;
  p_Var13 = param_1;
  if (uVar2 != 0) {
    uVar5 = qHash(param_2,*(uint *)(p_Var6 + 0x24));
    uVar3 = (ulong)uVar5 % (ulong)uVar2;
    p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar3 * 8);
    p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar3 * 8);
    if (p_Var9 != p_Var6) {
      do {
        p_Var10 = p_Var9;
        p_Var12 = p_Var6;
        if (*(uint *)(p_Var9 + 8) == uVar5) {
          cVar4 = operator==(param_2,(QString *)(p_Var9 + 0x10));
          p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
          p_Var10 = p_Var6;
          p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar4 != '\0') break;
        }
        p_Var6 = p_Var12;
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
        p_Var12 = p_Var6;
        p_Var13 = p_Var10;
      } while (p_Var9 != p_Var6);
    }
  }
  if (p_Var6 != p_Var12) {
    do {
      p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var6;
      if (p_Var9 == p_Var12) {
        FUN_100039d90(param_1,p_Var6);
        *(_func_void_Node_ptr_void_ptr **)p_Var13 = p_Var12;
        p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
        iVar8 = *(int *)(p_Var12 + 0x14) + -1;
        *(int *)(p_Var12 + 0x14) = iVar8;
        break;
      }
      cVar4 = operator==((QString *)(p_Var9 + 0x10),(QString *)(p_Var6 + 0x10));
      FUN_100039d90(param_1,*(undefined8 *)p_Var13);
      *(_func_void_Node_ptr_void_ptr **)p_Var13 = p_Var9;
      p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
      iVar8 = *(int *)(p_Var12 + 0x14) + -1;
      *(int *)(p_Var12 + 0x14) = iVar8;
      p_Var6 = p_Var9;
    } while (cVar4 != '\0');
    if ((iVar8 <= *(int *)(p_Var12 + 0x20) >> 3) &&
       (*(short *)(p_Var12 + 0x1c) < *(short *)(p_Var12 + 0x1e))) {
      QHashData::rehash((int)p_Var12);
    }
  }
  return iVar7 - *(int *)(*(long *)param_1 + 0x14);
}

