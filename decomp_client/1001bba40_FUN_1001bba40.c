
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001bba40(void)

{
  code *pcVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  int local_5c;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  uint local_38;
  _func_void_Node_ptr *local_30;
  undefined1 local_21;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar4 = CVmCommonOptions::getOsType();
  if (iVar4 != 8) {
    return;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar5 = CVmCommonOptions::getOsVersion();
  if (uVar5 < 0x80b) {
    return;
  }
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  cVar3 = CVmVideo::isEnableHiResDrawing();
  if (cVar3 == '\0') {
    return;
  }
  MacUtils::getDisplaySizes();
  FUN_1001299e0(&local_58,&local_30);
  local_50 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_50);
      lVar7 = (long)*(int *)(local_50 + 8);
      if ((local_58 + (long)*(int *)(local_58 + 8) * 8 != local_50 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_50 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar7 * 8 + 0x10,local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10,
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  local_38 = 1;
  if (*(int *)local_58 == -1) {
LAB_1001bbb86:
    if (local_48 != local_40) {
      do {
        local_5c = *(int *)local_48;
        if (local_38 == 0) {
LAB_1001bbbea:
          local_48 = local_48 + 8;
          local_38 = 1;
        }
        else {
          pdVar6 = (double *)FUN_1001bc860(&local_30,&local_5c);
          dVar2 = *pdVar6;
          lVar7 = FUN_1001bc860(&local_30,&local_5c);
          if (dVar2 * (double)*(int *)(lVar7 + 8) < _DAT_100e15a20) goto LAB_1001bbbea;
          CVmConfiguration::getVmHardwareList();
          uVar5 = CVmHardware::getVideo();
          CVmVideo::setMemorySize(uVar5);
          local_48 = local_48 + 8;
          uVar5 = local_38 ^ 1;
          bVar9 = local_38 == 1;
          local_38 = uVar5;
          if (bVar9) break;
        }
      } while (local_48 != local_40);
    }
  }
  else {
    if (*(int *)local_58 == 0) {
LAB_1001bbb76:
      QListData::dispose(local_58);
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if (!(bool)local_21) goto LAB_1001bbb76;
    }
    if (local_38 != 0) goto LAB_1001bbb86;
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001bbc79;
    }
    QListData::dispose(local_50);
  }
LAB_1001bbc79:
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    QHashData::free_helper(local_30);
  }
  return;
}

