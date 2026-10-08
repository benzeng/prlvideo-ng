
long * FUN_100ad9510(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  long lVar4;
  long *plVar5;
  long *plVar6;
  _func_void_Node_ptr *p_Var7;
  undefined8 local_38;
  
  local_38 = in_RAX;
  if (1 < *(uint *)((_func_void_Node_ptr_void_ptr *)*param_1 + 0x10)) {
    lVar4 = QHashData::detach_helper
                      ((_func_void_Node_ptr_void_ptr *)*param_1,FUN_100ad9aa0,0xad9960,0x20);
    p_Var7 = (_func_void_Node_ptr *)*param_1;
    if (*(int *)(p_Var7 + 0x10) != -1) {
      if (*(int *)(p_Var7 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var7 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        local_38._0_5_ = CONCAT14(*(int *)pcVar1 != 0,(undefined4)local_38);
        if (*(int *)pcVar1 != 0) goto LAB_100ad957b;
        p_Var7 = (_func_void_Node_ptr *)*param_1;
      }
      QHashData::free_helper(p_Var7);
    }
LAB_100ad957b:
    *param_1 = lVar4;
  }
  plVar5 = (long *)FUN_100ad99b0(param_1,param_2,&local_38);
  plVar6 = (long *)*plVar5;
  lVar4 = *param_1;
  if (plVar6 == (long *)lVar4) {
    if (*(int *)(lVar4 + 0x20) <= *(int *)(lVar4 + 0x14)) {
      QHashData::rehash((int)lVar4);
      plVar5 = (long *)FUN_100ad99b0(param_1,param_2,&local_38);
      lVar4 = *param_1;
    }
    uVar3 = (undefined4)local_38;
    plVar6 = (long *)QHashData::allocateNode((int)lVar4);
    *plVar6 = *plVar5;
    *(undefined4 *)(plVar6 + 1) = uVar3;
    *(undefined8 *)((long)plVar6 + 0xc) = *param_2;
    puVar2 = PTR_shared_null_1021e1288;
    plVar6[3] = (long)PTR_shared_null_1021e1288;
    if (1 < *(int *)puVar2 + 1U) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
      local_38._0_6_ = CONCAT15(*(int *)puVar2 != 0,(undefined5)local_38);
    }
    *plVar5 = (long)plVar6;
    *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + 1;
    if (*(int *)puVar2 != -1) {
      if (*(int *)puVar2 != 0) {
        LOCK();
        *(int *)puVar2 = *(int *)puVar2 + -1;
        UNLOCK();
        local_38._0_7_ = CONCAT16(*(int *)puVar2 != 0,(undefined6)local_38);
        if (*(int *)puVar2 != 0) goto LAB_100ad9640;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,1,8);
    }
  }
LAB_100ad9640:
  return plVar6 + 3;
}

