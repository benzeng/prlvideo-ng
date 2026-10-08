
undefined8 * FUN_100130190(undefined8 *param_1)

{
  long *plVar1;
  QArrayData *pQVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_5c;
  int *local_58;
  long *local_50;
  long *local_48;
  uint local_40;
  undefined1 local_38 [7];
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15d0;
  FUN_100131a30(&local_58);
  local_50 = (long *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (long *)(local_58 + (long)local_58[3] * 2 + 4);
  local_40 = 1;
  if (local_58[2] != local_58[3]) {
    do {
      plVar1 = (long *)*local_50;
      pQVar2 = (QArrayData *)plVar1[1];
      if (1 < *(int *)pQVar2 + 1U) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + 1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
      }
      if (local_40 != 0) {
        if ((((*plVar1 != 0) && (iVar3 = CVirtualNetwork::getNetworkType(), iVar3 == 1)) &&
            (lVar4 = CVirtualNetwork::getHostOnlyNetwork(), lVar4 != 0)) &&
           (lVar4 = CHostOnlyNetwork::getParallelsAdapter(), lVar4 != 0)) {
          local_5c = CParallelsAdapter::getPrlAdapterIndex();
          FUN_100131ed0(param_1,&local_5c,local_38);
        }
        local_40 = 0;
      }
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001302a6;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_1001302a6:
      local_50 = local_50 + 1;
      uVar5 = local_40 ^ 1;
      bVar6 = local_40 != 1;
      local_40 = uVar5;
    } while ((bVar6) && (local_50 != local_48));
  }
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    FUN_100131840(&local_58,local_58);
  }
  return param_1;
}

