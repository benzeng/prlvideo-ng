
int FUN_1000c87e0(long param_1,long param_2,QString *param_3,undefined1 *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  bool bVar5;
  Data *pDVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  QArrayData *pQVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  QArrayData *pQVar16;
  QFileInfo *this;
  QString *pQVar17;
  QArrayData *pQVar18;
  bool bVar19;
  int local_214;
  AnonymousUnion0 local_1c0;
  AnonymousUnion0 local_1b8;
  AnonymousUnion0 local_1b0;
  AnonymousUnion0 local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  undefined1 local_158 [32];
  QString local_138;
  QArrayData *local_130;
  QString local_128;
  Data *local_120;
  QDir local_118 [8];
  int *local_110;
  QString *local_108;
  QString *local_100;
  undefined4 local_f8;
  undefined1 local_f0 [8];
  int *local_e8;
  long *local_e0;
  QDateTime local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QDateTime local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  AnonymousUnion0 local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  AnonymousUnion0 local_80;
  AnonymousUnion0 local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  AnonymousUnion0 local_58;
  long *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (*(int *)(*(long *)(param_2 + 8) + 4) == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Error: empty guest app path for appName=\"%s\" ",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return -1;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return -1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
    return -1;
  }
  lVar1 = param_2 + 8;
  QMutex::lock();
  lVar3 = param_1 + 0x1a0;
  FUN_1000f8c40(&local_50,lVar3,lVar1);
  bVar5 = false;
  bVar19 = false;
  if (local_50 == (long *)0x0) goto LAB_1000c9192;
  lVar12 = local_50[2];
  bVar19 = false;
  bVar5 = false;
  if (lVar12 != 0) {
    if (*(int *)(*(long *)(param_2 + 0x18) + 0xc) == *(int *)(*(long *)(param_2 + 0x18) + 8)) {
      bVar5 = false;
    }
    else {
      pQVar11 = (QArrayData *)QString::fromAscii_helper(",",1);
      QtPrivate::QStringList_join
                ((QStringList *)&local_58.field0,(QChar *)(param_2 + 0x18),
                 (int)*(undefined8 *)(pQVar11 + 0x10) + (int)pQVar11);
      cVar8 = operator==((QString *)(lVar12 + 0x30),(QString *)&local_58.field0);
      if (*(int *)local_58.field1 != -1) {
        if (*(int *)local_58.field1 != 0) {
          LOCK();
          *(int *)local_58.field1 = *(int *)local_58.field1 + -1;
          local_31 = *(int *)local_58.field1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000c899e;
        }
        QArrayData::deallocate((QArrayData *)local_58.field1,2,8);
      }
LAB_1000c899e:
      if (*(int *)pQVar11 != -1) {
        if (*(int *)pQVar11 != 0) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000c89cb;
        }
        QArrayData::deallocate(pQVar11,2,8);
      }
LAB_1000c89cb:
      if (cVar8 == '\0') {
        bVar5 = true;
        if (1 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("SGAC","prl_client_app",2,
                        "File type associations have changed for appPath=\"%s\"",
                        local_60 + *(long *)(local_60 + 0x10));
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000c8a60;
            }
            QArrayData::deallocate(local_60,1,8);
          }
LAB_1000c8a60:
          if (1 < DAT_10230ffd0) {
            QString::toUtf8();
            pQVar16 = local_68 + *(long *)(local_68 + 0x10);
            pQVar11 = (QArrayData *)QString::fromAscii_helper(",",1);
            QtPrivate::QStringList_join
                      ((QStringList *)&local_78.field0,(QChar *)(param_2 + 0x18),
                       (int)*(undefined8 *)(pQVar11 + 0x10) + (int)pQVar11);
            QString::toUtf8();
            FUN_100df99c0("SGAC","prl_client_app",2,"Were \"%s\", now \"%s\"",pQVar16,
                          local_70 + *(long *)(local_70 + 0x10));
            if (*(int *)local_70 != -1) {
              if (*(int *)local_70 != 0) {
                LOCK();
                *(int *)local_70 = *(int *)local_70 + -1;
                local_31 = *(int *)local_70 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000c8b21;
              }
              QArrayData::deallocate(local_70,1,8);
            }
LAB_1000c8b21:
            if (*(int *)local_78.field1 != -1) {
              if (*(int *)local_78.field1 != 0) {
                LOCK();
                *(int *)local_78.field1 = *(int *)local_78.field1 + -1;
                local_31 = *(int *)local_78.field1 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000c8b51;
              }
              QArrayData::deallocate((QArrayData *)local_78.field1,2,8);
            }
LAB_1000c8b51:
            if (*(int *)pQVar11 != -1) {
              if (*(int *)pQVar11 != 0) {
                LOCK();
                *(int *)pQVar11 = *(int *)pQVar11 + -1;
                local_31 = *(int *)pQVar11 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000c8b7e;
              }
              QArrayData::deallocate(pQVar11,2,8);
            }
LAB_1000c8b7e:
            if (*(int *)local_68 != -1) {
              if (*(int *)local_68 != 0) {
                LOCK();
                *(int *)local_68 = *(int *)local_68 + -1;
                local_31 = *(int *)local_68 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000c8bae;
              }
              QArrayData::deallocate(local_68,1,8);
            }
          }
        }
      }
      else {
        bVar5 = false;
      }
    }
LAB_1000c8bae:
    if (*(int *)(*(long *)(param_2 + 0x10) + 0xc) != *(int *)(*(long *)(param_2 + 0x10) + 8)) {
      lVar12 = 0;
      if (local_50 != (long *)0x0) {
        lVar12 = local_50[2];
      }
      pQVar11 = (QArrayData *)QString::fromAscii_helper(",",1);
      QtPrivate::QStringList_join
                ((QStringList *)&local_80.field0,(QChar *)(param_2 + 0x10),
                 (int)*(undefined8 *)(pQVar11 + 0x10) + (int)pQVar11);
      cVar8 = operator==((QString *)(lVar12 + 0x28),(QString *)&local_80.field0);
      if (*(int *)local_80.field1 != -1) {
        if (*(int *)local_80.field1 != 0) {
          LOCK();
          *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
          local_31 = *(int *)local_80.field1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000c8c3f;
        }
        QArrayData::deallocate((QArrayData *)local_80.field1,2,8);
      }
LAB_1000c8c3f:
      if (*(int *)pQVar11 != -1) {
        if (*(int *)pQVar11 != 0) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000c8c6c;
        }
        QArrayData::deallocate(pQVar11,2,8);
      }
LAB_1000c8c6c:
      if ((cVar8 == '\0') && (bVar5 = true, 1 < DAT_10230ffd0)) {
        QString::toUtf8();
        pQVar16 = local_88 + *(long *)(local_88 + 0x10);
        QString::toUtf8();
        pQVar18 = local_90 + *(long *)(local_90 + 0x10);
        pQVar11 = (QArrayData *)QString::fromAscii_helper(",",1);
        QtPrivate::QStringList_join
                  ((QStringList *)&local_a0.field0,(QChar *)(param_2 + 0x10),
                   (int)*(undefined8 *)(pQVar11 + 0x10) + (int)pQVar11);
        QString::toUtf8();
        FUN_100df99c0("SGAC","prl_client_app",2,
                      "Protocols have changed for appPath=\'%s\', were \'%s\', now \'%s\'",pQVar16,
                      pQVar18,local_98 + *(long *)(local_98 + 0x10));
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000c8d7c;
          }
          QArrayData::deallocate(local_98,1,8);
        }
LAB_1000c8d7c:
        if (*(int *)local_a0.field1 != -1) {
          if (*(int *)local_a0.field1 != 0) {
            LOCK();
            *(int *)local_a0.field1 = *(int *)local_a0.field1 + -1;
            local_31 = *(int *)local_a0.field1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000c8db2;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field1,2,8);
        }
LAB_1000c8db2:
        if (*(int *)pQVar11 != -1) {
          if (*(int *)pQVar11 != 0) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000c8ddf;
          }
          QArrayData::deallocate(pQVar11,2,8);
        }
LAB_1000c8ddf:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000c8e15;
          }
          QArrayData::deallocate(local_90,1,8);
        }
LAB_1000c8e15:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000c8e45;
          }
          QArrayData::deallocate(local_88,1,8);
        }
      }
    }
LAB_1000c8e45:
    if (*(long *)(param_2 + 0x30) == 0) {
LAB_1000c9093:
      if (!bVar5) {
        lVar12 = 0;
        if (local_50 != (long *)0x0) {
          lVar12 = local_50[2];
        }
        iVar10 = QString::compare(lVar12 + 0x20,&DAT_102310840,1);
        if ((iVar10 == 0) && (cVar8 = FUN_1000f89b0(lVar3), cVar8 != '\0')) {
          pQVar17 = (QString *)0x0;
          if (local_50 != (long *)0x0) {
            pQVar17 = (QString *)local_50[2];
          }
          bVar19 = true;
          QString::operator=(param_3,pQVar17);
          goto LAB_1000c913d;
        }
      }
    }
    else {
      lVar13 = *(long *)(local_50[2] + 0x38) - *(long *)(param_2 + 0x30);
      lVar12 = -lVar13;
      if (0 < lVar13) {
        lVar12 = lVar13;
      }
      if (lVar12 < 0x1f) goto LAB_1000c9093;
      bVar5 = true;
      if (1 < DAT_10230ffd0) {
        QString::toUtf8();
        pQVar16 = local_a8 + *(long *)(local_a8 + 0x10);
        QDateTime::fromTime_t((uint)&local_c0);
        QDateTime::toString(&local_b8,&local_c0,0);
        QString::toUtf8();
        pQVar11 = local_b0 + *(long *)(local_b0 + 0x10);
        QDateTime::fromTime_t((uint)&local_d8);
        QDateTime::toString(&local_d0,&local_d8,0);
        QString::toUtf8();
        FUN_100df99c0("SGAC","prl_client_app",2,
                      "App modify time changed for \'%s\'; was \'%s\' now \'%s\'",pQVar16,pQVar11,
                      local_c8 + *(long *)(local_c8 + 0x10));
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000c8f99;
          }
          QArrayData::deallocate(local_c8,1,8);
        }
LAB_1000c8f99:
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000c8fcf;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_1000c8fcf:
        QDateTime::~QDateTime(&local_d8);
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000c9011;
          }
          QArrayData::deallocate(local_b0,1,8);
        }
LAB_1000c9011:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000c9047;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_1000c9047:
        QDateTime::~QDateTime(&local_c0);
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000c90fc;
          }
          QArrayData::deallocate(local_a8,1,8);
        }
      }
    }
LAB_1000c90fc:
    FUN_1000f8ce0(&local_e0,lVar3,lVar1);
    bVar19 = false;
    if (local_e0 != (long *)0x0) {
      LOCK();
      plVar2 = local_e0 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
  }
LAB_1000c913d:
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
LAB_1000c9192:
  local_214 = 0;
  QMutex::unlock();
  if (!bVar19) {
    local_e8 = (int *)PTR_shared_null_1021e15e8;
    if (*(char *)(param_2 + 0x28) == '\0') {
      FUN_100040590(local_f0,*(undefined8 *)(param_1 + 0xf0));
      FUN_1000e5fc0(&local_e8,local_f0);
      FUN_100039a80(local_f0);
    }
    else {
      FUN_1000341d0(&local_e8,param_1 + 0x28);
    }
    local_110 = local_e8;
    if (*local_e8 != -1) {
      if (*local_e8 == 0) {
        QListData::detach((int)&local_110);
        iVar10 = local_110[2];
        if (iVar10 != local_110[3]) {
          piVar14 = local_e8 + (long)local_e8[2] * 2 + 4;
          piVar15 = local_110 + (long)iVar10 * 2 + 4;
          lVar12 = (long)local_110[3] * 8 + (long)iVar10 * -8;
          do {
            piVar4 = *(int **)piVar14;
            *(int **)piVar15 = piVar4;
            if (1 < *piVar4 + 1U) {
              LOCK();
              *piVar4 = *piVar4 + 1;
              local_31 = *piVar4 != 0;
              UNLOCK();
            }
            piVar15 = piVar15 + 2;
            piVar14 = piVar14 + 2;
            lVar12 = lVar12 + -8;
          } while (lVar12 != 0);
        }
      }
      else {
        LOCK();
        *local_e8 = *local_e8 + 1;
        local_31 = *local_e8 != 0;
        UNLOCK();
      }
    }
    local_108 = (QString *)(local_110 + (long)local_110[2] * 2 + 4);
    local_100 = (QString *)(local_110 + (long)local_110[3] * 2 + 4);
    local_f8 = 1;
    local_214 = 0;
    iVar10 = 0xe;
    if (local_110[2] != local_110[3]) {
      local_214 = 0;
      do {
        local_f8 = 1;
        QDir::QDir(local_118,local_108);
        cVar8 = QDir::exists();
        iVar10 = 0x13;
        if (cVar8 != '\0') {
          QDir::setFilter(local_118,0x6009);
          QDir::setSorting(local_118,4);
          QDir::entryInfoList(&local_120,local_118,0xffffffff,0xffffffff);
          lVar12 = 0;
          if (*(int *)(local_120 + 8) < *(int *)(local_120 + 0xc)) {
            do {
              cVar8 = QFileInfo::isDir();
              if (cVar8 != '\0') {
                QFileInfo::absoluteFilePath();
                QFileInfo::fileName();
                local_138.field0_0x0 = local_128.field0_0x0;
                if (1 < *(int *)local_128.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + 1;
                  local_31 = *(int *)local_128.field0_0x0 != 0;
                  UNLOCK();
                }
                QString::fromUtf8_helper((char *)&local_40,0x1db6890);
                QString::append(&local_138);
                if (*(int *)local_40 != -1) {
                  if (*(int *)local_40 != 0) {
                    LOCK();
                    *(int *)local_40 = *(int *)local_40 + -1;
                    local_31 = *(int *)local_40 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000c9456;
                  }
                  QArrayData::deallocate(local_40,2,8);
                }
LAB_1000c9456:
                cVar8 = QFile::exists(&local_138);
                iVar10 = 0x16;
                if (cVar8 != '\0') {
                  local_160 = (QArrayData *)local_138.field0_0x0;
                  if (1 < *(int *)local_138.field0_0x0 + 1U) {
                    LOCK();
                    *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + 1;
                    local_31 = *(int *)local_138.field0_0x0 != 0;
                    UNLOCK();
                  }
                  FUN_100b56ca0(local_158,&local_160);
                  if (*(int *)local_160 != -1) {
                    if (*(int *)local_160 != 0) {
                      LOCK();
                      *(int *)local_160 = *(int *)local_160 + -1;
                      local_31 = *(int *)local_160 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000c94df;
                    }
                    QArrayData::deallocate(local_160,2,8);
                  }
LAB_1000c94df:
                  local_170 = (QArrayData *)QString::fromAscii_helper("System",6);
                  local_178 = (QArrayData *)QString::fromAscii_helper("VM Id",5);
                  local_180 = (QArrayData *)PTR_shared_null_1021e1288;
                  FUN_100b57250(&local_168,local_158,&local_170,&local_178,&local_180);
                  if (*(int *)local_180 != -1) {
                    if (*(int *)local_180 != 0) {
                      LOCK();
                      *(int *)local_180 = *(int *)local_180 + -1;
                      local_31 = *(int *)local_180 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000c957b;
                    }
                    QArrayData::deallocate(local_180,2,8);
                  }
LAB_1000c957b:
                  if (*(int *)local_178 != -1) {
                    if (*(int *)local_178 != 0) {
                      LOCK();
                      *(int *)local_178 = *(int *)local_178 + -1;
                      local_31 = *(int *)local_178 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000c95b1;
                    }
                    QArrayData::deallocate(local_178,2,8);
                  }
LAB_1000c95b1:
                  if (*(int *)local_170 != -1) {
                    if (*(int *)local_170 != 0) {
                      LOCK();
                      *(int *)local_170 = *(int *)local_170 + -1;
                      local_31 = *(int *)local_170 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000c95e7;
                    }
                    QArrayData::deallocate(local_170,2,8);
                  }
LAB_1000c95e7:
                  iVar10 = 0x16;
                  if ((*(int *)(local_168 + 4) != 0) &&
                     (iVar9 = QString::compare(&local_168,param_1 + 0x10,0), iVar9 == 0)) {
                    local_190 = (QArrayData *)QString::fromAscii_helper("System",6);
                    local_198 = (QArrayData *)QString::fromAscii_helper("APP Path",8);
                    local_1a0 = (QArrayData *)PTR_shared_null_1021e1288;
                    FUN_100b57250(&local_188,local_158,&local_190,&local_198,&local_1a0);
                    if (*(int *)local_1a0 != -1) {
                      if (*(int *)local_1a0 != 0) {
                        LOCK();
                        *(int *)local_1a0 = *(int *)local_1a0 + -1;
                        local_31 = *(int *)local_1a0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000c96b7;
                      }
                      QArrayData::deallocate(local_1a0,2,8);
                    }
LAB_1000c96b7:
                    if (*(int *)local_198 != -1) {
                      if (*(int *)local_198 != 0) {
                        LOCK();
                        *(int *)local_198 = *(int *)local_198 + -1;
                        local_31 = *(int *)local_198 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000c96ed;
                      }
                      QArrayData::deallocate(local_198,2,8);
                    }
LAB_1000c96ed:
                    if (*(int *)local_190 != -1) {
                      if (*(int *)local_190 != 0) {
                        LOCK();
                        *(int *)local_190 = *(int *)local_190 + -1;
                        local_31 = *(int *)local_190 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000c9723;
                      }
                      QArrayData::deallocate(local_190,2,8);
                    }
LAB_1000c9723:
                    iVar10 = 0x16;
                    if ((*(int *)(local_188 + 4) != 0) &&
                       (iVar9 = QString::compare(&local_188,lVar1,0), iVar9 == 0)) {
                      QMutex::lock();
                      iVar10 = FUN_100047b40(*(undefined8 *)(param_1 + 0xf0),&local_128);
                      iVar9 = iVar10;
                      if (iVar10 == 0) {
                        iVar9 = 2;
                      }
                      if (!bVar5) {
                        iVar9 = iVar10;
                      }
                      if (iVar9 - 1U < 2) {
                        QString::operator=(param_3,&local_128);
                        if (*(long *)(param_2 + 0x20) == 0) {
                          bVar19 = false;
                        }
                        else {
                          bVar19 = *(long *)(*(long *)(param_2 + 0x20) + 0x10) != 0;
                        }
                        iVar10 = 1;
                        if ((bVar5) || (iVar7 = iVar9, bVar19)) {
                          if (param_4 != (undefined1 *)0x0) {
                            *param_4 = 1;
                          }
                          iVar9 = FUN_1000495e0(*(undefined8 *)(param_1 + 0xf0),&local_128,param_2);
                          if (iVar9 == 0) {
                            pQVar11 = (QArrayData *)QString::fromAscii_helper(",",1);
                            QtPrivate::QStringList_join
                                      ((QStringList *)&local_1b8.field0,(QChar *)(param_2 + 0x10),
                                       (int)*(undefined8 *)(pQVar11 + 0x10) + (int)pQVar11);
                            pQVar16 = (QArrayData *)QString::fromAscii_helper(",",1);
                            QtPrivate::QStringList_join
                                      ((QStringList *)&local_1c0.field0,(QChar *)(param_2 + 0x18),
                                       (int)*(undefined8 *)(pQVar16 + 0x10) + (int)pQVar16);
                            FUN_1000f83b0(lVar3,&local_128,&local_130,&local_188,&DAT_102310840,
                                          &local_1b8,&local_1c0);
                            if (*(int *)local_1c0.field1 != -1) {
                              if (*(int *)local_1c0.field1 != 0) {
                                LOCK();
                                *(int *)local_1c0.field1 = *(int *)local_1c0.field1 + -1;
                                local_31 = *(int *)local_1c0.field1 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1000c9947;
                              }
                              QArrayData::deallocate((QArrayData *)local_1c0.field1,2,8);
                            }
LAB_1000c9947:
                            if (*(int *)pQVar16 != -1) {
                              if (*(int *)pQVar16 != 0) {
                                LOCK();
                                *(int *)pQVar16 = *(int *)pQVar16 + -1;
                                local_31 = *(int *)pQVar16 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1000c9972;
                              }
                              QArrayData::deallocate(pQVar16,2,8);
                            }
LAB_1000c9972:
                            if (*(int *)local_1b8.field1 != -1) {
                              if (*(int *)local_1b8.field1 != 0) {
                                LOCK();
                                *(int *)local_1b8.field1 = *(int *)local_1b8.field1 + -1;
                                local_31 = *(int *)local_1b8.field1 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1000c99a8;
                              }
                              QArrayData::deallocate((QArrayData *)local_1b8.field1,2,8);
                            }
LAB_1000c99a8:
                            local_214 = 0;
                            iVar7 = local_214;
                            if (*(int *)pQVar11 != -1) {
                              if (*(int *)pQVar11 != 0) {
                                LOCK();
                                *(int *)pQVar11 = *(int *)pQVar11 + -1;
                                local_31 = *(int *)pQVar11 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1000c9b95;
                              }
                              QArrayData::deallocate(pQVar11,2,8);
                            }
                          }
                          else if (iVar9 == 1) {
                            pQVar11 = (QArrayData *)QString::fromAscii_helper(",",1);
                            QtPrivate::QStringList_join
                                      ((QStringList *)&local_1a8.field0,(QChar *)(param_2 + 0x10),
                                       (int)*(undefined8 *)(pQVar11 + 0x10) + (int)pQVar11);
                            pQVar16 = (QArrayData *)QString::fromAscii_helper(",",1);
                            QtPrivate::QStringList_join
                                      ((QStringList *)&local_1b0.field0,(QChar *)(param_2 + 0x18),
                                       (int)*(undefined8 *)(pQVar16 + 0x10) + (int)pQVar16);
                            FUN_1000f83b0(lVar3,&local_128,&local_130,&local_188,&DAT_102310848,
                                          &local_1a8,&local_1b0);
                            if (*(int *)local_1b0.field1 != -1) {
                              if (*(int *)local_1b0.field1 != 0) {
                                LOCK();
                                *(int *)local_1b0.field1 = *(int *)local_1b0.field1 + -1;
                                local_31 = *(int *)local_1b0.field1 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1000c9ac9;
                              }
                              QArrayData::deallocate((QArrayData *)local_1b0.field1,2,8);
                            }
LAB_1000c9ac9:
                            if (*(int *)pQVar16 != -1) {
                              if (*(int *)pQVar16 != 0) {
                                LOCK();
                                *(int *)pQVar16 = *(int *)pQVar16 + -1;
                                local_31 = *(int *)pQVar16 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1000c9af4;
                              }
                              QArrayData::deallocate(pQVar16,2,8);
                            }
LAB_1000c9af4:
                            if (*(int *)local_1a8.field1 != -1) {
                              if (*(int *)local_1a8.field1 != 0) {
                                LOCK();
                                *(int *)local_1a8.field1 = *(int *)local_1a8.field1 + -1;
                                local_31 = *(int *)local_1a8.field1 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1000c9b2a;
                              }
                              QArrayData::deallocate((QArrayData *)local_1a8.field1,2,8);
                            }
LAB_1000c9b2a:
                            iVar10 = 1;
                            if (*(int *)pQVar11 == -1) {
                              local_214 = 1;
                              iVar7 = local_214;
                            }
                            else {
                              if (*(int *)pQVar11 != 0) {
                                LOCK();
                                *(int *)pQVar11 = *(int *)pQVar11 + -1;
                                local_31 = *(int *)pQVar11 != 0;
                                UNLOCK();
                                if ((bool)local_31) {
                                  local_214 = 1;
                                  iVar7 = local_214;
                                  goto LAB_1000c9b95;
                                }
                              }
                              QArrayData::deallocate(pQVar11,2,8);
                              local_214 = 1;
                              iVar7 = local_214;
                            }
                          }
                          else {
                            iVar10 = 0x16;
                            FUN_1000d7c20(&local_128);
                            iVar7 = local_214;
                          }
                        }
                      }
                      else if (iVar9 == -1) {
                        FUN_1000d7c20(&local_128);
                        local_214 = -1;
                        iVar10 = 1;
                        iVar7 = local_214;
                      }
                      else {
                        iVar10 = 0;
                        iVar7 = local_214;
                        if (iVar9 == 0) {
                          QString::operator=(param_3,&local_128);
                          local_214 = 0;
                          iVar10 = 1;
                          iVar7 = local_214;
                        }
                      }
LAB_1000c9b95:
                      local_214 = iVar7;
                      QMutex::unlock();
                    }
                    if (*(int *)local_188 != -1) {
                      if (*(int *)local_188 != 0) {
                        LOCK();
                        *(int *)local_188 = *(int *)local_188 + -1;
                        local_31 = *(int *)local_188 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000c9bd7;
                      }
                      QArrayData::deallocate(local_188,2,8);
                    }
                  }
LAB_1000c9bd7:
                  if (*(int *)local_168 != -1) {
                    if (*(int *)local_168 != 0) {
                      LOCK();
                      *(int *)local_168 = *(int *)local_168 + -1;
                      local_31 = *(int *)local_168 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000c9c0d;
                    }
                    QArrayData::deallocate(local_168,2,8);
                  }
LAB_1000c9c0d:
                  FUN_100b57060(local_158);
                }
                if (*(int *)local_138.field0_0x0 != -1) {
                  if (*(int *)local_138.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
                    local_31 = *(int *)local_138.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000c9c4f;
                  }
                  QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
                }
LAB_1000c9c4f:
                if (*(int *)local_130 != -1) {
                  if (*(int *)local_130 != 0) {
                    LOCK();
                    *(int *)local_130 = *(int *)local_130 + -1;
                    local_31 = *(int *)local_130 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000c9c88;
                  }
                  QArrayData::deallocate(local_130,2,8);
                }
LAB_1000c9c88:
                if (*(int *)local_128.field0_0x0 != -1) {
                  if (*(int *)local_128.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
                    local_31 = *(int *)local_128.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000c9cbe;
                  }
                  QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
                }
LAB_1000c9cbe:
                if ((iVar10 != 0) && (iVar10 != 0x16)) goto LAB_1000c9cf6;
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 < (long)*(int *)(local_120 + 0xc) - (long)*(int *)(local_120 + 8));
            iVar10 = 0;
          }
          else {
            iVar10 = 0;
          }
LAB_1000c9cf6:
          pDVar6 = local_120;
          if (*(int *)local_120 != -1) {
            if (*(int *)local_120 != 0) {
              LOCK();
              *(int *)local_120 = *(int *)local_120 + -1;
              local_31 = *(int *)local_120 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000c9d80;
            }
            iVar9 = *(int *)(local_120 + 0xc);
            if (iVar9 != *(int *)(local_120 + 8)) {
              lVar12 = (long)*(int *)(local_120 + 8) * 8 + (long)iVar9 * -8;
              this = (QFileInfo *)(local_120 + (long)iVar9 * 8 + 8);
              do {
                QFileInfo::~QFileInfo(this);
                this = this + -8;
                lVar12 = lVar12 + 8;
              } while (lVar12 != 0);
            }
            QListData::dispose(pDVar6);
          }
        }
LAB_1000c9d80:
        QDir::~QDir(local_118);
        if ((iVar10 != 0) && (iVar10 != 0x13)) goto LAB_1000c9de0;
        local_108 = local_108 + 1;
        local_f8 = 1;
      } while (local_108 != local_100);
      iVar10 = 0xe;
    }
LAB_1000c9de0:
    FUN_100039a80(&local_110);
    if (iVar10 == 0xe) {
      local_214 = -1;
    }
    FUN_100039a80(&local_e8);
  }
  return local_214;
}

