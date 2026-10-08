
long * FUN_10073d0e0(long *param_1,undefined8 *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 in_RAX;
  long lVar5;
  long *plVar6;
  long *plVar7;
  _func_void_Node_ptr *p_Var8;
  long lVar9;
  undefined8 local_38;
  
  local_38 = in_RAX;
  if (*(uint *)((_func_void_Node_ptr_void_ptr *)*param_1 + 0x10) < 2) goto LAB_10073d151;
  lVar5 = QHashData::detach_helper
                    ((_func_void_Node_ptr_void_ptr *)*param_1,FUN_10073d6a0,0x73d410,0x28);
  p_Var8 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      local_38._0_6_ = CONCAT15(*(int *)pcVar1 != 0,(undefined5)local_38);
      if (*(int *)pcVar1 != 0) goto LAB_10073d14e;
      p_Var8 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var8);
  }
LAB_10073d14e:
  *param_1 = lVar5;
LAB_10073d151:
  plVar6 = (long *)FUN_10073d5b0(param_1,param_2,&local_38);
  lVar5 = *plVar6;
  lVar9 = *param_1;
  if (lVar5 == lVar9) {
    if (*(int *)(lVar9 + 0x20) <= *(int *)(lVar9 + 0x14)) {
      QHashData::rehash((int)lVar9);
      plVar6 = (long *)FUN_10073d5b0(param_1,param_2,&local_38);
      lVar9 = *param_1;
    }
    uVar4 = (undefined4)local_38;
    plVar7 = (long *)QHashData::allocateNode((int)lVar9);
    *plVar7 = *plVar6;
    *(undefined4 *)(plVar7 + 1) = uVar4;
    piVar3 = (int *)*param_2;
    plVar7[2] = (long)piVar3;
    if (1 < *piVar3 + 1U) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    piVar3 = (int *)param_2[1];
    plVar7[3] = (long)piVar3;
    if (1 < *piVar3 + 1U) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    lVar5 = *param_3;
    plVar7[4] = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    *plVar6 = (long)plVar7;
    *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + 1;
  }
  else {
    lVar9 = *param_3;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    plVar7 = *(long **)(lVar5 + 0x20);
    *(long *)(lVar5 + 0x20) = lVar9;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    plVar7 = (long *)*plVar6;
  }
  return plVar7;
}

