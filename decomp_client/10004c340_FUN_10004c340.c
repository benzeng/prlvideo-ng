
void FUN_10004c340(long param_1,undefined8 param_2)

{
  int *piVar1;
  undefined *puVar2;
  Data *pDVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  QFileInfo *this;
  undefined1 auVar10 [16];
  QArrayData *pQStack_110;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  undefined1 local_b8 [32];
  QString local_98;
  QString local_90;
  QString local_88;
  QString QStack_80;
  Data *local_78;
  QDir local_70 [8];
  int *local_68;
  QString *local_60;
  QString *local_58;
  undefined4 local_50;
  int *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_48 = *(int **)(param_1 + 0x68);
  if (*local_48 != -1) {
    if (*local_48 == 0) {
      QListData::detach((int)&local_48);
      iVar5 = local_48[2];
      if (iVar5 != local_48[3]) {
        puVar7 = (undefined8 *)
                 (*(long *)(param_1 + 0x68) + 0x10 +
                 (long)*(int *)(*(long *)(param_1 + 0x68) + 8) * 8);
        piVar8 = local_48 + (long)iVar5 * 2 + 4;
        lVar6 = (long)local_48[3] * 8 + (long)iVar5 * -8;
        do {
          piVar9 = (int *)*puVar7;
          *(int **)piVar8 = piVar9;
          if (1 < *piVar9 + 1U) {
            LOCK();
            *piVar9 = *piVar9 + 1;
            local_31 = *piVar9 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          puVar7 = puVar7 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    else {
      LOCK();
      *local_48 = *local_48 + 1;
      local_31 = *local_48 != 0;
      UNLOCK();
    }
  }
  local_68 = local_48;
  if (*local_48 != -1) {
    if (*local_48 == 0) {
      QListData::detach((int)&local_68);
      iVar5 = local_68[2];
      if (iVar5 != local_68[3]) {
        piVar8 = local_48 + (long)local_48[2] * 2 + 4;
        piVar9 = local_68 + (long)iVar5 * 2 + 4;
        lVar6 = (long)local_68[3] * 8 + (long)iVar5 * -8;
        do {
          piVar1 = *(int **)piVar8;
          *(int **)piVar9 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          piVar8 = piVar8 + 2;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    else {
      LOCK();
      *local_48 = *local_48 + 1;
      local_31 = *local_48 != 0;
      UNLOCK();
    }
  }
  puVar2 = PTR_shared_null_1021e1288;
  local_60 = (QString *)(local_68 + (long)local_68[2] * 2 + 4);
  local_58 = (QString *)(local_68 + (long)local_68[3] * 2 + 4);
  if (local_68[2] != local_68[3]) {
    auVar10._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar10._0_8_ = PTR_shared_null_1021e1288;
    auVar10._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    do {
      local_50 = 1;
      QDir::QDir(local_70,local_60);
      cVar4 = QDir::exists();
      if (cVar4 != '\0') {
        QDir::setFilter(local_70,0x6009);
        QDir::setSorting(local_70,4);
        QDir::entryInfoList(&local_78,local_70,0xffffffff,0xffffffff);
        lVar6 = 0;
        if (*(int *)(local_78 + 8) < *(int *)(local_78 + 0xc)) {
          do {
            cVar4 = QFileInfo::isDir();
            if (cVar4 != '\0') {
              pQStack_110 = auVar10._8_8_;
              local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
              QStack_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQStack_110;
              QFileInfo::absoluteFilePath();
              QString::operator=(&QStack_80,&local_90);
              if (*(int *)local_90.field0_0x0 != -1) {
                if (*(int *)local_90.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
                  local_31 = *(int *)local_90.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10004c58c;
                }
                QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
              }
LAB_10004c58c:
              local_98.field0_0x0 = QStack_80.field0_0x0;
              if (1 < *(int *)QStack_80.field0_0x0 + 1U) {
                LOCK();
                *(int *)QStack_80.field0_0x0 = *(int *)QStack_80.field0_0x0 + 1;
                local_31 = *(int *)QStack_80.field0_0x0 != 0;
                UNLOCK();
              }
              QString::fromUtf8_helper((char *)&local_40,0x1db6890);
              QString::append(&local_98);
              if (*(int *)local_40 != -1) {
                if (*(int *)local_40 != 0) {
                  LOCK();
                  *(int *)local_40 = *(int *)local_40 + -1;
                  local_31 = *(int *)local_40 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10004c5fd;
                }
                QArrayData::deallocate(local_40,2,8);
              }
LAB_10004c5fd:
              cVar4 = QFile::exists(&local_98);
              if (cVar4 != '\0') {
                local_c0 = (QArrayData *)local_98.field0_0x0;
                if (1 < *(int *)local_98.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
                  local_31 = *(int *)local_98.field0_0x0 != 0;
                  UNLOCK();
                }
                FUN_100b56ca0(local_b8,&local_c0);
                if (*(int *)local_c0 != -1) {
                  if (*(int *)local_c0 != 0) {
                    LOCK();
                    *(int *)local_c0 = *(int *)local_c0 + -1;
                    local_31 = *(int *)local_c0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10004c679;
                  }
                  QArrayData::deallocate(local_c0,2,8);
                }
LAB_10004c679:
                local_d0 = (QArrayData *)QString::fromAscii_helper("System",6);
                local_d8 = (QArrayData *)QString::fromAscii_helper("VM Id",5);
                local_e0 = (QArrayData *)PTR_shared_null_1021e1288;
                FUN_100b57250(&local_c8,local_b8,&local_d0,&local_d8,&local_e0);
                if (*(int *)local_e0 != -1) {
                  if (*(int *)local_e0 != 0) {
                    LOCK();
                    *(int *)local_e0 = *(int *)local_e0 + -1;
                    local_31 = *(int *)local_e0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10004c715;
                  }
                  QArrayData::deallocate(local_e0,2,8);
                }
LAB_10004c715:
                if (*(int *)local_d8 != -1) {
                  if (*(int *)local_d8 != 0) {
                    LOCK();
                    *(int *)local_d8 = *(int *)local_d8 + -1;
                    local_31 = *(int *)local_d8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10004c74b;
                  }
                  QArrayData::deallocate(local_d8,2,8);
                }
LAB_10004c74b:
                if (*(int *)local_d0 != -1) {
                  if (*(int *)local_d0 != 0) {
                    LOCK();
                    *(int *)local_d0 = *(int *)local_d0 + -1;
                    local_31 = *(int *)local_d0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10004c781;
                  }
                  QArrayData::deallocate(local_d0,2,8);
                }
LAB_10004c781:
                if ((*(int *)(local_c8 + 4) != 0) &&
                   (iVar5 = QString::compare(&local_c8,param_1 + 0x10,0), iVar5 == 0)) {
                  local_f0 = (QArrayData *)QString::fromAscii_helper("System",6);
                  local_f8 = (QArrayData *)QString::fromAscii_helper("APP Path",8);
                  local_100 = (QArrayData *)PTR_shared_null_1021e1288;
                  FUN_100b57250(&local_e8,local_b8,&local_f0,&local_f8,&local_100);
                  QString::operator=(&local_88,&local_e8);
                  if (*(int *)local_e8.field0_0x0 != -1) {
                    if (*(int *)local_e8.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
                      local_31 = *(int *)local_e8.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10004c857;
                    }
                    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
                  }
LAB_10004c857:
                  if (*(int *)local_100 != -1) {
                    if (*(int *)local_100 != 0) {
                      LOCK();
                      *(int *)local_100 = *(int *)local_100 + -1;
                      local_31 = *(int *)local_100 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10004c88d;
                    }
                    QArrayData::deallocate(local_100,2,8);
                  }
LAB_10004c88d:
                  if (*(int *)local_f8 != -1) {
                    if (*(int *)local_f8 != 0) {
                      LOCK();
                      *(int *)local_f8 = *(int *)local_f8 + -1;
                      local_31 = *(int *)local_f8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10004c8c3;
                    }
                    QArrayData::deallocate(local_f8,2,8);
                  }
LAB_10004c8c3:
                  if (*(int *)local_f0 != -1) {
                    if (*(int *)local_f0 != 0) {
                      LOCK();
                      *(int *)local_f0 = *(int *)local_f0 + -1;
                      local_31 = *(int *)local_f0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10004c8f9;
                    }
                    QArrayData::deallocate(local_f0,2,8);
                  }
LAB_10004c8f9:
                  FUN_100054e80(param_2,&local_88);
                }
                if (*(int *)local_c8 != -1) {
                  if (*(int *)local_c8 != 0) {
                    LOCK();
                    *(int *)local_c8 = *(int *)local_c8 + -1;
                    local_31 = *(int *)local_c8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10004c93f;
                  }
                  QArrayData::deallocate(local_c8,2,8);
                }
LAB_10004c93f:
                FUN_100b57060(local_b8);
              }
              if (*(int *)local_98.field0_0x0 != -1) {
                if (*(int *)local_98.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
                  local_31 = *(int *)local_98.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10004c981;
                }
                QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
              }
LAB_10004c981:
              if (*(int *)QStack_80.field0_0x0 != -1) {
                if (*(int *)QStack_80.field0_0x0 != 0) {
                  LOCK();
                  *(int *)QStack_80.field0_0x0 = *(int *)QStack_80.field0_0x0 + -1;
                  local_31 = *(int *)QStack_80.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10004c9b1;
                }
                QArrayData::deallocate((QArrayData *)QStack_80.field0_0x0,2,8);
              }
LAB_10004c9b1:
              if (*(int *)local_88.field0_0x0 != -1) {
                if (*(int *)local_88.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
                  local_31 = *(int *)local_88.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10004c9f0;
                }
                QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
              }
            }
LAB_10004c9f0:
            lVar6 = lVar6 + 1;
          } while (lVar6 < (long)*(int *)(local_78 + 0xc) - (long)*(int *)(local_78 + 8));
        }
        pDVar3 = local_78;
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004ca70;
          }
          iVar5 = *(int *)(local_78 + 0xc);
          if (iVar5 != *(int *)(local_78 + 8)) {
            lVar6 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar5 * -8;
            this = (QFileInfo *)(local_78 + (long)iVar5 * 8 + 8);
            do {
              QFileInfo::~QFileInfo(this);
              this = this + -8;
              lVar6 = lVar6 + 8;
            } while (lVar6 != 0);
          }
          QListData::dispose(pDVar3);
        }
      }
LAB_10004ca70:
      QDir::~QDir(local_70);
      local_60 = local_60 + 1;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  FUN_100039a80(&local_68);
  FUN_100039a80(&local_48);
  return;
}

