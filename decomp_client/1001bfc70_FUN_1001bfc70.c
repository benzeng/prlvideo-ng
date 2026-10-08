
long * FUN_1001bfc70(long *param_1,QNetworkProxy *param_2,long *param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  _func_void_Node_ptr *p_Var5;
  undefined4 local_38;
  undefined1 local_31;
  
  if (*(uint *)((_func_void_Node_ptr_void_ptr *)*param_1 + 0x10) < 2) goto LAB_1001bfce8;
  lVar2 = QHashData::detach_helper
                    ((_func_void_Node_ptr_void_ptr *)*param_1,FUN_1001bff00,0x1bfda0,0x20);
  p_Var5 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001bfce4;
      p_Var5 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var5);
  }
LAB_1001bfce4:
  *param_1 = lVar2;
LAB_1001bfce8:
  plVar3 = (long *)FUN_1001bfdb0(param_1,param_2,&local_38);
  lVar2 = *param_1;
  if (*plVar3 == lVar2) {
    if (*(int *)(lVar2 + 0x20) <= *(int *)(lVar2 + 0x14)) {
      QHashData::rehash((int)lVar2);
      plVar3 = (long *)FUN_1001bfdb0(param_1,param_2,&local_38);
      lVar2 = *param_1;
    }
    plVar4 = (long *)QHashData::allocateNode((int)lVar2);
    *plVar4 = *plVar3;
    *(undefined4 *)(plVar4 + 1) = local_38;
    QNetworkProxy::QNetworkProxy((QNetworkProxy *)(plVar4 + 2),param_2);
    plVar4[3] = *param_3;
    *plVar3 = (long)plVar4;
    *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + 1;
  }
  else {
    *(long *)(*plVar3 + 0x18) = *param_3;
    plVar4 = (long *)*plVar3;
  }
  return plVar4;
}

