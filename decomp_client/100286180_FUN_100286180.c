
long FUN_100286180(long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  _func_void_Node_ptr *p_Var4;
  undefined4 local_30;
  undefined1 local_29;
  
  if (*(uint *)((_func_void_Node_ptr_void_ptr *)*param_1 + 0x10) < 2) goto LAB_1002861f6;
  lVar2 = QHashData::detach_helper
                    ((_func_void_Node_ptr_void_ptr *)*param_1,FUN_100287c60,0x286900,0x88);
  p_Var4 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002861f2;
      p_Var4 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var4);
  }
LAB_1002861f2:
  *param_1 = lVar2;
LAB_1002861f6:
  plVar3 = (long *)FUN_100287910(param_1,param_2,&local_30);
  lVar2 = *param_1;
  if (*plVar3 == lVar2) {
    if (*(int *)(lVar2 + 0x20) <= *(int *)(lVar2 + 0x14)) {
      QHashData::rehash((int)lVar2);
      plVar3 = (long *)FUN_100287910(param_1,param_2,&local_30);
    }
    lVar2 = FUN_1002879d0(param_1,local_30,param_2,param_3,plVar3);
  }
  else {
    FUN_100287aa0(*plVar3 + 0x20,param_3);
    lVar2 = *plVar3;
  }
  return lVar2;
}

