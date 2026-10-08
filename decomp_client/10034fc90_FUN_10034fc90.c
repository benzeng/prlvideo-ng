
void FUN_10034fc90(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  CVmTravelPauseIdleVM *pCVar7;
  CVmTravelAdaptiveHV *pCVar8;
  CVmTravelOptimizePower *pCVar9;
  CVmTravelAutoprotect *pCVar10;
  long lVar11;
  long lVar12;
  QString local_78;
  undefined4 local_70;
  undefined4 local_6c;
  QString local_68;
  undefined4 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmSettings();
  bVar2 = (bool)CVmSettings::getTravelOptions();
  FUN_100352340(param_1 + 0x20);
  lVar5 = CVmTravelOptions::getSavedOptions();
  local_58 = *(Data **)(lVar5 + 200);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar11 = (long)*(int *)(local_58 + 8);
      lVar5 = *(long *)(lVar5 + 200);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_58 + lVar11 * 8) &&
         (lVar12 = *(int *)(local_58 + 0xc) - lVar11,
         lVar12 != 0 && lVar11 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar11 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar12 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  puVar1 = PTR_shared_null_1021e1288;
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
      local_70 = CVmTravelNetworkAdapter::getStackIndex();
      local_6c = CVmTravelNetworkAdapter::getBoundAdapterIndex();
      CVmTravelNetworkAdapter::getBoundAdapterName();
      QString::operator=(&local_68,&local_78);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10034fde4;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_10034fde4:
      local_60 = CVmTravelNetworkAdapter::getEmulatedType();
      FUN_100352420(param_1 + 0x20,&local_70);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10034fe2a;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_10034fe2a:
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10034fe71;
    }
    QListData::dispose(local_58);
  }
LAB_10034fe71:
  CVmTravelOptions::setEnabled(bVar2);
  CVmTravelOptions::getSavedOptions();
  lVar5 = CVmTravelSavedOptions::getPauseIdleVM();
  if (lVar5 != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar3 = CVmCommonOptions::getOsType();
    if (iVar3 != 9) {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      bVar2 = (bool)CVmTools::getVmCoherence();
      CVmTravelOptions::getSavedOptions();
      CVmTravelSavedOptions::getPauseIdleVM();
      CVmTravelPauseIdleVM::isValue();
      CVmCoherence::setPauseIdleVM(bVar2);
    }
  }
  CVmTravelOptions::getSavedOptions();
  lVar5 = CVmTravelSavedOptions::getAdaptiveHV();
  if (lVar5 != 0) {
    CVmConfiguration::getVmSettings();
    bVar2 = (bool)CVmSettings::getVmRuntimeOptions();
    CVmTravelOptions::getSavedOptions();
    CVmTravelSavedOptions::getAdaptiveHV();
    CVmTravelAdaptiveHV::isValue();
    CVmRunTimeOptions::setEnableAdaptiveHypervisor(bVar2);
  }
  CVmTravelOptions::getSavedOptions();
  lVar5 = CVmTravelSavedOptions::getOptimizePower();
  if (lVar5 != 0) {
    CVmConfiguration::getVmSettings();
    uVar6 = CVmSettings::getVmRuntimeOptions();
    CVmTravelOptions::getSavedOptions();
    CVmTravelSavedOptions::getOptimizePower();
    uVar4 = CVmTravelOptimizePower::getValue();
    CVmRunTimeOptions::setOptimizePowerConsumptionMode(uVar6,uVar4);
  }
  CVmTravelOptions::getSavedOptions();
  lVar5 = CVmTravelSavedOptions::getAutoprotectOptions();
  if (lVar5 != 0) {
    CVmConfiguration::getVmSettings();
    bVar2 = (bool)CVmSettings::getVmAutoprotect();
    CVmTravelOptions::getSavedOptions();
    CVmTravelSavedOptions::getAutoprotectOptions();
    CVmTravelAutoprotect::isValue();
    CVmAutoprotect::setEnabled(bVar2);
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  pCVar7 = (CVmTravelPauseIdleVM *)CVmTravelOptions::getSavedOptions();
  CVmTravelSavedOptions::setPauseIdleVM(pCVar7);
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  pCVar8 = (CVmTravelAdaptiveHV *)CVmTravelOptions::getSavedOptions();
  CVmTravelSavedOptions::setAdaptiveHV(pCVar8);
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  pCVar9 = (CVmTravelOptimizePower *)CVmTravelOptions::getSavedOptions();
  CVmTravelSavedOptions::setOptimizePower(pCVar9);
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  pCVar10 = (CVmTravelAutoprotect *)CVmTravelOptions::getSavedOptions();
  CVmTravelSavedOptions::setAutoprotectOptions(pCVar10);
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  lVar5 = CVmTravelOptions::getSavedOptions();
  FUN_100352570(lVar5 + 200);
  return;
}

