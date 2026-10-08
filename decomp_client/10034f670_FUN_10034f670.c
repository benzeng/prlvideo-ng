
void FUN_10034f670(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  CVmTravelPauseIdleVM *pCVar4;
  CVmTravelAdaptiveHV *pCVar5;
  CVmTravelOptimizePower *pCVar6;
  CVmTravelAutoprotect *pCVar7;
  long lVar8;
  QString this;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  QArrayData *local_88;
  QTypedArrayData<unsigned_short> *local_80;
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
  CVmSettings::getVmTools();
  CVmTools::getVmCoherence();
  CVmCoherence::isPauseIdleVM();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::isEnableAdaptiveHypervisor();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  uVar2 = CVmRunTimeOptions::getOptimizePowerConsumptionMode();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmAutoprotect();
  CVmAutoprotect::isEnabled();
  pCVar4 = operator_new(0xb0);
  CVmTravelPauseIdleVM::CVmTravelPauseIdleVM(pCVar4);
  CVmTravelPauseIdleVM::setValue(SUB81(pCVar4,0));
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  pCVar4 = (CVmTravelPauseIdleVM *)CVmTravelOptions::getSavedOptions();
  CVmTravelSavedOptions::setPauseIdleVM(pCVar4);
  pCVar5 = operator_new(0xb0);
  CVmTravelAdaptiveHV::CVmTravelAdaptiveHV(pCVar5);
  CVmTravelAdaptiveHV::setValue(SUB81(pCVar5,0));
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  pCVar5 = (CVmTravelAdaptiveHV *)CVmTravelOptions::getSavedOptions();
  CVmTravelSavedOptions::setAdaptiveHV(pCVar5);
  pCVar6 = operator_new(0xb0);
  CVmTravelOptimizePower::CVmTravelOptimizePower(pCVar6);
  CVmTravelOptimizePower::setValue(pCVar6,uVar2);
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  pCVar6 = (CVmTravelOptimizePower *)CVmTravelOptions::getSavedOptions();
  CVmTravelSavedOptions::setOptimizePower(pCVar6);
  pCVar7 = operator_new(0xb0);
  CVmTravelAutoprotect::CVmTravelAutoprotect(pCVar7);
  CVmTravelAutoprotect::setValue(SUB81(pCVar7,0));
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  pCVar7 = (CVmTravelAutoprotect *)CVmTravelOptions::getSavedOptions();
  CVmTravelSavedOptions::setAutoprotectOptions(pCVar7);
  FUN_100352340();
  lVar8 = CVmConfiguration::getVmHardwareList();
  local_58 = *(Data **)(lVar8 + 0x1d0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar10 = (long)*(int *)(local_58 + 8);
      lVar8 = *(long *)(lVar8 + 0x1d0);
      if (((Data *)(lVar8 + (long)*(int *)(lVar8 + 8) * 8) != local_58 + lVar10 * 8) &&
         (lVar11 = *(int *)(local_58 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar10 * 8 + 0x10,(void *)(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8),
                lVar11 * 8);
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
      iVar3 = CVmDevice::getEmulatedType();
      if (iVar3 == 2) {
        local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        local_70 = CVmClusteredDevice::getStackIndex();
        local_6c = CVmGenericNetworkAdapter::getBoundAdapterIndex();
        CVmGenericNetworkAdapter::getBoundAdapterName();
        QString::operator=(&local_68,&local_78);
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10034f95c;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
LAB_10034f95c:
        local_60 = CVmDevice::getEmulatedType();
        FUN_100352420(param_1 + 0x20,&local_70);
        this.field0_0x0 = operator_new(0xc0);
        CVmTravelNetworkAdapter::CVmTravelNetworkAdapter((CVmTravelNetworkAdapter *)this.field0_0x0)
        ;
        local_80 = this.field0_0x0;
        CVmClusteredDevice::getStackIndex();
        CVmTravelNetworkAdapter::setStackIndex((uint)this.field0_0x0);
        CVmGenericNetworkAdapter::getBoundAdapterIndex();
        CVmTravelNetworkAdapter::setBoundAdapterIndex((uint)this.field0_0x0);
        CVmGenericNetworkAdapter::getBoundAdapterName();
        CVmTravelNetworkAdapter::setBoundAdapterName(this);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10034f9fa;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_10034f9fa:
        uVar2 = CVmDevice::getEmulatedType();
        CVmTravelNetworkAdapter::setEmulatedType(this.field0_0x0,uVar2);
        CVmConfiguration::getVmSettings();
        CVmSettings::getTravelOptions();
        lVar8 = CVmTravelOptions::getSavedOptions();
        FUN_100352510(lVar8 + 200,&local_80);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10034fa70;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
      }
LAB_10034fa70:
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
      if ((bool)local_31) goto LAB_10034fab3;
    }
    QListData::dispose(local_58);
  }
LAB_10034fab3:
  CVmConfiguration::getVmSettings();
  bVar1 = (bool)CVmSettings::getTravelOptions();
  CVmTravelOptions::setEnabled(bVar1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar3 = CVmCommonOptions::getOsType();
  if (iVar3 != 9) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    bVar1 = (bool)CVmTools::getVmCoherence();
    CVmCoherence::setPauseIdleVM(bVar1);
  }
  CVmConfiguration::getVmSettings();
  bVar1 = (bool)CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::setEnableAdaptiveHypervisor(bVar1);
  CVmConfiguration::getVmSettings();
  uVar9 = CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::setOptimizePowerConsumptionMode(uVar9,0);
  CVmConfiguration::getVmSettings();
  bVar1 = (bool)CVmSettings::getVmAutoprotect();
  CVmAutoprotect::setEnabled(bVar1);
  return;
}

