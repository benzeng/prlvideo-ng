
uint FUN_100131370(long param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  int iVar3;
  long lVar4;
  _func_void_Node_ptr *p_Var5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_5c;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  _func_void_Node_ptr *local_38;
  undefined1 local_30 [7];
  undefined1 local_29;
  
  local_38 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  local_58 = *(Data **)(param_1 + 0x98);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar6 = (long)*(int *)(local_58 + 8);
      lVar4 = *(long *)(param_1 + 0x98);
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_58 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_58 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar6 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      iVar3 = CVirtualNetwork::getNetworkType();
      if (((iVar3 == 1) && (lVar4 = CVirtualNetwork::getHostOnlyNetwork(), lVar4 != 0)) &&
         (lVar4 = CHostOnlyNetwork::getParallelsAdapter(), lVar4 != 0)) {
        local_5c = CParallelsAdapter::getPrlAdapterIndex();
        FUN_100131ed0(&local_38,&local_5c,local_30);
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001314bf;
    }
    QListData::dispose(local_58);
  }
LAB_1001314bf:
  p_Var2 = local_38;
  uVar9 = 0;
  while ((iVar3 = FUN_100b47630(), uVar8 = 0xffffffff, (int)uVar9 < iVar3 &&
         (uVar8 = uVar9, *(uint *)(p_Var2 + 0x20) != 0))) {
    p_Var5 = *(_func_void_Node_ptr **)
              (*(long *)(p_Var2 + 8) +
              ((ulong)(*(uint *)(p_Var2 + 0x24) ^ uVar9) % (ulong)*(uint *)(p_Var2 + 0x20)) * 8);
    while( true ) {
      if (p_Var5 == p_Var2) goto LAB_10013151b;
      if ((*(uint *)(p_Var5 + 8) == (*(uint *)(p_Var2 + 0x24) ^ uVar9)) &&
         (uVar9 == *(uint *)(p_Var5 + 0xc))) break;
      p_Var5 = *(_func_void_Node_ptr **)p_Var5;
    }
    if (p_Var5 == p_Var2) break;
    uVar9 = uVar9 + 1;
  }
LAB_10013151b:
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return uVar8;
      }
    }
    QHashData::free_helper(p_Var2);
  }
  return uVar8;
}

