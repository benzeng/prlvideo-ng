
void FUN_100a017c0(CRepInstallations *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  CRepInstallations *this;
  CRepMacInstallations *this_00;
  QString QVar4;
  long lVar5;
  QArrayData *pQVar6;
  undefined8 uVar7;
  CRepPDInstallations *this_01;
  CRepParallelsPlugins *this_02;
  uint uVar8;
  long lVar9;
  int *piVar10;
  QFileInfo *this_03;
  bool bVar11;
  QTypedArrayData<unsigned_short> *local_108;
  int *local_100;
  int *local_f8;
  int *local_f0;
  uint local_e8;
  int *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QTypedArrayData<unsigned_short> *local_b8;
  QString local_b0;
  QFile local_a8 [16];
  Data *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  undefined *local_80;
  QStringList local_78;
  QString local_70;
  QArrayData *local_68;
  QDateTime local_60;
  QString local_58;
  QTypedArrayData<unsigned_short> *local_50;
  QString local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  if (param_1 == (CRepInstallations *)0x0) {
    return;
  }
  this = operator_new(0xb0);
  CRepInstallations::CRepInstallations(this);
  local_48.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("/Library/Receipts/BSD.pkg",0x19);
  QFileInfo::QFileInfo(local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a01847;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100a01847:
  cVar3 = QFileInfo::exists();
  if (cVar3 == '\0') {
    bVar11 = false;
  }
  else {
    this_00 = operator_new(0xa0);
    CRepMacInstallations::CRepMacInstallations(this_00);
    CRepInstallations::setMacInstallationHistoryes((CRepMacInstallations *)this);
    QVar4.field0_0x0 = operator_new(0xa0);
    CRepMacInstallationData::CRepMacInstallationData((CRepMacInstallationData *)QVar4.field0_0x0);
    local_50 = QVar4.field0_0x0;
    QFileInfo::created();
    local_68 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::toString(&local_58);
    CRepMacInstallationData::setInstalledVersionDate(QVar4);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a01900;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100a01900:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a01930;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100a01930:
    QDateTime::~QDateTime(&local_60);
    lVar5 = CRepInstallations::getMacInstallationHistoryes();
    bVar11 = true;
    FUN_100a05ea0(lVar5 + 0x98,&local_50);
  }
  FUN_100d8f710(&local_70);
  if ((*(int *)(local_70.field0_0x0 + 4) != 0) && (cVar3 = QFile::exists(&local_70), cVar3 != '\0'))
  {
    QDir::QDir((QDir *)&local_78,&local_70);
    local_80 = PTR_shared_null_1021e15e8;
    pQVar6 = (QArrayData *)QString::fromAscii_helper("Parallels Desktop*",0x12);
    local_88 = pQVar6;
    FUN_1000341d0(&local_80,&local_88);
    local_90 = (QArrayData *)QString::fromAscii_helper("Parallels Desktop*",0x12);
    uVar7 = QString::remove(&local_90,0x20,1);
    FUN_1000341d0(&local_80,uVar7);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a01a3a;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100a01a3a:
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a01a65;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_100a01a65:
    QDir::setNameFilters(&local_78);
    QDir::setFilter(&local_78,0x6102);
    QDir::setSorting(&local_78,1);
    QDir::entryInfoList(&local_98,&local_78,0xffffffff,0xffffffff);
    if (*(uint *)(local_98 + 0xc) == *(uint *)(local_98 + 8)) {
      uVar8 = *(uint *)local_98;
    }
    else {
      this_01 = operator_new(0xa0);
      CRepPDInstallations::CRepPDInstallations(this_01);
      CRepInstallations::setPDInstallationHistoryes((CRepPDInstallations *)this);
      uVar8 = *(uint *)local_98;
      bVar11 = true;
      if ((int)*(uint *)(local_98 + 8) < (int)*(uint *)(local_98 + 0xc)) {
        lVar5 = 0;
        do {
          if (1 < uVar8) {
            FUN_1000f7ce0(&local_98,*(uint *)(local_98 + 4));
          }
          QFileInfo::filePath();
          QFile::QFile(local_a8,&local_b0);
          if (*(int *)local_b0.field0_0x0 != -1) {
            if (*(int *)local_b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
              local_31 = *(int *)local_b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a01b89;
            }
            QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
          }
LAB_100a01b89:
          cVar3 = QFile::open(local_a8,1);
          if (cVar3 != '\0') {
            QVar4.field0_0x0 = operator_new(0xa8);
            CRepPDInstallationData::CRepPDInstallationData
                      ((CRepPDInstallationData *)QVar4.field0_0x0);
            local_b8 = QVar4.field0_0x0;
            QIODevice::readAll();
            pQVar6 = local_d0 + *(long *)(local_d0 + 0x10);
            if ((pQVar6 != (QArrayData *)0x0) && (*(uint *)(local_d0 + 4) != 0)) {
              lVar9 = 0;
              do {
                if (pQVar6[lVar9] == (QArrayData)0x0) break;
                lVar9 = lVar9 + 1;
              } while ((uint)lVar9 < *(uint *)(local_d0 + 4));
              if ((int)lVar9 == -1) {
                _strlen((char *)pQVar6);
              }
            }
            QString::fromUtf8_helper((char *)&local_c8,(int)pQVar6);
            QString::normalized(&local_c0,&local_c8,1,0);
            CRepPDInstallationData::setInstalledVersionDate(QVar4);
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_31 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100a01c7a;
              }
              QArrayData::deallocate(local_c0,2,8);
            }
LAB_100a01c7a:
            if (*(int *)local_c8 != -1) {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_31 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100a01cb0;
              }
              QArrayData::deallocate(local_c8,2,8);
            }
LAB_100a01cb0:
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100a01ced;
              }
              QArrayData::deallocate(local_d0,1,8);
            }
LAB_100a01ced:
            if (1 < *(uint *)local_98) {
              FUN_1000f7ce0(&local_98,*(uint *)(local_98 + 4));
            }
            QFileInfo::fileName();
            CRepPDInstallationData::setInstalledVersionName(QVar4);
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100a01d68;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
LAB_100a01d68:
            lVar9 = CRepInstallations::getPDInstallationHistoryes();
            FUN_100a06010(lVar9 + 0x98,&local_b8);
          }
          QFile::~QFile(local_a8);
          lVar5 = lVar5 + 1;
          uVar8 = *(uint *)local_98;
        } while (lVar5 < (long)(int)*(uint *)(local_98 + 0xc) - (long)(int)*(uint *)(local_98 + 8));
      }
    }
    if (uVar8 != 0xffffffff) {
      if (uVar8 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a01e1a;
      }
      iVar1 = *(int *)(local_98 + 0xc);
      if (iVar1 != *(int *)(local_98 + 8)) {
        lVar5 = (long)*(int *)(local_98 + 8) * 8 + (long)iVar1 * -8;
        this_03 = (QFileInfo *)(local_98 + (long)iVar1 * 8 + 8);
        do {
          QFileInfo::~QFileInfo(this_03);
          this_03 = this_03 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose(local_98);
    }
LAB_100a01e1a:
    FUN_100039a80(&local_80);
    QDir::~QDir((QDir *)&local_78);
  }
  FUN_100dc3190(&local_e0);
  if (local_e0[3] == local_e0[2]) {
    if (bVar11) goto LAB_100a020a6;
    (**(code **)(*(long *)this + 0x88))(this);
  }
  else {
    this_02 = operator_new(0xa0);
    CRepParallelsPlugins::CRepParallelsPlugins(this_02);
    CRepInstallations::setParallelsPlugins((CRepParallelsPlugins *)this);
    local_100 = local_e0;
    if (*local_e0 != -1) {
      if (*local_e0 == 0) {
        QListData::detach((int)&local_100);
        iVar1 = local_100[2];
        if (iVar1 != local_100[3]) {
          local_e0 = local_e0 + (long)local_e0[2] * 2 + 4;
          piVar10 = local_100 + (long)iVar1 * 2 + 4;
          lVar5 = (long)local_100[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)local_e0;
            *(int **)piVar10 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar10 = piVar10 + 2;
            local_e0 = local_e0 + 2;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *local_e0 = *local_e0 + 1;
        local_31 = *local_e0 != 0;
        UNLOCK();
      }
    }
    local_f8 = local_100 + (long)local_100[2] * 2 + 4;
    local_f0 = local_100 + (long)local_100[3] * 2 + 4;
    local_e8 = 1;
    if (local_100[2] != local_100[3]) {
      do {
        pQVar6 = *(QArrayData **)local_f8;
        if (1 < *(int *)pQVar6 + 1U) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + 1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
        }
        if (local_e8 != 0) {
          QVar4.field0_0x0 = operator_new(0xa0);
          CRepParallelsPlugin::CRepParallelsPlugin((CRepParallelsPlugin *)QVar4.field0_0x0);
          if (1 < *(int *)pQVar6 + 1U) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + 1;
            local_31 = *(int *)pQVar6 != 0;
            UNLOCK();
          }
          local_108 = QVar4.field0_0x0;
          CRepParallelsPlugin::setInstalledVersionName(QVar4);
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              local_31 = *(int *)pQVar6 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a02017;
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
LAB_100a02017:
          FUN_100a06180(this_02 + 0x98,&local_108);
          local_e8 = 0;
        }
        if (*(int *)pQVar6 != -1) {
          if (*(int *)pQVar6 != 0) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            local_31 = *(int *)pQVar6 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a02057;
          }
          QArrayData::deallocate(pQVar6,2,8);
        }
LAB_100a02057:
        local_f8 = local_f8 + 2;
        uVar8 = local_e8 ^ 1;
        bVar11 = local_e8 != 1;
        local_e8 = uVar8;
      } while ((bVar11) && (local_f8 != local_f0));
    }
    FUN_100039a80(&local_100);
LAB_100a020a6:
    CRepAutoStatisticInfo::setInstallationsData(param_1);
  }
  FUN_100039a80(&local_e0);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a020ed;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100a020ed:
  QFileInfo::~QFileInfo(local_40);
  return;
}

