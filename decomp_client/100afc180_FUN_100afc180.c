
void FUN_100afc180(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  QString QVar13;
  QArrayData *pQVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  char *pcVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  QString *in_stack_fffffffffffffdf8;
  undefined4 uVar23;
  uint local_1b0;
  long *local_1a0;
  Data *local_198;
  Data *local_190;
  Data *local_188;
  undefined4 local_180;
  QString local_178;
  QArrayData *local_170;
  QString local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QString local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QString local_138;
  int local_12c;
  QArrayData *local_128;
  QString local_120;
  int local_114;
  int local_110;
  uint local_10c;
  uint local_108;
  undefined4 local_104;
  Data *local_100;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  QString local_e0;
  undefined4 local_d4;
  QString local_d0;
  QString local_c8;
  undefined1 local_b9;
  char local_b8 [128];
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
  plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0x180);
  local_100 = (Data *)*plVar2;
  local_38 = lVar12;
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 == 0) {
      QListData::detach((int)&local_100);
      lVar16 = (long)*(int *)(local_100 + 8);
      lVar11 = *plVar2;
      if (((Data *)(lVar11 + (long)*(int *)(lVar11 + 8) * 8) != local_100 + lVar16 * 8) &&
         (lVar17 = *(int *)(local_100 + 0xc) - lVar16,
         lVar17 != 0 && lVar16 <= *(int *)(local_100 + 0xc))) {
        _memcpy(local_100 + lVar16 * 8 + 0x10,
                (void *)(lVar11 + 0x10 + (long)*(int *)(lVar11 + 8) * 8),lVar17 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + 1;
      local_b9 = *(int *)local_100 != 0;
      UNLOCK();
    }
  }
  FUN_100b04a60(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x180));
  local_104 = 0;
  cVar5 = FUN_100afc090();
  pcVar19 = "IOUSBDevice";
  if (cVar5 != '\0') {
    pcVar19 = "IOUSBHostDevice";
  }
  lVar11 = _IOServiceMatching(pcVar19);
  if (lVar11 == 0) {
    FUN_100df99c0("","pvsHostInfo",0,"GetUsbDevices(): Can\'t create a matching dictionary");
  }
  else {
    uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0;
    iVar7 = _IOServiceGetMatchingServices(uVar1,lVar11,&local_104);
    if (iVar7 == 0) {
      uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
LAB_100afc2f0:
      iVar7 = _IOIteratorNext(local_104);
      if (iVar7 != 0) {
        local_108 = 0;
        lVar12 = _IORegistryEntryCreateCFProperty(iVar7,&cf_idVendor,uVar3,0);
        if (lVar12 == 0) {
          bVar20 = false;
        }
        else {
          cVar6 = _CFNumberGetValue(lVar12,3,&local_108);
          bVar20 = cVar6 != '\0';
          _CFRelease(lVar12);
        }
        local_10c = 0;
        lVar12 = _IORegistryEntryCreateCFProperty(iVar7,&cf_idProduct,uVar3,0);
        if (lVar12 == 0) {
          bVar21 = false;
        }
        else {
          cVar6 = _CFNumberGetValue(lVar12,3,&local_10c);
          bVar21 = cVar6 != '\0';
          _CFRelease(lVar12);
        }
        local_110 = 0;
        lVar12 = _IORegistryEntryCreateCFProperty(iVar7,&cf_bDeviceClass,uVar3,0);
        if (lVar12 == 0) {
          bVar22 = false;
        }
        else {
          cVar6 = _CFNumberGetValue(lVar12,3,&local_110);
          bVar22 = cVar6 != '\0';
          _CFRelease(lVar12);
        }
        if (bVar21 || (bVar20 || bVar22)) {
          if ((cVar5 == '\0') &&
             (lVar12 = _IORegistryEntryCreateCFProperty(iVar7,&cf_Built_In,uVar3,0), lVar12 != 0)) {
            lVar11 = _CFGetTypeID(lVar12);
            lVar16 = _CFBooleanGetTypeID();
            if (lVar11 == lVar16) {
              cVar6 = _CFBooleanGetValue(lVar12);
              bVar20 = cVar6 != '\0';
            }
            else {
              bVar20 = false;
            }
            _CFRelease(lVar12);
            if (bVar20) {
              _IOObjectRelease(iVar7);
              goto LAB_100afc2f0;
            }
          }
          local_114 = 0;
          lVar12 = _IORegistryEntryCreateCFProperty(iVar7,&cf_locationID,uVar3,0);
          if (lVar12 != 0) {
            _CFNumberGetValue(lVar12,3,&local_114);
            _CFRelease(lVar12);
          }
          uVar4 = local_108;
          uVar18 = local_10c;
          iVar10 = local_114;
          local_1b0 = 1;
          if ((local_110 != 9) && (local_1b0 = FUN_100af6760(local_108), local_1b0 == 0)) {
            lVar12 = _IOServiceMatching("IOUSBInterface");
            if (lVar12 == 0) {
              local_1b0 = 0;
              FUN_100df99c0("","pvsHostInfo",0);
            }
            else {
              iVar8 = _IOServiceGetMatchingServices(uVar1,lVar12,&local_e4);
              if ((iVar8 == 0) && (local_e4 != 0)) {
                iVar8 = _IOIteratorNext();
                uVar23 = (undefined4)((ulong)in_stack_fffffffffffffdf8 >> 0x20);
                if (iVar8 == 0) {
                  local_1b0 = 0;
                  _IOObjectRelease(local_e4);
LAB_100afc7bc:
                  in_stack_fffffffffffffdf8 = (QString *)CONCAT44(uVar23,iVar10);
                  FUN_100df99c0("","pvsHostInfo",0,"device %04x:%04x@%08x has no interfaces",
                                uVar4 & 0xffff,uVar18 & 0xffff,in_stack_fffffffffffffdf8);
                }
                else {
                  bVar20 = false;
                  local_1b0 = 0;
                  do {
                    while( true ) {
                      local_e8 = 0;
                      lVar12 = _IORegistryEntryCreateCFProperty(iVar8,&cf_locationID,uVar3,0);
                      if (lVar12 != 0) {
                        _CFNumberGetValue(lVar12,3,&local_e8);
                        _CFRelease(lVar12);
                      }
                      if (local_e8 == iVar10) break;
                      _IOObjectRelease(iVar8);
                      iVar8 = _IOIteratorNext(local_e4);
                      if (iVar8 == 0) {
                        _IOObjectRelease(local_e4);
                        uVar23 = (undefined4)((ulong)in_stack_fffffffffffffdf8 >> 0x20);
                        if (bVar20) goto LAB_100afc7f0;
                        goto LAB_100afc7bc;
                      }
                    }
                    local_ec = 0;
                    lVar12 = _IORegistryEntryCreateCFProperty(iVar8,&cf_bInterfaceClass,uVar3,0);
                    if (lVar12 != 0) {
                      _CFNumberGetValue(lVar12,3,&local_ec);
                      _CFRelease(lVar12);
                    }
                    local_f0 = 0;
                    lVar12 = _IORegistryEntryCreateCFProperty(iVar8,&cf_bInterfaceSubClass,uVar3,0);
                    if (lVar12 != 0) {
                      _CFNumberGetValue(lVar12,3,&local_f0);
                      _CFRelease(lVar12);
                    }
                    local_f4 = 0;
                    lVar12 = _IORegistryEntryCreateCFProperty(iVar8,&cf_bInterfaceProtocol,uVar3,0);
                    if (lVar12 != 0) {
                      _CFNumberGetValue(lVar12,3,&local_f4);
                      _CFRelease(lVar12);
                    }
                    uVar9 = FUN_100af67c0(local_ec,local_f0,local_f4);
                    uVar15 = local_1b0;
                    if (uVar9 == 0xb) {
                      uVar15 = 0xb;
                    }
                    bVar20 = local_1b0 == 0;
                    local_1b0 = uVar15;
                    if (bVar20) {
                      local_1b0 = uVar9;
                    }
                    _IOObjectRelease(iVar8);
                    iVar8 = _IOIteratorNext(local_e4);
                    bVar20 = true;
                  } while (iVar8 != 0);
                  _IOObjectRelease(local_e4);
                }
              }
              else {
                local_1b0 = 0;
                FUN_100df99c0("","pvsHostInfo",0,
                              "GetUSBDevClass(): Can\'t create a service iterator (0x%x)",iVar8);
              }
            }
          }
LAB_100afc7f0:
          if (local_1b0 == 1) {
            _IOObjectRelease(iVar7);
          }
          else {
            local_120.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Empty",5);
            in_stack_fffffffffffffdf8 = &local_120;
            FUN_100afbf10(iVar7,&cf_USBSerialNumber,in_stack_fffffffffffffdf8,0);
            uVar18 = *(uint *)(local_120.field0_0x0 + 4);
            lVar12 = 0;
            QVar13.field0_0x0 = local_120.field0_0x0;
            if (0 < (int)uVar18) {
              do {
                if ((((int)*(uint *)(QVar13.field0_0x0 + 4) <= lVar12) ||
                    (*(ushort *)
                      (QVar13.field0_0x0 + lVar12 * 2 + *(long *)(QVar13.field0_0x0 + 0x10)) < 0x21)
                    ) || ((lVar12 < (int)*(uint *)(QVar13.field0_0x0 + 4) &&
                          (0x7e < *(ushort *)
                                   (QVar13.field0_0x0 +
                                   lVar12 * 2 + *(long *)(QVar13.field0_0x0 + 0x10)))))) {
                  if (2 < DAT_10230ffd0) {
                    FUN_100df99c0("","pvsHostInfo",3,"non-ascii usb serial for 0x%04x:0x%04x",
                                  local_108,local_10c);
                  }
                  QString::fromUtf8_helper((char *)&local_e0,0x1ecdcaa);
                  QString::operator=(in_stack_fffffffffffffdf8,&local_e0);
                  if (*(int *)local_e0.field0_0x0 == -1) break;
                  if (*(int *)local_e0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
                    local_b9 = *(int *)local_e0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_b9) break;
                  }
                  QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
                  break;
                }
                if (((lVar12 < (int)*(uint *)(QVar13.field0_0x0 + 4)) &&
                    (*(short *)(QVar13.field0_0x0 + lVar12 * 2 + *(long *)(QVar13.field0_0x0 + 0x10)
                               ) == 0x26)) ||
                   (((lVar12 < (int)*(uint *)(QVar13.field0_0x0 + 4) &&
                     (*(short *)(QVar13.field0_0x0 +
                                lVar12 * 2 + *(long *)(QVar13.field0_0x0 + 0x10)) == 0x3c)) ||
                    ((lVar12 < (int)*(uint *)(QVar13.field0_0x0 + 4) &&
                     (*(short *)(QVar13.field0_0x0 +
                                lVar12 * 2 + *(long *)(QVar13.field0_0x0 + 0x10)) == 0x7c)))))) {
                  if (lVar12 < (int)uVar18) {
                    if ((1 < *(uint *)QVar13.field0_0x0) ||
                       (*(long *)(QVar13.field0_0x0 + 0x10) != 0x18)) {
                      QString::reallocData
                                ((uint)in_stack_fffffffffffffdf8,(bool)((char)uVar18 + '\x01'));
                    }
                  }
                  else {
                    QString::expand((uint)in_stack_fffffffffffffdf8);
                  }
                  *(undefined2 *)
                   (local_120.field0_0x0 + lVar12 * 2 + *(long *)(local_120.field0_0x0 + 0x10)) =
                       0x2d;
                  uVar18 = *(uint *)(local_120.field0_0x0 + 4);
                  QVar13.field0_0x0 = local_120.field0_0x0;
                }
                lVar12 = lVar12 + 1;
              } while (lVar12 < (int)uVar18);
            }
            local_d4 = 0;
            if (cVar5 == '\0') {
              lVar12 = _IORegistryEntryCreateCFProperty(iVar7,&cf_DeviceSpeed,uVar3,0);
              if (lVar12 != 0) {
                cVar6 = _CFNumberGetValue(lVar12,3,&local_d4);
                _CFRelease(lVar12);
                if (cVar6 != '\0') {
                  switch(local_d4) {
                  case 0:
                    local_128 = (QArrayData *)QString::fromAscii_helper("low",3);
                    break;
                  case 1:
                    local_128 = (QArrayData *)QString::fromAscii_helper("full",4);
                    break;
                  case 2:
                    local_128 = (QArrayData *)QString::fromAscii_helper("high",4);
                    break;
                  case 3:
                    local_128 = (QArrayData *)QString::fromAscii_helper("super",5);
                    break;
                  default:
                    local_128 = (QArrayData *)QString::fromAscii_helper("unknown",7);
                  }
                  goto LAB_100afcaf4;
                }
              }
              local_128 = (QArrayData *)QString::fromAscii_helper("unknown",7);
            }
            else {
              lVar12 = _IORegistryEntryCreateCFProperty(iVar7,&cf_USBSpeed,uVar3,0);
              if (lVar12 != 0) {
                cVar6 = _CFNumberGetValue(lVar12,3,&local_d4);
                _CFRelease(lVar12);
                if (cVar6 != '\0') {
                  switch(local_d4) {
                  case 1:
                    local_128 = (QArrayData *)QString::fromAscii_helper("full",4);
                    break;
                  case 2:
                    local_128 = (QArrayData *)QString::fromAscii_helper("low",3);
                    break;
                  case 3:
                    local_128 = (QArrayData *)QString::fromAscii_helper("high",4);
                    break;
                  case 4:
                    local_128 = (QArrayData *)QString::fromAscii_helper("super",5);
                    break;
                  default:
                    local_128 = (QArrayData *)QString::fromAscii_helper("unknown",7);
                  }
                  goto LAB_100afcaf4;
                }
              }
              local_128 = (QArrayData *)QString::fromAscii_helper("unknown",7);
            }
LAB_100afcaf4:
            local_12c = 0;
            iVar10 = _IORegistryEntryGetChildIterator(iVar7,"IOService",&local_12c);
            bVar20 = false;
            if ((iVar10 == 0) && (bVar20 = false, local_12c != 0)) {
              do {
                bVar20 = false;
                iVar10 = _IOIteratorNext(local_12c);
                if (iVar10 == 0) break;
                _IOObjectGetClass(iVar10,local_b8);
                _IOObjectRelease(iVar10);
                iVar10 = _strcmp(local_b8,"com_parallels_usb_connect");
                bVar20 = true;
              } while (iVar10 != 0);
              _IOObjectRelease(local_12c);
            }
            lVar12 = _IORegistryEntryCreateCFProperty(iVar7,&cf_PrlHiddenInterface,uVar3,0);
            if (lVar12 == 0) {
              bVar21 = false;
            }
            else {
              lVar11 = _CFGetTypeID(lVar12);
              lVar16 = _CFBooleanGetTypeID();
              if (lVar11 == lVar16) {
                cVar6 = _CFBooleanGetValue(lVar12);
                bVar21 = cVar6 != '\0';
              }
              else {
                bVar21 = false;
              }
              _CFRelease(lVar12);
            }
            local_138.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("--",2);
            if (bVar21 || bVar20) {
              QString::fromUtf8_helper((char *)&local_d0,0x1ece174);
              QString::operator=(&local_138,&local_d0);
              if (*(int *)local_d0.field0_0x0 != -1) {
                if (*(int *)local_d0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
                  local_b9 = *(int *)local_d0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_b9) goto LAB_100afccef;
                }
                QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
              }
            }
            else if ((local_1b0 & 0xfffffffe) == 10) {
              QString::fromUtf8_helper((char *)&local_c8,0x1ece177);
              QString::operator=(&local_138,&local_c8);
              if (*(int *)local_c8.field0_0x0 != -1) {
                if (*(int *)local_c8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
                  local_b9 = *(int *)local_c8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_b9) goto LAB_100afccef;
                }
                QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
              }
            }
LAB_100afccef:
            QString::number((uint)&local_148,local_114);
            FUN_100af0e20(&local_140,&local_148,local_108,local_10c,&local_128,&local_138,
                          in_stack_fffffffffffffdf8);
            if (*(int *)local_148 != -1) {
              if (*(int *)local_148 != 0) {
                LOCK();
                *(int *)local_148 = *(int *)local_148 + -1;
                local_b9 = *(int *)local_148 != 0;
                UNLOCK();
                if ((bool)local_b9) goto LAB_100afcd6b;
              }
              QArrayData::deallocate(local_148,2,8);
            }
LAB_100afcd6b:
            local_150.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
            FUN_100afbf10(iVar7,&cf_USBProductName,&local_150,0);
            if (*(int *)(local_150.field0_0x0 + 4) == 0) {
LAB_100afce82:
              FUN_100af1390(&local_168,local_110,local_108,local_10c);
              QString::operator=(&local_150,&local_168);
              if (*(int *)local_168.field0_0x0 != -1) {
                if (*(int *)local_168.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
                  local_b9 = *(int *)local_168.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_b9) goto LAB_100afd032;
                }
                QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
              }
            }
            else {
              QString::left((int)&local_158);
              local_160 = (QArrayData *)QString::fromAscii_helper("IOUSB",5);
              iVar10 = QString::compare(&local_158,&local_160,1);
              bVar20 = local_108 == 0xfca;
              if (*(int *)local_160 != -1) {
                if (*(int *)local_160 != 0) {
                  LOCK();
                  *(int *)local_160 = *(int *)local_160 + -1;
                  local_b9 = *(int *)local_160 != 0;
                  UNLOCK();
                  if ((bool)local_b9) goto LAB_100afce41;
                }
                QArrayData::deallocate(local_160,2,8);
              }
LAB_100afce41:
              if (*(int *)local_158 != -1) {
                if (*(int *)local_158 != 0) {
                  LOCK();
                  *(int *)local_158 = *(int *)local_158 + -1;
                  local_b9 = *(int *)local_158 != 0;
                  UNLOCK();
                  if ((bool)local_b9) goto LAB_100afce7d;
                }
                QArrayData::deallocate(local_158,2,8);
              }
LAB_100afce7d:
              if (iVar10 == 0 || bVar20) goto LAB_100afce82;
              if (local_108 == 0x5ac) {
                local_170 = (QArrayData *)QString::fromAscii_helper("apple",5);
                iVar10 = QString::indexOf(&local_150,&local_170,0,0);
                if (*(int *)local_170 != -1) {
                  if (*(int *)local_170 != 0) {
                    LOCK();
                    *(int *)local_170 = *(int *)local_170 + -1;
                    local_b9 = *(int *)local_170 != 0;
                    UNLOCK();
                    if ((bool)local_b9) goto LAB_100afcf72;
                  }
                  QArrayData::deallocate(local_170,2,8);
                }
LAB_100afcf72:
                if (iVar10 == -1) {
                  pQVar14 = (QArrayData *)QString::fromAscii_helper("Apple ",6);
                  if (1 < *(int *)pQVar14 + 1U) {
                    LOCK();
                    *(int *)pQVar14 = *(int *)pQVar14 + 1;
                    local_b9 = *(int *)pQVar14 != 0;
                    UNLOCK();
                  }
                  local_178.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar14;
                  QString::append(&local_178);
                  QString::operator=(&local_150,&local_178);
                  if (*(int *)local_178.field0_0x0 != -1) {
                    if (*(int *)local_178.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
                      local_b9 = *(int *)local_178.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_b9) goto LAB_100afcfff;
                    }
                    QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
                  }
LAB_100afcfff:
                  if (*(int *)pQVar14 != -1) {
                    if (*(int *)pQVar14 != 0) {
                      LOCK();
                      *(int *)pQVar14 = *(int *)pQVar14 + -1;
                      local_b9 = *(int *)pQVar14 != 0;
                      UNLOCK();
                      if ((bool)local_b9) goto LAB_100afd032;
                    }
                    QArrayData::deallocate(pQVar14,2,8);
                  }
                }
              }
            }
LAB_100afd032:
            _IOObjectRelease(iVar7);
            FUN_100af2480(param_1,&local_100,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x180),
                          &local_140,&local_150,local_1b0);
            if (*(int *)local_150.field0_0x0 != -1) {
              if (*(int *)local_150.field0_0x0 != 0) {
                LOCK();
                *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
                local_b9 = *(int *)local_150.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_b9) goto LAB_100afd0a5;
              }
              QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
            }
LAB_100afd0a5:
            if (*(int *)local_140 != -1) {
              if (*(int *)local_140 != 0) {
                LOCK();
                *(int *)local_140 = *(int *)local_140 + -1;
                local_b9 = *(int *)local_140 != 0;
                UNLOCK();
                if ((bool)local_b9) goto LAB_100afd0e1;
              }
              QArrayData::deallocate(local_140,2,8);
            }
LAB_100afd0e1:
            if (*(int *)local_138.field0_0x0 != -1) {
              if (*(int *)local_138.field0_0x0 != 0) {
                LOCK();
                *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
                local_b9 = *(int *)local_138.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_b9) goto LAB_100afd11d;
              }
              QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
            }
LAB_100afd11d:
            if (*(int *)local_128 != -1) {
              if (*(int *)local_128 != 0) {
                LOCK();
                *(int *)local_128 = *(int *)local_128 + -1;
                local_b9 = *(int *)local_128 != 0;
                UNLOCK();
                if ((bool)local_b9) goto LAB_100afd159;
              }
              QArrayData::deallocate(local_128,2,8);
            }
LAB_100afd159:
            if (*(int *)local_120.field0_0x0 != -1) {
              if (*(int *)local_120.field0_0x0 != 0) {
                LOCK();
                *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
                local_b9 = *(int *)local_120.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_b9) goto LAB_100afc2f0;
              }
              QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
            }
          }
        }
        else {
          _IOObjectRelease(iVar7);
        }
        goto LAB_100afc2f0;
      }
      _IOObjectRelease(local_104);
      lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
    }
    else {
      FUN_100df99c0("","pvsHostInfo",0,"GetUsbDevices(): Can\'t create a service iterator (0x%x)");
    }
  }
  FUN_100b070a0(param_1,&local_100,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x180));
  FUN_100af6890(param_1,&local_100,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x180));
  local_198 = local_100;
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 == 0) {
      QListData::detach((int)&local_198);
      lVar11 = (long)*(int *)(local_198 + 8);
      if ((local_100 + (long)*(int *)(local_100 + 8) * 8 != local_198 + lVar11 * 8) &&
         (lVar16 = *(int *)(local_198 + 0xc) - lVar11,
         lVar16 != 0 && lVar11 <= *(int *)(local_198 + 0xc))) {
        _memcpy(local_198 + lVar11 * 8 + 0x10,local_100 + (long)*(int *)(local_100 + 8) * 8 + 0x10,
                lVar16 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + 1;
      local_b9 = *(int *)local_100 != 0;
      UNLOCK();
    }
  }
  local_190 = local_198 + (long)*(int *)(local_198 + 8) * 8 + 0x10;
  local_188 = local_198 + (long)*(int *)(local_198 + 0xc) * 8 + 0x10;
  if (*(int *)(local_198 + 8) != *(int *)(local_198 + 0xc)) {
    do {
      local_180 = 1;
      plVar2 = *(long **)local_190;
      local_1a0 = plVar2;
      FUN_100af7c70(&local_100,&local_1a0);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x88))(plVar2);
      }
      local_190 = local_190 + 8;
    } while (local_190 != local_188);
  }
  local_180 = 1;
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_b9 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_100afd410;
    }
    QListData::dispose(local_198);
  }
LAB_100afd410:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_b9 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_100afd442;
    }
    QListData::dispose(local_100);
  }
LAB_100afd442:
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

