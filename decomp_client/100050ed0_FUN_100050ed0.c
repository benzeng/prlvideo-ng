
void FUN_100050ed0(undefined8 param_1,QString *param_2)

{
  QString *pQVar1;
  int *piVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  QFileInfo *this;
  QString *pQVar12;
  QFileInfo local_d8 [8];
  QString local_d0;
  QString local_c8;
  QString local_c0;
  QFileInfo local_b8 [8];
  Data *local_b0;
  QDir local_a8 [8];
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  int *local_70;
  int *local_68;
  QFileInfo local_60 [8];
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    QString::toUtf8();
    pQVar5 = local_50;
    lVar8 = *(long *)(local_50 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("SGASMGMT","prl_client_app",1,
                  "Specified special dir=\"%s\" as helpers folder for vmUuid=\"%s\", will not remove it"
                  ,pQVar5 + lVar8,local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100051176;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_100051176:
    if (*(int *)local_50 == -1) {
      return;
    }
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,1,8);
    return;
  }
  QFileInfo::QFileInfo(local_60,param_2);
  local_70 = (int *)PTR_shared_null_1021e15e8;
  local_78 = (QArrayData *)QString::fromAscii_helper("/Applications",0xd);
  FUN_1000341d0(&local_70,&local_78);
  FUN_1000a65d0(&local_88);
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_88;
  if (1 < *(int *)local_88 + 1U) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + 1;
    local_31 = *(int *)local_88 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1db66b6);
  QString::append(&local_80);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100050fa1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100050fa1:
  FUN_1000341d0(&local_70,&local_80);
  local_90 = (QArrayData *)QString::fromAscii_helper("/Applications/Parallels",0x17);
  FUN_1000341d0(&local_70,&local_90);
  FUN_1000a65d0(&local_a0);
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a0;
  if (1 < *(int *)local_a0 + 1U) {
    LOCK();
    *(int *)local_a0 = *(int *)local_a0 + 1;
    local_31 = *(int *)local_a0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1db71c4);
  QString::append(&local_98);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100051056;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100051056:
  FUN_1000341d0(&local_70,&local_98);
  local_68 = local_70;
  if (*local_70 != -1) {
    if (*local_70 == 0) {
      QListData::detach((int)&local_68);
      iVar7 = local_68[2];
      if (iVar7 != local_68[3]) {
        piVar9 = local_70 + (long)local_70[2] * 2 + 4;
        piVar11 = local_68 + (long)iVar7 * 2 + 4;
        lVar8 = (long)local_68[3] * 8 + (long)iVar7 * -8;
        do {
          piVar2 = *(int **)piVar9;
          *(int **)piVar11 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          piVar9 = piVar9 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *local_70 = *local_70 + 1;
      local_31 = *local_70 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000511f1;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1000511f1:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100051227;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100051227:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100051256;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100051256:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100051286;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100051286:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000512b6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1000512b6:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000512e2;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1000512e2:
  FUN_100039a80(&local_70);
  if (local_68[2] != local_68[3]) {
    pQVar1 = (QString *)(local_68 + (long)local_68[3] * 2 + 4);
    pQVar12 = (QString *)(local_68 + (long)local_68[2] * 2 + 4);
    do {
      pQVar3 = pQVar12->field0_0x0;
      if ((*(int *)(pQVar3 + 4) != 0) &&
         (iVar7 = QString::compare_helper
                            (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),"*",
                             0xffffffff,1), iVar7 != 0)) {
        QDir::QDir(local_a8,pQVar12);
        QDir::setFilter(local_a8,0x6103);
        QDir::entryInfoList(&local_b0,local_a8,0xffffffff,0xffffffff);
        QDir::absolutePath();
        QFileInfo::QFileInfo(local_b8,&local_c0);
        if (*(int *)local_c0.field0_0x0 != -1) {
          if (*(int *)local_c0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
            local_31 = *(int *)local_c0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000513dc;
          }
          QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
        }
LAB_1000513dc:
        uVar10 = (ulong)*(uint *)(local_b0 + 8);
        lVar8 = 0;
        if ((int)*(uint *)(local_b0 + 8) < *(int *)(local_b0 + 0xc)) {
          do {
            cVar6 = QFileInfo::operator==
                              (local_b8,(QFileInfo *)(local_b0 + ((int)uVar10 + lVar8) * 8 + 0x10));
            if ((cVar6 == '\0') && (cVar6 = QFileInfo::isSymLink(), cVar6 != '\0')) {
              QFileInfo::absoluteFilePath();
              FUN_100da2bf0(&local_d0,&local_c8,1,1,0);
              QFileInfo::QFileInfo(local_d8,&local_d0);
              cVar6 = QFileInfo::operator==(local_60,local_d8);
              QFileInfo::~QFileInfo(local_d8);
              if (cVar6 != '\0') {
                QFile::remove(&local_c8);
              }
              if (*(int *)local_d0.field0_0x0 != -1) {
                if (*(int *)local_d0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
                  local_31 = *(int *)local_d0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000514d9;
                }
                QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
              }
LAB_1000514d9:
              if (*(int *)local_c8.field0_0x0 != -1) {
                if (*(int *)local_c8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
                  local_31 = *(int *)local_c8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100051510;
                }
                QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
              }
            }
LAB_100051510:
            lVar8 = lVar8 + 1;
            uVar10 = (ulong)*(int *)(local_b0 + 8);
          } while (lVar8 < (long)((long)*(int *)(local_b0 + 0xc) - uVar10));
        }
        QFileInfo::~QFileInfo(local_b8);
        pDVar4 = local_b0;
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000515c8;
          }
          iVar7 = *(int *)(local_b0 + 0xc);
          if (iVar7 != *(int *)(local_b0 + 8)) {
            lVar8 = (long)*(int *)(local_b0 + 8) * 8 + (long)iVar7 * -8;
            this = (QFileInfo *)(local_b0 + (long)iVar7 * 8 + 8);
            do {
              QFileInfo::~QFileInfo(this);
              this = this + -8;
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0);
          }
          QListData::dispose(pDVar4);
        }
LAB_1000515c8:
        QDir::~QDir(local_a8);
      }
      pQVar12 = pQVar12 + 1;
    } while (pQVar12 != pQVar1);
  }
  FUN_100039a80(&local_68);
  QFileInfo::~QFileInfo(local_60);
  return;
}

