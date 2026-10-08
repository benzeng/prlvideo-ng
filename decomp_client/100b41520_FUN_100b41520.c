
long FUN_100b41520(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long unaff_RBX;
  int iVar4;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  Data *local_28;
  undefined1 local_19;
  
  FUN_100b40f90(&local_28,param_1);
  local_48 = local_28;
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 == 0) {
      QListData::detach((int)&local_48);
      lVar2 = (long)*(int *)(local_48 + 8);
      unaff_RBX = (long)*(int *)(local_28 + 8);
      if ((local_28 + unaff_RBX * 8 != local_48 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_48 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar2 * 8 + 0x10,local_28 + unaff_RBX * 8 + 0x10,lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + 1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    iVar4 = 1;
    do {
      local_30 = 1;
      unaff_RBX = *(long *)local_40;
      cVar1 = CVirtualNetwork::isEnabled();
      if ((((cVar1 != '\0') && (lVar2 = CVirtualNetwork::getHostOnlyNetwork(), lVar2 != 0)) &&
          (lVar2 = CHostOnlyNetwork::getNATServer(), lVar2 != 0)) &&
         (cVar1 = CNATServer::isEnabled(), cVar1 != '\0')) goto LAB_100b4162f;
      local_40 = local_40 + 8;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  iVar4 = 2;
LAB_100b4162f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100b41655;
    }
    QListData::dispose(local_48);
  }
LAB_100b41655:
  if (iVar4 == 2) {
    unaff_RBX = 0;
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return unaff_RBX;
      }
      local_19 = 0;
    }
    QListData::dispose(local_28);
  }
  return unaff_RBX;
}

