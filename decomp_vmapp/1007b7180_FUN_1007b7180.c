
long * FUN_1007b7180(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  _func_void_Node_ptr *p_Var6;
  undefined4 local_30;
  undefined1 local_29;
  
  if (*(uint *)((_func_void_Node_ptr_void_ptr *)*param_1 + 0x10) < 2) goto LAB_1007b71ef;
  lVar3 = QHashData::detach_helper
                    ((_func_void_Node_ptr_void_ptr *)*param_1,FUN_1007b7c60,0x7b7a50,0x28);
  p_Var6 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007b71ec;
      p_Var6 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var6);
  }
LAB_1007b71ec:
  *param_1 = lVar3;
LAB_1007b71ef:
  plVar4 = (long *)FUN_1007b7a80(param_1,param_2,&local_30);
  plVar5 = (long *)*plVar4;
  lVar3 = *param_1;
  if (plVar5 == (long *)lVar3) {
    if (*(int *)(lVar3 + 0x20) <= *(int *)(lVar3 + 0x14)) {
      QHashData::rehash((int)lVar3);
      plVar4 = (long *)FUN_1007b7a80(param_1,param_2,&local_30);
      lVar3 = *param_1;
    }
    plVar5 = (long *)QHashData::allocateNode((int)lVar3);
    *plVar5 = *plVar4;
    *(undefined4 *)(plVar5 + 1) = local_30;
    uVar2 = *param_2;
    *(undefined8 *)((long)plVar5 + 0x14) = param_2[1];
    *(undefined8 *)((long)plVar5 + 0xc) = uVar2;
    plVar5[4] = 0;
    *plVar4 = (long)plVar5;
    *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + 1;
  }
  return plVar5 + 4;
}

