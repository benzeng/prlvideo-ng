
undefined8 * FUN_10063b680(undefined8 *param_1,long *param_2,QDateTime *param_3)

{
  int *piVar1;
  undefined *puVar2;
  Data *pDVar3;
  char cVar4;
  long lVar5;
  size_t sVar6;
  uint uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  QArrayData *pQVar12;
  QFileInfo *this;
  int iVar13;
  bool bVar14;
  bool bVar15;
  QArrayData *local_110;
  QDateTime local_108 [8];
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  int *local_e8;
  int *local_e0;
  int *local_d8;
  uint local_d0;
  QArrayData *local_c8;
  int *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QFile local_98 [16];
  QArrayData *local_88;
  QArrayData *local_80;
  Data *local_78;
  QArrayData *local_70;
  undefined1 local_68 [8];
  QDir local_60 [8];
  int *local_58;
  QString *local_50;
  QString *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_100ba2188;
  local_58 = (int *)*param_2;
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar13 = local_58[2];
      if (iVar13 != local_58[3]) {
        puVar8 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar9 = local_58 + (long)iVar13 * 2 + 4;
        lVar5 = (long)local_58[3] * 8 + (long)iVar13 * -8;
        do {
          piVar11 = (int *)*puVar8;
          *(int **)piVar9 = piVar11;
          if (1 < *piVar11 + 1U) {
            LOCK();
            *piVar11 = *piVar11 + 1;
            local_31 = *piVar11 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          puVar8 = puVar8 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = (QString *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (QString *)(local_58 + (long)local_58[3] * 2 + 4);
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      QDir::QDir(local_60,local_50);
      local_70 = (QArrayData *)QString::fromAscii_helper("*.*",3);
      FUN_100635050(local_68,&local_70,1);
      QDir::setNameFilters((QStringList *)local_60);
      FUN_100013180(local_68);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10063b7d5;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_10063b7d5:
      QDir::setFilter(local_60,0x6102);
      QDir::setSorting(local_60,1);
      QDir::entryInfoList(&local_78,local_60,0xffffffff,0xffffffff);
      uVar7 = *(uint *)local_78;
      lVar5 = 0;
      if ((int)*(uint *)(local_78 + 8) < (int)*(uint *)(local_78 + 0xc)) {
        do {
          if (1 < uVar7) {
            FUN_10004e190(&local_78,*(uint *)(local_78 + 4));
          }
          QFileInfo::fileName();
          puVar2 = PTR_s_LowMemory_1011209e8;
          iVar13 = -1;
          if (PTR_s_LowMemory_1011209e8 != (undefined *)0x0) {
            sVar6 = _strlen(PTR_s_LowMemory_1011209e8);
            iVar13 = (int)sVar6;
          }
          local_88 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar13);
          cVar4 = QString::startsWith(&local_80,&local_88,1);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10063b8bc;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_10063b8bc:
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10063b8ec;
            }
            QArrayData::deallocate(local_80,2,8);
          }
LAB_10063b8ec:
          if (cVar4 == '\0') {
LAB_10063bd67:
            cVar4 = QDateTime::isValid();
            if (cVar4 == '\0') {
              if (1 < *(uint *)local_78) {
                FUN_10004e190(&local_78,*(uint *)(local_78 + 4));
              }
              QFileInfo::filePath();
              FUN_10000c490(param_1,&local_100);
              if (*(int *)local_100 != -1) {
                if (*(int *)local_100 != 0) {
                  LOCK();
                  *(int *)local_100 = *(int *)local_100 + -1;
                  local_31 = *(int *)local_100 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10063bee0;
                }
                QArrayData::deallocate(local_100,2,8);
              }
            }
            else {
              if (1 < *(uint *)local_78) {
                FUN_10004e190(&local_78,*(uint *)(local_78 + 4));
              }
              QFileInfo::created();
              cVar4 = QDateTime::operator<(local_108,param_3);
              QDateTime::~QDateTime(local_108);
              if (cVar4 == '\0') {
                if (1 < *(uint *)local_78) {
                  FUN_10004e190(&local_78,*(uint *)(local_78 + 4));
                }
                QFileInfo::filePath();
                FUN_10000c490(param_1,&local_110);
                if (*(int *)local_110 != -1) {
                  if (*(int *)local_110 != 0) {
                    LOCK();
                    *(int *)local_110 = *(int *)local_110 + -1;
                    local_31 = *(int *)local_110 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10063bee0;
                  }
                  QArrayData::deallocate(local_110,2,8);
                }
              }
            }
          }
          else {
            if (1 < *(uint *)local_78) {
              FUN_10004e190(&local_78,*(uint *)(local_78 + 4));
            }
            QFileInfo::absoluteFilePath();
            QFile::QFile(local_98,&local_a0);
            if (*(int *)local_a0.field0_0x0 != -1) {
              if (*(int *)local_a0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                local_31 = *(int *)local_a0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10063b96e;
              }
              QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
            }
LAB_10063b96e:
            cVar4 = QFile::open(local_98,1);
            if (cVar4 == '\0') {
LAB_10063bd4a:
              iVar13 = 0;
            }
            else {
              QIODevice::read((longlong)&local_b8);
              pQVar12 = local_b8 + *(long *)(local_b8 + 0x10);
              if ((pQVar12 != (QArrayData *)0x0) && (*(uint *)(local_b8 + 4) != 0)) {
                lVar10 = 0;
                do {
                  if (pQVar12[lVar10] == (QArrayData)0x0) break;
                  lVar10 = lVar10 + 1;
                } while ((uint)lVar10 < *(uint *)(local_b8 + 4));
                if ((int)lVar10 == -1) {
                  _strlen((char *)pQVar12);
                }
              }
              QString::fromUtf8_helper((char *)&local_b0,(int)pQVar12);
              QString::normalized(&local_a8,&local_b0,1,0);
              if (*(int *)local_b0 != -1) {
                if (*(int *)local_b0 != 0) {
                  LOCK();
                  *(int *)local_b0 = *(int *)local_b0 + -1;
                  local_31 = *(int *)local_b0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10063ba4d;
                }
                QArrayData::deallocate(local_b0,2,8);
              }
LAB_10063ba4d:
              if (*(int *)local_b8 != -1) {
                if (*(int *)local_b8 != 0) {
                  LOCK();
                  *(int *)local_b8 = *(int *)local_b8 + -1;
                  local_31 = *(int *)local_b8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10063ba83;
                }
                QArrayData::deallocate(local_b8,1,8);
              }
LAB_10063ba83:
              local_c8 = (QArrayData *)QString::fromAscii_helper("\n",1);
              QString::split(&local_c0,&local_a8,&local_c8,0,1);
              if (*(int *)local_c8 != -1) {
                if (*(int *)local_c8 != 0) {
                  LOCK();
                  *(int *)local_c8 = *(int *)local_c8 + -1;
                  local_31 = *(int *)local_c8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10063baf3;
                }
                QArrayData::deallocate(local_c8,2,8);
              }
LAB_10063baf3:
              local_e8 = local_c0;
              if (*local_c0 != -1) {
                if (*local_c0 == 0) {
                  QListData::detach((int)&local_e8);
                  iVar13 = local_e8[2];
                  if (iVar13 != local_e8[3]) {
                    piVar9 = local_c0 + (long)local_c0[2] * 2 + 4;
                    piVar11 = local_e8 + (long)iVar13 * 2 + 4;
                    lVar10 = (long)local_e8[3] * 8 + (long)iVar13 * -8;
                    do {
                      piVar1 = *(int **)piVar9;
                      *(int **)piVar11 = piVar1;
                      if (1 < *piVar1 + 1U) {
                        LOCK();
                        *piVar1 = *piVar1 + 1;
                        local_31 = *piVar1 != 0;
                        UNLOCK();
                      }
                      piVar11 = piVar11 + 2;
                      piVar9 = piVar9 + 2;
                      lVar10 = lVar10 + -8;
                    } while (lVar10 != 0);
                  }
                }
                else {
                  LOCK();
                  *local_c0 = *local_c0 + 1;
                  local_31 = *local_c0 != 0;
                  UNLOCK();
                }
              }
              local_e0 = local_e8 + (long)local_e8[2] * 2 + 4;
              local_d8 = local_e8 + (long)local_e8[3] * 2 + 4;
              local_d0 = 1;
              if (local_e8[2] == local_e8[3]) {
                bVar14 = false;
              }
              else {
                bVar15 = false;
                do {
                  local_f0 = *(QArrayData **)local_e0;
                  if (1 < *(int *)local_f0 + 1U) {
                    LOCK();
                    *(int *)local_f0 = *(int *)local_f0 + 1;
                    local_31 = *(int *)local_f0 != 0;
                    UNLOCK();
                  }
                  puVar2 = PTR_s_RemoteClient_101120948;
                  bVar14 = bVar15;
                  if (local_d0 != 0) {
                    iVar13 = -1;
                    if (PTR_s_RemoteClient_101120948 != (undefined *)0x0) {
                      sVar6 = _strlen(PTR_s_RemoteClient_101120948);
                      iVar13 = (int)sVar6;
                    }
                    local_f8 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar13);
                    cVar4 = FUN_10063d360(&local_f8,&local_f0);
                    if (*(int *)local_f8 != -1) {
                      if (*(int *)local_f8 != 0) {
                        LOCK();
                        *(int *)local_f8 = *(int *)local_f8 + -1;
                        local_31 = *(int *)local_f8 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10063bc6f;
                      }
                      QArrayData::deallocate(local_f8,2,8);
                    }
LAB_10063bc6f:
                    bVar14 = true;
                    if (cVar4 == '\0') {
                      local_d0 = 0;
                      bVar14 = bVar15;
                    }
                  }
                  if (*(int *)local_f0 != -1) {
                    if (*(int *)local_f0 != 0) {
                      LOCK();
                      *(int *)local_f0 = *(int *)local_f0 + -1;
                      local_31 = *(int *)local_f0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10063bcb9;
                    }
                    QArrayData::deallocate(local_f0,2,8);
                  }
LAB_10063bcb9:
                  local_e0 = local_e0 + 2;
                  uVar7 = local_d0 ^ 1;
                  bVar15 = local_d0 != 1;
                  local_d0 = uVar7;
                } while ((bVar15) && (bVar15 = bVar14, local_e0 != local_d8));
              }
              FUN_100013180(&local_e8);
              FUN_100013180(&local_c0);
              if (*(int *)local_a8 != -1) {
                if (*(int *)local_a8 != 0) {
                  LOCK();
                  *(int *)local_a8 = *(int *)local_a8 + -1;
                  local_31 = *(int *)local_a8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10063bd3f;
                }
                QArrayData::deallocate(local_a8,2,8);
              }
LAB_10063bd3f:
              iVar13 = 10;
              if (bVar14) goto LAB_10063bd4a;
            }
            QFile::~QFile(local_98);
            if (iVar13 == 0) goto LAB_10063bd67;
          }
LAB_10063bee0:
          lVar5 = lVar5 + 1;
          uVar7 = *(uint *)local_78;
        } while (lVar5 < (long)(int)*(uint *)(local_78 + 0xc) - (long)(int)*(uint *)(local_78 + 8));
      }
      pDVar3 = local_78;
      if (uVar7 != 0xffffffff) {
        if (uVar7 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10063bf81;
        }
        iVar13 = *(int *)(local_78 + 0xc);
        if (iVar13 != *(int *)(local_78 + 8)) {
          lVar5 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar13 * -8;
          this = (QFileInfo *)(local_78 + (long)iVar13 * 8 + 8);
          do {
            QFileInfo::~QFileInfo(this);
            this = this + -8;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0);
        }
        QListData::dispose(pDVar3);
      }
LAB_10063bf81:
      QDir::~QDir(local_60);
      local_50 = local_50 + 1;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  FUN_100013180(&local_58);
  return param_1;
}

