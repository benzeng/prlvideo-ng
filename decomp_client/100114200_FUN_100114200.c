
undefined1 FUN_100114200(long param_1,QString param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  QString this;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  QArrayData *pQVar8;
  QArrayData *local_98;
  QTypedArrayData<unsigned_short> *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  cVar1 = CHwHardDisk::isRemovable();
  if (cVar1 == '\0') {
    local_58 = *(Data **)(param_1 + 0x98);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 == 0) {
        QListData::detach((int)&local_58);
        lVar5 = (long)*(int *)(local_58 + 8);
        lVar4 = *(long *)(param_1 + 0x98);
        if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_58 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_58 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))) {
          _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
    }
    local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
    local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
    if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
      do {
        local_40 = 1;
        uVar2 = CHwHddPartition::getType();
        cVar1 = FUN_100ccffc0(uVar2);
        if ((cVar1 != '\0') && (lVar4 = CHwHddPartition::getOsInfo(), lVar4 != 0)) {
          CHwHddPartition::getOsInfo();
          iVar3 = CHwOsInfo::getOsVersion();
          uVar2 = CHwOsInfo::getOsArchitecture();
          CHwHddPartition::getSystemName();
          QString::toUtf8();
          pQVar8 = local_60 + *(long *)(local_60 + 0x10);
          EnumUtils::OsVerToString((uint)&local_78);
          QString::toUtf8();
          if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
            QByteArray::reallocData
                      (&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f);
          }
          FUN_100df99c0("","prl_client_app",0,"BootCamp \'%s\' OS version: \'%s\', Arch: %d",pQVar8,
                        local_70 + *(long *)(local_70 + 0x10),uVar2);
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001143ff;
            }
            QArrayData::deallocate(local_70,1,8);
          }
LAB_1001143ff:
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10011442f;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_10011442f:
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10011445f;
            }
            QArrayData::deallocate(local_60,1,8);
          }
LAB_10011445f:
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10011448f;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_10011448f:
          if ((iVar3 - 0x807U < 10) && ((0x3fdU >> (iVar3 - 0x807U & 0x1f) & 1) != 0)) {
            if (param_2.field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) {
              CHwHardDisk::getDeviceId();
              CVmDevice::setSystemName(param_2);
              if (*(int *)local_80 != -1) {
                if (*(int *)local_80 != 0) {
                  LOCK();
                  *(int *)local_80 = *(int *)local_80 + -1;
                  local_31 = *(int *)local_80 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100114568;
                }
                QArrayData::deallocate(local_80,2,8);
              }
LAB_100114568:
              CHwHardDisk::getDeviceName();
              CVmDevice::setUserFriendlyName(param_2);
              if (*(int *)local_88 != -1) {
                if (*(int *)local_88 != 0) {
                  LOCK();
                  *(int *)local_88 = *(int *)local_88 + -1;
                  local_31 = *(int *)local_88 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001145b4;
                }
                QArrayData::deallocate(local_88,2,8);
              }
LAB_1001145b4:
              CHwHardDisk::getDeviceSize();
              CVmHardDisk::setSize((ulong)param_2.field0_0x0);
              CVmDevice::setEmulatedType((uint)param_2.field0_0x0);
              this.field0_0x0 = operator_new(0xb0);
              CVmHddPartition::CVmHddPartition((CVmHddPartition *)this.field0_0x0);
              local_90 = this.field0_0x0;
              CHwHddPartition::getSystemName();
              CVmHddPartition::setSystemName(this);
              if (*(int *)local_98 != -1) {
                if (*(int *)local_98 != 0) {
                  LOCK();
                  *(int *)local_98 = *(int *)local_98 + -1;
                  local_31 = *(int *)local_98 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100114648;
                }
                QArrayData::deallocate(local_98,2,8);
              }
LAB_100114648:
              FUN_1001297e0(param_2.field0_0x0 + 0xf0,&local_90);
            }
            if (param_3 != (int *)0x0) {
              *param_3 = iVar3;
            }
            uVar7 = 1;
            if (param_4 != (undefined4 *)0x0) {
              *param_4 = uVar2;
            }
            goto LAB_1001144cf;
          }
        }
        local_50 = local_50 + 8;
      } while (local_50 != local_48);
    }
    local_40 = 1;
    uVar7 = 0;
LAB_1001144cf:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        if (*(int *)local_58 != 0) {
          return uVar7;
        }
        local_31 = 0;
      }
      QListData::dispose(local_58);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

