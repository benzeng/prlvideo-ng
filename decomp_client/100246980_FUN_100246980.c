
void FUN_100246980(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Data *pDVar4;
  bool bVar5;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  uint local_48;
  Data *local_40;
  undefined1 local_31;
  
  FUN_100248a70(&local_40,param_1 + 0x138);
  if (1 < *(uint *)local_40) {
    FUN_100248f90(&local_40,*(uint *)(local_40 + 4));
  }
  pDVar4 = local_40 + (long)(int)*(uint *)(local_40 + 8) * 8 + 0x10;
  while( true ) {
    if (1 < *(uint *)local_40) {
      FUN_100248f90(&local_40,*(uint *)(local_40 + 4));
    }
    if (pDVar4 == local_40 + (long)(int)*(uint *)(local_40 + 0xc) * 8 + 0x10) break;
    uVar2 = MessageUtils::getMessageType(**(int **)pDVar4);
    bVar5 = true;
    if ((uVar2 | 2) == 2) goto LAB_100246a77;
    pDVar4 = pDVar4 + 8;
  }
  bVar5 = false;
LAB_100246a77:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100246af3;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar3 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_40);
  }
LAB_100246af3:
  if (bVar5) {
    FUN_100247c40(param_1);
    return;
  }
  FUN_100248a70(&local_68,param_1 + 0x138);
  FUN_1002495a0(&local_60,&local_68);
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
LAB_100246b68:
      iVar1 = *(int *)(local_68 + 0xc);
      if (iVar1 != *(int *)(local_68 + 8)) {
        lVar3 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar1 * -8;
        pDVar4 = local_68 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar4 != (void *)0x0) {
            operator_delete(*(void **)pDVar4);
          }
          pDVar4 = pDVar4 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose(local_68);
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100246b68;
    }
    if (local_48 == 0) goto LAB_100246bf0;
  }
  do {
    if (local_58 == local_50) break;
    FUN_100246da0(param_1,**(undefined8 **)local_58);
    local_58 = local_58 + 8;
    uVar2 = local_48 ^ 1;
    bVar5 = local_48 != 1;
    local_48 = uVar2;
  } while (bVar5);
LAB_100246bf0:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_60 + 0xc);
    if (iVar1 != *(int *)(local_60 + 8)) {
      lVar3 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_60 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_60);
  }
  return;
}

