
/* CVmProfileHelper::set_vm_profile(_PRL_VIRTUAL_MACHINE_PROFILE, CHostHardwareInfo const&,
   CVmConfiguration&) */

undefined8 CVmProfileHelper::set_vm_profile(uint param_1,undefined8 param_2,long *param_3)

{
  QArrayData *pQVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  QMapNodeBase *pQVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  undefined4 local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  QVariant local_68 [16];
  QArrayData *local_58;
  QVariant local_50 [16];
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar4 = CVmCommonOptions::getOsVersion();
  if (10 < iVar4 - 0x806U) {
    return 0x80000018;
  }
  if (iVar4 != 0x8ff && 0xf < iVar4 - 0x801U) {
    return 0x80000018;
  }
  if (4 < param_1) {
    return 0x80000003;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar5 = CVmCommonOptions::getProfile();
  CVmProfile::setType(uVar5,param_1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  bVar3 = (bool)CVmCommonOptions::getProfile();
  CVmProfile::setCustom(bVar3);
  FUN_100016e30(&local_40,param_2,param_3);
  if (1 < *(uint *)local_40) {
    FUN_100022a90(&local_40);
  }
  if (*(long *)(local_40 + 0x10) == 0) {
    pQVar6 = local_40 + 8;
  }
  else {
    pQVar6 = *(QMapNodeBase **)(local_40 + 0x20);
  }
  while( true ) {
    if (1 < *(uint *)local_40) {
      FUN_100022a90(&local_40);
    }
    if (pQVar6 == local_40 + 8) break;
    pQVar1 = *(QArrayData **)(pQVar6 + 0x18);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QVariant::QVariant(local_50,*(QVariant **)
                                 (*(long *)(pQVar6 + 0x20) + 0x10 +
                                 ((long)*(int *)(*(long *)(pQVar6 + 0x20) + 8) + (long)(int)param_1)
                                 * 8));
    pcVar2 = *(code **)(*param_3 + 0x88);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_58 = pQVar1;
    QVariant::QVariant(local_68,local_50);
    (*pcVar2)(param_3,&local_58,local_68,0);
    QVariant::~QVariant(local_68);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000169f8;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1000169f8:
    QVariant::~QVariant(local_50);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100016920;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
LAB_100016920:
    pQVar6 = (QMapNodeBase *)QMapNodeBase::nextNode();
  }
  if (param_1 != 4) goto LAB_100016c5b;
  lVar7 = CVmConfiguration::getVmHardwareList();
  local_88 = *(Data **)(lVar7 + 0x1d0);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 == 0) {
      QListData::detach((int)&local_88);
      lVar8 = (long)*(int *)(local_88 + 8);
      lVar7 = *(long *)(lVar7 + 0x1d0);
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_88 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_88 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_88 + 0xc))
         ) {
        _memcpy(local_88 + lVar8 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
  }
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
    do {
      local_70 = 1;
      CVmDevice::setConnected((uint)*(undefined8 *)local_80);
      local_80 = local_80 + 8;
    } while (local_80 != local_78);
  }
  local_70 = 1;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100016b49;
    }
    QListData::dispose(local_88);
  }
LAB_100016b49:
  lVar7 = CVmConfiguration::getVmHardwareList();
  local_a8 = *(Data **)(lVar7 + 0x1d8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 == 0) {
      QListData::detach((int)&local_a8);
      lVar8 = (long)*(int *)(local_a8 + 8);
      lVar7 = *(long *)(lVar7 + 0x1d8);
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_a8 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_a8 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_a8 + 0xc))
         ) {
        _memcpy(local_a8 + lVar8 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
    }
  }
  local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
  local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_a8 + 8) != *(int *)(local_a8 + 0xc)) {
    do {
      local_90 = 1;
      CVmSoundDevice::setVolumeSync(SUB81(*(undefined8 *)local_a0,0));
      local_a0 = local_a0 + 8;
    } while (local_a0 != local_98);
  }
  local_90 = 1;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100016c5b;
    }
    QListData::dispose(local_a8);
  }
LAB_100016c5b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_100022940();
      QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_40);
  }
  return 0;
}

