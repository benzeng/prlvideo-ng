
undefined8 * FUN_100b01b20(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined1 *puVar7;
  QString local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  undefined1 local_89;
  QString local_88;
  QString local_80;
  QString local_78;
  int local_70 [2];
  QArrayData *local_68;
  undefined1 local_60;
  int local_58;
  int local_54;
  QArrayData *local_50;
  undefined4 local_44;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  puVar7 = &local_89;
  if (param_3 != (undefined1 *)0x0) {
    puVar7 = param_3;
  }
  *puVar7 = 0;
  local_a0 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@MSC@",0xc);
  cVar2 = QString::startsWith(param_2,&local_a0,1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b01bc9;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100b01bc9:
  if (cVar2 == '\0') {
    QString::QString(&local_78,0x7c);
    QString::section(&local_b0,param_2,&local_78,0,0,0);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b01d2b;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_100b01d2b:
    iVar3 = QString::toUInt((bool *)&local_b0,0);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b01d77;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100b01d77:
    if (*(int *)PTR_MacintoshVersion_1021e15a8 < 0xd) {
      lVar6 = _IOServiceMatching("IOUSBDevice");
      if (lVar6 == 0) {
        FUN_100df99c0("","pvsHostInfo",0," Can\'t create a matching dictionary");
        local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
      }
      else {
        iVar5 = _IOServiceGetMatchingServices
                          (*(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0,lVar6,&local_44);
        if (iVar5 == 0) {
          local_50 = (QArrayData *)QString::fromAscii_helper("",0);
          uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
          while (iVar5 = _IOIteratorNext(local_44), iVar5 != 0) {
            local_54 = 0;
            lVar6 = _IORegistryEntryCreateCFProperty(iVar5,&cf_locationID,uVar1,0);
            if (lVar6 != 0) {
              _CFNumberGetValue(lVar6,3,&local_54);
              _CFRelease(lVar6);
            }
            if (local_54 == iVar3) {
              FUN_100afbf10(iVar5,&cf_BSDName,&local_50,1);
              local_58 = 0;
              lVar6 = _IORegistryEntrySearchCFProperty
                                (iVar5,"IOService",&cf_PeripheralDeviceType,uVar1,1);
              if (lVar6 != 0) {
                cVar2 = _CFNumberGetValue(lVar6,3,&local_58);
                _CFRelease(lVar6);
                if (cVar2 != '\0') {
                  *puVar7 = local_58 == 5;
                }
              }
              _IOObjectRelease(iVar5);
              break;
            }
            _IOObjectRelease(iVar5);
          }
          _IOObjectRelease(local_44);
          local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
          if (1 < *(int *)local_50 + 1U) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + 1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
          }
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b020a4;
            }
            QArrayData::deallocate(local_50,2,8);
          }
        }
        else {
          FUN_100df99c0("","pvsHostInfo",0," Can\'t create a service iterator (0x%x)",iVar5);
          local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
        }
      }
LAB_100b020a4:
      QString::operator=(&local_98,&local_c0);
      if (*(int *)local_c0.field0_0x0 != -1) {
        if (*(int *)local_c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
          local_31 = *(int *)local_c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b020ed;
        }
        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
      }
    }
    else {
      uVar4 = _IORegistryGetRootEntry(*(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0);
      local_68 = (QArrayData *)PTR_shared_null_1021e1288;
      local_60 = 0;
      local_70[0] = iVar3;
      FUN_100b046c0(uVar4,local_70);
      _IOObjectRelease(uVar4);
      *puVar7 = local_60;
      local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b01e0f;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100b01e0f:
      QString::operator=(&local_98,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_31 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b020ed;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
    }
LAB_100b020ed:
    if (*(int *)(local_98.field0_0x0 + 4) != 0) {
      QString::fromUtf8_helper((char *)&local_40,0x1efb3ab);
      QString::insert((int)&local_98,(QChar *)0x0,
                      (int)*(undefined8 *)(local_40 + 0x10) + (int)local_40);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b02162;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
LAB_100b02162:
    *param_1 = local_98.field0_0x0;
    if (1 < *(int *)local_98.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
    }
    goto LAB_100b02177;
  }
  QString::QString(&local_88,0x7c);
  QString::section(&local_a8,param_2,&local_88,5,0xffffffff,0);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b01c30;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100b01c30:
  QString::QString(&local_80,0x40);
  QString::section(param_1,&local_a8,&local_80,1,0xffffffff,0);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b01c8f;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100b01c8f:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b02177;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100b02177:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_98.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
  return param_1;
}

