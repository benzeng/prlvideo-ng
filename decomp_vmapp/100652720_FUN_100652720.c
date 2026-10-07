
void FUN_100652720(undefined8 param_1)

{
  undefined8 uVar1;
  QString QVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  QArrayData *pQVar11;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  long local_60;
  QString local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  lVar6 = _IOServiceMatching("IOHDIXHDDriveOutKernel");
  if ((lVar6 != 0) &&
     (iVar4 = _IOServiceGetMatchingServices
                        (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,lVar6,&local_38),
     iVar4 == 0)) {
    iVar4 = _IOIteratorNext(local_38);
    if (iVar4 != 0) {
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
      do {
        local_40 = 0;
        iVar5 = _IORegistryEntryCreateCFProperties(iVar4,&local_40,uVar1,0);
        if (iVar5 == 0) {
          local_48 = 0;
          local_50 = 0;
          cVar3 = _CFDictionaryGetValueIfPresent(local_40,&cf_od_media_type,&local_48);
          if ((cVar3 != '\0') &&
             (cVar3 = _CFDictionaryGetValueIfPresent(local_40,&cf_od_server_name,&local_50),
             cVar3 != '\0')) {
            uVar7 = _CFStringCreateMutable(0,0);
            _CFStringAppend(uVar7,local_50);
            _CFStringAppend(uVar7,&cf_space_s_);
            _CFStringAppend(uVar7,local_48);
            FUN_100788b70(&local_58,uVar7);
            _CFRelease(uVar7);
            local_60 = 0;
            cVar3 = _CFDictionaryGetValueIfPresent(local_40,&cf_image_path,&local_60);
            if (cVar3 == '\0') {
              QString::toUtf8();
              FUN_1008e3970("","pvsHostInfo",0,"[GetCDList] Can not get device url for \"%s\"",
                            local_68 + *(long *)(local_68 + 0x10));
              if (*(int *)local_68 != -1) {
                if (*(int *)local_68 != 0) {
                  LOCK();
                  *(int *)local_68 = *(int *)local_68 + -1;
                  local_31 = *(int *)local_68 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100652d93;
                }
                QArrayData::deallocate(local_68,1,8);
              }
            }
            else {
              if (local_60 != 0) {
                lVar6 = _CFGetTypeID();
                lVar8 = _CFDataGetTypeID();
                if (lVar6 == lVar8) {
                  iVar5 = _CFDataGetLength(local_60);
                  pvVar9 = _malloc((long)iVar5);
                  if (pvVar9 == (void *)0x0) {
                    QString::toUtf8();
                    FUN_1008e3970("","pvsHostInfo",0,
                                  "[GetCDList] Can not allocate memory for device url \"%s\"",
                                  local_78 + *(long *)(local_78 + 0x10));
                    if (*(int *)local_78 != -1) {
                      if (*(int *)local_78 != 0) {
                        LOCK();
                        *(int *)local_78 = *(int *)local_78 + -1;
                        local_31 = *(int *)local_78 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100652d93;
                      }
                      QArrayData::deallocate(local_78,1,8);
                    }
                  }
                  else {
                    pvVar10 = (void *)_CFDataGetBytePtr(local_60);
                    _memcpy(pvVar9,pvVar10,(long)iVar5);
                    QByteArray::fromRawData((char *)&local_88,(int)pvVar9);
                    lVar6 = 0;
                    pQVar11 = local_88 + *(long *)(local_88 + 0x10);
                    if ((pQVar11 != (QArrayData *)0x0) && (*(uint *)(local_88 + 4) != 0)) {
                      lVar6 = 0;
                      do {
                        if (pQVar11[lVar6] == (QArrayData)0x0) break;
                        lVar6 = lVar6 + 1;
                      } while ((uint)lVar6 < *(uint *)(local_88 + 4));
                    }
                    local_80 = (QArrayData *)QString::fromAscii_helper((char *)pQVar11,(int)lVar6);
                    if (*(int *)local_88 != -1) {
                      if (*(int *)local_88 != 0) {
                        LOCK();
                        *(int *)local_88 = *(int *)local_88 + -1;
                        local_31 = *(int *)local_88 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100652946;
                      }
                      QArrayData::deallocate(local_88,1,8);
                    }
LAB_100652946:
                    lVar6 = _IORegistryEntrySearchCFProperty(iVar4,"IOService",&cf_BSDName,uVar1,1);
                    local_90.field0_0x0 =
                         (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
                    if (lVar6 != 0) {
                      FUN_100788b70(&local_98,lVar6);
                      QString::operator=(&local_90,&local_98);
                      if (*(int *)local_98.field0_0x0 != -1) {
                        if (*(int *)local_98.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
                          local_31 = *(int *)local_98.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_1006529e1;
                        }
                        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
                      }
LAB_1006529e1:
                      _CFRelease(lVar6);
                    }
                    if (*(int *)(local_90.field0_0x0 + 4) != 0) {
                      pQVar11 = (QArrayData *)QString::fromAscii_helper(" ",1);
                      if (1 < *(int *)pQVar11 + 1U) {
                        LOCK();
                        *(int *)pQVar11 = *(int *)pQVar11 + 1;
                        local_31 = *(int *)pQVar11 != 0;
                        UNLOCK();
                      }
                      local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar11;
                      QString::append(&local_a0);
                      QString::append(&local_58);
                      if (*(int *)local_a0.field0_0x0 != -1) {
                        if (*(int *)local_a0.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                          local_31 = *(int *)local_a0.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100652a79;
                        }
                        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
                      }
LAB_100652a79:
                      if (*(int *)pQVar11 != -1) {
                        if (*(int *)pQVar11 != 0) {
                          LOCK();
                          *(int *)pQVar11 = *(int *)pQVar11 + -1;
                          local_31 = *(int *)pQVar11 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100652aa6;
                        }
                        QArrayData::deallocate(pQVar11,2,8);
                      }
                    }
LAB_100652aa6:
                    QVar2.field0_0x0 = local_58.field0_0x0;
                    pQVar11 = local_80;
                    if (*(int *)(local_58.field0_0x0 + 4) == 0) {
                      QString::toUtf8();
                      FUN_1008e3970("","pvsHostInfo",0,
                                    "[GetCDList] Can not detect device name for remote drive \"%s\""
                                    ,local_b8 + *(long *)(local_b8 + 0x10));
                      if (*(int *)local_b8 != -1) {
                        if (*(int *)local_b8 != 0) {
                          LOCK();
                          *(int *)local_b8 = *(int *)local_b8 + -1;
                          local_31 = *(int *)local_b8 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100652d21;
                        }
                        QArrayData::deallocate(local_b8,1,8);
                      }
                    }
                    else {
                      local_b0 = (QArrayData *)local_58.field0_0x0;
                      if (1 < *(int *)local_58.field0_0x0 + 1U) {
                        LOCK();
                        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
                        local_31 = *(int *)local_58.field0_0x0 != 0;
                        UNLOCK();
                      }
                      local_a8 = local_80;
                      if (1 < *(int *)local_80 + 1U) {
                        LOCK();
                        *(int *)local_80 = *(int *)local_80 + 1;
                        local_31 = *(int *)local_80 != 0;
                        UNLOCK();
                      }
                      FUN_10065dcf0(param_1,&local_b0);
                      if (*(int *)pQVar11 != -1) {
                        if (*(int *)pQVar11 != 0) {
                          LOCK();
                          *(int *)pQVar11 = *(int *)pQVar11 + -1;
                          local_31 = *(int *)pQVar11 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100652b2a;
                        }
                        QArrayData::deallocate(pQVar11,2,8);
                      }
LAB_100652b2a:
                      if (*(int *)QVar2.field0_0x0 != -1) {
                        if (*(int *)QVar2.field0_0x0 != 0) {
                          LOCK();
                          *(int *)QVar2.field0_0x0 = *(int *)QVar2.field0_0x0 + -1;
                          local_31 = *(int *)QVar2.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100652d21;
                        }
                        QArrayData::deallocate((QArrayData *)QVar2.field0_0x0,2,8);
                      }
                    }
LAB_100652d21:
                    _free(pvVar9);
                    if (*(int *)local_90.field0_0x0 != -1) {
                      if (*(int *)local_90.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
                        local_31 = *(int *)local_90.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100652d63;
                      }
                      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
                    }
LAB_100652d63:
                    if (*(int *)local_80 != -1) {
                      if (*(int *)local_80 != 0) {
                        LOCK();
                        *(int *)local_80 = *(int *)local_80 + -1;
                        local_31 = *(int *)local_80 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100652d93;
                      }
                      QArrayData::deallocate(local_80,2,8);
                    }
                  }
                  goto LAB_100652d93;
                }
              }
              QString::toUtf8();
              FUN_1008e3970("","pvsHostInfo",0,"[GetCDList] Wrong data type for device url \"%s\"",
                            local_70 + *(long *)(local_70 + 0x10));
              if (*(int *)local_70 != -1) {
                if (*(int *)local_70 != 0) {
                  LOCK();
                  *(int *)local_70 = *(int *)local_70 + -1;
                  local_31 = *(int *)local_70 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100652d93;
                }
                QArrayData::deallocate(local_70,1,8);
              }
            }
LAB_100652d93:
            if (*(int *)local_58.field0_0x0 != -1) {
              if (*(int *)local_58.field0_0x0 != 0) {
                LOCK();
                *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
                local_31 = *(int *)local_58.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100652de0;
              }
              QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
            }
          }
LAB_100652de0:
          _CFRelease(local_40);
        }
        _IOObjectRelease(iVar4);
        iVar4 = _IOIteratorNext(local_38);
      } while (iVar4 != 0);
    }
    _IOObjectRelease(local_38);
  }
  return;
}

