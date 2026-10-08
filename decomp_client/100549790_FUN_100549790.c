
void FUN_100549790(long param_1)

{
  CVirtualNetwork *pCVar1;
  int iVar2;
  CVirtualNetwork *this;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  CVirtualNetwork *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  QAbstractItemModel::beginResetModel();
  lVar7 = *(long *)(param_1 + 0x20);
  iVar2 = *(int *)(lVar7 + 8);
  if (iVar2 != *(int *)(lVar7 + 0xc)) {
    plVar5 = (long *)(lVar7 + 0x10 + (long)iVar2 * 8);
    lVar7 = (long)*(int *)(lVar7 + 0xc) * 8 + (long)iVar2 * -8;
    do {
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x88))();
      }
      plVar5 = plVar5 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  FUN_10054bfc0(param_1 + 0x20);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100175410(uVar6);
  lVar7 = CParallelsNetworkConfig::getVirtualNetworks();
  local_40 = *(Data **)(lVar7 + 0x98);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar3 = (long)*(int *)(local_40 + 8);
      lVar7 = *(long *)(lVar7 + 0x98);
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_40 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_40 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar3 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_60 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_60);
      lVar7 = (long)*(int *)(local_60 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_60 + lVar7 * 8) &&
         (lVar3 = *(int *)(local_60 + 0xc) - lVar7, lVar3 != 0 && lVar7 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar7 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      pCVar1 = *(CVirtualNetwork **)local_58;
      lVar7 = CVirtualNetwork::getHostOnlyNetwork();
      if (((lVar7 != 0) && (lVar7 = CHostOnlyNetwork::getParallelsAdapter(), lVar7 != 0)) &&
         (iVar2 = CVirtualNetwork::getNetworkType(), iVar2 == 1)) {
        this = operator_new(0xd8);
        CVirtualNetwork::CVirtualNetwork(this,pCVar1);
        local_68 = this;
        FUN_1001798a0(param_1 + 0x20,&local_68);
      }
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005499bf;
    }
    QListData::dispose(local_60);
  }
LAB_1005499bf:
  QAbstractItemModel::endResetModel();
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

