
/* CXmlModelHelper::syncScsiDevicesSubType(CVmConfiguration*, CVmConfiguration const*) */

int CXmlModelHelper::syncScsiDevicesSubType(CVmConfiguration *param_1,CVmConfiguration *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  QArrayData *local_b0;
  QArrayData *local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  undefined4 local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  undefined4 local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  uint local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_100ba2188;
  lVar6 = CVmConfiguration::getVmHardwareList();
  FUN_100015f30(&local_40,lVar6 + 0x1a8);
  lVar6 = CVmConfiguration::getVmHardwareList();
  FUN_100015ff0(&local_40,lVar6 + 0x1b0);
  lVar6 = CVmConfiguration::getVmHardwareList();
  FUN_100015ff0(&local_40,lVar6 + 0x200);
  local_60 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_60);
      lVar6 = (long)*(int *)(local_60 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_60 + lVar6 * 8) &&
         (lVar8 = *(int *)(local_60 + 0xc) - lVar6, lVar8 != 0 && lVar6 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar6 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar8 * 8);
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
  local_48 = 1;
  iVar3 = 0xff;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    iVar3 = 0xff;
    do {
      if ((local_48 == 0) || (iVar2 = CVmClusteredDevice::getInterfaceType(), iVar2 != 1)) {
        local_58 = local_58 + 8;
        local_48 = 1;
      }
      else {
        iVar3 = CVmClusteredDevice::getSubType();
        local_58 = local_58 + 8;
        uVar7 = local_48 ^ 1;
        bVar9 = local_48 == 1;
        local_48 = uVar7;
        if (bVar9) break;
      }
    } while (local_58 != local_50);
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100013d0b;
    }
    QListData::dispose(local_60);
  }
LAB_100013d0b:
  lVar6 = CVmConfiguration::getVmHardwareList();
  FUN_100015f30(&local_40,lVar6 + 0x1a8);
  lVar6 = CVmConfiguration::getVmHardwareList();
  FUN_100015ff0(&local_40,lVar6 + 0x1b0);
  lVar6 = CVmConfiguration::getVmHardwareList();
  FUN_100015ff0(&local_40,lVar6 + 0x200);
  if (iVar3 == 0xff) {
    local_80 = local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach((int)&local_80);
        lVar6 = (long)*(int *)(local_80 + 8);
        if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_80 + lVar6 * 8) &&
           (lVar8 = *(int *)(local_80 + 0xc) - lVar6,
           lVar8 != 0 && lVar6 <= *(int *)(local_80 + 0xc))) {
          _memcpy(local_80 + lVar6 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                  lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
    local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
    iVar3 = 0xff;
    if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
      iVar3 = 0xff;
      iVar2 = 0x7fffffff;
      do {
        local_68 = 1;
        lVar6 = *(long *)local_78;
        iVar4 = CVmClusteredDevice::getInterfaceType();
        if (((iVar4 == 1) && (*(int *)(lVar6 + 0x68) < iVar2)) &&
           (iVar4 = CVmClusteredDevice::getSubType(), iVar4 != 0xff)) {
          iVar2 = *(int *)(lVar6 + 0x68);
          iVar3 = CVmClusteredDevice::getSubType();
        }
        local_78 = local_78 + 8;
      } while (local_78 != local_70);
    }
    local_68 = 1;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100013e8f;
      }
      QListData::dispose(local_80);
    }
LAB_100013e8f:
    iVar2 = 0xff;
    if (iVar3 == 0xff) goto LAB_1000140a8;
  }
  local_a0 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_a0);
      lVar6 = (long)*(int *)(local_a0 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_a0 + lVar6 * 8) &&
         (lVar8 = *(int *)(local_a0 + 0xc) - lVar6, lVar8 != 0 && lVar6 <= *(int *)(local_a0 + 0xc))
         ) {
        _memcpy(local_a0 + lVar6 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_98 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
  local_90 = local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10;
  if (*(int *)(local_a0 + 8) != *(int *)(local_a0 + 0xc)) {
    do {
      local_88 = 1;
      uVar1 = *(undefined8 *)local_98;
      iVar2 = CVmClusteredDevice::getInterfaceType();
      if ((iVar2 == 1) && (iVar2 = CVmClusteredDevice::getSubType(), iVar2 != iVar3)) {
        CVmDevice::getSystemName();
        QString::toUtf8();
        lVar6 = *(long *)(local_a8 + 0x10);
        uVar5 = CVmClusteredDevice::getSubType();
        FUN_1008e3970("","vm",0,"SCSI device \"%s\" subtype synced from %d to %d",local_a8 + lVar6,
                      uVar5,iVar3);
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100014008;
          }
          QArrayData::deallocate(local_a8,1,8);
        }
LAB_100014008:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10001403e;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_10001403e:
        CVmClusteredDevice::setSubType((uint)uVar1);
      }
      local_98 = local_98 + 8;
    } while (local_98 != local_90);
  }
  local_88 = 1;
  iVar2 = iVar3;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000140a8;
    }
    QListData::dispose(local_a0);
  }
LAB_1000140a8:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar2;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return iVar2;
}

