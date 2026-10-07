
void FUN_1003f51d0(long param_1,long param_2)

{
  QString *this;
  undefined8 uVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  undefined8 *puVar11;
  QString local_288;
  QTypedArrayData<unsigned_short> *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  QString local_268;
  QString local_260;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  long local_248;
  undefined4 local_240;
  undefined1 local_239;
  char local_238 [512];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar8;
  if (((param_1 != 0) && (param_2 != 0)) &&
     (pcVar6 = (char *)_DADiskGetBSDName(), pcVar6 != (char *)0x0)) {
    uVar7 = _CFStringCreateMutable(0,0);
    _CFStringAppendCString(uVar7,pcVar6,0x8000100);
    local_250 = &cf_SCSITaskDeviceCategory;
    local_258 = &cf_SCSITaskAuthoringDevice;
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
            lVar8 = _IORegistryEntrySearchCFProperty(iVar4,"IOService",&cf_BSDName,uVar1,1);
            if (lVar8 != 0) {
              lVar9 = _CFStringCompare(lVar8,uVar7,0);
              if (lVar9 == 0) {
                QMutex::lock();
                for (puVar11 = *(undefined8 **)(param_2 + 0x10);
                    puVar11 != (undefined8 *)(param_2 + 0x10); puVar11 = (undefined8 *)*puVar11) {
                  plVar2 = (long *)puVar11[-2];
                  if (plVar2 != (long *)0x0) {
                    _IORegistryEntryGetPath(iVar4,"IOService",local_238);
                    _strlen(local_238);
                    QString::fromLocal8Bit_helper((char *)&local_260,(int)local_238);
                    local_268.field0_0x0 = (QTypedArrayData<unsigned_short> *)plVar2[4];
                    if (1 < *(int *)local_268.field0_0x0 + 1U) {
                      LOCK();
                      *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + 1;
                      local_239 = *(int *)local_268.field0_0x0 != 0;
                      UNLOCK();
                    }
                    cVar3 = operator==(&local_268,&local_260);
                    if (*(int *)local_268.field0_0x0 != -1) {
                      if (*(int *)local_268.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
                        local_239 = *(int *)local_268.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_239) goto LAB_1003f5432;
                      }
                      QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
                    }
LAB_1003f5432:
                    if (cVar3 != '\0') {
                      sVar10 = _strlen(pcVar6);
                      local_270 = (QArrayData *)QString::fromAscii_helper(pcVar6,(int)sVar10);
                      this = (QString *)(puVar11 + -1);
                      iVar5 = QString::compare(this,&local_270,0);
                      if (*(int *)local_270 != -1) {
                        if (*(int *)local_270 != 0) {
                          LOCK();
                          *(int *)local_270 = *(int *)local_270 + -1;
                          local_239 = *(int *)local_270 != 0;
                          UNLOCK();
                          if ((bool)local_239) goto LAB_1003f54ad;
                        }
                        QArrayData::deallocate(local_270,2,8);
                      }
LAB_1003f54ad:
                      if (iVar5 != 0) {
                        local_280 = this->field0_0x0;
                        if (1 < *(int *)local_280 + 1U) {
                          LOCK();
                          *(int *)local_280 = *(int *)local_280 + 1;
                          local_239 = *(int *)local_280 != 0;
                          UNLOCK();
                        }
                        QString::toLocal8Bit();
                        FUN_1008e3970("","DVDImage",0,
                                      "[DVD Drive:Runloop] BSD names do not match(\"%s\",\"%s\")",
                                      local_278 + *(long *)(local_278 + 0x10),pcVar6);
                        if (*(int *)local_278 != -1) {
                          if (*(int *)local_278 != 0) {
                            LOCK();
                            *(int *)local_278 = *(int *)local_278 + -1;
                            local_239 = *(int *)local_278 != 0;
                            UNLOCK();
                            if ((bool)local_239) goto LAB_1003f5556;
                          }
                          QArrayData::deallocate(local_278,1,8);
                        }
LAB_1003f5556:
                        if (*(int *)local_280 != -1) {
                          if (*(int *)local_280 != 0) {
                            LOCK();
                            *(int *)local_280 = *(int *)local_280 + -1;
                            local_239 = *(int *)local_280 != 0;
                            UNLOCK();
                            if ((bool)local_239) goto LAB_1003f5592;
                          }
                          QArrayData::deallocate((QArrayData *)local_280,2,8);
                        }
LAB_1003f5592:
                        _strlen(pcVar6);
                        QString::fromLocal8Bit_helper((char *)&local_288,(int)pcVar6);
                        QString::operator=(this,&local_288);
                        if (*(int *)local_288.field0_0x0 != -1) {
                          if (*(int *)local_288.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_288.field0_0x0 = *(int *)local_288.field0_0x0 + -1;
                            local_239 = *(int *)local_288.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_239) goto LAB_1003f55fd;
                          }
                          QArrayData::deallocate((QArrayData *)local_288.field0_0x0,2,8);
                        }
                      }
LAB_1003f55fd:
                      (**(code **)(*plVar2 + 0x98))(plVar2,this);
                    }
                    if (*(int *)local_260.field0_0x0 != -1) {
                      if (*(int *)local_260.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_260.field0_0x0 = *(int *)local_260.field0_0x0 + -1;
                        local_239 = *(int *)local_260.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_239) goto LAB_1003f5370;
                      }
                      QArrayData::deallocate((QArrayData *)local_260.field0_0x0,2,8);
                    }
                  }
LAB_1003f5370:
                }
                QMutex::unlock();
              }
              else {
                _CFRelease(lVar8);
              }
            }
            _IOObjectRelease(iVar4);
            iVar4 = _IOIteratorNext(local_240);
          } while (iVar4 != 0);
        }
        _IOObjectRelease(local_240);
        lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
    }
  }
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

