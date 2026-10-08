
undefined8 * FUN_1009ca000(undefined8 *param_1,QString *param_2,int param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  Data *pDVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  QArrayData *pQVar11;
  int *piVar12;
  QFileInfo *pQVar13;
  bool bVar14;
  QArrayData *local_138;
  QString local_130;
  QFileInfo local_128 [8];
  QArrayData *local_120;
  QString local_118;
  QArrayData *local_110;
  QString local_108;
  QString local_100;
  Data *local_f8;
  Data *local_f0;
  Data *local_e8;
  undefined4 local_e0;
  Data *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  int *local_c0;
  QDir local_b8 [8];
  int *local_b0;
  QString *local_a8;
  QString *local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  int *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48 [2];
  undefined1 local_31;
  
  QString::toUtf8();
  FUN_100df99c0("","PTProblemReporting",0,
                "Starting looking for Mac crash report/dump (app \'%s\', pid %d\') timeout val %u ..."
                ,local_110 + *(long *)(local_110 + 0x10),param_3,param_4);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ca09c;
    }
    QArrayData::deallocate(local_110,1,8);
  }
LAB_1009ca09c:
  pQVar11 = (QArrayData *)PTR_shared_null_1021e1288;
  local_118.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    FUN_100df99c0("","PTProblemReporting",0,
                  "Error : Application name/path is empty, can not get process name.");
    *param_1 = PTR_shared_null_1021e1288;
    goto LAB_1009cabbb;
  }
  QFileInfo::QFileInfo(local_128,param_2);
  QFileInfo::baseName();
  QFileInfo::~QFileInfo(local_128);
  local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar11;
  if (param_4 != 0) {
    uVar7 = 0;
    piVar12 = (int *)PTR_shared_null_1021e15e8;
    do {
      local_80 = piVar12;
      FUN_100d89360(&local_88);
      FUN_1000341d0(&local_80,&local_88);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009ca17a;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1009ca17a:
      FUN_100d89770(&local_90);
      FUN_1000341d0(&local_80,&local_90);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009ca1cb;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1009ca1cb:
      local_b0 = local_80;
      if (*local_80 != -1) {
        if (*local_80 == 0) {
          QListData::detach((int)&local_b0);
          iVar6 = local_b0[2];
          if (iVar6 != local_b0[3]) {
            piVar9 = local_80 + (long)local_80[2] * 2 + 4;
            piVar10 = local_b0 + (long)iVar6 * 2 + 4;
            lVar8 = (long)local_b0[3] * 8 + (long)iVar6 * -8;
            do {
              piVar2 = *(int **)piVar9;
              *(int **)piVar10 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_31 = *piVar2 != 0;
                UNLOCK();
              }
              piVar10 = piVar10 + 2;
              piVar9 = piVar9 + 2;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
        }
        else {
          LOCK();
          *local_80 = *local_80 + 1;
          local_31 = *local_80 != 0;
          UNLOCK();
        }
      }
      local_a8 = (QString *)(local_b0 + (long)local_b0[2] * 2 + 4);
      local_a0 = (QString *)(local_b0 + (long)local_b0[3] * 2 + 4);
      if (local_b0[2] != local_b0[3]) {
        do {
          local_98 = 1;
          QDir::QDir(local_b8,local_a8);
          local_d0 = (QArrayData *)QString::fromAscii_helper("%1*.*",5);
          QString::arg(&local_c8,&local_d0,&local_120,0,0x20);
          local_c0 = piVar12;
          FUN_1000341d0(&local_c0,&local_c8);
          QDir::setNameFilters((QStringList *)local_b8);
          FUN_100039a80(&local_c0);
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009ca34e;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
LAB_1009ca34e:
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009ca384;
            }
            QArrayData::deallocate(local_d0,2,8);
          }
LAB_1009ca384:
          QDir::setFilter(local_b8,0x6102);
          QDir::setSorting(local_b8,1);
          QDir::entryInfoList(&local_d8,local_b8,0xffffffff);
          iVar6 = 7;
          if (*(int *)(local_d8 + 0xc) != *(int *)(local_d8 + 8)) {
            FUN_100055060(&local_f8,&local_d8);
            local_f0 = local_f8 + (long)*(int *)(local_f8 + 8) * 8 + 0x10;
            local_e8 = local_f8 + (long)*(int *)(local_f8 + 0xc) * 8 + 0x10;
            local_e0 = 1;
            iVar6 = 8;
            if (*(int *)(local_f8 + 8) != *(int *)(local_f8 + 0xc)) {
              do {
                local_e0 = 1;
                QFileInfo::absoluteFilePath();
                QFile::QFile((QFile *)local_48,&local_108);
                cVar5 = QFile::open((QFile *)local_48,1);
                if (cVar5 == '\0') {
                  if (DAT_10230ffd0 < 2) {
                    bVar14 = false;
                  }
                  else {
                    QString::toUtf8();
                    FUN_100df99c0("","PTProblemReporting",2,
                                  "Can\'t open \'%s\' crash report for reading!",
                                  local_50 + *(long *)(local_50 + 0x10));
                    if (*(int *)local_50 == -1) {
                      bVar14 = false;
                    }
                    else {
                      if (*(int *)local_50 != 0) {
                        LOCK();
                        *(int *)local_50 = *(int *)local_50 + -1;
                        local_31 = *(int *)local_50 != 0;
                        UNLOCK();
                        if ((bool)local_31) {
                          bVar14 = false;
                          goto LAB_1009ca710;
                        }
                      }
                      QArrayData::deallocate(local_50,1,8);
                      bVar14 = false;
                    }
                  }
                }
                else {
                  lVar8 = QFile::size();
                  if (0x19000 < lVar8) {
                    pcVar3 = *(code **)(local_48[0] + 0x88);
                    lVar8 = QFile::size();
                    (*pcVar3)((QFile *)local_48,lVar8 + -0x19000);
                  }
                  QIODevice::readLine((longlong)&local_58);
                  if (*(int *)(local_58 + 4) == 0) {
                    bVar14 = false;
                  }
                  else {
                    pQVar11 = local_58 + *(long *)(local_58 + 0x10);
                    if (pQVar11 != (QArrayData *)0x0) {
                      _strlen((char *)pQVar11);
                    }
                    QString::fromUtf8_helper((char *)&local_68,(int)pQVar11);
                    QString::normalized(&local_60,&local_68,1,0);
                    if (*(int *)local_68 != -1) {
                      if (*(int *)local_68 != 0) {
                        LOCK();
                        *(int *)local_68 = *(int *)local_68 + -1;
                        local_31 = *(int *)local_68 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1009ca50d;
                      }
                      QArrayData::deallocate(local_68,2,8);
                    }
LAB_1009ca50d:
                    local_78 = (QArrayData *)QString::fromAscii_helper("[%1]",4);
                    QString::arg(&local_70,&local_78,(long)param_3,0,10,0x20);
                    iVar6 = QString::indexOf(&local_60,&local_70,0);
                    if (iVar6 == -1) {
                      bVar14 = false;
                    }
                    else {
                      iVar6 = QString::indexOf(&local_60,&local_120,0);
                      bVar14 = iVar6 != -1;
                    }
                    if (*(int *)local_70 != -1) {
                      if (*(int *)local_70 != 0) {
                        LOCK();
                        *(int *)local_70 = *(int *)local_70 + -1;
                        local_31 = *(int *)local_70 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1009ca651;
                      }
                      QArrayData::deallocate(local_70,2,8);
                    }
LAB_1009ca651:
                    if (*(int *)local_78 != -1) {
                      if (*(int *)local_78 != 0) {
                        LOCK();
                        *(int *)local_78 = *(int *)local_78 + -1;
                        local_31 = *(int *)local_78 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1009ca681;
                      }
                      QArrayData::deallocate(local_78,2,8);
                    }
LAB_1009ca681:
                    if (*(int *)local_60 != -1) {
                      if (*(int *)local_60 != 0) {
                        LOCK();
                        *(int *)local_60 = *(int *)local_60 + -1;
                        local_31 = *(int *)local_60 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1009ca6c0;
                      }
                      QArrayData::deallocate(local_60,2,8);
                    }
                  }
LAB_1009ca6c0:
                  if (*(int *)local_58 != -1) {
                    if (*(int *)local_58 != 0) {
                      LOCK();
                      *(int *)local_58 = *(int *)local_58 + -1;
                      local_31 = *(int *)local_58 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1009ca710;
                    }
                    QArrayData::deallocate(local_58,1,8);
                  }
                }
LAB_1009ca710:
                QFile::~QFile((QFile *)local_48);
                iVar6 = 1;
                if (bVar14) break;
                if (*(int *)local_108.field0_0x0 != -1) {
                  if (*(int *)local_108.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
                    local_31 = *(int *)local_108.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1009ca758;
                  }
                  QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
                }
LAB_1009ca758:
                local_f0 = local_f0 + 8;
                local_e0 = 1;
                iVar6 = 8;
              } while (local_f0 != local_e8);
            }
            pDVar4 = local_f8;
            if (*(int *)local_f8 != -1) {
              if (*(int *)local_f8 != 0) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + -1;
                local_31 = *(int *)local_f8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1009ca7fa;
              }
              iVar1 = *(int *)(local_f8 + 0xc);
              if (iVar1 != *(int *)(local_f8 + 8)) {
                lVar8 = (long)*(int *)(local_f8 + 8) * 8 + (long)iVar1 * -8;
                pQVar13 = (QFileInfo *)(local_f8 + (long)iVar1 * 8 + 8);
                do {
                  QFileInfo::~QFileInfo(pQVar13);
                  pQVar13 = pQVar13 + -8;
                  lVar8 = lVar8 + 8;
                } while (lVar8 != 0);
              }
              QListData::dispose(pDVar4);
            }
LAB_1009ca7fa:
            if (iVar6 == 8) {
              iVar6 = 0;
            }
          }
          pDVar4 = local_d8;
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_31 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009ca89f;
            }
            iVar1 = *(int *)(local_d8 + 0xc);
            if (iVar1 != *(int *)(local_d8 + 8)) {
              lVar8 = (long)*(int *)(local_d8 + 8) * 8 + (long)iVar1 * -8;
              pQVar13 = (QFileInfo *)(local_d8 + (long)iVar1 * 8 + 8);
              do {
                QFileInfo::~QFileInfo(pQVar13);
                pQVar13 = pQVar13 + -8;
                lVar8 = lVar8 + 8;
              } while (lVar8 != 0);
            }
            QListData::dispose(pDVar4);
            piVar12 = (int *)PTR_shared_null_1021e15e8;
          }
LAB_1009ca89f:
          QDir::~QDir(local_b8);
          if ((iVar6 != 0) && (iVar6 != 7)) goto LAB_1009ca8f6;
          local_a8 = local_a8 + 1;
        } while (local_a8 != local_a0);
      }
      local_98 = 1;
      iVar6 = 2;
LAB_1009ca8f6:
      FUN_100039a80(&local_b0);
      if (iVar6 == 2) {
        local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      }
      FUN_100039a80(&local_80);
      QString::operator=(&local_100,&local_108);
      if (*(int *)local_108.field0_0x0 != -1) {
        if (*(int *)local_108.field0_0x0 != 0) {
          LOCK();
          *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
          local_31 = *(int *)local_108.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009ca96b;
        }
        QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
      }
LAB_1009ca96b:
      pQVar11 = (QArrayData *)PTR_shared_null_1021e1288;
      if (*(int *)(local_100.field0_0x0 + 4) != 0) break;
      _sleep(3);
      uVar7 = uVar7 + 3;
      pQVar11 = (QArrayData *)PTR_shared_null_1021e1288;
    } while (uVar7 < param_4);
  }
  if (*(int *)(local_100.field0_0x0 + 4) == 0) {
    FUN_100df99c0("","PTProblemReporting",0,
                  "Error : Failed to find crash report for process PID %d.",param_3);
    local_130.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar11;
  }
  else {
    local_130.field0_0x0 = local_100.field0_0x0;
    if (1 < *(int *)local_100.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
      local_31 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      local_130.field0_0x0 = local_100.field0_0x0;
    }
  }
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_31 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009caa6c;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_1009caa6c:
  QString::operator=(&local_118,&local_130);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009caab5;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_1009caab5:
  if (*(int *)(local_118.field0_0x0 + 4) == 0) {
    FUN_100df99c0("","PTProblemReporting",0,
                  "Error : No Mac crash dump file passed (possible unable to locate).");
    *param_1 = pQVar11;
  }
  else {
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","PTProblemReporting",2,"Mac crash dump file \'%s\'",
                    local_138 + *(long *)(local_138 + 0x10));
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009cab47;
        }
        QArrayData::deallocate(local_138,1,8);
      }
    }
LAB_1009cab47:
    *param_1 = local_118.field0_0x0;
    if (1 < *(int *)local_118.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + 1;
      local_31 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009cabbb;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1009cabbb:
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_118.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
  return param_1;
}

