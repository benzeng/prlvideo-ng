
undefined8 * FUN_100b40f90(undefined8 *param_1)

{
  undefined8 uVar1;
  QMapNodeBase *pQVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  QMapNodeBase *pQVar6;
  long lVar7;
  QMapNodeBase *pQVar8;
  long lVar9;
  uint uVar10;
  QMapNodeBase *pQVar11;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  lVar5 = CParallelsNetworkConfig::getVirtualNetworks();
  pQVar11 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  if (lVar5 == 0) {
    *param_1 = PTR_shared_null_1021e15e8;
    return param_1;
  }
  local_40 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_60 = *(Data **)(lVar5 + 0x98);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar7 = (long)*(int *)(local_60 + 8);
      lVar5 = *(long *)(lVar5 + 0x98);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_60 + lVar7 * 8) &&
         (lVar9 = *(int *)(local_60 + 0xc) - lVar7, lVar9 != 0 && lVar7 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    pQVar11 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    do {
      local_48 = 1;
      uVar1 = *(undefined8 *)local_58;
      iVar3 = CVirtualNetwork::getNetworkType();
      if (((iVar3 == 1) && (lVar5 = CVirtualNetwork::getHostOnlyNetwork(), lVar5 != 0)) &&
         (lVar5 = CHostOnlyNetwork::getParallelsAdapter(), lVar5 != 0)) {
        uVar4 = CParallelsAdapter::getPrlAdapterIndex();
        if (1 < *(uint *)pQVar11) {
          FUN_100b46550(&local_40);
          pQVar11 = local_40;
        }
        pQVar6 = (QMapNodeBase *)0x0;
        pQVar2 = *(QMapNodeBase **)(pQVar11 + 0x10);
        if (*(QMapNodeBase **)(pQVar11 + 0x10) == (QMapNodeBase *)0x0) {
          pQVar8 = pQVar11 + 8;
LAB_100b41125:
          pQVar6 = (QMapNodeBase *)
                   QMapDataBase::createNode((int)pQVar11,0x28,(QMapNodeBase *)0x8,SUB81(pQVar8,0));
          *(uint *)(pQVar6 + 0x18) = uVar4;
        }
        else {
          do {
            while (pQVar8 = pQVar2, uVar10 = *(uint *)(pQVar8 + 0x18), uVar10 < uVar4) {
              pQVar2 = *(QMapNodeBase **)(pQVar8 + 0x10);
              if (*(QMapNodeBase **)(pQVar8 + 0x10) == (QMapNodeBase *)0x0) {
                if (pQVar6 == (QMapNodeBase *)0x0) goto LAB_100b41125;
                uVar10 = *(uint *)(pQVar6 + 0x18);
                goto LAB_100b41112;
              }
            }
            pQVar6 = pQVar8;
            pQVar2 = *(QMapNodeBase **)(pQVar8 + 8);
          } while (*(QMapNodeBase **)(pQVar8 + 8) != (QMapNodeBase *)0x0);
LAB_100b41112:
          if (uVar4 < uVar10) goto LAB_100b41125;
        }
        *(undefined8 *)(pQVar6 + 0x20) = uVar1;
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
      if ((bool)local_31) goto LAB_100b41193;
    }
    QListData::dispose(local_60);
  }
LAB_100b41193:
  FUN_100b463c0(param_1,&local_40);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    if (*(long *)(pQVar11 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar11,(int)*(long *)(pQVar11 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar11);
  }
  return param_1;
}

