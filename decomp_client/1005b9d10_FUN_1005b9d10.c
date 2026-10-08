
void FUN_1005b9d10(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  QArrayData *pQVar4;
  undefined4 uVar5;
  undefined *local_5b0;
  undefined *local_5a8;
  undefined *local_5a0;
  undefined1 local_598;
  undefined *local_590;
  undefined1 local_588 [64];
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  undefined1 local_518;
  undefined *local_510;
  undefined4 local_508;
  undefined1 local_504;
  undefined1 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  QArrayData *local_4e0;
  QArrayData *local_4d8;
  QArrayData *local_4d0;
  byte local_4c8;
  undefined *local_4c0;
  undefined1 local_4b8 [72];
  QString local_470 [2];
  undefined1 local_460 [40];
  undefined1 local_438 [72];
  long local_3f0;
  undefined1 local_3e0 [40];
  QString local_3b8;
  QArrayData *local_3b0;
  QArrayData *local_3a8;
  undefined1 local_3a0 [88];
  undefined1 local_348 [40];
  QArrayData *local_320;
  undefined1 local_318 [88];
  undefined1 local_2c0 [40];
  undefined1 local_298 [88];
  undefined1 local_240 [24];
  QString local_228 [2];
  undefined1 local_218 [64];
  QString local_1d8 [3];
  undefined1 local_1c0 [40];
  undefined1 local_198 [56];
  QString local_160 [4];
  undefined1 local_140 [40];
  undefined1 local_118 [40];
  QString local_f0;
  QString local_e8;
  QString local_e0;
  undefined1 local_d8 [88];
  undefined1 local_80 [40];
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_1005b69c0(local_d8,param_1);
  cVar2 = FUN_10073dd70(local_d8);
  FUN_100252c80(local_80);
  FUN_100252e70(local_d8);
  if (cVar2 != '\0') {
    FUN_1001eef00(local_118);
    FUN_1005b69c0(local_198,param_1);
    QString::operator=(&local_e8,local_160);
    FUN_100252c80(local_140);
    FUN_100252e70(local_198);
    FUN_1005b69c0(local_218,param_1);
    QString::operator=(&local_e0,local_1d8);
    FUN_100252c80(local_1c0);
    FUN_100252e70(local_218);
    FUN_1005b69c0(local_298,param_1);
    QString::operator=(&local_f0,local_228);
    FUN_100252c80(local_240);
    FUN_100252e70(local_298);
    COsInstallationInfo::setOsImageDownloadInfo((DLCItemInfo *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x54) = 2;
    *(undefined4 *)(param_1 + 0x60) = 4;
    *(undefined8 *)(param_1 + 100) = 0;
    if (*(int *)(param_1 + 0x38) != 0xff) {
      *(undefined4 *)(param_1 + 0x38) = 0xff;
      FUN_100840290(param_1,0xff);
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    FUN_1005b69c0(local_318,param_1);
    local_40 = (QArrayData *)QString::fromAscii_helper("win_10",6);
    iVar3 = QString::indexOf(local_318,&local_40,0,1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b9ee1;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1005b9ee1:
    uVar5 = 0x80f;
    if (iVar3 == -1) {
      local_48 = (QArrayData *)QString::fromAscii_helper("win_8_1",7);
      iVar3 = QString::indexOf(local_318,&local_48,0,1);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b9f4f;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1005b9f4f:
      uVar5 = 0x80e;
      if (iVar3 == -1) {
        local_50 = (QArrayData *)QString::fromAscii_helper("win_8",5);
        iVar3 = QString::indexOf(local_318,&local_50,0,1);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005b9fbd;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_1005b9fbd:
        uVar5 = 0x80c;
        if (iVar3 == -1) {
          local_58 = (QArrayData *)QString::fromAscii_helper("win_7",5);
          QString::indexOf(local_318,&local_58,0,1);
          uVar5 = 0x80b;
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005ba029;
            }
            QArrayData::deallocate(local_58,2,8);
          }
        }
      }
    }
LAB_1005ba029:
    FUN_1005b82f0(param_1,uVar5);
    FUN_100252c80(local_2c0);
    FUN_100252e70(local_318);
    FUN_1005b69c0(local_3a0,param_1);
    FUN_10073e290(&local_320,local_3a0);
    iVar3 = QString::compare_helper
                      (local_320 + *(long *)(local_320 + 0x10),*(undefined4 *)(local_320 + 4),"x64",
                       0xffffffff,1);
    *(uint *)(param_1 + 0x3c) = (iVar3 == 0) + 1;
    if (*(int *)local_320 != -1) {
      if (*(int *)local_320 != 0) {
        LOCK();
        *(int *)local_320 = *(int *)local_320 + -1;
        local_31 = *(int *)local_320 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ba0db;
      }
      QArrayData::deallocate(local_320,2,8);
    }
LAB_1005ba0db:
    FUN_100252c80(local_348);
    FUN_100252e70(local_3a0);
    FUN_1001c22d0(&local_3b0);
    FUN_1005cb7f0(&local_3a8,&local_3b0);
    if (*(int *)local_3b0 != -1) {
      if (*(int *)local_3b0 != 0) {
        LOCK();
        *(int *)local_3b0 = *(int *)local_3b0 + -1;
        local_31 = *(int *)local_3b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ba148;
      }
      QArrayData::deallocate(local_3b0,2,8);
    }
LAB_1005ba148:
    puVar1 = PTR_shared_null_1021e1288;
    local_3b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    FUN_1005b69c0(local_438,param_1);
    iVar3 = QString::compare_helper
                      (*(long *)(local_3f0 + 0x10) + local_3f0,*(undefined4 *)(local_3f0 + 4),
                       PTR_s_KeyNotRequired_102270d08,0xffffffff,1);
    FUN_100252c80(local_3e0);
    FUN_100252e70(local_438);
    if (iVar3 != 0) {
      FUN_1005b69c0(local_4b8,param_1);
      QString::operator=(&local_3b8,local_470);
      FUN_100252c80(local_460);
      FUN_100252e70(local_4b8);
    }
    pQVar4 = (QArrayData *)QString::fromAscii_helper("",0);
    uVar5 = *(undefined4 *)(param_1 + 0x3c);
    local_4e0 = (QArrayData *)local_3b8.field0_0x0;
    if (1 < *(int *)local_3b8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_3b8.field0_0x0 = *(int *)local_3b8.field0_0x0 + 1;
      local_31 = *(int *)local_3b8.field0_0x0 != 0;
      UNLOCK();
    }
    local_4d8 = local_3a8;
    if (1 < *(int *)local_3a8 + 1U) {
      LOCK();
      *(int *)local_3a8 = *(int *)local_3a8 + 1;
      local_31 = *(int *)local_3a8 != 0;
      UNLOCK();
    }
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    local_4c8 = (byte)uVar5 >> 1 & 1;
    local_4c0 = puVar1;
    if (1 < *(int *)puVar1 + 1U) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + 1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
    }
    local_4d0 = pQVar4;
    COsInstallationInfo::setWindowsInfo((UnattendedInstallationWindowsInfo *)(param_1 + 0x78));
    FUN_1001ea7d0(&local_4e0);
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_31 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ba2ca;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
LAB_1005ba2ca:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ba2f7;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1005ba2f7:
    local_548 = 0xff;
    local_544 = 0;
    local_540 = 0;
    local_538._8_4_ = (int)puVar1;
    local_538._0_8_ = puVar1;
    local_538._12_4_ = (int)((ulong)puVar1 >> 0x20);
    local_528._8_4_ = (int)PTR_shared_null_1021e15e8;
    local_528._0_8_ = PTR_shared_null_1021e15e8;
    local_528._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
    local_518 = 0;
    local_510 = puVar1;
    local_508 = 0;
    local_504 = 0;
    local_500 = 0;
    local_4e8 = 0;
    local_4f0 = 0;
    local_4f8 = 0;
    FUN_1005b8430(param_1,&local_548);
    FUN_10005e410(&local_548);
    if (*(int *)local_3b8.field0_0x0 != -1) {
      if (*(int *)local_3b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_3b8.field0_0x0 = *(int *)local_3b8.field0_0x0 + -1;
        local_31 = *(int *)local_3b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ba3d3;
      }
      QArrayData::deallocate((QArrayData *)local_3b8.field0_0x0,2,8);
    }
LAB_1005ba3d3:
    if (*(int *)local_3a8 != -1) {
      if (*(int *)local_3a8 != 0) {
        LOCK();
        *(int *)local_3a8 = *(int *)local_3a8 + -1;
        local_31 = *(int *)local_3a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ba409;
      }
      QArrayData::deallocate(local_3a8,2,8);
    }
LAB_1005ba409:
    FUN_1001b8c60(local_118);
    return;
  }
  FUN_1001eef00(local_588);
  COsInstallationInfo::setOsImageDownloadInfo((DLCItemInfo *)(param_1 + 0x78));
  FUN_1001b8c60(local_588);
  *(undefined4 *)(param_1 + 0x60) = 4;
  *(undefined8 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x38) != 0xff) {
    *(undefined4 *)(param_1 + 0x38) = 0xff;
    FUN_100840290(param_1,0xff);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  puVar1 = PTR_shared_null_1021e1288;
  local_5b0 = PTR_shared_null_1021e1288;
  iVar3 = *(int *)PTR_shared_null_1021e1288;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
    local_31 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar3 = *(int *)puVar1;
  }
  local_5a8 = puVar1;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_31 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar3 = *(int *)puVar1;
  }
  local_5a0 = puVar1;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_31 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar3 = *(int *)puVar1;
  }
  local_598 = 0;
  local_590 = puVar1;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_31 = *(int *)puVar1 != 0;
    UNLOCK();
  }
  COsInstallationInfo::setWindowsInfo((UnattendedInstallationWindowsInfo *)(param_1 + 0x78));
  FUN_1001ea7d0(&local_5b0);
  if (*(int *)puVar1 == -1) {
    return;
  }
  if (*(int *)puVar1 == 0) {
LAB_1005ba52a:
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  else {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + -1;
    local_31 = *(int *)puVar1 != 0;
    UNLOCK();
    if (!(bool)local_31) goto LAB_1005ba52a;
  }
  if (*(int *)puVar1 == -1) {
    return;
  }
  if (*(int *)puVar1 == 0) {
LAB_1005ba55d:
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  else {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + -1;
    local_31 = *(int *)puVar1 != 0;
    UNLOCK();
    if (!(bool)local_31) goto LAB_1005ba55d;
  }
  if (*(int *)puVar1 == -1) {
    return;
  }
  if (*(int *)puVar1 != 0) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + -1;
    local_31 = *(int *)puVar1 != 0;
    UNLOCK();
    if ((bool)local_31) goto LAB_1005ba5a2;
  }
  QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
LAB_1005ba5a2:
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return;
}

