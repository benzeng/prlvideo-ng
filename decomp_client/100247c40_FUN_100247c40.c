
void FUN_100247c40(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  Data *pDVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  bool bVar11;
  undefined8 local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  int local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  uint local_40;
  undefined1 local_31;
  
  FUN_100248a70(&local_60);
  FUN_1002495a0(&local_58,&local_60);
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 == -1) {
LAB_100247d23:
    iVar7 = 0;
    iVar10 = 0;
    do {
      while( true ) {
        iVar6 = iVar10;
        iVar8 = iVar7;
        if (local_50 == local_48) goto LAB_100247db4;
        piVar1 = *(int **)local_50;
        iVar8 = *piVar1;
        iVar6 = piVar1[1];
        uVar2 = *(undefined8 *)piVar1;
        if ((local_40 != 0) &&
           (uVar4 = MessageUtils::getMessageType(iVar8), (uVar4 & 0xfffffffd) == 0)) break;
        local_50 = local_50 + 8;
        local_40 = 1;
      }
      FUN_100246da0(param_1,uVar2);
      local_50 = local_50 + 8;
      uVar3 = local_40 ^ 1;
      bVar11 = local_40 != 1;
      iVar7 = iVar8;
      iVar10 = iVar6;
      local_40 = uVar3;
    } while (bVar11);
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_100247ccb:
      iVar8 = *(int *)(local_60 + 0xc);
      if (iVar8 != *(int *)(local_60 + 8)) {
        lVar9 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar8 * -8;
        pDVar5 = local_60 + (long)iVar8 * 8 + 8;
        do {
          if (*(void **)pDVar5 != (void *)0x0) {
            operator_delete(*(void **)pDVar5);
          }
          pDVar5 = pDVar5 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100247ccb;
    }
    iVar6 = 0;
    iVar8 = 0;
    if (local_40 != 0) goto LAB_100247d23;
  }
LAB_100247db4:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100247e26;
    }
    iVar7 = *(int *)(local_58 + 0xc);
    if (iVar7 != *(int *)(local_58 + 8)) {
      lVar9 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar7 * -8;
      pDVar5 = local_58 + (long)iVar7 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_100247e26:
  FUN_100248a70(&local_88,param_1 + 0x138);
  FUN_1002495a0(&local_80,&local_88);
  local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
  local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
  local_68 = 1;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 == 0) {
LAB_100247e89:
      iVar7 = *(int *)(local_88 + 0xc);
      if (iVar7 != *(int *)(local_88 + 8)) {
        lVar9 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar7 * -8;
        pDVar5 = local_88 + (long)iVar7 * 8 + 8;
        do {
          if (*(void **)pDVar5 != (void *)0x0) {
            operator_delete(*(void **)pDVar5);
          }
          pDVar5 = pDVar5 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose(local_88);
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100247e89;
    }
    if (local_68 == 0) goto LAB_100247f2f;
  }
  if (local_78 != local_70) {
    do {
      local_90 = **(undefined8 **)local_78;
      if (((int)local_90 != iVar8) || ((int)((ulong)local_90 >> 0x20) != iVar6)) {
        FUN_100248b90(param_1 + 0x138,&local_90);
      }
      local_78 = local_78 + 8;
      local_68 = 1;
    } while (local_78 != local_70);
  }
LAB_100247f2f:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar8 = *(int *)(local_80 + 0xc);
    if (iVar8 != *(int *)(local_80 + 8)) {
      lVar9 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar8 * -8;
      pDVar5 = local_80 + (long)iVar8 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_80);
  }
  return;
}

