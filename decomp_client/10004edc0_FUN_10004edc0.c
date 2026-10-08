
void FUN_10004edc0(undefined8 param_1,QString *param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  QArrayData *pQVar12;
  uint uVar13;
  QFileInfo *pQVar14;
  QFileInfo local_210 [8];
  QDir local_208 [8];
  QString local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  undefined *local_1e8;
  QArrayData *local_1e0;
  int local_1d4;
  QArrayData *local_1d0;
  QDir local_1c8 [8];
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  char local_189;
  QArrayData *local_188;
  QString local_180;
  QString local_178;
  QFileInfo local_170 [8];
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  Data *local_f8;
  Data *local_f0;
  Data *local_e8;
  Data *local_e0;
  int local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  undefined *local_c0;
  char *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QFileInfo local_a0 [8];
  QStringList local_98;
  undefined1 local_89;
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  QDir::QDir(local_1c8,param_2);
  cVar2 = QDir::exists();
  if (param_4 == '\x01' && cVar2 == '\0') {
    uVar8 = FUN_100152280();
    lVar9 = FUN_1001548f0(uVar8,param_1);
    if (lVar9 == 0) {
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",0,"No vm with vmUuid=\"%s\"",
                    local_138 + *(long *)(local_138 + 0x10));
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_89 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_89) goto LAB_10004ff03;
        }
        QArrayData::deallocate(local_138,1,8);
      }
    }
    else {
      uVar8 = FUN_100152280();
      FUN_1001884b0(&local_140,lVar9);
      lVar10 = FUN_100152a20(uVar8,&local_140);
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_89 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_89) goto LAB_10004ee94;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_10004ee94:
      if (lVar10 == 0) {
        FUN_1001884b0(&local_150,lVar9);
        QString::toUtf8();
        pQVar12 = local_148;
        lVar9 = *(long *)(local_148 + 0x10);
        QString::toUtf8();
        FUN_100df99c0("SGASMGMT","prl_client_app",0,"No server with uuid=\"%s\" for vmUuid=\"%s\"",
                      pQVar12 + lVar9,local_158 + *(long *)(local_158 + 0x10));
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            local_89 = *(int *)local_158 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_10004f2bc;
          }
          QArrayData::deallocate(local_158,1,8);
        }
LAB_10004f2bc:
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_89 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_10004f2f8;
          }
          QArrayData::deallocate(local_148,1,8);
        }
LAB_10004f2f8:
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_89 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_10004ff03;
          }
          QArrayData::deallocate(local_150,2,8);
        }
      }
      else {
        uVar8 = FUN_100152280();
        cVar2 = FUN_100155010(uVar8,lVar10,0);
        if (cVar2 == '\0') {
          if (2 < DAT_10230ffd0) {
            QString::toUtf8();
            FUN_100df99c0("SGASMGMT","prl_client_app",3,"Non local Vm with vmUuid=\"%s\"",
                          local_160 + *(long *)(local_160 + 0x10));
            if (*(int *)local_160 != -1) {
              if (*(int *)local_160 != 0) {
                LOCK();
                *(int *)local_160 = *(int *)local_160 + -1;
                local_89 = *(int *)local_160 != 0;
                UNLOCK();
                if ((bool)local_89) goto LAB_10004ff03;
              }
              QArrayData::deallocate(local_160,1,8);
            }
          }
          goto LAB_10004ff03;
        }
        FUN_10018d860(&local_178,lVar9);
        QFileInfo::QFileInfo(local_170,&local_178);
        QFileInfo::path();
        QFileInfo::~QFileInfo(local_170);
        if (*(int *)local_178.field0_0x0 != -1) {
          if (*(int *)local_178.field0_0x0 != 0) {
            LOCK();
            *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
            local_89 = *(int *)local_178.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_10004ef34;
          }
          QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
        }
LAB_10004ef34:
        uVar4 = QDir::separator();
        local_188 = local_168;
        if (1 < *(uint *)local_168 + 1) {
          LOCK();
          *(uint *)local_168 = *(uint *)local_168 + 1;
          local_89 = *(uint *)local_168 != 0;
          UNLOCK();
        }
        uVar13 = *(uint *)(local_168 + 4);
        if ((1 < *(uint *)local_168) || ((*(uint *)(local_168 + 8) & 0x7fffffff) < uVar13 + 2)) {
          QString::reallocData((uint)&local_188,SUB41(uVar13 + 2,0));
          uVar13 = *(uint *)(local_188 + 4);
        }
        *(uint *)(local_188 + 4) = uVar13 + 1;
        *(undefined2 *)(local_188 + (long)(int)uVar13 * 2 + *(long *)(local_188 + 0x10)) = uVar4;
        *(undefined2 *)
         (local_188 + (long)(int)*(uint *)(local_188 + 4) * 2 + *(long *)(local_188 + 0x10)) = 0;
        if (1 < *(uint *)local_188 + 1) {
          LOCK();
          *(uint *)local_188 = *(uint *)local_188 + 1;
          local_89 = *(uint *)local_188 != 0;
          UNLOCK();
        }
        local_180.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_188;
        QString::fromUtf8_helper((char *)&local_130,0x1db7424);
        QString::append(&local_180);
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_89 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_10004f03e;
          }
          QArrayData::deallocate(local_130,2,8);
        }
LAB_10004f03e:
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_89 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_10004f07a;
          }
          QArrayData::deallocate(local_188,2,8);
        }
LAB_10004f07a:
        QString::toUtf8();
        iVar6 = _FSPathMakeRefWithOptions
                          (local_198 + *(long *)(local_198 + 0x10),1,local_88,&local_189);
        if (*(int *)local_198 != -1) {
          if (*(int *)local_198 != 0) {
            LOCK();
            *(int *)local_198 = *(int *)local_198 + -1;
            local_89 = *(int *)local_198 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_10004f0eb;
          }
          QArrayData::deallocate(local_198,1,8);
        }
LAB_10004f0eb:
        if ((iVar6 == -0x2b) || (iVar6 == -0x23)) {
          if (2 < DAT_10230ffd0) {
            QString::toUtf8();
            FUN_100df99c0("SGASMGMT","prl_client_app",3,
                          "Compatibility folder \"%s\" does not exists",
                          local_1b8 + *(long *)(local_1b8 + 0x10));
            if (*(int *)local_1b8 != -1) {
              if (*(int *)local_1b8 != 0) {
                LOCK();
                *(int *)local_1b8 = *(int *)local_1b8 + -1;
                local_89 = *(int *)local_1b8 != 0;
                UNLOCK();
                if ((bool)local_89) goto LAB_10004fe8b;
              }
              QArrayData::deallocate(local_1b8,1,8);
            }
          }
        }
        else if (iVar6 == 0) {
          if (local_189 == '\0') {
            sVar5 = _FSDeleteObject(local_88);
            if (sVar5 != 0) {
              QString::toUtf8();
              FUN_100df99c0("SGASMGMT","prl_client_app",0,
                            "FSDeleteObject() err %i, compatPath=\"%s\"",(int)sVar5,
                            local_1b0 + *(long *)(local_1b0 + 0x10));
              if (*(int *)local_1b0 != -1) {
                if (*(int *)local_1b0 != 0) {
                  LOCK();
                  *(int *)local_1b0 = *(int *)local_1b0 + -1;
                  local_89 = *(int *)local_1b0 != 0;
                  UNLOCK();
                  if ((bool)local_89) goto LAB_10004fe8b;
                }
                QArrayData::deallocate(local_1b0,1,8);
              }
            }
          }
          else {
            QDir::QDir((QDir *)&local_98,&local_180);
            QFileInfo::QFileInfo(local_a0,&local_180);
            local_a8 = (QArrayData *)PTR_shared_null_1021e1288;
            QDir::QDir((QDir *)&local_b0,param_2);
            QDir::setFilter(&local_98,0x6101);
            pQVar12 = (QArrayData *)QString::fromAscii_helper("*.app",5);
            local_c0 = PTR_shared_null_1021e15e8;
            local_c8 = pQVar12;
            FUN_1000341d0(&local_c0,&local_c8);
            QDir::setNameFilters(&local_98);
            FUN_100039a80(&local_c0);
            if (*(int *)pQVar12 != -1) {
              if (*(int *)pQVar12 != 0) {
                LOCK();
                *(int *)pQVar12 = *(int *)pQVar12 + -1;
                local_89 = *(int *)pQVar12 != 0;
                UNLOCK();
                if ((bool)local_89) goto LAB_10004f4ca;
              }
              QArrayData::deallocate(pQVar12,2,8);
            }
LAB_10004f4ca:
            QString::toUtf8();
            QByteArray::operator=((QByteArray *)&local_a8,(QByteArray *)&local_d0);
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_89 = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_89) goto LAB_10004f528;
              }
              QArrayData::deallocate(local_d0,1,8);
            }
LAB_10004f528:
            bVar3 = QDir::exists();
            QDir::entryInfoList(&local_f8,&local_98,0xffffffff,0xffffffff);
            FUN_100055060(&local_f0,&local_f8);
            local_e8 = local_f0 + (long)*(int *)(local_f0 + 8) * 8 + 0x10;
            local_e0 = local_f0 + (long)*(int *)(local_f0 + 0xc) * 8 + 0x10;
            local_d8 = 1;
            if (*(int *)local_f8 == 0) {
LAB_10004f5af:
              iVar6 = *(int *)(local_f8 + 0xc);
              if (iVar6 != *(int *)(local_f8 + 8)) {
                lVar9 = (long)*(int *)(local_f8 + 8) * 8 + (long)iVar6 * -8;
                pQVar14 = (QFileInfo *)(local_f8 + (long)iVar6 * 8 + 8);
                do {
                  QFileInfo::~QFileInfo(pQVar14);
                  pQVar14 = pQVar14 + -8;
                  lVar9 = lVar9 + 8;
                } while (lVar9 != 0);
              }
              QListData::dispose(local_f8);
LAB_10004f738:
              iVar6 = 2;
              if (local_d8 != 0) goto LAB_10004f759;
            }
            else {
              if (*(int *)local_f8 != -1) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + -1;
                local_89 = *(int *)local_f8 != 0;
                UNLOCK();
                if (!(bool)local_89) goto LAB_10004f5af;
                goto LAB_10004f738;
              }
LAB_10004f759:
              iVar6 = 2;
              if (local_e8 != local_e0) {
                do {
                  cVar2 = QFileInfo::operator==(local_a0,(QFileInfo *)local_e8);
                  if (cVar2 == '\0') {
                    if ((bVar3 & 1) == 0) {
                      cVar2 = QDir::mkpath(&local_b0);
                      bVar3 = 1;
                      if (cVar2 == '\0') {
                        iVar6 = 1;
                        if (DAT_10230ffd0 < 1) break;
                        QString::toUtf8();
                        iVar6 = 1;
                        FUN_100df99c0("SGASMGMT","prl_client_app",1,
                                      "Failed to create helpers folder, toPath=\"%s\"",
                                      local_100 + *(long *)(local_100 + 0x10));
                        if (*(int *)local_100 == -1) break;
                        if (*(int *)local_100 != 0) {
                          LOCK();
                          *(int *)local_100 = *(int *)local_100 + -1;
                          local_89 = *(int *)local_100 != 0;
                          UNLOCK();
                          if ((bool)local_89) {
                            iVar6 = 1;
                            break;
                          }
                        }
                        QArrayData::deallocate(local_100,1,8);
                        iVar6 = 1;
                        break;
                      }
                    }
                    QFileInfo::filePath();
                    QString::toUtf8();
                    iVar7 = _FSPathMoveObjectSync
                                      (local_108 + *(long *)(local_108 + 0x10),
                                       local_a8 + *(long *)(local_a8 + 0x10),0,&local_b8,0);
                    if (*(int *)local_108 != -1) {
                      if (*(int *)local_108 != 0) {
                        LOCK();
                        *(int *)local_108 = *(int *)local_108 + -1;
                        local_89 = *(int *)local_108 != 0;
                        UNLOCK();
                        if ((bool)local_89) goto LAB_10004f82d;
                      }
                      QArrayData::deallocate(local_108,1,8);
                    }
LAB_10004f82d:
                    if (*(int *)local_110 != -1) {
                      if (*(int *)local_110 != 0) {
                        LOCK();
                        *(int *)local_110 = *(int *)local_110 + -1;
                        local_89 = *(int *)local_110 != 0;
                        UNLOCK();
                        if ((bool)local_89) goto LAB_10004f869;
                      }
                      QArrayData::deallocate(local_110,2,8);
                    }
LAB_10004f869:
                    if (iVar7 == 0) {
                      iVar7 = _utimes(local_b8,(timeval *)0x0);
                      if ((iVar7 != 0) && (piVar11 = ___error(), 0 < DAT_10230ffd0)) {
                        FUN_100df99c0("SGASMGMT","prl_client_app",1,
                                      "utimes() err %i, toEntryUtf8=\"%s\"",*piVar11,local_b8);
                      }
                      _free(local_b8);
                    }
                    else if (0 < DAT_10230ffd0) {
                      QFileInfo::filePath();
                      QString::toUtf8();
                      FUN_100df99c0("SGASMGMT","prl_client_app",1,
                                    "FSPathMoveObjectSync() err %i, \"%s\" -> \"%s\"",iVar7,
                                    local_118 + *(long *)(local_118 + 0x10),
                                    local_a8 + *(long *)(local_a8 + 0x10));
                      if (*(int *)local_118 != -1) {
                        if (*(int *)local_118 != 0) {
                          LOCK();
                          *(int *)local_118 = *(int *)local_118 + -1;
                          local_89 = *(int *)local_118 != 0;
                          UNLOCK();
                          if ((bool)local_89) goto LAB_10004f91d;
                        }
                        QArrayData::deallocate(local_118,1,8);
                      }
LAB_10004f91d:
                      if (*(int *)local_120 != -1) {
                        if (*(int *)local_120 != 0) {
                          LOCK();
                          *(int *)local_120 = *(int *)local_120 + -1;
                          local_89 = *(int *)local_120 != 0;
                          UNLOCK();
                          if ((bool)local_89) goto LAB_10004f9b9;
                        }
                        QArrayData::deallocate(local_120,2,8);
                      }
                    }
                  }
LAB_10004f9b9:
                  local_e8 = local_e8 + 8;
                  local_d8 = 1;
                } while (local_e8 != local_e0);
              }
            }
            if (*(int *)local_f0 != -1) {
              if (*(int *)local_f0 != 0) {
                LOCK();
                *(int *)local_f0 = *(int *)local_f0 + -1;
                local_89 = *(int *)local_f0 != 0;
                UNLOCK();
                if ((bool)local_89) goto LAB_10004fc96;
              }
              iVar7 = *(int *)(local_f0 + 0xc);
              if (iVar7 != *(int *)(local_f0 + 8)) {
                lVar9 = (long)*(int *)(local_f0 + 8) * 8 + (long)iVar7 * -8;
                pQVar14 = (QFileInfo *)(local_f0 + (long)iVar7 * 8 + 8);
                do {
                  QFileInfo::~QFileInfo(pQVar14);
                  pQVar14 = pQVar14 + -8;
                  lVar9 = lVar9 + 8;
                } while (lVar9 != 0);
              }
              QListData::dispose(local_f0);
            }
LAB_10004fc96:
            if (iVar6 == 2) {
              cVar2 = FUN_100d9bbb0(&local_180);
              bVar1 = true;
              if (cVar2 == '\0') {
                QString::toUtf8();
                FUN_100df99c0("SGASMGMT","prl_client_app",0,
                              "Failed to remove helpers folder, fromPath=\"%s\"",
                              local_128 + *(long *)(local_128 + 0x10));
                if (*(int *)local_128 != -1) {
                  if (*(int *)local_128 != 0) {
                    LOCK();
                    *(int *)local_128 = *(int *)local_128 + -1;
                    local_89 = *(int *)local_128 != 0;
                    UNLOCK();
                    if ((bool)local_89) goto LAB_10004fd2a;
                  }
                  QArrayData::deallocate(local_128,1,8);
                }
                goto LAB_10004fd2a;
              }
            }
            else {
LAB_10004fd2a:
              bVar1 = false;
            }
            QDir::~QDir((QDir *)&local_b0);
            if (*(int *)local_a8 != -1) {
              if (*(int *)local_a8 != 0) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + -1;
                local_89 = *(int *)local_a8 != 0;
                UNLOCK();
                if ((bool)local_89) goto LAB_10004fd74;
              }
              QArrayData::deallocate(local_a8,1,8);
            }
LAB_10004fd74:
            QFileInfo::~QFileInfo(local_a0);
            QDir::~QDir((QDir *)&local_98);
            if (bVar1) {
              FUN_100052730(&local_180,param_2);
            }
            else if (0 < DAT_10230ffd0) {
              QString::toUtf8();
              pQVar12 = local_1a0;
              lVar9 = *(long *)(local_1a0 + 0x10);
              QString::toUtf8();
              FUN_100df99c0("SGASMGMT","prl_client_app",1,
                            "Failed to move helpers folder from compatPath=\"%s\" to helpersFolder=\"%s\""
                            ,pQVar12 + lVar9,local_1a8 + *(long *)(local_1a8 + 0x10));
              if (*(int *)local_1a8 != -1) {
                if (*(int *)local_1a8 != 0) {
                  LOCK();
                  *(int *)local_1a8 = *(int *)local_1a8 + -1;
                  local_89 = *(int *)local_1a8 != 0;
                  UNLOCK();
                  if ((bool)local_89) goto LAB_10004fe4f;
                }
                QArrayData::deallocate(local_1a8,1,8);
              }
LAB_10004fe4f:
              if (*(int *)local_1a0 != -1) {
                if (*(int *)local_1a0 != 0) {
                  LOCK();
                  *(int *)local_1a0 = *(int *)local_1a0 + -1;
                  local_89 = *(int *)local_1a0 != 0;
                  UNLOCK();
                  if ((bool)local_89) goto LAB_10004fe8b;
                }
                QArrayData::deallocate(local_1a0,1,8);
              }
            }
          }
        }
        else {
          QString::toUtf8();
          FUN_100df99c0("SGASMGMT","prl_client_app",0,
                        "FSPathMakeRefWithOptions() err %i, compatPath=\"%s\"",iVar6,
                        local_1c0 + *(long *)(local_1c0 + 0x10));
          if (*(int *)local_1c0 != -1) {
            if (*(int *)local_1c0 != 0) {
              LOCK();
              *(int *)local_1c0 = *(int *)local_1c0 + -1;
              local_89 = *(int *)local_1c0 != 0;
              UNLOCK();
              if ((bool)local_89) goto LAB_10004fe8b;
            }
            QArrayData::deallocate(local_1c0,1,8);
          }
        }
LAB_10004fe8b:
        if (*(int *)local_180.field0_0x0 != -1) {
          if (*(int *)local_180.field0_0x0 != 0) {
            LOCK();
            *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
            local_89 = *(int *)local_180.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_10004fec7;
          }
          QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
        }
LAB_10004fec7:
        if (*(int *)local_168 != -1) {
          if (*(int *)local_168 != 0) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + -1;
            local_89 = *(int *)local_168 != 0;
            UNLOCK();
            if ((bool)local_89) goto LAB_10004ff03;
          }
          QArrayData::deallocate(local_168,2,8);
        }
      }
    }
LAB_10004ff03:
    cVar2 = QDir::exists();
  }
  if (cVar2 == '\0') goto LAB_10005029e;
  QMutex::lock();
  lVar9 = DAT_1023108a8;
  if (DAT_1023108a8 != 0) {
    DAT_1023108b0 = DAT_1023108b0 + 1;
  }
  QMutex::unlock();
  local_1d0 = (QArrayData *)QString::fromAscii_helper("en",2);
  FUN_10004db40(param_2,param_3,&local_1d0);
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_89 = *(int *)local_1d0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_10004ffab;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_10004ffab:
  local_1d4 = 8;
  uVar8 = FUN_100152280();
  lVar10 = FUN_1001548f0(uVar8,param_1);
  if (lVar10 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGASMGMT","prl_client_app",0,"Failed to get Vm for vmUuid=\"%s\"",
                  local_1e0 + *(long *)(local_1e0 + 0x10));
    if (*(int *)local_1e0 != -1) {
      if (*(int *)local_1e0 != 0) {
        LOCK();
        *(int *)local_1e0 = *(int *)local_1e0 + -1;
        local_89 = *(int *)local_1e0 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_10005004e;
      }
      QArrayData::deallocate(local_1e0,1,8);
    }
  }
  else {
    local_1d4 = FUN_10018f860(lVar10);
  }
LAB_10005004e:
  if (lVar9 != 0) {
    FUN_1000af8c0(lVar9,param_2,local_1d4);
  }
  local_1e8 = PTR_shared_null_1021e15e8;
  if (local_1d4 == 9) {
    pQVar12 = (QArrayData *)QString::fromAscii_helper("Parallels Linux applications folder",0x23);
    local_1f0 = pQVar12;
    FUN_1000341d0(&local_1e8,&local_1f0);
    if (*(int *)pQVar12 != -1) {
      if (*(int *)pQVar12 != 0) {
        LOCK();
        *(int *)pQVar12 = *(int *)pQVar12 + -1;
        local_89 = *(int *)pQVar12 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_10005013f;
      }
      QArrayData::deallocate(pQVar12,2,8);
    }
  }
  else {
    pQVar12 = (QArrayData *)QString::fromAscii_helper("Parallels Windows applications folder",0x25);
    local_1f8 = pQVar12;
    FUN_1000341d0(&local_1e8,&local_1f8);
    if (*(int *)pQVar12 != -1) {
      if (*(int *)pQVar12 != 0) {
        LOCK();
        *(int *)pQVar12 = *(int *)pQVar12 + -1;
        local_89 = *(int *)pQVar12 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_10005013f;
      }
      QArrayData::deallocate(pQVar12,2,8);
    }
  }
LAB_10005013f:
  FUN_100df2ca0(param_2,&local_1e8);
  if ((DAT_102311db8 == '\0') && (iVar6 = ___cxa_guard_acquire(&DAT_102311db8), iVar6 != 0)) {
    DAT_102311db0 = PTR_shared_null_1021e1288;
    ___cxa_atexit(FUN_100054e40,&DAT_102311db0,0x100000000);
    ___cxa_guard_release(&DAT_102311db8);
  }
  if (*(int *)(DAT_102311db0 + 4) == 0) {
    QFileInfo::QFileInfo(local_210,param_2);
    QFileInfo::dir();
    QDir::path();
    QString::operator=((QString *)&DAT_102311db0,&local_200);
    if (*(int *)local_200.field0_0x0 != -1) {
      if (*(int *)local_200.field0_0x0 != 0) {
        LOCK();
        *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
        local_89 = *(int *)local_200.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_10005023b;
      }
      QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
    }
LAB_10005023b:
    QDir::~QDir(local_208);
    QFileInfo::~QFileInfo(local_210);
    if (lVar9 != 0) {
      FUN_1000af8c0(lVar9,&DAT_102311db0,0xff);
      goto LAB_10005026c;
    }
  }
  else if (lVar9 != 0) {
LAB_10005026c:
    FUN_1000afdf0(lVar9,param_1,param_3,&local_1d4);
  }
  FUN_100039a80(&local_1e8);
  if (lVar9 != 0) {
    FUN_100055290(&DAT_102310898);
  }
LAB_10005029e:
  QDir::~QDir(local_1c8);
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

