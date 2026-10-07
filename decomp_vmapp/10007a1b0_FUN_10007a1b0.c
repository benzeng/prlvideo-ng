
undefined8 FUN_10007a1b0(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  double dVar30;
  double dVar31;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  lVar12 = CVmConfiguration::getVmHardwareList();
  lVar13 = CVmConfiguration::getVmHardwareList();
  CVmConfiguration::getVmSettings();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmSettings::getVmRuntimeOptions();
  CVmSettings::getVmTools();
  CVmSettings::getVmTools();
  CVmHardware::getVideo();
  CVmVideo::isEnableHiResDrawing();
  bVar1 = (bool)CVmHardware::getVideo();
  CVmHardware::getVideo();
  CVmVideo::isEnableHiResDrawing();
  CVmVideo::setEnableHiResDrawing(bVar1);
  CVmHardware::getVideo();
  CVmVideo::isUseHiResInGuest();
  bVar1 = (bool)CVmHardware::getVideo();
  CVmHardware::getVideo();
  CVmVideo::isUseHiResInGuest();
  CVmVideo::setUseHiResInGuest(bVar1);
  CVmHardware::getVideo();
  dVar30 = (double)CVmVideo::getHostScaleFactor();
  CVmHardware::getVideo();
  CVmHardware::getVideo();
  dVar31 = (double)CVmVideo::getHostScaleFactor();
  CVmVideo::setHostScaleFactor(dVar31);
  CVmHardware::getVideo();
  CVmVideo::isNativeScalingInGuest();
  bVar1 = (bool)CVmHardware::getVideo();
  CVmHardware::getVideo();
  CVmVideo::isNativeScalingInGuest();
  CVmVideo::setNativeScalingInGuest(bVar1);
  cVar2 = CVmHardware::getVideo();
  CBaseNode::toString(SUB81(&local_40,0),(bool)(cVar2 + '\x10'));
  cVar2 = CVmHardware::getVideo();
  CBaseNode::toString(SUB81(&local_48,0),(bool)(cVar2 + '\x10'));
  cVar2 = operator==(&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007a387;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10007a387:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007a3b7;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10007a3b7:
  bVar1 = (bool)CVmHardware::getVideo();
  CVmVideo::setEnableHiResDrawing(bVar1);
  bVar1 = (bool)CVmHardware::getVideo();
  CVmVideo::setUseHiResInGuest(bVar1);
  CVmHardware::getVideo();
  CVmVideo::setHostScaleFactor(dVar30);
  bVar1 = (bool)CVmHardware::getVideo();
  CVmVideo::setNativeScalingInGuest(bVar1);
  cVar3 = CVmRunTimeOptions::isShowBatteryStatus();
  cVar4 = CVmRunTimeOptions::isShowBatteryStatus();
  cVar5 = CVmRunTimeOptions::isOptimizeForVM();
  cVar6 = CVmRunTimeOptions::isOptimizeForVM();
  bVar22 = 1;
  uVar15 = 0;
  if (cVar6 == cVar5 && (cVar2 == '\x01' && cVar4 == cVar3)) {
    CVmSettings::getVmCommonOptions();
    iVar8 = CVmCommonOptions::getOsType();
    CVmSettings::getVmCommonOptions();
    iVar9 = CVmCommonOptions::getOsType();
    CVmSettings::getVmCommonOptions();
    iVar10 = CVmCommonOptions::getOsVersion();
    CVmSettings::getVmCommonOptions();
    iVar11 = CVmCommonOptions::getOsVersion();
    CVmTools::getAutoSyncOSType();
    bVar7 = CVmAutoSyncOSType::isEnabled();
    CVmTools::getAutoSyncOSType();
    uVar14 = CVmAutoSyncOSType::isEnabled();
    bVar7 = (byte)uVar14 ^ bVar7 | (iVar10 != iVar11 || iVar8 != iVar9);
    uVar15 = CONCAT71((int7)((ulong)uVar14 >> 8),bVar7);
    if (bVar7 == 0) {
      iVar8 = *(int *)(*(long *)(lVar12 + 0x1d8) + 8);
      iVar9 = *(int *)(*(long *)(lVar12 + 0x1d8) + 0xc);
      iVar25 = iVar9 - iVar8;
      iVar10 = *(int *)(*(long *)(lVar13 + 0x1d8) + 8);
      iVar11 = *(int *)(*(long *)(lVar13 + 0x1d8) + 0xc);
      iVar29 = iVar11 - iVar10;
      uVar15 = *(ulong *)(lVar12 + 0x1d0);
      iVar28 = *(int *)(uVar15 + 8);
      iVar23 = *(int *)(uVar15 + 0xc);
      iVar26 = *(int *)(*(long *)(lVar13 + 0x1d0) + 8);
      iVar27 = *(int *)(*(long *)(lVar13 + 0x1d0) + 0xc);
      if (*(int *)(*(long *)(lVar12 + 0x1a0) + 0xc) - *(int *)(*(long *)(lVar12 + 0x1a0) + 8) ==
          *(int *)(*(long *)(lVar13 + 0x1a0) + 0xc) - *(int *)(*(long *)(lVar13 + 0x1a0) + 8) &&
          (*(int *)(*(long *)(lVar12 + 0x1e0) + 0xc) - *(int *)(*(long *)(lVar12 + 0x1e0) + 8) ==
           *(int *)(*(long *)(lVar13 + 0x1e0) + 0xc) - *(int *)(*(long *)(lVar13 + 0x1e0) + 8) &&
          (*(int *)(*(long *)(lVar12 + 0x1b8) + 0xc) - *(int *)(*(long *)(lVar12 + 0x1b8) + 8) ==
           *(int *)(*(long *)(lVar13 + 0x1b8) + 0xc) - *(int *)(*(long *)(lVar13 + 0x1b8) + 8) &&
          (iVar23 - iVar28 == iVar27 - iVar26 && iVar25 == iVar29)))) {
        if (iVar25 <= iVar29) {
          iVar29 = iVar25;
        }
        if (iVar29 < 1) {
          bVar7 = 0;
        }
        else {
          iVar9 = (iVar8 + -1) - iVar9;
          iVar11 = (iVar10 + -1) - iVar11;
          if (iVar11 <= iVar9) {
            iVar11 = iVar9;
          }
          iVar8 = 0;
          bVar7 = 0;
          while( true ) {
            iVar9 = CVmDevice::getEnabled();
            iVar10 = CVmDevice::getEnabled();
            bVar7 = iVar9 != iVar10 | bVar7;
            if (-2 - iVar11 == iVar8) break;
            iVar8 = iVar8 + 1;
          }
          iVar28 = *(int *)(*(long *)(lVar12 + 0x1d0) + 8);
          iVar23 = *(int *)(*(long *)(lVar12 + 0x1d0) + 0xc);
          iVar26 = *(int *)(*(long *)(lVar13 + 0x1d0) + 8);
          iVar27 = *(int *)(*(long *)(lVar13 + 0x1d0) + 0xc);
        }
        iVar8 = iVar27 - iVar26;
        if (iVar23 - iVar28 <= iVar27 - iVar26) {
          iVar8 = iVar23 - iVar28;
        }
        if (iVar8 < 1) {
          bVar16 = 0;
        }
        else {
          iVar23 = (iVar28 + -1) - iVar23;
          iVar27 = (iVar26 + -1) - iVar27;
          if (iVar27 <= iVar23) {
            iVar27 = iVar23;
          }
          iVar8 = 0;
          bVar16 = 0;
          while( true ) {
            iVar9 = CVmDevice::getEnabled();
            iVar10 = CVmDevice::getEnabled();
            bVar16 = iVar9 != iVar10 | bVar16;
            if (-2 - iVar27 == iVar8) break;
            iVar8 = iVar8 + 1;
          }
        }
        iVar8 = *(int *)(*(long *)(lVar12 + 0x1b0) + 8);
        iVar9 = *(int *)(*(long *)(lVar12 + 0x1b0) + 0xc);
        iVar23 = iVar9 - iVar8;
        iVar10 = *(int *)(*(long *)(lVar13 + 0x1b0) + 8);
        iVar11 = *(int *)(*(long *)(lVar13 + 0x1b0) + 0xc);
        iVar28 = iVar11 - iVar10;
        if (iVar23 <= iVar28) {
          iVar28 = iVar23;
        }
        if (iVar28 < 1) {
          bVar17 = 0;
        }
        else {
          iVar9 = (iVar8 + -1) - iVar9;
          iVar11 = (iVar10 + -1) - iVar11;
          if (iVar11 <= iVar9) {
            iVar11 = iVar9;
          }
          iVar8 = 0;
          bVar17 = 0;
          while( true ) {
            iVar9 = CVmDevice::getEnabled();
            iVar10 = CVmDevice::getEnabled();
            bVar17 = iVar9 != iVar10 | bVar17;
            if (-2 - iVar11 == iVar8) break;
            iVar8 = iVar8 + 1;
          }
        }
        iVar8 = *(int *)(*(long *)(lVar12 + 0x1a8) + 8);
        iVar9 = *(int *)(*(long *)(lVar12 + 0x1a8) + 0xc);
        iVar23 = iVar9 - iVar8;
        iVar10 = *(int *)(*(long *)(lVar13 + 0x1a8) + 8);
        iVar11 = *(int *)(*(long *)(lVar13 + 0x1a8) + 0xc);
        iVar28 = iVar11 - iVar10;
        if (iVar23 <= iVar28) {
          iVar28 = iVar23;
        }
        if (iVar28 < 1) {
          bVar18 = 0;
        }
        else {
          iVar9 = (iVar8 + -1) - iVar9;
          iVar11 = (iVar10 + -1) - iVar11;
          if (iVar11 <= iVar9) {
            iVar11 = iVar9;
          }
          iVar8 = 0;
          bVar18 = 0;
          while( true ) {
            iVar9 = CVmDevice::getEnabled();
            iVar10 = CVmDevice::getEnabled();
            bVar18 = iVar9 != iVar10 | bVar18;
            if (-2 - iVar11 == iVar8) break;
            iVar8 = iVar8 + 1;
          }
        }
        iVar8 = *(int *)(*(long *)(lVar12 + 0x1b8) + 8);
        iVar9 = *(int *)(*(long *)(lVar12 + 0x1b8) + 0xc);
        iVar23 = iVar9 - iVar8;
        iVar10 = *(int *)(*(long *)(lVar13 + 0x1b8) + 8);
        iVar11 = *(int *)(*(long *)(lVar13 + 0x1b8) + 0xc);
        iVar28 = iVar11 - iVar10;
        if (iVar23 <= iVar28) {
          iVar28 = iVar23;
        }
        if (iVar28 < 1) {
          bVar19 = 0;
        }
        else {
          iVar9 = (iVar8 + -1) - iVar9;
          iVar11 = (iVar10 + -1) - iVar11;
          if (iVar11 <= iVar9) {
            iVar11 = iVar9;
          }
          iVar8 = 0;
          bVar19 = 0;
          while( true ) {
            iVar9 = CVmDevice::getEnabled();
            iVar10 = CVmDevice::getEnabled();
            bVar19 = iVar9 != iVar10 | bVar19;
            if (-2 - iVar11 == iVar8) break;
            iVar8 = iVar8 + 1;
          }
        }
        iVar8 = *(int *)(*(long *)(lVar12 + 0x1c8) + 8);
        iVar9 = *(int *)(*(long *)(lVar12 + 0x1c8) + 0xc);
        iVar23 = iVar9 - iVar8;
        iVar10 = *(int *)(*(long *)(lVar13 + 0x1c8) + 8);
        iVar11 = *(int *)(*(long *)(lVar13 + 0x1c8) + 0xc);
        iVar28 = iVar11 - iVar10;
        if (iVar23 <= iVar28) {
          iVar28 = iVar23;
        }
        if (iVar28 < 1) {
          bVar20 = 0;
        }
        else {
          iVar9 = (iVar8 + -1) - iVar9;
          iVar11 = (iVar10 + -1) - iVar11;
          if (iVar11 <= iVar9) {
            iVar11 = iVar9;
          }
          iVar8 = 0;
          bVar20 = 0;
          while( true ) {
            iVar9 = CVmDevice::getEnabled();
            iVar10 = CVmDevice::getEnabled();
            bVar20 = iVar9 != iVar10 | bVar20;
            if (-2 - iVar11 == iVar8) break;
            iVar8 = iVar8 + 1;
          }
        }
        iVar8 = *(int *)(*(long *)(lVar12 + 0x1e0) + 8);
        iVar9 = *(int *)(*(long *)(lVar12 + 0x1e0) + 0xc);
        iVar23 = iVar9 - iVar8;
        iVar10 = *(int *)(*(long *)(lVar13 + 0x1e0) + 8);
        iVar11 = *(int *)(*(long *)(lVar13 + 0x1e0) + 0xc);
        iVar28 = iVar11 - iVar10;
        if (iVar23 <= iVar28) {
          iVar28 = iVar23;
        }
        if (iVar28 < 1) {
          bVar21 = 0;
        }
        else {
          iVar9 = (iVar8 + -1) - iVar9;
          iVar11 = (iVar10 + -1) - iVar11;
          if (iVar11 <= iVar9) {
            iVar11 = iVar9;
          }
          iVar8 = 0;
          bVar21 = 0;
          while( true ) {
            iVar9 = CVmDevice::getEnabled();
            iVar10 = CVmDevice::getEnabled();
            bVar21 = iVar9 != iVar10 | bVar21;
            if (-2 - iVar11 == iVar8) break;
            iVar8 = iVar8 + 1;
          }
        }
        uVar15 = *(ulong *)(lVar12 + 0x1a0);
        iVar11 = *(int *)(uVar15 + 0xc) - *(int *)(uVar15 + 8);
        iVar8 = *(int *)(*(long *)(lVar13 + 0x1a0) + 8);
        iVar9 = *(int *)(*(long *)(lVar13 + 0x1a0) + 0xc);
        iVar10 = iVar9 - iVar8;
        if (iVar11 <= iVar10) {
          iVar10 = iVar11;
        }
        if (iVar10 < 1) {
          bVar22 = 0;
        }
        else {
          iVar10 = (*(int *)(uVar15 + 8) + -1) - *(int *)(uVar15 + 0xc);
          iVar9 = (iVar8 + -1) - iVar9;
          if (iVar9 <= iVar10) {
            iVar9 = iVar10;
          }
          uVar15 = (ulong)(-iVar9 - 2U);
          uVar24 = 0;
          bVar22 = 0;
          while( true ) {
            iVar8 = CVmDevice::getEnabled();
            iVar10 = CVmDevice::getEnabled();
            bVar22 = iVar8 != iVar10 | bVar22;
            if (-iVar9 - 2U == uVar24) break;
            uVar24 = uVar24 + 1;
          }
        }
        bVar22 = bVar7 | bVar16 | bVar17 | bVar18 | bVar19 | bVar20 | bVar21 | bVar22;
      }
    }
  }
  return CONCAT71((int7)(uVar15 >> 8),bVar22);
}

