
void FUN_100afbb40(long param_1)

{
  CHwGenericDevice *pCVar1;
  int iVar2;
  long lVar3;
  CHwGenericDevice *pCVar4;
  size_t sVar5;
  int iVar6;
  QArrayData *pQVar7;
  QArrayData *local_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  lVar3 = **(long **)(*(long *)(param_1 + 0x18) + 0x158);
  if (*(int *)(lVar3 + 0xc) == *(int *)(lVar3 + 8)) {
    lVar3 = _IOServiceMatching("IOSerialBSDClient");
    if (lVar3 != 0) {
      _CFDictionarySetValue(lVar3,&cf_IOSerialBSDClientType,&cf_IORS232SerialStream);
    }
    iVar2 = _IOServiceGetMatchingServices
                      (*(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0,lVar3,&local_38);
    if (iVar2 == 0) {
LAB_100afbbcf:
      iVar2 = _IOIteratorNext(local_38);
      if (iVar2 != 0) {
        local_40 = (QArrayData *)PTR_shared_null_1021e1288;
        FUN_100afbf10(iVar2,&cf_IOCalloutDevice,&local_40,0);
        if (*(int *)(local_40 + 4) != 0) {
          pCVar1 = *(CHwGenericDevice **)(param_1 + 0x18);
          pCVar4 = operator_new(0xb8);
          QString::toUtf8();
          pQVar7 = local_50 + *(long *)(local_50 + 0x10);
          iVar6 = -1;
          if (pQVar7 != (QArrayData *)0x0) {
            sVar5 = _strlen((char *)pQVar7);
            iVar6 = (int)sVar5;
          }
          local_48 = (QArrayData *)QString::fromAscii_helper((char *)pQVar7,iVar6);
          QString::toUtf8();
          pQVar7 = local_60 + *(long *)(local_60 + 0x10);
          iVar6 = -1;
          if (pQVar7 != (QArrayData *)0x0) {
            sVar5 = _strlen((char *)pQVar7);
            iVar6 = (int)sVar5;
          }
          pQVar7 = (QArrayData *)QString::fromAscii_helper((char *)pQVar7,iVar6);
          CHwGenericDevice::CHwGenericDevice(pCVar4,10,&local_48);
          CHostHardwareInfo::addSerialPort(pCVar1);
          if (*(int *)pQVar7 != -1) {
            if (*(int *)pQVar7 != 0) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_31 = *(int *)pQVar7 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100afbcf4;
            }
            QArrayData::deallocate(pQVar7,2,8);
          }
LAB_100afbcf4:
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100afbd27;
            }
            QArrayData::deallocate(local_60,1,8);
          }
LAB_100afbd27:
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100afbd5a;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_100afbd5a:
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100afbd8a;
            }
            QArrayData::deallocate(local_50,1,8);
          }
        }
LAB_100afbd8a:
        _IOObjectRelease(iVar2);
        if (*(int *)local_40 != 0) goto code_r0x000100afbda0;
        goto LAB_100afbbc0;
      }
      _IOObjectRelease(local_38);
    }
  }
  return;
code_r0x000100afbda0:
  if (*(int *)local_40 != -1) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
    if (!(bool)local_31) {
LAB_100afbbc0:
      QArrayData::deallocate(local_40,2,8);
    }
  }
  goto LAB_100afbbcf;
}

