
undefined8 *
FUN_1004ffa80(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  Data *pDVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  short *psVar9;
  QArrayData *pQVar10;
  uint uVar11;
  QFileInfo *pQVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  QArrayData *pQStack_1d0;
  QArrayData *pQStack_1c0;
  undefined8 local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QString local_198;
  QString local_190;
  QArrayData *local_188;
  QString aQStack_180 [2];
  QArrayData *local_170;
  Data *local_168;
  Data *local_160;
  Data *local_158;
  undefined4 local_150;
  QArrayData *local_148;
  Data *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QDirIterator local_128 [8];
  QString local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QDirIterator local_108 [8];
  QString local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QDirIterator local_e8 [8];
  QArrayData *local_e0;
  QArrayData *local_d8;
  QDirIterator local_d0 [8];
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString aQStack_a0 [2];
  Data *local_90;
  Data *local_88;
  Data *local_80;
  undefined4 local_78;
  QArrayData *local_70;
  QString local_68;
  Data *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  int *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  puVar1 = (undefined8 *)(param_2 + 0x10);
  iVar7 = QString::compare(param_3,puVar1,1);
  if (iVar7 != 0) {
    FUN_1004d9f80(&local_40,param_2,param_3,param_4,param_5);
    *param_1 = local_40;
    return param_1;
  }
  local_48 = (int *)PTR_shared_null_100ba2188;
  cVar6 = FUN_1004dd4c0(param_4);
  if (cVar6 != '\0') {
    QDirIterator::QDirIterator(local_d0,puVar1,0x6400,0);
    puVar3 = PTR_shared_null_100ba20d0;
    auVar13._8_4_ = (int)PTR_shared_null_100ba20d0;
    auVar13._0_8_ = PTR_shared_null_100ba20d0;
    auVar13._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
LAB_100500060:
    cVar6 = QDirIterator::hasNext();
    if (cVar6 != '\0') {
      QDirIterator::next();
      QDirIterator::fileName();
      if (*(int *)(local_e0 + 4) == 4) {
        if (1 < *(int *)local_e0 + 1U) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + 1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
        }
        lVar8 = (long)*(int *)(local_e0 + 4) * 2;
        bVar2 = true;
        if (lVar8 != 0) {
          pQVar10 = local_e0 + *(long *)(local_e0 + 0x10);
          do {
            if (9 < (ushort)(*(short *)pQVar10 - 0x30U)) {
              bVar2 = false;
              break;
            }
            pQVar10 = pQVar10 + 2;
            lVar8 = lVar8 + -2;
          } while (lVar8 != 0);
        }
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100500114;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_100500114:
        if (bVar2) {
          QDirIterator::QDirIterator(local_e8,&local_d8,0x6400,0);
LAB_100500150:
          do {
            cVar6 = QDirIterator::hasNext();
            if (cVar6 == '\0') goto LAB_100500a5e;
            QDirIterator::next();
            QDirIterator::fileName();
            if (*(int *)(local_f8 + 4) == 2) {
              if (1 < *(int *)local_f8 + 1U) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + 1;
                local_31 = *(int *)local_f8 != 0;
                UNLOCK();
              }
              lVar8 = (long)*(int *)(local_f8 + 4) * 2;
              bVar2 = true;
              if (lVar8 != 0) {
                pQVar10 = local_f8 + *(long *)(local_f8 + 0x10);
                do {
                  if (9 < (ushort)(*(short *)pQVar10 - 0x30U)) {
                    bVar2 = false;
                    break;
                  }
                  pQVar10 = pQVar10 + 2;
                  lVar8 = lVar8 + -2;
                } while (lVar8 != 0);
              }
              if (*(int *)local_f8 != -1) {
                if (*(int *)local_f8 != 0) {
                  LOCK();
                  *(int *)local_f8 = *(int *)local_f8 + -1;
                  local_31 = *(int *)local_f8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100500204;
                }
                QArrayData::deallocate(local_f8,2,8);
              }
LAB_100500204:
              if (bVar2) {
                local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e0;
                if (1 < *(int *)local_e0 + 1U) {
                  LOCK();
                  *(int *)local_e0 = *(int *)local_e0 + 1;
                  local_31 = *(int *)local_e0 != 0;
                  UNLOCK();
                }
                QString::append(&local_100);
                QDirIterator::QDirIterator(local_108,&local_f0,0x6400,0);
LAB_100500280:
                cVar6 = QDirIterator::hasNext();
                if (cVar6 != '\0') {
                  QDirIterator::next();
                  QDirIterator::fileName();
                  if (*(int *)(local_118 + 4) == 2) {
                    if (1 < *(int *)local_118 + 1U) {
                      LOCK();
                      *(int *)local_118 = *(int *)local_118 + 1;
                      local_31 = *(int *)local_118 != 0;
                      UNLOCK();
                    }
                    lVar8 = (long)*(int *)(local_118 + 4) * 2;
                    bVar2 = true;
                    if (lVar8 != 0) {
                      pQVar10 = local_118 + *(long *)(local_118 + 0x10);
                      do {
                        if (9 < (ushort)(*(short *)pQVar10 - 0x30U)) {
                          bVar2 = false;
                          break;
                        }
                        pQVar10 = pQVar10 + 2;
                        lVar8 = lVar8 + -2;
                      } while (lVar8 != 0);
                    }
                    if (*(int *)local_118 != -1) {
                      if (*(int *)local_118 != 0) {
                        LOCK();
                        *(int *)local_118 = *(int *)local_118 + -1;
                        local_31 = *(int *)local_118 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100500335;
                      }
                      QArrayData::deallocate(local_118,2,8);
                    }
LAB_100500335:
                    if (bVar2) {
                      local_120.field0_0x0 = local_100.field0_0x0;
                      if (1 < *(int *)local_100.field0_0x0 + 1U) {
                        LOCK();
                        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
                        local_31 = *(int *)local_100.field0_0x0 != 0;
                        UNLOCK();
                      }
                      QString::append(&local_120);
                      QDirIterator::QDirIterator(local_128,&local_110,0x6400,0);
LAB_10050039f:
                      do {
                        cVar6 = QDirIterator::hasNext();
                        if (cVar6 == '\0') goto LAB_1005008f8;
                        QDirIterator::next();
                        QDirIterator::fileName();
                        if ((*(int *)(local_138 + 4) == 0xf) &&
                           (cVar6 = QString::startsWith(&local_138,&local_120,1), cVar6 != '\0')) {
                          local_148 = (QArrayData *)QString::fromAscii_helper("*",1);
                          FUN_1004dc5b0(&local_140,&local_130,&local_148,param_5);
                          if (*(int *)local_148 != -1) {
                            if (*(int *)local_148 != 0) {
                              LOCK();
                              *(int *)local_148 = *(int *)local_148 + -1;
                              local_31 = *(int *)local_148 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_100500472;
                            }
                            QArrayData::deallocate(local_148,2,8);
                          }
LAB_100500472:
                          FUN_10005a020(&local_168,&local_140);
                          local_160 = local_168 + (long)*(int *)(local_168 + 8) * 8 + 0x10;
                          local_158 = local_168 + (long)*(int *)(local_168 + 0xc) * 8 + 0x10;
                          if (*(int *)(local_168 + 8) != *(int *)(local_168 + 0xc)) {
                            do {
                              local_150 = 1;
                              QFileInfo::fileName();
                              if (((2 < *(int *)(local_170 + 4)) ||
                                  (psVar9 = (short *)QString::utf16(), *psVar9 != 0x2e)) ||
                                 ((psVar9[1] != 0 && (psVar9[1] != 0x2e)))) {
                                pQStack_1d0 = auVar13._8_8_;
                                local_188 = (QArrayData *)puVar3;
                                aQStack_180[0].field0_0x0 =
                                     (QTypedArrayData<unsigned_short> *)pQStack_1d0;
                                local_198.field0_0x0 =
                                     (QTypedArrayData<unsigned_short> *)
                                     QString::fromAscii_helper("-",1);
                                QFileInfo::fileName();
                                QString::append(&local_198);
                                local_190.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_138;
                                if (1 < *(int *)local_138 + 1U) {
                                  LOCK();
                                  *(int *)local_138 = *(int *)local_138 + 1;
                                  local_31 = *(int *)local_138 != 0;
                                  UNLOCK();
                                }
                                QString::append(&local_190);
                                QString::operator=(aQStack_180,&local_190);
                                if (*(int *)local_190.field0_0x0 != -1) {
                                  if (*(int *)local_190.field0_0x0 != 0) {
                                    LOCK();
                                    *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1
                                    ;
                                    local_31 = *(int *)local_190.field0_0x0 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_1005005cf;
                                  }
                                  QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
                                }
LAB_1005005cf:
                                if (*(int *)local_1a0 != -1) {
                                  if (*(int *)local_1a0 != 0) {
                                    LOCK();
                                    *(int *)local_1a0 = *(int *)local_1a0 + -1;
                                    local_31 = *(int *)local_1a0 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_100500605;
                                  }
                                  QArrayData::deallocate(local_1a0,2,8);
                                }
LAB_100500605:
                                if (*(int *)local_198.field0_0x0 != -1) {
                                  if (*(int *)local_198.field0_0x0 != 0) {
                                    LOCK();
                                    *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1
                                    ;
                                    local_31 = *(int *)local_198.field0_0x0 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_10050063b;
                                  }
                                  QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
                                }
LAB_10050063b:
                                QFileInfo::absoluteFilePath();
                                pQVar10 = local_188;
                                local_188 = local_1a8;
                                local_1a8 = pQVar10;
                                if (*(int *)pQVar10 != -1) {
                                  if (*(int *)pQVar10 != 0) {
                                    LOCK();
                                    *(int *)pQVar10 = *(int *)pQVar10 + -1;
                                    local_31 = *(int *)pQVar10 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_100500695;
                                  }
                                  QArrayData::deallocate(pQVar10,2,8);
                                }
LAB_100500695:
                                FUN_1005021e0(&local_48,&local_188);
                                if (*(int *)aQStack_180[0].field0_0x0 != -1) {
                                  if (*(int *)aQStack_180[0].field0_0x0 != 0) {
                                    LOCK();
                                    *(int *)aQStack_180[0].field0_0x0 =
                                         *(int *)aQStack_180[0].field0_0x0 + -1;
                                    local_31 = *(int *)aQStack_180[0].field0_0x0 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_1005006db;
                                  }
                                  QArrayData::deallocate
                                            ((QArrayData *)aQStack_180[0].field0_0x0,2,8);
                                }
LAB_1005006db:
                                if (*(int *)local_188 != -1) {
                                  if (*(int *)local_188 != 0) {
                                    LOCK();
                                    *(int *)local_188 = *(int *)local_188 + -1;
                                    local_31 = *(int *)local_188 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_100500711;
                                  }
                                  QArrayData::deallocate(local_188,2,8);
                                }
                              }
LAB_100500711:
                              if (*(int *)local_170 != -1) {
                                if (*(int *)local_170 != 0) {
                                  LOCK();
                                  *(int *)local_170 = *(int *)local_170 + -1;
                                  local_31 = *(int *)local_170 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_100500747;
                                }
                                QArrayData::deallocate(local_170,2,8);
                              }
LAB_100500747:
                              local_160 = local_160 + 8;
                            } while (local_160 != local_158);
                          }
                          pDVar5 = local_168;
                          local_150 = 1;
                          if (*(int *)local_168 != -1) {
                            if (*(int *)local_168 != 0) {
                              LOCK();
                              *(int *)local_168 = *(int *)local_168 + -1;
                              local_31 = *(int *)local_168 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1005007f8;
                            }
                            iVar7 = *(int *)(local_168 + 0xc);
                            if (iVar7 != *(int *)(local_168 + 8)) {
                              lVar8 = (long)*(int *)(local_168 + 8) * 8 + (long)iVar7 * -8;
                              pQVar12 = (QFileInfo *)(local_168 + (long)iVar7 * 8 + 8);
                              do {
                                QFileInfo::~QFileInfo(pQVar12);
                                pQVar12 = pQVar12 + -8;
                                lVar8 = lVar8 + 8;
                              } while (lVar8 != 0);
                            }
                            QListData::dispose(pDVar5);
                          }
LAB_1005007f8:
                          pDVar5 = local_140;
                          if (*(int *)local_140 != -1) {
                            if (*(int *)local_140 != 0) {
                              LOCK();
                              *(int *)local_140 = *(int *)local_140 + -1;
                              local_31 = *(int *)local_140 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_100500880;
                            }
                            iVar7 = *(int *)(local_140 + 0xc);
                            if (iVar7 != *(int *)(local_140 + 8)) {
                              lVar8 = (long)*(int *)(local_140 + 8) * 8 + (long)iVar7 * -8;
                              pQVar12 = (QFileInfo *)(local_140 + (long)iVar7 * 8 + 8);
                              do {
                                QFileInfo::~QFileInfo(pQVar12);
                                pQVar12 = pQVar12 + -8;
                                lVar8 = lVar8 + 8;
                              } while (lVar8 != 0);
                            }
                            QListData::dispose(pDVar5);
                          }
                        }
LAB_100500880:
                        if (*(int *)local_138 != -1) {
                          if (*(int *)local_138 != 0) {
                            LOCK();
                            *(int *)local_138 = *(int *)local_138 + -1;
                            local_31 = *(int *)local_138 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1005008b6;
                          }
                          QArrayData::deallocate(local_138,2,8);
                        }
LAB_1005008b6:
                        if (*(int *)local_130 != -1) {
                          if (*(int *)local_130 != 0) {
                            LOCK();
                            *(int *)local_130 = *(int *)local_130 + -1;
                            local_31 = *(int *)local_130 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_10050039f;
                          }
                          QArrayData::deallocate(local_130,2,8);
                        }
                      } while( true );
                    }
                  }
                  goto LAB_100500940;
                }
                QDirIterator::~QDirIterator(local_108);
                if (*(int *)local_100.field0_0x0 != -1) {
                  if (*(int *)local_100.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
                    local_31 = *(int *)local_100.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1005009f0;
                  }
                  QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
                }
              }
            }
LAB_1005009f0:
            if (*(int *)local_f8 != -1) {
              if (*(int *)local_f8 != 0) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + -1;
                local_31 = *(int *)local_f8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100500a26;
              }
              QArrayData::deallocate(local_f8,2,8);
            }
LAB_100500a26:
            if (*(int *)local_f0 != -1) {
              if (*(int *)local_f0 != 0) {
                LOCK();
                *(int *)local_f0 = *(int *)local_f0 + -1;
                local_31 = *(int *)local_f0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100500150;
              }
              QArrayData::deallocate(local_f0,2,8);
            }
          } while( true );
        }
      }
      goto LAB_100500a70;
    }
    QDirIterator::~QDirIterator(local_d0);
    goto LAB_100500afa;
  }
  local_50 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_58 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar6 = FUN_100501480(param_4,&local_50,&local_58);
  if (cVar6 != '\0') {
    local_70 = (QArrayData *)*puVar1;
    if (1 < *(uint *)local_70 + 1) {
      LOCK();
      *(uint *)local_70 = *(uint *)local_70 + 1;
      local_31 = *(uint *)local_70 != 0;
      UNLOCK();
    }
    uVar11 = *(uint *)(local_70 + 4);
    if ((1 < *(uint *)local_70) || ((*(uint *)(local_70 + 8) & 0x7fffffff) < uVar11 + 2)) {
      QString::reallocData((uint)&local_70,SUB41(uVar11 + 2,0));
      uVar11 = *(uint *)(local_70 + 4);
    }
    *(uint *)(local_70 + 4) = uVar11 + 1;
    *(undefined2 *)(local_70 + (long)(int)uVar11 * 2 + *(long *)(local_70 + 0x10)) = 0x2f;
    *(undefined2 *)(local_70 + (long)(int)*(uint *)(local_70 + 4) * 2 + *(long *)(local_70 + 0x10))
         = 0;
    if (1 < *(uint *)local_70 + 1) {
      LOCK();
      *(uint *)local_70 = *(uint *)local_70 + 1;
      local_31 = *(uint *)local_70 != 0;
      UNLOCK();
    }
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
    QString::append(&local_68);
    FUN_1004dc7d0(&local_60,&local_68,&local_58,param_5);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004ffc6b;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1004ffc6b:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004ffc9b;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1004ffc9b:
    FUN_10005a020(&local_90,&local_60);
    puVar3 = PTR_shared_null_100ba20d0;
    local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
    local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
    if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
      auVar14._8_4_ = (int)PTR_shared_null_100ba20d0;
      auVar14._0_8_ = PTR_shared_null_100ba20d0;
      auVar14._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
      do {
        local_78 = 1;
        pQStack_1c0 = auVar14._8_8_;
        local_a8 = (QArrayData *)puVar3;
        aQStack_a0[0].field0_0x0 = (QTypedArrayData<unsigned_short> *)pQStack_1c0;
        QString::left((int)&local_b8);
        QFileInfo::fileName();
        local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_b8;
        if (1 < *(int *)local_b8 + 1U) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + 1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
        }
        QString::append(&local_b0);
        QString::operator=(aQStack_a0,&local_b0);
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_31 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004ffdaa;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
LAB_1004ffdaa:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004ffde0;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_1004ffde0:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004ffe16;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_1004ffe16:
        QFileInfo::absoluteFilePath();
        pQVar10 = local_a8;
        local_a8 = local_c8;
        local_c8 = pQVar10;
        if (*(int *)pQVar10 != -1) {
          if (*(int *)pQVar10 != 0) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_31 = *(int *)pQVar10 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004ffe70;
          }
          QArrayData::deallocate(pQVar10,2,8);
        }
LAB_1004ffe70:
        FUN_1005021e0(&local_48,&local_a8);
        if (*(int *)aQStack_a0[0].field0_0x0 != -1) {
          if (*(int *)aQStack_a0[0].field0_0x0 != 0) {
            LOCK();
            *(int *)aQStack_a0[0].field0_0x0 = *(int *)aQStack_a0[0].field0_0x0 + -1;
            local_31 = *(int *)aQStack_a0[0].field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004ffeb6;
          }
          QArrayData::deallocate((QArrayData *)aQStack_a0[0].field0_0x0,2,8);
        }
LAB_1004ffeb6:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004ffeec;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_1004ffeec:
        local_88 = local_88 + 8;
      } while (local_88 != local_80);
    }
    local_78 = 1;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004fff7a;
      }
      iVar7 = *(int *)(local_90 + 0xc);
      if (iVar7 != *(int *)(local_90 + 8)) {
        lVar8 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar7 * -8;
        pQVar12 = (QFileInfo *)(local_90 + (long)iVar7 * 8 + 8);
        do {
          QFileInfo::~QFileInfo(pQVar12);
          pQVar12 = pQVar12 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(local_90);
    }
LAB_1004fff7a:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004fffda;
      }
      iVar7 = *(int *)(local_60 + 0xc);
      if (iVar7 != *(int *)(local_60 + 8)) {
        lVar8 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar7 * -8;
        pQVar12 = (QFileInfo *)(local_60 + (long)iVar7 * 8 + 8);
        do {
          QFileInfo::~QFileInfo(pQVar12);
          pQVar12 = pQVar12 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(local_60);
    }
  }
LAB_1004fffda:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10050000a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10050000a:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100500afa;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100500afa:
  FUN_1004dd650(&local_1b0,&local_48);
  uVar4 = local_1b0;
  local_1b0 = 0;
  *param_1 = uVar4;
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (*local_48 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    FUN_1005026c0(&local_48,local_48);
  }
  return param_1;
LAB_100500a5e:
  QDirIterator::~QDirIterator(local_e8);
LAB_100500a70:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100500aa6;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100500aa6:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100500060;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
  goto LAB_100500060;
LAB_1005008f8:
  QDirIterator::~QDirIterator(local_128);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_31 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100500940;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_100500940:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100500976;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100500976:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100500280;
    }
    QArrayData::deallocate(local_110,2,8);
  }
  goto LAB_100500280;
}

