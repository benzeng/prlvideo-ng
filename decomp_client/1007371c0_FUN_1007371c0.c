
void FUN_1007371c0(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  QModelIndex *pQVar3;
  int iVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  undefined8 *puVar7;
  void *pvVar8;
  _func_void_Node_ptr *p_Var9;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_38 [7];
  undefined1 local_31;
  
  if (param_2 == 0) {
    return;
  }
  FUN_100188480(&local_50,param_2);
  FUN_1001884b0(&local_58,param_2);
  local_48 = local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  plVar1 = (long *)(param_1 + 0x20);
  local_40 = local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  p_Var5 = (_func_void_Node_ptr_void_ptr *)FUN_100738ec0(plVar1,&local_48);
  p_Var6 = (_func_void_Node_ptr_void_ptr *)*plVar1;
  if (1 < *(uint *)(p_Var6 + 0x10)) {
    p_Var6 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var6,FUN_100739040,0x738cf0,0x20);
    p_Var9 = (_func_void_Node_ptr *)*plVar1;
    if (*(int *)(p_Var9 + 0x10) != -1) {
      if (*(int *)(p_Var9 + 0x10) != 0) {
        LOCK();
        pcVar2 = p_Var9 + 0x10;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
        local_31 = *(int *)pcVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10073729a;
        p_Var9 = (_func_void_Node_ptr *)*plVar1;
      }
      QHashData::free_helper(p_Var9);
    }
LAB_10073729a:
    *plVar1 = (long)p_Var6;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007372cd;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007372cd:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007372fd;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007372fd:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073732d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10073732d:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073735d;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10073735d:
  if (p_Var5 != p_Var6) {
    return;
  }
  pQVar3 = *(QModelIndex **)(param_1 + 0x10);
  local_70 = 0xffffffff;
  local_6c = 0xffffffff;
  local_60 = 0;
  local_68 = 0;
  local_88 = 0xffffffff;
  local_84 = 0xffffffff;
  local_78 = 0;
  local_80 = 0;
  iVar4 = (**(code **)(*(long *)pQVar3 + 0x78))(pQVar3,&local_88);
  local_a0 = 0xffffffff;
  local_9c = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x78))(*(long **)(param_1 + 0x10),&local_a0);
  QAbstractItemModel::beginInsertRows(pQVar3,(int)&local_70,iVar4);
  puVar7 = operator_new(0x10);
  puVar7[1] = 0;
  *puVar7 = 0;
  local_a8 = puVar7;
  pvVar8 = operator_new(0xb0);
  FUN_10072dbe0(pvVar8,param_2,param_1);
  *puVar7 = pvVar8;
  pvVar8 = operator_new(0x18);
  FUN_1007333f0(pvVar8,param_1);
  local_a8[1] = pvVar8;
  FUN_1007334c0(pvVar8,param_2);
  FUN_100738b20(param_1 + 0x18,&local_a8);
  FUN_100188480(&local_c0,param_2);
  FUN_1001884b0(&local_c8,param_2);
  local_b8 = local_c0;
  if (1 < *(int *)local_c0 + 1U) {
    LOCK();
    *(int *)local_c0 = *(int *)local_c0 + 1;
    local_31 = *(int *)local_c0 != 0;
    UNLOCK();
  }
  local_b0 = local_c8;
  if (1 < *(int *)local_c8 + 1U) {
    LOCK();
    *(int *)local_c8 = *(int *)local_c8 + 1;
    local_31 = *(int *)local_c8 != 0;
    UNLOCK();
  }
  FUN_1007391a0(plVar1,&local_b8,local_38);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073752c;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10073752c:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100737562;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100737562:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100737598;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100737598:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007375ce;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1007375ce:
  QAbstractItemModel::endInsertRows();
  FUN_100857850(*(undefined8 *)(param_1 + 0x10));
  return;
}

