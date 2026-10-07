
void FUN_100651fd0(undefined8 param_1)

{
  undefined8 uVar1;
  QString QVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  size_t sVar7;
  QArrayData *pQVar8;
  long lVar9;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QString local_290;
  QString local_288;
  QString local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  long local_248;
  undefined4 local_240;
  undefined1 local_239;
  char local_238 [512];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_250 = &cf_SCSITaskDeviceCategory;
  local_258 = &cf_SCSITaskAuthoringDevice;
  local_38 = lVar9;
  FUN_1006821f0(&local_248,&local_250,&local_258);
  if (local_248 != 0) {
    _CFDictionarySetValue(local_248,&cf_Ejectable,*(undefined8 *)PTR__kCFBooleanTrue_100ba23c8);
    iVar4 = _IOServiceGetMatchingServices
                      (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,local_248,&local_240);
    if (iVar4 == 0) {
      iVar4 = _IOIteratorNext(local_240);
      if (iVar4 != 0) {
        uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
        do {
          local_260 = 0;
          iVar5 = _IORegistryEntryCreateCFProperties(iVar4,&local_260,uVar1,0);
          if (iVar5 == 0) {
            local_268 = 0;
            local_280.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
            cVar3 = _CFDictionaryGetValueIfPresent(local_260,&cf_DeviceCharacteristics,&local_268);
            if (cVar3 == '\0') {
              FUN_1008e3970("","pvsHostInfo",0,"[GetCDList] Can not get dictionary value %s",
                            "Device Characteristics");
            }
            else {
              cVar3 = _CFDictionaryGetValueIfPresent(local_268,&cf_VendorName,&local_270);
              if (cVar3 == '\0') {
                FUN_1008e3970("","pvsHostInfo",0,"[GetCDList] Can not get dictionary value \"%s\" ",
                              "Vendor Name");
              }
              else {
                cVar3 = _CFDictionaryGetValueIfPresent(local_268,&cf_ProductName,&local_278);
                if (cVar3 == '\0') {
                  FUN_1008e3970("","pvsHostInfo",0,
                                "[GetCDList] Can not get dictionary value \"%s\" ","Product Name");
                }
                else {
                  uVar6 = _CFStringCreateMutable(0,0);
                  _CFStringAppend(uVar6,local_270);
                  _CFStringAppend(uVar6,&cf_space_s_);
                  _CFStringAppend(uVar6,local_278);
                  FUN_100788b70(&local_288,uVar6);
                  QString::operator=(&local_280,&local_288);
                  if (*(int *)local_288.field0_0x0 != -1) {
                    if (*(int *)local_288.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_288.field0_0x0 = *(int *)local_288.field0_0x0 + -1;
                      local_239 = *(int *)local_288.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_239) goto LAB_1006521e8;
                    }
                    QArrayData::deallocate((QArrayData *)local_288.field0_0x0,2,8);
                  }
LAB_1006521e8:
                  _CFRelease(uVar6);
                  QString::trimmed();
                  QString::operator=(&local_280,&local_290);
                  if (*(int *)local_290.field0_0x0 != -1) {
                    if (*(int *)local_290.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_290.field0_0x0 = *(int *)local_290.field0_0x0 + -1;
                      local_239 = *(int *)local_290.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_239) goto LAB_100652252;
                    }
                    QArrayData::deallocate((QArrayData *)local_290.field0_0x0,2,8);
                  }
LAB_100652252:
                  iVar5 = _IORegistryEntryGetPath(iVar4,"IOService",local_238);
                  if (iVar5 == 0) {
                    if (*(int *)(local_280.field0_0x0 + 4) == 0) {
                      FUN_1008e3970("","pvsHostInfo",0,
                                    "[GetCDList] Can not detect device name for physical drive \"%s\""
                                    ,local_238);
                    }
                    else {
                      sVar7 = _strlen(local_238);
                      pQVar8 = (QArrayData *)QString::fromAscii_helper(local_238,(int)sVar7);
                      QVar2.field0_0x0 = local_280.field0_0x0;
                      local_2a0 = (QArrayData *)local_280.field0_0x0;
                      if (1 < *(int *)local_280.field0_0x0 + 1U) {
                        LOCK();
                        *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + 1;
                        local_239 = *(int *)local_280.field0_0x0 != 0;
                        UNLOCK();
                      }
                      if (1 < *(int *)pQVar8 + 1U) {
                        LOCK();
                        *(int *)pQVar8 = *(int *)pQVar8 + 1;
                        local_239 = *(int *)pQVar8 != 0;
                        UNLOCK();
                      }
                      local_298 = pQVar8;
                      FUN_10065dcf0(param_1,&local_2a0);
                      if (*(int *)pQVar8 != -1) {
                        if (*(int *)pQVar8 != 0) {
                          LOCK();
                          *(int *)pQVar8 = *(int *)pQVar8 + -1;
                          local_239 = *(int *)pQVar8 != 0;
                          UNLOCK();
                          if ((bool)local_239) goto LAB_1006523cc;
                        }
                        QArrayData::deallocate(pQVar8,2,8);
                      }
LAB_1006523cc:
                      if (*(int *)QVar2.field0_0x0 != -1) {
                        if (*(int *)QVar2.field0_0x0 != 0) {
                          LOCK();
                          *(int *)QVar2.field0_0x0 = *(int *)QVar2.field0_0x0 + -1;
                          local_239 = *(int *)QVar2.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_239) goto LAB_1006523ff;
                        }
                        QArrayData::deallocate((QArrayData *)QVar2.field0_0x0,2,8);
                      }
LAB_1006523ff:
                      if (*(int *)pQVar8 != -1) {
                        if (*(int *)pQVar8 != 0) {
                          LOCK();
                          *(int *)pQVar8 = *(int *)pQVar8 + -1;
                          local_239 = *(int *)pQVar8 != 0;
                          UNLOCK();
                          if ((bool)local_239) goto LAB_100652460;
                        }
                        QArrayData::deallocate(pQVar8,2,8);
                      }
                    }
                  }
                  else {
                    FUN_1008e3970("","pvsHostInfo",0);
                  }
                }
              }
            }
LAB_100652460:
            _CFRelease(local_260);
            if (*(int *)local_280.field0_0x0 != -1) {
              if (*(int *)local_280.field0_0x0 != 0) {
                LOCK();
                *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1;
                local_239 = *(int *)local_280.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_239) goto LAB_1006524b0;
              }
              QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
            }
          }
LAB_1006524b0:
          _IOObjectRelease(iVar4);
          iVar4 = _IOIteratorNext(local_240);
        } while (iVar4 != 0);
      }
      _IOObjectRelease(local_240);
      lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

