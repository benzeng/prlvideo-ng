
void FUN_1007391a0(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  _func_void_Node_ptr *p_Var6;
  undefined4 local_30;
  undefined1 local_2b;
  
  if (*(uint *)((_func_void_Node_ptr_void_ptr *)*param_1 + 0x10) < 2) goto LAB_10073920f;
  lVar3 = QHashData::detach_helper
                    ((_func_void_Node_ptr_void_ptr *)*param_1,FUN_100739040,0x738cf0,0x20);
  p_Var6 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_2b = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_2b) goto LAB_10073920c;
      p_Var6 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var6);
  }
LAB_10073920c:
  *param_1 = lVar3;
LAB_10073920f:
  plVar4 = (long *)FUN_100738f50(param_1,param_2,&local_30);
  lVar3 = *param_1;
  if (*plVar4 == lVar3) {
    if (*(int *)(lVar3 + 0x20) <= *(int *)(lVar3 + 0x14)) {
      QHashData::rehash((int)lVar3);
      plVar4 = (long *)FUN_100738f50(param_1,param_2,&local_30);
      lVar3 = *param_1;
    }
    plVar5 = (long *)QHashData::allocateNode((int)lVar3);
    *plVar5 = *plVar4;
    *(undefined4 *)(plVar5 + 1) = local_30;
    piVar2 = (int *)*param_2;
    plVar5[2] = (long)piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    piVar2 = (int *)param_2[1];
    plVar5[3] = (long)piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    *plVar4 = (long)plVar5;
    *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + 1;
  }
  return;
}

