
void FUN_1007d0350(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  HiDPIVmSettings *this;
  long lVar3;
  long lVar4;
  bool bVar5;
  HiDPIVmSettings *local_f8;
  HiDPIVmSettings local_f0 [152];
  Data *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  int local_38;
  undefined1 local_29;
  
  cVar1 = FUN_10011bfc0();
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = FUN_100152280();
  FUN_100154b10(&local_58,uVar2);
  local_50 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_50);
      lVar3 = (long)*(int *)(local_50 + 8);
      if ((local_58 + (long)*(int *)(local_58 + 8) * 8 != local_50 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_50 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar3 * 8 + 0x10,local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10,
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  local_38 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
LAB_1007d042b:
      QListData::dispose(local_58);
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if (!(bool)local_29) goto LAB_1007d042b;
    }
    if (local_38 == 0) goto LAB_1007d0520;
  }
  if (local_48 != local_40) {
    do {
      uVar2 = *(undefined8 *)local_48;
      cVar1 = FUN_1001221f0(uVar2);
      if (cVar1 != '\0') {
        HiDPIVmSettings::HiDPIVmSettings(local_f0);
        FUN_10018c2b0(uVar2);
        CVmConfiguration::getVmHardwareList();
        CVmHardware::getVideo();
        CVmVideo::isEnableHiResDrawing();
        bVar5 = SUB81(local_f0,0);
        HiDPIVmSettings::setEnableHiResDrawing(bVar5);
        FUN_10018c2b0(uVar2);
        CVmConfiguration::getVmHardwareList();
        CVmHardware::getVideo();
        CVmVideo::isUseHiResInGuest();
        HiDPIVmSettings::setUseHiResInGuest(bVar5);
        this = operator_new(0x98);
        HiDPIVmSettings::HiDPIVmSettings(this,local_f0);
        local_f8 = this;
        FUN_1007d9670(param_1 + 0xb8,&local_f8);
        HiDPIVmSettings::~HiDPIVmSettings(local_f0);
      }
      local_48 = local_48 + 8;
      local_38 = 1;
    } while (local_48 != local_40);
  }
LAB_1007d0520:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_29 = 0;
    }
    QListData::dispose(local_50);
  }
  return;
}

