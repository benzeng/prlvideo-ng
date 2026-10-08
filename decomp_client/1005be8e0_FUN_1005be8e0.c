
undefined1 FUN_1005be8e0(long param_1)

{
  code *pcVar1;
  int iVar2;
  QArrayData *pQVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  undefined1 uVar9;
  bool bVar10;
  QString local_80;
  QString local_78;
  _func_void_Node_ptr *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  undefined *local_40;
  undefined1 local_31;
  
  local_40 = PTR_shared_null_1021e15e8;
  iVar5 = *(int *)(param_1 + 0x158);
  if (iVar5 == 2) {
    pQVar3 = *(QArrayData **)(param_1 + 0x150);
    iVar5 = *(int *)pQVar3;
    if (1 < iVar5 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      iVar5 = *(int *)pQVar3;
    }
    iVar2 = *(int *)(pQVar3 + 4);
    if (iVar5 != -1) {
      if (iVar5 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005be94f;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_1005be94f:
    uVar9 = 1;
    if (iVar2 != 0) goto LAB_1005beb63;
    iVar5 = *(int *)(param_1 + 0x158);
  }
  FUN_1005bca20(&local_70,param_1,iVar5);
  FUN_1002b5da0(&local_68,&local_70);
  local_60 = local_68;
  if (*local_68 != -1) {
    if (*local_68 == 0) {
      QListData::detach((int)&local_60);
      iVar5 = local_60[2];
      if (iVar5 != local_60[3]) {
        local_68 = local_68 + (long)local_68[2] * 2 + 4;
        piVar8 = local_60 + (long)iVar5 * 2 + 4;
        lVar7 = (long)local_60[3] * 8 + (long)iVar5 * -8;
        do {
          piVar4 = *(int **)local_68;
          *(int **)piVar8 = piVar4;
          if (1 < *piVar4 + 1U) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_31 = *piVar4 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          local_68 = local_68 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  FUN_100039a80(&local_68);
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bea58;
    }
    QHashData::free_helper(local_70);
  }
LAB_1005bea58:
  if (local_48 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      if (local_58 == local_50) break;
      local_78.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_58;
      if (1 < *(int *)local_78.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        if (*(int *)(param_1 + 0x158) == 1) {
          MacUtils::getRealCdMountName(&local_80,&local_78);
          iVar5 = *(int *)(local_80.field0_0x0 + 4);
          if (iVar5 != 0) {
            uVar9 = 1;
          }
          if (*(int *)local_80.field0_0x0 != -1) {
            if (*(int *)local_80.field0_0x0 != 0) {
              LOCK();
              *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
              local_31 = *(int *)local_80.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005beafa;
            }
            QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
          }
LAB_1005beafa:
          if (iVar5 != 0) goto LAB_1005beb05;
        }
        local_48 = 0;
      }
LAB_1005beb05:
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005beb35;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_1005beb35:
      local_58 = local_58 + 2;
      uVar6 = local_48 ^ 1;
      bVar10 = local_48 != 1;
      local_48 = uVar6;
    } while (bVar10);
  }
  FUN_100039a80(&local_60);
LAB_1005beb63:
  FUN_100039a80(&local_40);
  return uVar9;
}

