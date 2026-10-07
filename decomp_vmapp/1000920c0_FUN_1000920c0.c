
int FUN_1000920c0(long param_1,int param_2,CVmEventParameter *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  CVmEventParameter *pCVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  CVmOpticalDisk *pCVar11;
  long *plVar12;
  CVmOpticalDisk *pCVar13;
  bool bVar14;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QArrayData *local_288;
  CVmOpticalDisk local_280 [240];
  QArrayData *local_190;
  QArrayData *local_188;
  CVmOpticalDisk local_180 [240];
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  uint local_48;
  Data *local_40;
  undefined1 local_31;
  
  cVar1 = FUN_100091c30();
  if (cVar1 == '\0') {
    return -0x7ffffbdb;
  }
  lVar5 = CVmConfiguration::getVmHardwareList();
  local_40 = *(Data **)(lVar5 + 0x1a8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar9 = (long)*(int *)(local_40 + 8);
      lVar5 = *(long *)(lVar5 + 0x1a8);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_40 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_40 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_40 + 0xc))) {
        _memcpy(local_40 + lVar9 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar10 * 8);
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
      lVar5 = (long)*(int *)(local_60 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_60 + lVar5 * 8) &&
         (lVar9 = *(int *)(local_60 + 0xc) - lVar5, lVar9 != 0 && lVar5 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar5 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar9 * 8);
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
  pCVar13 = (CVmOpticalDisk *)0x0;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    pCVar11 = (CVmOpticalDisk *)0x0;
    do {
      if (local_48 == 0) {
LAB_100092257:
        local_58 = local_58 + 8;
        local_48 = 1;
      }
      else {
        pCVar13 = *(CVmOpticalDisk **)local_58;
        iVar2 = CVmDevice::getEnabled();
        if (iVar2 == 0) goto LAB_100092257;
        local_58 = local_58 + 8;
        uVar8 = local_48 ^ 1;
        bVar14 = local_48 == 1;
        pCVar11 = pCVar13;
        local_48 = uVar8;
        if (bVar14) break;
      }
      pCVar13 = pCVar11;
    } while (local_58 != local_50);
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009229e;
    }
    QListData::dispose(local_60);
  }
LAB_10009229e:
  iVar2 = -0x7ffffbe8;
  if (pCVar13 == (CVmOpticalDisk *)0x0) goto LAB_100092cc9;
  if ((param_2 == 0) && (param_4 != 0)) {
    iVar2 = 0x1aa;
    FUN_10008f1c0(param_1,1,param_4,1,1);
    goto LAB_100092cc9;
  }
  FUN_100091bc0(&local_68,param_1,param_2);
  if (*(int *)(local_68 + 4) == 0) {
    iVar2 = -0x7ffffc90;
    if (param_3 != (CVmEventParameter *)0x0) {
      pCVar7 = operator_new(0xd0);
      FUN_1000a4ca0(&local_70,param_1);
      local_78 = (QArrayData *)QString::fromAscii_helper("vm_message_param_2",0x12);
      CVmEventParameter::CVmEventParameter(pCVar7,1,&local_70,&local_78);
      CVmEvent::addEventParameter(param_3);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100092b22;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100092b22:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100092b52;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100092b52:
      pCVar7 = operator_new(0xd0);
      local_88 = (QArrayData *)QString::fromAscii_helper("%1",2);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmCommonOptions();
      uVar4 = CVmCommonOptions::getOsVersion();
      QString::arg(&local_80,&local_88,uVar4,0,10,0x20);
      local_90 = (QArrayData *)QString::fromAscii_helper("vm_message_param_2",0x12);
      CVmEventParameter::CVmEventParameter(pCVar7,0,&local_80,&local_90);
      CVmEvent::addEventParameter(param_3);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100092c2a;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100092c2a:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100092c5d;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100092c5d:
      if (*(int *)local_88 == -1) {
        iVar2 = -0x7ffffc90;
      }
      else {
        iVar2 = -0x7ffffc90;
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100092c99;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
  }
  else {
    CVmOpticalDisk::CVmOpticalDisk(local_180,pCVar13);
    CVmOpticalDisk::operator=(*(CVmOpticalDisk **)(&DAT_000010e0 + param_1),pCVar13);
    local_188 = local_68;
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
    CVmDevice::setSystemName((QTypedArrayData<unsigned_short> *)local_180);
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009237b;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_10009237b:
    local_190 = local_68;
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
    CVmDevice::setUserFriendlyName((QTypedArrayData<unsigned_short> *)local_180);
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_31 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000923e0;
      }
      QArrayData::deallocate(local_190,2,8);
    }
LAB_1000923e0:
    CVmDevice::setConnected((uint)local_180);
    CVmDevice::setEmulatedType((uint)local_180);
    CVmDevice::setRemote(SUB81(local_180,0));
    iVar2 = CVmDevice::getConnected();
    if (iVar2 == 1) {
      CVmOpticalDisk::CVmOpticalDisk(local_280,pCVar13);
      CVmDevice::setConnected((uint)local_280);
      local_290 = (QArrayData *)QString::fromAscii_helper("CdRom",5);
      FUN_100098340(&local_288,local_280,&local_290);
      if (*(int *)local_290 != -1) {
        if (*(int *)local_290 != 0) {
          LOCK();
          *(int *)local_290 = *(int *)local_290 + -1;
          local_31 = *(int *)local_290 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000924ad;
        }
        QArrayData::deallocate(local_290,2,8);
      }
LAB_1000924ad:
      CVmDevice::getIndex();
      plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      plVar12 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        *(undefined4 *)(plVar6 + 1) = 1;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_FUN_100bef0d0;
        plVar12 = plVar6;
      }
      FUN_100409080(param_1 + 0x10b0);
      iVar2 = 0;
      if ((*(long *)(param_1 + 0x110) != 0) &&
         (lVar5 = CVmConfiguration::getVmHardwareList(), lVar5 != 0)) {
        iVar2 = FUN_1000914b0(0,5,&local_288);
      }
      if (plVar12 != (long *)0x0) {
        LOCK();
        plVar6 = plVar12 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if ((param_3 != (CVmEventParameter *)0x0) && (iVar2 < 0)) {
        pCVar7 = operator_new(0xd0);
        QString::number((int)&local_298,5);
        local_2a0 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
        CVmEventParameter::CVmEventParameter(pCVar7,1,&local_298,&local_2a0);
        CVmEvent::addEventParameter(param_3);
        if (*(int *)local_2a0 != -1) {
          if (*(int *)local_2a0 != 0) {
            LOCK();
            *(int *)local_2a0 = *(int *)local_2a0 + -1;
            local_31 = *(int *)local_2a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000925fe;
          }
          QArrayData::deallocate(local_2a0,2,8);
        }
LAB_1000925fe:
        if (*(int *)local_298 != -1) {
          if (*(int *)local_298 != 0) {
            LOCK();
            *(int *)local_298 = *(int *)local_298 + -1;
            local_31 = *(int *)local_298 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100092634;
          }
          QArrayData::deallocate(local_298,2,8);
        }
LAB_100092634:
        pCVar7 = operator_new(0xd0);
        iVar3 = CVmDevice::getIndex();
        QString::number((uint)&local_2a8,iVar3);
        local_2b0 = (QArrayData *)QString::fromAscii_helper("vm_message_param_1",0x12);
        CVmEventParameter::CVmEventParameter(pCVar7,1,&local_2a8,&local_2b0);
        CVmEvent::addEventParameter(param_3);
        if (*(int *)local_2b0 != -1) {
          if (*(int *)local_2b0 != 0) {
            LOCK();
            *(int *)local_2b0 = *(int *)local_2b0 + -1;
            local_31 = *(int *)local_2b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000926dc;
          }
          QArrayData::deallocate(local_2b0,2,8);
        }
LAB_1000926dc:
        if (*(int *)local_2a8 != -1) {
          if (*(int *)local_2a8 != 0) {
            LOCK();
            *(int *)local_2a8 = *(int *)local_2a8 + -1;
            local_31 = *(int *)local_2a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100092715;
          }
          QArrayData::deallocate(local_2a8,2,8);
        }
      }
LAB_100092715:
      if (*(int *)local_288 != -1) {
        if (*(int *)local_288 != 0) {
          LOCK();
          *(int *)local_288 = *(int *)local_288 + -1;
          local_31 = *(int *)local_288 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10009274b;
        }
        QArrayData::deallocate(local_288,2,8);
      }
LAB_10009274b:
      CVmOpticalDisk::~CVmOpticalDisk(local_280);
      if (-1 < iVar2) goto LAB_10009275f;
    }
    else {
LAB_10009275f:
      local_2c0 = (QArrayData *)QString::fromAscii_helper("CdRom",5);
      FUN_100098340(&local_2b8,local_180,&local_2c0);
      if (*(int *)local_2c0 != -1) {
        if (*(int *)local_2c0 != 0) {
          LOCK();
          *(int *)local_2c0 = *(int *)local_2c0 + -1;
          local_31 = *(int *)local_2c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000927c7;
        }
        QArrayData::deallocate(local_2c0,2,8);
      }
LAB_1000927c7:
      CVmDevice::getIndex();
      plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      plVar12 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        *(undefined4 *)(plVar6 + 1) = 1;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_FUN_100bef0d0;
        plVar12 = plVar6;
      }
      FUN_100409080(param_1 + 0x10b0);
      iVar2 = 0;
      if ((*(long *)(param_1 + 0x110) != 0) &&
         (lVar5 = CVmConfiguration::getVmHardwareList(), lVar5 != 0)) {
        iVar2 = FUN_1000914b0(1,5,&local_2b8);
      }
      if (plVar12 != (long *)0x0) {
        LOCK();
        plVar6 = plVar12 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if ((param_3 != (CVmEventParameter *)0x0) && (iVar2 < 0)) {
        pCVar7 = operator_new(0xd0);
        QString::number((int)&local_2c8,5);
        local_2d0 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
        CVmEventParameter::CVmEventParameter(pCVar7,1,&local_2c8,&local_2d0);
        CVmEvent::addEventParameter(param_3);
        if (*(int *)local_2d0 != -1) {
          if (*(int *)local_2d0 != 0) {
            LOCK();
            *(int *)local_2d0 = *(int *)local_2d0 + -1;
            local_31 = *(int *)local_2d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100092922;
          }
          QArrayData::deallocate(local_2d0,2,8);
        }
LAB_100092922:
        if (*(int *)local_2c8 != -1) {
          if (*(int *)local_2c8 != 0) {
            LOCK();
            *(int *)local_2c8 = *(int *)local_2c8 + -1;
            local_31 = *(int *)local_2c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100092958;
          }
          QArrayData::deallocate(local_2c8,2,8);
        }
LAB_100092958:
        pCVar7 = operator_new(0xd0);
        iVar3 = CVmDevice::getIndex();
        QString::number((uint)&local_2d8,iVar3);
        local_2e0 = (QArrayData *)QString::fromAscii_helper("vm_message_param_1",0x12);
        CVmEventParameter::CVmEventParameter(pCVar7,1,&local_2d8,&local_2e0);
        CVmEvent::addEventParameter(param_3);
        if (*(int *)local_2e0 != -1) {
          if (*(int *)local_2e0 != 0) {
            LOCK();
            *(int *)local_2e0 = *(int *)local_2e0 + -1;
            local_31 = *(int *)local_2e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100092a00;
          }
          QArrayData::deallocate(local_2e0,2,8);
        }
LAB_100092a00:
        if (*(int *)local_2d8 != -1) {
          if (*(int *)local_2d8 != 0) {
            LOCK();
            *(int *)local_2d8 = *(int *)local_2d8 + -1;
            local_31 = *(int *)local_2d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100092a39;
          }
          QArrayData::deallocate(local_2d8,2,8);
        }
      }
LAB_100092a39:
      if (*(int *)local_2b8 != -1) {
        if (*(int *)local_2b8 != 0) {
          LOCK();
          *(int *)local_2b8 = *(int *)local_2b8 + -1;
          local_31 = *(int *)local_2b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100092a6f;
        }
        QArrayData::deallocate(local_2b8,2,8);
      }
    }
LAB_100092a6f:
    CVmOpticalDisk::~CVmOpticalDisk(local_180);
  }
LAB_100092c99:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100092cc9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100092cc9:
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

