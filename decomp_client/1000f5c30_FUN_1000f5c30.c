
void FUN_1000f5c30(long param_1,undefined8 param_2)

{
  code *pcVar1;
  uint *puVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  undefined8 uVar5;
  _func_void_Node_ptr *p_Var6;
  long *plVar7;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1000f5210(param_1,param_2,&local_30,&local_38,&local_40);
  uVar5 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
  }
  p_Var3 = (_func_void_Node_ptr_void_ptr *)FUN_1000f76b0(uVar5,&local_38);
  plVar7 = (long *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x40) + 0x10);
  }
  p_Var4 = (_func_void_Node_ptr_void_ptr *)*plVar7;
  if (1 < *(uint *)(p_Var4 + 0x10)) {
    p_Var4 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var4,FUN_1000f81e0,0xf8050,0x20);
    p_Var6 = (_func_void_Node_ptr *)*plVar7;
    if (*(int *)(p_Var6 + 0x10) != -1) {
      if (*(int *)(p_Var6 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var6 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_21 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000f5ce9;
        p_Var6 = (_func_void_Node_ptr *)*plVar7;
      }
      QHashData::free_helper(p_Var6);
    }
LAB_1000f5ce9:
    *plVar7 = (long)p_Var4;
  }
  if (p_Var3 != p_Var4) {
    puVar2 = (uint *)(*(long *)(*(long *)(p_Var3 + 0x18) + 0x10) + 0x58);
    *puVar2 = *puVar2 | 1;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000f5d2d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000f5d2d:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000f5d5d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000f5d5d:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

