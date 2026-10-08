
char FUN_100d7f2e0(QString *param_1,int param_2)

{
  int iVar1;
  Data *pDVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  QFileInfo *pQVar7;
  QArrayData *pQVar8;
  long lVar9;
  bool bVar10;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QFileInfo local_e8 [8];
  Data *local_e0;
  QFileInfo *local_d8;
  QFileInfo *local_d0;
  uint local_c8;
  Data *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QFileInfo local_60 [8];
  Data *local_58;
  Data *local_50;
  QDir local_48 [8];
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    return '\0';
  }
  QFileInfo::QFileInfo(local_40,param_1);
  cVar3 = QFileInfo::isRoot();
  QFileInfo::~QFileInfo(local_40);
  if (cVar3 != '\0') {
    return '\0';
  }
  QDir::QDir(local_48,param_1);
  cVar3 = QDir::exists();
  if (cVar3 == '\0') {
    cVar3 = '\0';
    goto LAB_100d7fb97;
  }
  QDir::setFilter(local_48,0x6307);
  QDir::setSorting(local_48,0x20);
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  if (0 < param_2) {
    iVar4 = 0;
    do {
      QDir::refresh();
      QDir::entryInfoList(&local_58,local_48,0xffffffff,0xffffffff);
      FUN_100d80110(&local_50,&local_58);
      pDVar2 = local_58;
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d7f441;
        }
        iVar1 = *(int *)(local_58 + 0xc);
        if (iVar1 != *(int *)(local_58 + 8)) {
          lVar9 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
          pQVar7 = (QFileInfo *)(local_58 + (long)iVar1 * 8 + 8);
          do {
            QFileInfo::~QFileInfo(pQVar7);
            pQVar7 = pQVar7 + -8;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0);
        }
        QListData::dispose(pDVar2);
      }
LAB_100d7f441:
      if (*(int *)(local_50 + 0xc) == *(int *)(local_50 + 8)) break;
      lVar9 = 0;
      if (*(int *)(local_50 + 8) < *(int *)(local_50 + 0xc)) {
        do {
          cVar3 = QFileInfo::isDir();
          if (cVar3 == '\0') {
            QFileInfo::filePath();
            cVar3 = QFile::remove(&local_70);
            if (*(int *)local_70.field0_0x0 != -1) {
              if (*(int *)local_70.field0_0x0 != 0) {
                LOCK();
                *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
                local_31 = *(int *)local_70.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d7f545;
              }
              QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
            }
LAB_100d7f545:
            if (cVar3 == '\0') {
              QFileInfo::filePath();
              QString::toUtf8();
              pQVar8 = local_78 + *(long *)(local_78 + 0x10);
              uVar5 = FUN_100ddb7c0();
              FUN_100ddb790(&local_90);
              QString::toUtf8();
              FUN_100df99c0("","cmn_utils",0,
                            "CFileHelper::ClearAndDeleteDir: cannot delete file \'%s\' ! System error: %ld [%s]"
                            ,pQVar8,uVar5,local_88 + *(long *)(local_88 + 0x10));
              if (*(int *)local_88 != -1) {
                if (*(int *)local_88 != 0) {
                  LOCK();
                  *(int *)local_88 = *(int *)local_88 + -1;
                  local_31 = *(int *)local_88 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d7f602;
                }
                QArrayData::deallocate(local_88,1,8);
              }
LAB_100d7f602:
              if (*(int *)local_90 != -1) {
                if (*(int *)local_90 != 0) {
                  LOCK();
                  *(int *)local_90 = *(int *)local_90 + -1;
                  local_31 = *(int *)local_90 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d7f638;
                }
                QArrayData::deallocate(local_90,2,8);
              }
LAB_100d7f638:
              if (*(int *)local_78 != -1) {
                if (*(int *)local_78 != 0) {
                  LOCK();
                  *(int *)local_78 = *(int *)local_78 + -1;
                  local_31 = *(int *)local_78 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d7f668;
                }
                QArrayData::deallocate(local_78,1,8);
              }
LAB_100d7f668:
              if (*(int *)local_80 != -1) {
                if (*(int *)local_80 != 0) {
                  LOCK();
                  *(int *)local_80 = *(int *)local_80 + -1;
                  local_31 = *(int *)local_80 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d7f6e0;
                }
                QArrayData::deallocate(local_80,2,8);
              }
            }
          }
          else {
            QFileInfo::QFileInfo(local_60,param_1);
            cVar3 = QFileInfo::operator==
                              (local_60,(QFileInfo *)
                                        (local_50 + (*(int *)(local_50 + 8) + lVar9) * 8 + 0x10));
            QFileInfo::~QFileInfo(local_60);
            if (cVar3 == '\0') {
              QFileInfo::filePath();
              cVar3 = QFileInfo::isSymLink();
              if (cVar3 == '\0') {
                FUN_100d7f2e0(&local_68,3);
              }
              else {
                QFile::remove(&local_68);
              }
              if (*(int *)local_68.field0_0x0 != -1) {
                if (*(int *)local_68.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
                  local_31 = *(int *)local_68.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d7f6e0;
                }
                QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
              }
            }
          }
LAB_100d7f6e0:
          lVar9 = lVar9 + 1;
        } while (lVar9 < (long)*(int *)(local_50 + 0xc) - (long)*(int *)(local_50 + 8));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_98,&local_a0);
  cVar3 = QDir::rmdir(&local_98);
  QDir::~QDir((QDir *)&local_98);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d7f79b;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100d7f79b:
  if (cVar3 == '\0') {
    QString::toUtf8();
    pQVar8 = local_a8 + *(long *)(local_a8 + 0x10);
    uVar5 = FUN_100ddb7c0();
    FUN_100ddb790(&local_b8);
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",0,
                  "CFileHelper::ClearAndDeleteDir: cannot delete directory \'%s\' ! System error: %ld [%s]"
                  ,pQVar8,uVar5,local_b0 + *(long *)(local_b0 + 0x10));
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d7f851;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_100d7f851:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d7f887;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100d7f887:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d7f8bd;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_100d7f8bd:
    QDir::refresh();
    QDir::entryInfoList(&local_c0,local_48,0xffffffff,0xffffffff);
    FUN_100d80110(&local_50,&local_c0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d7f954;
      }
      iVar4 = *(int *)(local_c0 + 0xc);
      if (iVar4 != *(int *)(local_c0 + 8)) {
        lVar9 = (long)*(int *)(local_c0 + 8) * 8 + (long)iVar4 * -8;
        pQVar7 = (QFileInfo *)(local_c0 + (long)iVar4 * 8 + 8);
        do {
          QFileInfo::~QFileInfo(pQVar7);
          pQVar7 = pQVar7 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose(local_c0);
    }
LAB_100d7f954:
    FUN_100055060(&local_e0,&local_50);
    local_d8 = (QFileInfo *)(local_e0 + (long)*(int *)(local_e0 + 8) * 8 + 0x10);
    local_d0 = (QFileInfo *)(local_e0 + (long)*(int *)(local_e0 + 0xc) * 8 + 0x10);
    local_c8 = 1;
    if (*(int *)(local_e0 + 8) != *(int *)(local_e0 + 0xc)) {
      do {
        QFileInfo::QFileInfo(local_e8,local_d8);
        if (local_c8 != 0) {
          QFileInfo::filePath();
          QString::toUtf8();
          FUN_100df99c0("","cmn_utils",0,"Entry stayed after cleanup: [%s]",
                        local_f0 + *(long *)(local_f0 + 0x10));
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_31 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d7fa3f;
            }
            QArrayData::deallocate(local_f0,1,8);
          }
LAB_100d7fa3f:
          if (*(int *)local_f8 != -1) {
            if (*(int *)local_f8 != 0) {
              LOCK();
              *(int *)local_f8 = *(int *)local_f8 + -1;
              local_31 = *(int *)local_f8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d7fa75;
            }
            QArrayData::deallocate(local_f8,2,8);
          }
LAB_100d7fa75:
          local_c8 = 0;
        }
        QFileInfo::~QFileInfo(local_e8);
        local_d8 = local_d8 + 8;
        uVar6 = local_c8 ^ 1;
        bVar10 = local_c8 != 1;
        local_c8 = uVar6;
      } while ((bVar10) && (local_d8 != local_d0));
    }
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d7fb20;
      }
      iVar4 = *(int *)(local_e0 + 0xc);
      if (iVar4 != *(int *)(local_e0 + 8)) {
        lVar9 = (long)*(int *)(local_e0 + 8) * 8 + (long)iVar4 * -8;
        pQVar7 = (QFileInfo *)(local_e0 + (long)iVar4 * 8 + 8);
        do {
          QFileInfo::~QFileInfo(pQVar7);
          pQVar7 = pQVar7 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose(local_e0);
    }
  }
LAB_100d7fb20:
  pDVar2 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d7fb97;
    }
    iVar4 = *(int *)(local_50 + 0xc);
    if (iVar4 != *(int *)(local_50 + 8)) {
      lVar9 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar4 * -8;
      pQVar7 = (QFileInfo *)(local_50 + (long)iVar4 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar7);
        pQVar7 = pQVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_100d7fb97:
  QDir::~QDir(local_48);
  return cVar3;
}

