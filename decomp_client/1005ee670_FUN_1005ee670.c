
long FUN_1005ee670(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  uint local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar5 = *(long *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(?)Warning: Appliance descriptor doesn\'t containt selected appliance.");
    return 0;
  }
  CAppliance::getType();
  iVar1 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),
                     PTR_s_ModernIE_102275038,0xffffffff,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ee6fc;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005ee6fc:
  if (iVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0xa0);
    local_60 = *(Data **)(lVar5 + 0x98);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 == 0) {
        QListData::detach((int)&local_60);
        lVar3 = (long)*(int *)(local_60 + 8);
        lVar5 = *(long *)(lVar5 + 0x98);
        if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_60 + lVar3 * 8) &&
           (lVar4 = *(int *)(local_60 + 0xc) - lVar3,
           lVar4 != 0 && lVar3 <= *(int *)(local_60 + 0xc))) {
          _memcpy(local_60 + lVar3 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8)
                  ,lVar4 * 8);
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
    local_48 = 1;
    lVar5 = 0;
    if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
      lVar3 = 0;
      do {
        if ((local_48 == 0) || (lVar5 = *(long *)local_58, lVar5 == 0)) {
LAB_1005ee897:
          local_58 = local_58 + 8;
          local_48 = 1;
          lVar5 = lVar3;
        }
        else {
          CAppliance::getType();
          iVar1 = QString::compare_helper
                            (local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)(local_68 + 4),
                             PTR_s_ModernIE_102275038,0xffffffff,1);
          if (iVar1 == 0) {
            iVar1 = CAppliance::getApplianceOsVer();
            bVar6 = iVar1 == 0;
          }
          else {
            bVar6 = false;
          }
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005ee868;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_1005ee868:
          if (!bVar6) goto LAB_1005ee897;
          local_58 = local_58 + 8;
          uVar2 = local_48 ^ 1;
          bVar6 = local_48 == 1;
          local_48 = uVar2;
          if (bVar6) break;
        }
        lVar3 = lVar5;
      } while (local_58 != local_50);
    }
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ee8e2;
      }
      QListData::dispose(local_60);
    }
  }
LAB_1005ee8e2:
  if (lVar5 == 0) {
    lVar5 = 0;
    FUN_100df99c0("","prl_client_app",0,"(?)Warning: Can\'t find presentation appliance for %s",
                  PTR_s_ModernIE_102275038);
  }
  return lVar5;
}

