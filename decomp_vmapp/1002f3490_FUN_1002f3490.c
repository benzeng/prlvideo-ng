
undefined4 FUN_1002f3490(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  int local_6c;
  long *local_68;
  undefined4 local_60;
  int local_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined4 local_48;
  undefined1 local_41;
  QString local_40;
  undefined1 local_31;
  
  local_48 = 0;
  lVar10 = _IOServiceMatching("IOUSBDevice");
  if (lVar10 == 0) {
    if (DAT_1011c568c < 0) {
      return 0x80000009;
    }
    FUN_1008e3970("","USB",0,"[%s] Can\'t create a matching dictionary!",
                  *(long *)(param_1 + 8) + 0x838);
    return 0x80000009;
  }
  iVar7 = _IOServiceGetMatchingServices
                    (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,lVar10,&local_48);
  if (iVar7 != 0) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] Can\'t create a service iterator %X!",
                    *(long *)(param_1 + 8) + 0x838,iVar7);
    }
    *(int *)(param_1 + 0x20) = iVar7;
    return 0x80000009;
  }
  local_50 = *(QArrayData **)(*(long *)(param_1 + 8) + 0x20);
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  QString::QString(&local_40,0x7c);
  QString::section(&local_58,&local_50,&local_40,0,0,0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f35de;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002f35de:
  iVar7 = QString::toUInt((bool *)&local_58,(int)&local_41);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f3623;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002f3623:
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
  plVar1 = (long *)(param_1 + 0x28);
  while ((iVar8 = _IOIteratorIsValid(local_48), iVar8 != 0 &&
         (iVar8 = _IOIteratorNext(local_48), iVar8 != 0))) {
    local_5c = 0;
    lVar10 = _IORegistryEntryCreateCFProperty(iVar8,&cf_locationID,uVar2,0);
    if (lVar10 == 0) {
LAB_1002f3940:
      _IOObjectRelease(iVar8);
    }
    else {
      cVar6 = _CFNumberGetValue(lVar10,9,&local_5c);
      _CFRelease(lVar10);
      if ((cVar6 == '\0') || (local_5c != iVar7)) goto LAB_1002f3940;
      cVar6 = FUN_1006d81f0(1);
      if ((cVar6 != '\0') && (iVar9 = _IOServiceAuthorize(iVar8,1), iVar9 != 0)) {
        bVar5 = true;
        _IOObjectRelease(iVar8);
        goto LAB_1002f39eb;
      }
      local_60 = 0;
      local_68 = (long *)0x0;
      uVar11 = _CFUUIDGetConstantUUIDWithBytes
                         (0,0x9d,199,0xb7,0x80,0x9e,0xc0,0x11,0xd4,0xa5,0x4f,0,10,0x27,5,0x28,0x61);
      uVar12 = _CFUUIDGetConstantUUIDWithBytes
                         (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,0x42,
                          0x6f);
      iVar9 = FUN_1002f3df0(iVar8,uVar11,uVar12,&local_68,&local_60);
      _IOObjectRelease(iVar8);
      plVar4 = local_68;
      if ((iVar9 == 0) && (local_68 != (long *)0x0)) {
        pcVar3 = *(code **)(*local_68 + 8);
        uVar11 = _CFUUIDGetConstantUUIDWithBytes
                           (0,0xfe,0x2f,0xd5,0x2f,0x3b,0x5a,0x47,0x3b,0x97,0x7b,0xad,0x99,0,0x1e,
                            0xb3,0xed);
        uVar11 = _CFUUIDGetUUIDBytes(uVar11);
        iVar8 = (*pcVar3)(plVar4,uVar11);
        (**(code **)(*local_68 + 0x18))();
        if ((iVar8 == 0) && (plVar4 = (long *)*plVar1, plVar4 != (long *)0x0)) {
          local_6c = 0;
          iVar8 = (**(code **)(*plVar4 + 0xa0))(plVar4,&local_6c);
          if ((iVar8 == 0) && (local_6c == iVar7)) break;
          (**(code **)(*(long *)*plVar1 + 0x18))();
          *plVar1 = 0;
        }
        else if (-1 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[%s] Couldn\'t create a device interface (0x%x)!",
                        *(long *)(param_1 + 8) + 0x838,iVar8);
        }
      }
      else {
        if (-1 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[%s] Unable to create a plugin (0x%x)!",
                        *(long *)(param_1 + 8) + 0x838,iVar9);
        }
        *(int *)(param_1 + 0x20) = iVar9;
      }
    }
  }
  bVar5 = false;
LAB_1002f39eb:
  _IOObjectRelease(local_48);
  if (*plVar1 == 0) {
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x20) = 0x80000591;
      uVar13 = 0x80000591;
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] User have not autorized access to USB Device %X",
                      *(long *)(param_1 + 8) + 0x838,iVar7);
        uVar13 = *(undefined4 *)(param_1 + 0x20);
      }
      goto LAB_1002f3cc8;
    }
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] USB Device %X not found!",*(long *)(param_1 + 8) + 0x838,iVar7)
      ;
    }
    *(undefined4 *)(param_1 + 0x20) = 0x80000009;
  }
  else {
    cVar6 = FUN_1006d81f0(1);
    if ((cVar6 == '\0') ||
       (iVar7 = (**(code **)(*(long *)*plVar1 + 0x128))((long *)*plVar1,0x40000000), iVar7 == 0)) {
      iVar7 = (**(code **)(*(long *)*plVar1 + 0xe8))();
      if (iVar7 == -0x1ffffd3b) {
        _usleep(10000);
        iVar7 = (**(code **)(*(long *)*plVar1 + 0xe8))();
        if (iVar7 != -0x1ffffd3b) goto LAB_1002f3b58;
        _usleep(10000);
        iVar7 = (**(code **)(*(long *)*plVar1 + 0xe8))();
        if (iVar7 != -0x1ffffd3b) goto LAB_1002f3b58;
        _usleep(10000);
        iVar7 = (**(code **)(*(long *)*plVar1 + 0xe8))();
        if (iVar7 != -0x1ffffd3b) goto LAB_1002f3b58;
        _usleep(10000);
        iVar7 = (**(code **)(*(long *)*plVar1 + 0xe8))();
        if (iVar7 != -0x1ffffd3b) goto LAB_1002f3b58;
        iVar7 = -0x1ffffd3b;
        _usleep(10000);
      }
      else {
LAB_1002f3b58:
        if (iVar7 == 0) {
          uVar13 = 0;
          iVar7 = (**(code **)(*(long *)*plVar1 + 0x100))((long *)*plVar1,0);
          if ((iVar7 == -0x1fffbfb9) || (iVar7 == 0)) goto LAB_1002f3cc8;
          if (-1 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[%s] Unable to resume port for device (0x%x)!",
                          *(long *)(param_1 + 8) + 0x838,iVar7);
          }
          *(int *)(param_1 + 0x20) = iVar7;
          goto LAB_1002f3cc3;
        }
      }
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] Unable to open device %X!",*(long *)(param_1 + 8) + 0x838,
                      iVar7);
      }
      *(int *)(param_1 + 0x20) = iVar7;
      (**(code **)(**(long **)(param_1 + 0x28) + 0x18))();
    }
    else {
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] USBDeviceReEnumerate failed for device: error 0x%x!",
                      *(long *)(param_1 + 8) + 0x838,iVar7);
      }
      *(int *)(param_1 + 0x20) = iVar7;
      (**(code **)(**(long **)(param_1 + 0x28) + 0x18))();
    }
    *plVar1 = 0;
  }
LAB_1002f3cc3:
  uVar13 = 0x80000009;
LAB_1002f3cc8:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return uVar13;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return uVar13;
}

