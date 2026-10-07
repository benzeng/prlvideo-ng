
undefined1 FUN_100024ca0(undefined8 param_1,uint *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined1 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  undefined8 local_168;
  undefined6 uStack_160;
  undefined2 uStack_15a;
  undefined2 uStack_158;
  undefined6 uStack_156;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  QArrayData *local_138;
  char local_12d;
  int local_12c;
  int local_128;
  int local_124;
  undefined1 local_120 [2];
  short local_11e;
  undefined1 local_88 [80];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getSharedVolumes();
  local_12d = '\0';
  cVar6 = FUN_100537330(param_1,&local_12d);
  if (cVar6 != '\0') {
    if (local_12d == '\0') {
      uVar7 = CVmSharedVolumes::isUseInversedDisks();
    }
    else {
      uVar7 = 0;
    }
    goto LAB_100024dfb;
  }
  QString::toUtf8();
  iVar9 = _FSPathMakeRef(local_138 + *(long *)(local_138 + 0x10),local_88,0);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_120[0] = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_120[0]) goto LAB_100024d7f;
    }
    QArrayData::deallocate(local_138,1,8);
  }
LAB_100024d7f:
  if (iVar9 == 0) {
    uVar7 = 0;
    sVar8 = _FSGetCatalogInfo(local_88,4,local_120,0,0,0);
    if (sVar8 == 0) {
      uStack_158 = 0;
      uStack_156 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      local_168 = 0;
      uStack_160 = 0;
      uStack_15a = 0;
      local_140 = 0;
      local_148 = 0;
      uStack_144 = 0;
      iVar9 = _FSGetVolumeParms((int)local_11e,&local_168,0x2c);
      uVar5 = uStack_150;
      if (iVar9 == 0) {
        if ((uStack_150 & 1) == 0) {
          bVar14 = false;
        }
        else {
          uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_100ba2470;
          bVar14 = false;
          lVar12 = _IOBSDNameMatching(uVar1,0,CONCAT44(local_148,uStack_14c));
          if (lVar12 != 0) {
            iVar9 = _IOServiceGetMatchingServices(uVar1,lVar12,&local_128);
            bVar14 = false;
            if ((iVar9 == 0) && (local_128 != 0)) {
              iVar9 = _IOIteratorNext();
              bVar14 = false;
              if (iVar9 != 0) {
                uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
                do {
                  _IOObjectRetain(iVar9);
                  iVar11 = iVar9;
                  do {
                    iVar10 = _IOObjectConformsTo(iVar11,"IODiskImageBlockStorageDeviceOutKernel");
                    if (iVar10 != 0) {
                      _IOObjectRelease(iVar11);
                      _IOObjectRelease(iVar9);
                      bVar14 = true;
                      goto LAB_100025048;
                    }
                    iVar10 = _IORegistryEntryGetParentEntry(iVar11,"IOService",&local_12c);
                    _IOObjectRelease(iVar11);
                    iVar11 = local_12c;
                  } while (iVar10 == 0);
                  if (!bVar14) {
                    iVar11 = _IORegistryEntryCreateIterator(iVar9,"IOService",3,&local_124);
                    bVar14 = false;
                    if ((iVar11 == 0) && (local_124 != 0)) {
                      _IOObjectRetain(iVar9);
                      bVar14 = false;
                      bVar15 = false;
                      iVar11 = iVar9;
                      do {
                        lVar12 = _IORegistryEntryCreateCFProperty(iVar11,&cf_Whole,uVar3,0);
                        if (lVar12 != 0) {
                          cVar6 = _CFBooleanGetValue(lVar12);
                          bVar15 = cVar6 != '\0';
                          if ((bVar15) &&
                             ((iVar10 = _IOObjectConformsTo(iVar11,"IODVDMedia"), iVar10 != 0 ||
                              (iVar10 = _IOObjectConformsTo(iVar11,"IOCDMedia"), iVar10 != 0)))) {
                            bVar14 = true;
                          }
                          _CFRelease(lVar12);
                        }
                        _IOObjectRelease(iVar11);
                      } while ((!bVar15) && (iVar11 = _IOIteratorNext(local_124), iVar11 != 0));
                      _IOObjectRelease(local_124);
                    }
                  }
                  _IOObjectRelease(iVar9);
                } while ((!bVar14) && (iVar9 = _IOIteratorNext(local_128), iVar9 != 0));
              }
LAB_100025048:
              _IOObjectRelease(local_128);
            }
          }
        }
        if (param_2 != (uint *)0x0) {
          uVar13 = uVar5 >> 0x1b & 1;
          uVar4 = uVar13 + 8;
          if (CONCAT22(uStack_158,uStack_15a) == 0) {
            uVar4 = uVar13;
          }
          uVar13 = uVar4 | 4;
          if (!bVar14) {
            uVar13 = uVar4;
          }
          *param_2 = uVar13;
        }
        if (CONCAT22(uStack_158,uStack_15a) != 0) {
          cVar6 = CVmSharedVolumes::isUseConnectedServers();
          uVar7 = 1;
          if (cVar6 != '\0') goto LAB_100024dfb;
        }
        if (bVar14) {
          uVar7 = CVmSharedVolumes::isUseDVDs();
        }
        else if ((uVar5 & 0x8000001) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = CVmSharedVolumes::isUseExternalDisks();
        }
      }
      else {
        uVar7 = 0;
      }
    }
  }
  else {
    uVar7 = 0;
  }
LAB_100024dfb:
  if (lVar2 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

