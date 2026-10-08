
void FUN_10021a620(long *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  CTaskGenericId *pCVar5;
  long lVar6;
  QString *pQVar7;
  QStringList *pQVar8;
  Data *pDVar9;
  long lVar10;
  QArrayData *pQVar11;
  int *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  Data_conflict local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8;
  QArrayData *local_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [48];
  undefined1 local_158 [32];
  QArrayData *local_138;
  undefined1 local_130;
  undefined4 local_12c;
  undefined4 local_128 [2];
  int *local_120;
  int *local_118;
  int *local_110;
  undefined8 local_108;
  int *local_100;
  int *local_f8;
  int *local_f0;
  QArrayData *local_e8;
  undefined1 local_e0 [64];
  QArrayData *local_a0;
  QArrayData *local_98;
  undefined1 local_90 [48];
  undefined1 local_60 [16];
  CTaskGenericId local_50 [31];
  undefined1 local_31;
  
  pCVar5 = (CTaskGenericId *)CTaskManager::instance();
  COsInstallationInfo::osImageDownloadInfo();
  FUN_1001b8b80(local_50,local_60,1);
  lVar6 = CTaskManager::getTaskById(pCVar5);
  CTaskGenericId::~CTaskGenericId(local_50);
  FUN_1001b8c60(local_90);
  uVar3 = 0;
  if (lVar6 != 0) {
    uVar3 = CAbstractTask::getResult();
  }
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    pQVar7 = (QString *)CMessageManager::instance();
    lVar10 = 0;
    if ((param_1[3] != 0) && (lVar10 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar10 = param_1[4];
    }
    FUN_100188480(&local_98,lVar10);
    CMessageManager::closeSpecificMessageBox(pQVar7,(int)&local_98);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10021a743;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_10021a743:
    pQVar7 = (QString *)CMessageManager::instance();
    lVar10 = 0;
    if ((param_1[3] != 0) && (lVar10 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar10 = param_1[4];
    }
    FUN_100188480(&local_a0,lVar10);
    CMessageManager::closeSpecificMessageBox(pQVar7,(int)&local_a0);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10021a7c3;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
  }
LAB_10021a7c3:
  if ((int)uVar3 < 0) {
    if (uVar3 == 0x80000275) goto LAB_10021ad11;
    local_158._8_8_ = PTR_shared_null_1021e15e8;
    local_158._0_8_ = PTR_shared_null_1021e15e8;
    if (uVar3 == 0x80015327) {
      COsInstallationInfo::osImageDownloadInfo();
      FUN_1000341d0(local_158 + 8,local_188);
      FUN_1001b8c60(local_198);
    }
    iVar4 = CMessageManager::instance();
    bVar1 = false;
    pQVar8 = (QStringList *)0x0;
    if (param_1[3] != 0) {
      bVar1 = false;
      pQVar8 = (QStringList *)0x0;
      if (*(int *)(param_1[3] + 4) != 0) {
        bVar1 = false;
        pQVar8 = (QStringList *)0x0;
        if (param_1[4] != 0) {
          pQVar7 = (QString *)CSearchParentHelper::instance();
          lVar6 = 0;
          if ((param_1[3] != 0) && (lVar6 = 0, *(int *)(param_1[3] + 4) != 0)) {
            lVar6 = param_1[4];
          }
          FUN_100188480(&local_1a0,lVar6);
          pQVar8 = (QStringList *)
                   CSearchParentHelper::getParentForMessage
                             (pQVar7,SUB81(&local_1a0,0),(QWidget *)0x0);
          bVar1 = true;
        }
      }
    }
    local_1d8 = (int *)0x0;
    uStack_1d0 = 0;
    local_1c0 = 0;
    local_1c8 = 0;
    local_1b0 = 0x80000000;
    local_1b8.field7 = 0;
    local_1a8 = 1;
    CMessageManager::showMessageBox
              (iVar4,(QWidget *)(ulong)uVar3,pQVar8,(QStringList *)(local_158 + 8),
               (CSlotInfo *)local_158,SUB81(&local_1d8,0));
    QVariant::~QVariant((QVariant *)&local_1b8);
    if (local_1d8 != (int *)0x0) {
      LOCK();
      *local_1d8 = *local_1d8 + -1;
      local_31 = *local_1d8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_1d8 != (int *)0x0)) {
        operator_delete(local_1d8);
      }
    }
    if ((bVar1) && (*(int *)local_1a0 != -1)) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10021abdb;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
LAB_10021abdb:
    uVar2 = local_158._0_8_;
    if (*(int *)local_158._0_8_ != -1) {
      if (*(int *)local_158._0_8_ != 0) {
        LOCK();
        *(int *)local_158._0_8_ = *(int *)local_158._0_8_ + -1;
        local_31 = *(int *)local_158._0_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10021ac71;
      }
      iVar4 = *(int *)(local_158._0_8_ + 0xc);
      if (iVar4 != *(int *)(local_158._0_8_ + 8)) {
        lVar6 = (long)*(int *)(local_158._0_8_ + 8) * 8 + (long)iVar4 * -8;
        pDVar9 = (Data *)(local_158._0_8_ + (long)iVar4 * 8 + 8);
        do {
          pQVar11 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar11 == 0) {
LAB_10021ac50:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar9;
              goto LAB_10021ac50;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose((Data *)uVar2);
    }
LAB_10021ac71:
    uVar2 = local_158._8_8_;
    if (*(int *)local_158._8_8_ != -1) {
      if (*(int *)local_158._8_8_ != 0) {
        LOCK();
        *(int *)local_158._8_8_ = *(int *)local_158._8_8_ + -1;
        local_31 = *(int *)local_158._8_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10021ad11;
      }
      iVar4 = *(int *)(local_158._8_8_ + 0xc);
      if (iVar4 != *(int *)(local_158._8_8_ + 8)) {
        lVar6 = (long)*(int *)(local_158._8_8_ + 8) * 8 + (long)iVar4 * -8;
        pDVar9 = (Data *)(local_158._8_8_ + (long)iVar4 * 8 + 8);
        do {
          pQVar11 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar11 == 0) {
LAB_10021acf0:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar9;
              goto LAB_10021acf0;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose((Data *)uVar2);
    }
LAB_10021ad11:
    COsInstallationInfo::save();
    return;
  }
  FUN_1001eef00(local_e0);
  COsInstallationInfo::setOsImageDownloadInfo((DLCItemInfo *)(param_1 + 0x29));
  FUN_1001b8c60(local_e0);
  if (lVar6 == 0) goto LAB_10021aa07;
  local_120 = *(int **)(lVar6 + 0x20);
  if (1 < *local_120 + 1U) {
    LOCK();
    *local_120 = *local_120 + 1;
    local_31 = *local_120 != 0;
    UNLOCK();
  }
  local_118 = *(int **)(lVar6 + 0x28);
  if (1 < *local_118 + 1U) {
    LOCK();
    *local_118 = *local_118 + 1;
    local_31 = *local_118 != 0;
    UNLOCK();
  }
  local_110 = *(int **)(lVar6 + 0x30);
  if (1 < *local_110 + 1U) {
    LOCK();
    *local_110 = *local_110 + 1;
    local_31 = *local_110 != 0;
    UNLOCK();
  }
  local_108 = *(undefined8 *)(lVar6 + 0x38);
  local_100 = *(int **)(lVar6 + 0x40);
  if (1 < *local_100 + 1U) {
    LOCK();
    *local_100 = *local_100 + 1;
    local_31 = *local_100 != 0;
    UNLOCK();
  }
  local_f8 = *(int **)(lVar6 + 0x48);
  if (1 < *local_f8 + 1U) {
    LOCK();
    *local_f8 = *local_f8 + 1;
    local_31 = *local_f8 != 0;
    UNLOCK();
  }
  local_f0 = *(int **)(lVar6 + 0x50);
  if (1 < *local_f0 + 1U) {
    LOCK();
    *local_f0 = *local_f0 + 1;
    local_31 = *local_f0 != 0;
    UNLOCK();
  }
  local_128[0] = *(undefined4 *)(lVar6 + 0x18);
  FileDownloadInfo::destinationFilePath();
  FUN_1001b8c60(local_128);
  local_158[0x10] = 0;
  local_158._24_8_ = local_e8;
  iVar4 = *(int *)local_e8;
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)local_e8 = *(int *)local_e8 + 1;
    local_31 = *(int *)local_e8 != 0;
    UNLOCK();
    iVar4 = *(int *)local_e8;
  }
  local_138 = local_e8;
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)local_e8 = *(int *)local_e8 + 1;
    local_31 = *(int *)local_e8 != 0;
    UNLOCK();
  }
  local_130 = 0;
  local_12c = 0;
  COsInstallationInfo::setCdInfo((CdDvdInfo *)(param_1 + 0x29));
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021a99b;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10021a99b:
  if (*(int *)local_158._24_8_ != -1) {
    if (*(int *)local_158._24_8_ != 0) {
      LOCK();
      *(int *)local_158._24_8_ = *(int *)local_158._24_8_ + -1;
      local_31 = *(int *)local_158._24_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021a9d1;
    }
    QArrayData::deallocate((QArrayData *)local_158._24_8_,2,8);
  }
LAB_10021a9d1:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021aa07;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10021aa07:
  COsInstallationInfo::save();
  (**(code **)(*param_1 + 0xb0))(param_1,uVar3);
  return;
}

