
void FUN_1001fceb0(long param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  QFileInfo *pQVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QFileInfo local_b8 [8];
  QFileInfo local_b0 [8];
  QArrayData *local_a8;
  QString local_a0;
  QFileInfo local_98 [8];
  Data *local_90;
  QFileInfo *local_88;
  QFileInfo *local_80;
  uint local_78;
  Data *local_70;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QDir local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (*(long *)(param_1 + 0x30) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get old format VM instance");
    return;
  }
  QDir::homePath();
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1ddb434);
  QString::append(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fcf5f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001fcf5f:
  QDir::QDir(local_48,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fcf9c;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1001fcf9c:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fcfcc;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001fcfcc:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_10018c2b0(uVar5);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QString::normalized(&local_68,&local_60,1,0);
  QString::operator=(&local_60,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fd04f;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1001fd04f:
  QDir::entryInfoList(&local_70,local_48,2,0xffffffff);
  FUN_100055060(&local_90,&local_70);
  local_88 = (QFileInfo *)(local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10);
  local_80 = (QFileInfo *)(local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10);
  local_78 = 1;
  if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
    do {
      QFileInfo::QFileInfo(local_98,local_88);
      if (local_78 != 0) {
        QFileInfo::readLink();
        QString::normalized(&local_a0,&local_a8,1,0);
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001fd124;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_1001fd124:
        cVar2 = QFileInfo::isSymLink();
        if (cVar2 != '\0') {
          QFileInfo::QFileInfo(local_b0,&local_a0);
          QFileInfo::QFileInfo(local_b8,&local_60);
          cVar2 = QFileInfo::operator==(local_b0,local_b8);
          QFileInfo::~QFileInfo(local_b8);
          QFileInfo::~QFileInfo(local_b0);
          if (cVar2 != '\0') {
            *(undefined1 *)(param_1 + 0x40) = 1;
            QFileInfo::absoluteFilePath();
            cVar2 = QFile::remove(&local_c0);
            if (*(int *)local_c0.field0_0x0 != -1) {
              if (*(int *)local_c0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                local_31 = *(int *)local_c0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1001fd1dc;
              }
              QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
            }
LAB_1001fd1dc:
            if (cVar2 == '\0') {
              QFileInfo::absoluteFilePath();
              QString::toUtf8();
              FUN_100df99c0("","prl_client_app",0,"(!)Error: Cannot delete old alias \'%s\'",
                            local_c8 + *(long *)(local_c8 + 0x10));
              if (*(int *)local_c8 != -1) {
                if (*(int *)local_c8 != 0) {
                  LOCK();
                  *(int *)local_c8 = *(int *)local_c8 + -1;
                  local_31 = *(int *)local_c8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001fd266;
                }
                QArrayData::deallocate(local_c8,1,8);
              }
LAB_1001fd266:
              if (*(int *)local_d0 != -1) {
                if (*(int *)local_d0 != 0) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + -1;
                  local_31 = *(int *)local_d0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001fd2a0;
                }
                QArrayData::deallocate(local_d0,2,8);
              }
            }
          }
        }
LAB_1001fd2a0:
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001fd2d6;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_1001fd2d6:
        local_78 = 0;
      }
      QFileInfo::~QFileInfo(local_98);
      local_88 = local_88 + 8;
      uVar3 = local_78 ^ 1;
      bVar7 = local_78 != 1;
      local_78 = uVar3;
    } while ((bVar7) && (local_88 != local_80));
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fd37a;
    }
    iVar1 = *(int *)(local_90 + 0xc);
    if (iVar1 != *(int *)(local_90 + 8)) {
      lVar6 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar1 * -8;
      pQVar4 = (QFileInfo *)(local_90 + (long)iVar1 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar4);
        pQVar4 = pQVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_90);
  }
LAB_1001fd37a:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fd3da;
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if (iVar1 != *(int *)(local_70 + 8)) {
      lVar6 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar1 * -8;
      pQVar4 = (QFileInfo *)(local_70 + (long)iVar1 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar4);
        pQVar4 = pQVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_70);
  }
LAB_1001fd3da:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fd40a;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1001fd40a:
  QDir::~QDir(local_48);
  return;
}

