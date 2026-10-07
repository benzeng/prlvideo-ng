
void FUN_100076010(long param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  Data *local_158;
  Data *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  CVmEvent local_138 [224];
  QEvent local_58 [39];
  undefined1 local_31;
  
  CVmEvent::CVmEvent(local_138);
  CVmEventBase::setEventType(local_138,0x186b5);
  local_140 = *(QArrayData **)(*(long *)(param_1 + 0x10) + 0x18);
  if (1 < *(int *)local_140 + 1U) {
    LOCK();
    *(int *)local_140 = *(int *)local_140 + 1;
    local_31 = *(int *)local_140 != 0;
    UNLOCK();
  }
  CVmEventBase::setEventIssuerId((QTypedArrayData<unsigned_short> *)local_138);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000760c5;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1000760c5:
  local_148 = *(QArrayData **)(*(long *)(param_1 + 0x10) + 0x18);
  if (1 < *(int *)local_148 + 1U) {
    LOCK();
    *(int *)local_148 = *(int *)local_148 + 1;
    local_31 = *(int *)local_148 != 0;
    UNLOCK();
  }
  CVmEventBase::setInitRequestId((QTypedArrayData<unsigned_short> *)local_138);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100076135;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100076135:
  CVmEventBase::setEventIssuerType(local_138,0);
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getCpu();
  cVar2 = CVmCpu::isEnableHotplug();
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getCpu();
  cVar3 = CVmCpu::isEnableHotplug();
  if (cVar2 == cVar3) {
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getMemory();
    bVar4 = CVmMemory::isEnableHotplug();
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getMemory();
    bVar5 = CVmMemory::isEnableHotplug();
    if ((bVar4 ^ bVar5) == 1) goto LAB_1000761ce;
  }
  else {
LAB_1000761ce:
    FUN_100076eb0(param_1,param_2,local_138,0x80000291);
  }
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getCpu();
  iVar8 = CVmCpu::getNumber();
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getCpu();
  iVar9 = CVmCpu::getNumber();
  if ((iVar8 != 0) && (iVar8 != iVar9)) {
    iVar8 = FUN_1000b1aa0(DAT_1011c3698,iVar8);
    if (iVar8 < 0) {
      FUN_100076eb0(param_1,param_2,local_138,iVar8);
    }
    if ((iVar8 == -0x7ffffd6f) || (iVar8 == 0)) {
      CVmConfiguration::getVmHardwareList();
      uVar10 = CVmHardware::getCpu();
      CVmCpu::setNumber(uVar10);
    }
  }
  CVmConfiguration::getVmHardwareList();
  uVar12 = CVmHardware::getMemory();
  CVmConfiguration::getVmHardwareList();
  uVar10 = CVmHardware::getMemory();
  iVar8 = CVmMemory::getRamSize();
  iVar9 = CVmMemory::getRamSize();
  if ((iVar8 != 0) && (iVar8 != iVar9)) {
    iVar8 = FUN_1000af6b0(DAT_1011c3698,uVar12);
    if (iVar8 < 0) {
      FUN_100076eb0(param_1,param_2,local_138,iVar8);
    }
    if ((iVar8 == -0x7ffffd6f) || (iVar8 == 0)) {
      CVmMemory::setRamSize(uVar10);
    }
  }
  cVar2 = CVmMemory::isAutoQuota();
  cVar3 = CVmMemory::isAutoQuota();
  if (cVar2 == cVar3) {
    iVar8 = CVmMemory::getHostMemQuotaMax();
    iVar9 = CVmMemory::getHostMemQuotaMax();
    if (iVar8 != iVar9) goto LAB_100076367;
    iVar8 = CVmMemory::getHostMemQuotaPriority();
    iVar9 = CVmMemory::getHostMemQuotaPriority();
    if (iVar8 != iVar9) goto LAB_100076367;
  }
  else {
LAB_100076367:
    iVar8 = FUN_1000b35d0(DAT_1011c3698,uVar12,0);
    if (iVar8 < 0) {
      FUN_1008e3970("","vm",0,"SetPmmQuota failed with status=%x",iVar8);
      FUN_100076eb0(param_1,param_2,local_138,iVar8);
    }
    else {
      CVmMemory::getHostMemQuotaMax();
      CVmMemory::setHostMemQuotaMax(uVar10);
      CVmMemory::getHostMemQuotaPriority();
      CVmMemory::setHostMemQuotaPriority(uVar10);
      CVmMemory::isAutoQuota();
      CVmMemory::setAutoQuota(SUB41(uVar10,0));
    }
  }
  CVmConfiguration::getVmSettings();
  bVar6 = (bool)CVmSettings::getVirtualPrintersInfo();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVirtualPrintersInfo();
  bVar4 = CVmVirtualPrintersInfo::isUseHostPrinters();
  bVar5 = CVmVirtualPrintersInfo::isUseHostPrinters();
  if ((bVar4 ^ bVar5) == 1) {
    CVmVirtualPrintersInfo::isUseHostPrinters();
    CVmVirtualPrintersInfo::setUseHostPrinters(bVar6);
    FUN_10009c9b0(*(long *)(param_1 + 0x20) + 0x1a70);
  }
  bVar4 = CVmVirtualPrintersInfo::isSyncDefaultPrinter();
  bVar5 = CVmVirtualPrintersInfo::isSyncDefaultPrinter();
  if ((bVar4 ^ bVar5) == 1) {
    CVmVirtualPrintersInfo::isSyncDefaultPrinter();
    CVmVirtualPrintersInfo::setSyncDefaultPrinter(bVar6);
    FUN_10009cab0(*(long *)(param_1 + 0x20) + 0x1a70);
  }
  bVar4 = CVmVirtualPrintersInfo::isShowHostPrinterUI();
  bVar5 = CVmVirtualPrintersInfo::isShowHostPrinterUI();
  if ((bVar4 ^ bVar5) == 1) {
    CVmVirtualPrintersInfo::isShowHostPrinterUI();
    CVmVirtualPrintersInfo::setShowHostPrinterUI(bVar6);
  }
  CVmConfiguration::getVmSettings();
  bVar6 = (bool)CVmSettings::getSharedBluetooth();
  CVmConfiguration::getVmSettings();
  CVmSettings::getSharedBluetooth();
  bVar4 = CVmSharedBluetooth::isEnabled();
  bVar5 = CVmSharedBluetooth::isEnabled();
  if ((bVar4 ^ bVar5) == 1) {
    CVmSharedBluetooth::isEnabled();
    CVmSharedBluetooth::setEnabled(bVar6);
    cVar2 = CVmSharedBluetooth::isEnabled();
    lVar13 = FUN_1000915f0(*(undefined8 *)(param_1 + 0x20));
    if (lVar13 != 0) {
      FUN_1000915f0(*(undefined8 *)(param_1 + 0x20));
      if (cVar2 == '\0') {
        FUN_1002bacc0(1,8,0);
      }
      else {
        FUN_1002bacc0(0,8,0);
      }
    }
  }
  CVmConfiguration::getVmSettings();
  bVar6 = (bool)CVmSettings::getSharedCamera();
  CVmConfiguration::getVmSettings();
  CVmSettings::getSharedCamera();
  bVar4 = CVmSharedCamera::isEnabled();
  bVar5 = CVmSharedCamera::isEnabled();
  if ((bVar4 ^ bVar5) == 1) {
    CVmSharedCamera::isEnabled();
    CVmSharedCamera::setEnabled(bVar6);
    uVar7 = CVmSharedCamera::isEnabled();
    FUN_100077260(param_1,uVar7);
  }
  CVmConfiguration::getVmSettings();
  bVar6 = (bool)CVmSettings::getTravelOptions();
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  cVar2 = CVmTravelOptions::isEnabled();
  if ((cVar2 != '\0') && (cVar2 = CVmTravelOptions::isEnabled(), cVar2 == '\0')) {
    CVmTravelOptions::isEnabled();
    CVmTravelOptions::setEnabled(bVar6);
    FUN_100097d30(*(undefined8 *)(param_1 + 0x20));
  }
  cVar2 = CVmTravelOptions::isEnabled();
  if ((cVar2 == '\0') && (cVar2 = CVmTravelOptions::isEnabled(), cVar2 != '\0')) {
    CVmTravelOptions::isEnabled();
    CVmTravelOptions::setEnabled(bVar6);
    FUN_100096700(*(undefined8 *)(param_1 + 0x20));
  }
  CVmConfiguration::getVmHardwareList();
  bVar6 = (bool)CVmHardware::getVideo();
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  bVar4 = CVmVideo::isEnableHiResDrawing();
  bVar5 = CVmVideo::isEnableHiResDrawing();
  if ((bVar4 ^ bVar5) == 1) {
    CVmVideo::isEnableHiResDrawing();
    CVmVideo::setEnableHiResDrawing(bVar6);
  }
  bVar4 = CVmVideo::isUseHiResInGuest();
  bVar5 = CVmVideo::isUseHiResInGuest();
  if ((bVar4 ^ bVar5) == 1) {
    CVmVideo::isUseHiResInGuest();
    CVmVideo::setUseHiResInGuest(bVar6);
  }
  dVar17 = (double)CVmVideo::getHostScaleFactor();
  dVar18 = (double)CVmVideo::getHostScaleFactor();
  if ((dVar17 != dVar18) || (NAN(dVar17) || NAN(dVar18))) {
    dVar17 = (double)CVmVideo::getHostScaleFactor();
    CVmVideo::setHostScaleFactor(dVar17);
  }
  bVar4 = CVmVideo::isNativeScalingInGuest();
  bVar5 = CVmVideo::isNativeScalingInGuest();
  if ((bVar4 ^ bVar5) == 1) {
    CVmVideo::isNativeScalingInGuest();
    CVmVideo::setNativeScalingInGuest(bVar6);
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getUsbController();
  bVar6 = (bool)CVmUsbController::getExternalDevices();
  CVmConfiguration::getVmSettings();
  CVmSettings::getUsbController();
  CVmUsbController::getExternalDevices();
  bVar4 = CVmExternalDevices::isDisks();
  bVar5 = CVmExternalDevices::isDisks();
  if ((bVar4 ^ bVar5) == 1) {
    CVmExternalDevices::isDisks();
    CVmExternalDevices::setDisks(bVar6);
  }
  bVar4 = CVmExternalDevices::isHumanInterfaces();
  bVar5 = CVmExternalDevices::isHumanInterfaces();
  if ((bVar4 ^ bVar5) == 1) {
    CVmExternalDevices::isHumanInterfaces();
    CVmExternalDevices::setHumanInterfaces(bVar6);
  }
  bVar4 = CVmExternalDevices::isCommunication();
  bVar5 = CVmExternalDevices::isCommunication();
  if ((bVar4 ^ bVar5) == 1) {
    CVmExternalDevices::isCommunication();
    CVmExternalDevices::setCommunication(bVar6);
  }
  bVar4 = CVmExternalDevices::isAudio();
  bVar5 = CVmExternalDevices::isAudio();
  if ((bVar4 ^ bVar5) == 1) {
    CVmExternalDevices::isAudio();
    CVmExternalDevices::setAudio(bVar6);
  }
  bVar4 = CVmExternalDevices::isVideo();
  bVar5 = CVmExternalDevices::isVideo();
  if ((bVar4 ^ bVar5) == 1) {
    CVmExternalDevices::isVideo();
    CVmExternalDevices::setVideo(bVar6);
  }
  bVar4 = CVmExternalDevices::isSmartCards();
  bVar5 = CVmExternalDevices::isSmartCards();
  if ((bVar4 ^ bVar5) == 1) {
    CVmExternalDevices::isSmartCards();
    CVmExternalDevices::setSmartCards(bVar6);
  }
  bVar4 = CVmExternalDevices::isPrinters();
  bVar5 = CVmExternalDevices::isPrinters();
  if ((bVar4 ^ bVar5) == 1) {
    CVmExternalDevices::isPrinters();
    CVmExternalDevices::setPrinters(bVar6);
  }
  bVar4 = CVmExternalDevices::isSmartPhones();
  bVar5 = CVmExternalDevices::isSmartPhones();
  if ((bVar4 ^ bVar5) == 1) {
    CVmExternalDevices::isSmartPhones();
    CVmExternalDevices::setSmartPhones(bVar6);
  }
  bVar4 = CVmExternalDevices::isOther();
  bVar5 = CVmExternalDevices::isOther();
  if ((bVar4 ^ bVar5) == 1) {
    CVmExternalDevices::isOther();
    CVmExternalDevices::setOther(bVar6);
  }
  lVar13 = FUN_1000915f0(DAT_1011c3698);
  if (lVar13 != 0) {
    uVar12 = FUN_1000915f0(DAT_1011c3698);
    FUN_1002c11b0(uVar12);
  }
  lVar13 = CVmConfiguration::getVmHardwareList();
  local_150 = *(Data **)(lVar13 + 0x1d8);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 == 0) {
      QListData::detach((int)&local_150);
      lVar15 = (long)*(int *)(local_150 + 8);
      lVar13 = *(long *)(lVar13 + 0x1d8);
      if (((Data *)(lVar13 + (long)*(int *)(lVar13 + 8) * 8) != local_150 + lVar15 * 8) &&
         (lVar16 = *(int *)(local_150 + 0xc) - lVar15,
         lVar16 != 0 && lVar15 <= *(int *)(local_150 + 0xc))) {
        _memcpy(local_150 + lVar15 * 8 + 0x10,
                (void *)(lVar13 + 0x10 + (long)*(int *)(lVar13 + 8) * 8),lVar16 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + 1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
    }
  }
  lVar13 = CVmConfiguration::getVmHardwareList();
  local_158 = *(Data **)(lVar13 + 0x1d8);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 == 0) {
      QListData::detach((int)&local_158);
      lVar15 = (long)*(int *)(local_158 + 8);
      lVar13 = *(long *)(lVar13 + 0x1d8);
      if (((Data *)(lVar13 + (long)*(int *)(lVar13 + 8) * 8) != local_158 + lVar15 * 8) &&
         (lVar16 = *(int *)(local_158 + 0xc) - lVar15,
         lVar16 != 0 && lVar15 <= *(int *)(local_158 + 0xc))) {
        _memcpy(local_158 + lVar15 * 8 + 0x10,
                (void *)(lVar13 + 0x10 + (long)*(int *)(lVar13 + 8) * 8),lVar16 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + 1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
    }
  }
  if ((*(int *)(local_150 + 0xc) != *(int *)(local_150 + 8)) &&
     (*(int *)(local_158 + 0xc) != *(int *)(local_158 + 8))) {
    bVar4 = CVmSoundDevice::isVolumeSync();
    bVar5 = CVmSoundDevice::isVolumeSync();
    if ((bVar4 ^ bVar5) == 1) {
      uVar12 = *(undefined8 *)(local_150 + (long)*(int *)(local_150 + 8) * 8 + 0x10);
      CVmSoundDevice::isVolumeSync();
      CVmSoundDevice::setVolumeSync(SUB81(uVar12,0));
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0x1a18) + 0x68))();
    }
    bVar4 = CVmSoundDevice::isAEC();
    bVar5 = CVmSoundDevice::isAEC();
    if ((bVar4 ^ bVar5) == 1) {
      uVar12 = *(undefined8 *)(local_150 + (long)*(int *)(local_150 + 8) * 8 + 0x10);
      CVmSoundDevice::isAEC();
      CVmSoundDevice::setAEC(SUB81(uVar12,0));
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0x1a18) + 0x70))();
    }
  }
  CVmConfiguration::getVmSettings();
  uVar12 = CVmSettings::getVmRuntimeOptions();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  iVar8 = CVmRunTimeOptions::getOptimizeModifiers();
  iVar9 = CVmRunTimeOptions::getOptimizeModifiers();
  if (iVar8 != iVar9) {
    uVar11 = CVmRunTimeOptions::getOptimizeModifiers();
    CVmRunTimeOptions::setOptimizeModifiers(uVar12,uVar11);
    plVar14 = (long *)FUN_100091870(*(undefined8 *)(param_1 + 0x20));
    pcVar1 = *(code **)(*plVar14 + 0x28);
    uVar11 = CVmRunTimeOptions::getOptimizeModifiers();
    (*pcVar1)(plVar14,uVar11);
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  bVar4 = CVmRunTimeOptions::isEnableAdaptiveHypervisor();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  bVar5 = CVmRunTimeOptions::isEnableAdaptiveHypervisor();
  if ((bVar4 ^ bVar5) == 1) {
    FUN_1000b21e0(DAT_1011c3698,bVar5);
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  iVar8 = CVmRunTimeOptions::getResourceQuota();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  iVar9 = CVmRunTimeOptions::getResourceQuota();
  if (iVar9 != iVar8) {
    CVmConfiguration::getVmSettings();
    uVar10 = CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::setResourceQuota(uVar10);
    FUN_1000a9090(DAT_1011c3698,iVar8);
  }
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100076d05;
    }
    QListData::dispose(local_158);
  }
LAB_100076d05:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100076d31;
    }
    QListData::dispose(local_150);
  }
LAB_100076d31:
  QEvent::~QEvent(local_58);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_138);
  return;
}

