
QString * FUN_100dc58b0(QString *param_1,char param_2)

{
  int *piVar1;
  undefined *puVar2;
  QMapNodeBase *pQVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  QString *pQVar8;
  QArrayData **ppQVar9;
  QArrayData *pQVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  int iVar17;
  bool bVar18;
  int local_2bc;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QString local_298;
  int *local_290;
  int *local_288;
  int *local_280;
  uint local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  int *local_258;
  int *local_250;
  int *local_248;
  uint local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  QArrayData *local_218;
  int *local_210;
  int *local_208;
  QArrayData *local_200;
  int *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  int *local_1e0;
  AnonymousUnion0 local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QString local_1c0;
  QString local_1b8;
  QString local_1b0;
  QString local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QString local_140;
  QString local_138;
  QArrayData *local_130;
  QString local_128;
  QString local_120;
  QUrl local_118 [8];
  QArrayData *local_110;
  QString local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QString local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  int *local_b0;
  int *local_a8;
  int *local_a0;
  uint local_98;
  QArrayData *local_90;
  int *local_88;
  undefined *local_80;
  QMapNodeBase *local_78;
  QMapNodeBase *local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  int *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_1b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  local_1c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  QString::fromUtf8_helper((char *)&local_1b0,0x1f01bfa);
  QString::operator=(&local_1c0,&local_1b0);
  if (*(int *)local_1b0.field0_0x0 != -1) {
    if (*(int *)local_1b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
      local_31 = *(int *)local_1b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100dc5947;
    }
    QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
  }
LAB_100dc5947:
  local_1d0 = (QArrayData *)QString::fromAscii_helper("\n=========== %1 ============ \n",0x1e);
  QString::arg(&local_1c8,&local_1d0,&local_1c0,0,0x20);
  QString::append(param_1);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100dc59ca;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_100dc59ca:
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_31 = *(int *)local_1d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100dc5a00;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_100dc5a00:
  cVar4 = FUN_100dc0bd0(&local_1c0,&local_1b8,0,0,0);
  if ((cVar4 == '\0') &&
     (local_1b8.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288)) {
    local_1a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
    QString::operator=(&local_1b8,&local_1a8);
    if (*(int *)local_1a8.field0_0x0 != -1) {
      if (*(int *)local_1a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
        local_31 = *(int *)local_1a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc5a7e;
      }
      QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
    }
  }
LAB_100dc5a7e:
  if (param_2 == '\0') {
    QString::append(param_1);
    puVar2 = PTR_shared_null_1021e15e8;
    local_1e0 = (int *)PTR_shared_null_1021e15e8;
    QString::fromUtf8_helper((char *)&local_50,0x1f01c32);
    QString::operator=(&local_1c0,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc5c10;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100dc5c10:
    local_1f0 = (QArrayData *)QString::fromAscii_helper("\n=========== %1 ============ \n",0x1e);
    QString::arg(&local_1e8,&local_1f0,&local_1c0,0,0x20);
    QString::append(param_1);
    if (*(int *)local_1e8 != -1) {
      if (*(int *)local_1e8 != 0) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + -1;
        local_31 = *(int *)local_1e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc5c93;
      }
      QArrayData::deallocate(local_1e8,2,8);
    }
LAB_100dc5c93:
    if (*(int *)local_1f0 != -1) {
      if (*(int *)local_1f0 != 0) {
        LOCK();
        *(int *)local_1f0 = *(int *)local_1f0 + -1;
        local_31 = *(int *)local_1f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc5cc9;
      }
      QArrayData::deallocate(local_1f0,2,8);
    }
LAB_100dc5cc9:
    cVar4 = FUN_100dc0bd0(&local_1c0,&local_1b8,0,0,0);
    if (cVar4 != '\0') {
      QString::append(param_1);
      local_200 = (QArrayData *)QString::fromAscii_helper("\n",1);
      QString::split(&local_1f8,&local_1b8,&local_200,0,1);
      if (local_1f8 != (int *)PTR_shared_null_1021e15e8) {
        local_48 = local_1f8;
        piVar12 = (int *)puVar2;
        if (*local_1f8 != -1) {
          if (*local_1f8 == 0) {
            QListData::detach((int)&local_48);
            iVar6 = local_48[2];
            if (iVar6 != local_48[3]) {
              local_1f8 = local_1f8 + (long)local_1f8[2] * 2 + 4;
              piVar13 = local_48 + (long)iVar6 * 2 + 4;
              lVar7 = (long)local_48[3] * 8 + (long)iVar6 * -8;
              do {
                piVar12 = *(int **)local_1f8;
                *(int **)piVar13 = piVar12;
                if (1 < *piVar12 + 1U) {
                  LOCK();
                  *piVar12 = *piVar12 + 1;
                  local_31 = *piVar12 != 0;
                  UNLOCK();
                }
                piVar13 = piVar13 + 2;
                local_1f8 = local_1f8 + 2;
                lVar7 = lVar7 + -8;
                piVar12 = local_1e0;
              } while (lVar7 != 0);
            }
          }
          else {
            LOCK();
            *local_1f8 = *local_1f8 + 1;
            local_31 = *local_1f8 != 0;
            UNLOCK();
          }
        }
        local_1e0 = local_48;
        local_48 = piVar12;
        FUN_100039a80(&local_48);
      }
      FUN_100039a80(&local_1f8);
      if (*(int *)local_200 != -1) {
        if (*(int *)local_200 != 0) {
          LOCK();
          *(int *)local_200 = *(int *)local_200 + -1;
          local_31 = *(int *)local_200 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100dc6f09;
        }
        QArrayData::deallocate(local_200,2,8);
      }
    }
LAB_100dc6f09:
    local_210 = (int *)puVar2;
    local_218 = (QArrayData *)
                QString::fromAscii_helper("/usr/sbin/networksetup -getinfo \"%1\" ",0x25);
    FUN_1000341d0(&local_210,&local_218);
    local_220 = (QArrayData *)
                QString::fromAscii_helper("/usr/sbin/networksetup -getwebproxy \"%1\" ",0x29);
    FUN_1000341d0(&local_210,&local_220);
    local_228 = (QArrayData *)
                QString::fromAscii_helper("/usr/sbin/networksetup -getsecurewebproxy \"%1\" ",0x2f);
    FUN_1000341d0(&local_210,&local_228);
    local_230 = (QArrayData *)
                QString::fromAscii_helper
                          ("/usr/sbin/networksetup -getproxyautodiscovery \"%1\" ",0x33);
    FUN_1000341d0(&local_210,&local_230);
    pQVar10 = (QArrayData *)
              QString::fromAscii_helper("/usr/sbin/networksetup -getautoproxyurl \"%1\" ",0x2d);
    local_238 = pQVar10;
    FUN_1000341d0(&local_210,&local_238);
    local_208 = local_210;
    if (*local_210 != -1) {
      if (*local_210 == 0) {
        QListData::detach((int)&local_208);
        iVar6 = local_208[2];
        if (iVar6 != local_208[3]) {
          piVar12 = local_210 + (long)local_210[2] * 2 + 4;
          piVar13 = local_208 + (long)iVar6 * 2 + 4;
          lVar7 = (long)local_208[3] * 8 + (long)iVar6 * -8;
          do {
            piVar1 = *(int **)piVar12;
            *(int **)piVar13 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            piVar13 = piVar13 + 2;
            piVar12 = piVar12 + 2;
            lVar7 = lVar7 + -8;
            pQVar10 = local_238;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *local_210 = *local_210 + 1;
        local_31 = *local_210 != 0;
        UNLOCK();
      }
    }
    if (*(int *)pQVar10 != -1) {
      if (*(int *)pQVar10 != 0) {
        LOCK();
        *(int *)pQVar10 = *(int *)pQVar10 + -1;
        local_31 = *(int *)pQVar10 != 0;
        UNLOCK();
        pQVar10 = local_238;
        if ((bool)local_31) goto LAB_100dc70b8;
      }
      QArrayData::deallocate(pQVar10,2,8);
    }
LAB_100dc70b8:
    if (*(int *)local_230 != -1) {
      if (*(int *)local_230 != 0) {
        LOCK();
        *(int *)local_230 = *(int *)local_230 + -1;
        local_31 = *(int *)local_230 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc70e7;
      }
      QArrayData::deallocate(local_230,2,8);
    }
LAB_100dc70e7:
    if (*(int *)local_228 != -1) {
      if (*(int *)local_228 != 0) {
        LOCK();
        *(int *)local_228 = *(int *)local_228 + -1;
        local_31 = *(int *)local_228 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc7116;
      }
      QArrayData::deallocate(local_228,2,8);
    }
LAB_100dc7116:
    if (*(int *)local_220 != -1) {
      if (*(int *)local_220 != 0) {
        LOCK();
        *(int *)local_220 = *(int *)local_220 + -1;
        local_31 = *(int *)local_220 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc7145;
      }
      QArrayData::deallocate(local_220,2,8);
    }
LAB_100dc7145:
    if (*(int *)local_218 != -1) {
      if (*(int *)local_218 != 0) {
        LOCK();
        *(int *)local_218 = *(int *)local_218 + -1;
        local_31 = *(int *)local_218 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc7174;
      }
      QArrayData::deallocate(local_218,2,8);
    }
LAB_100dc7174:
    FUN_100039a80(&local_210);
    piVar12 = local_1e0;
    local_258 = local_1e0;
    if (*local_1e0 != -1) {
      if (*local_1e0 == 0) {
        QListData::detach((int)&local_258);
        iVar6 = local_258[2];
        if (iVar6 != local_258[3]) {
          piVar12 = piVar12 + (long)piVar12[2] * 2 + 4;
          piVar13 = local_258 + (long)iVar6 * 2 + 4;
          lVar7 = (long)local_258[3] * 8 + (long)iVar6 * -8;
          do {
            piVar1 = *(int **)piVar12;
            *(int **)piVar13 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            piVar13 = piVar13 + 2;
            piVar12 = piVar12 + 2;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *local_1e0 = *local_1e0 + 1;
        local_31 = *local_1e0 != 0;
        UNLOCK();
      }
    }
    local_250 = local_258 + (long)local_258[2] * 2 + 4;
    local_248 = local_258 + (long)local_258[3] * 2 + 4;
    local_240 = 1;
    if (local_258[2] != local_258[3]) {
      do {
        local_260 = *(QArrayData **)local_250;
        if (1 < *(int *)local_260 + 1U) {
          LOCK();
          *(int *)local_260 = *(int *)local_260 + 1;
          local_31 = *(int *)local_260 != 0;
          UNLOCK();
        }
        if (local_240 != 0) {
          if ((*(int *)(local_260 + 4) != 0) &&
             (iVar6 = QString::compare_helper
                                (local_260 + *(long *)(local_260 + 0x10),*(int *)(local_260 + 4),
                                 "An asterisk (*) denotes that a network service is disabled.",
                                 0xffffffff,1), iVar6 != 0)) {
            local_270 = (QArrayData *)
                        QString::fromAscii_helper("\n\n=========== SERVICE: %1 ============",0x26);
            QString::arg(&local_268,&local_270,&local_260,0,0x20);
            QString::append(param_1);
            if (*(int *)local_268 != -1) {
              if (*(int *)local_268 != 0) {
                LOCK();
                *(int *)local_268 = *(int *)local_268 + -1;
                local_31 = *(int *)local_268 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100dc7351;
              }
              QArrayData::deallocate(local_268,2,8);
            }
LAB_100dc7351:
            if (*(int *)local_270 != -1) {
              if (*(int *)local_270 != 0) {
                LOCK();
                *(int *)local_270 = *(int *)local_270 + -1;
                local_31 = *(int *)local_270 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100dc7387;
              }
              QArrayData::deallocate(local_270,2,8);
            }
LAB_100dc7387:
            local_290 = local_208;
            if (*local_208 != -1) {
              if (*local_208 == 0) {
                QListData::detach((int)&local_290);
                iVar6 = local_290[2];
                if (iVar6 != local_290[3]) {
                  piVar12 = local_208 + (long)local_208[2] * 2 + 4;
                  piVar13 = local_290 + (long)iVar6 * 2 + 4;
                  lVar7 = (long)local_290[3] * 8 + (long)iVar6 * -8;
                  do {
                    piVar1 = *(int **)piVar12;
                    *(int **)piVar13 = piVar1;
                    if (1 < *piVar1 + 1U) {
                      LOCK();
                      *piVar1 = *piVar1 + 1;
                      local_31 = *piVar1 != 0;
                      UNLOCK();
                    }
                    piVar13 = piVar13 + 2;
                    piVar12 = piVar12 + 2;
                    lVar7 = lVar7 + -8;
                  } while (lVar7 != 0);
                }
              }
              else {
                LOCK();
                *local_208 = *local_208 + 1;
                local_31 = *local_208 != 0;
                UNLOCK();
              }
            }
            local_288 = local_290 + (long)local_290[2] * 2 + 4;
            local_280 = local_290 + (long)local_290[3] * 2 + 4;
            local_278 = 1;
            if (local_290[2] != local_290[3]) {
              do {
                pQVar10 = *(QArrayData **)local_288;
                if (1 < *(int *)pQVar10 + 1U) {
                  LOCK();
                  *(int *)pQVar10 = *(int *)pQVar10 + 1;
                  local_31 = *(int *)pQVar10 != 0;
                  UNLOCK();
                }
                if (local_278 != 0) {
                  if (1 < *(int *)pQVar10 + 1U) {
                    LOCK();
                    *(int *)pQVar10 = *(int *)pQVar10 + 1;
                    local_31 = *(int *)pQVar10 != 0;
                    UNLOCK();
                  }
                  local_2a0 = pQVar10;
                  QString::arg(&local_298,&local_2a0,&local_260,0,0x20);
                  QString::operator=(&local_1c0,&local_298);
                  if (*(int *)local_298.field0_0x0 != -1) {
                    if (*(int *)local_298.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_298.field0_0x0 = *(int *)local_298.field0_0x0 + -1;
                      local_31 = *(int *)local_298.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100dc74fd;
                    }
                    QArrayData::deallocate((QArrayData *)local_298.field0_0x0,2,8);
                  }
LAB_100dc74fd:
                  if (*(int *)local_2a0 != -1) {
                    if (*(int *)local_2a0 != 0) {
                      LOCK();
                      *(int *)local_2a0 = *(int *)local_2a0 + -1;
                      local_31 = *(int *)local_2a0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100dc7533;
                    }
                    QArrayData::deallocate(local_2a0,2,8);
                  }
LAB_100dc7533:
                  local_2b0 = (QArrayData *)QString::fromAscii_helper("\n=== %1 ===\n",0xc);
                  QString::arg(&local_2a8,&local_2b0,&local_1c0,0,0x20);
                  QString::append(param_1);
                  if (*(int *)local_2a8 != -1) {
                    if (*(int *)local_2a8 != 0) {
                      LOCK();
                      *(int *)local_2a8 = *(int *)local_2a8 + -1;
                      local_31 = *(int *)local_2a8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100dc75aa;
                    }
                    QArrayData::deallocate(local_2a8,2,8);
                  }
LAB_100dc75aa:
                  if (*(int *)local_2b0 != -1) {
                    if (*(int *)local_2b0 != 0) {
                      LOCK();
                      *(int *)local_2b0 = *(int *)local_2b0 + -1;
                      local_31 = *(int *)local_2b0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100dc75e0;
                    }
                    QArrayData::deallocate(local_2b0,2,8);
                  }
LAB_100dc75e0:
                  cVar4 = FUN_100dc0bd0(&local_1c0,&local_1b8,0,0,0);
                  if (cVar4 != '\0') {
                    QString::append(param_1);
                  }
                  local_278 = 0;
                }
                if (*(int *)pQVar10 != -1) {
                  if (*(int *)pQVar10 != 0) {
                    LOCK();
                    *(int *)pQVar10 = *(int *)pQVar10 + -1;
                    local_31 = *(int *)pQVar10 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc7644;
                  }
                  QArrayData::deallocate(pQVar10,2,8);
                }
LAB_100dc7644:
                local_288 = local_288 + 2;
                uVar11 = local_278 ^ 1;
                bVar18 = local_278 != 1;
                local_278 = uVar11;
              } while ((bVar18) && (local_288 != local_280));
            }
            FUN_100039a80(&local_290);
          }
          local_240 = 0;
        }
        if (*(int *)local_260 != -1) {
          if (*(int *)local_260 != 0) {
            LOCK();
            *(int *)local_260 = *(int *)local_260 + -1;
            local_31 = *(int *)local_260 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100dc76c5;
          }
          QArrayData::deallocate(local_260,2,8);
        }
LAB_100dc76c5:
        local_250 = local_250 + 2;
        uVar11 = local_240 ^ 1;
        bVar18 = local_240 != 1;
        local_240 = uVar11;
      } while ((bVar18) && (local_250 != local_248));
    }
    FUN_100039a80(&local_258);
    QString::fromUtf8_helper((char *)&local_40,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc775b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100dc775b:
    FUN_100039a80(&local_208);
    FUN_100039a80(&local_1e0);
  }
  else {
    local_70 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    local_78 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    local_80 = PTR_shared_null_1021e15e8;
    local_90 = (QArrayData *)QString::fromAscii_helper("\n",1);
    QString::split(&local_88,&local_1b8,&local_90,0,1);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc5b0e;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100dc5b0e:
    local_b0 = local_88;
    if (*local_88 != -1) {
      if (*local_88 == 0) {
        QListData::detach((int)&local_b0);
        iVar6 = local_b0[2];
        if (iVar6 != local_b0[3]) {
          local_88 = local_88 + (long)local_88[2] * 2 + 4;
          piVar12 = local_b0 + (long)iVar6 * 2 + 4;
          lVar7 = (long)local_b0[3] * 8 + (long)iVar6 * -8;
          do {
            piVar13 = *(int **)local_88;
            *(int **)piVar12 = piVar13;
            if (1 < *piVar13 + 1U) {
              LOCK();
              *piVar13 = *piVar13 + 1;
              local_31 = *piVar13 != 0;
              UNLOCK();
            }
            piVar12 = piVar12 + 2;
            local_88 = local_88 + 2;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *local_88 = *local_88 + 1;
        local_31 = *local_88 != 0;
        UNLOCK();
      }
    }
    local_a8 = local_b0 + (long)local_b0[2] * 2 + 4;
    local_a0 = local_b0 + (long)local_b0[3] * 2 + 4;
    local_98 = 1;
    if (local_b0[2] != local_b0[3]) {
      iVar6 = 0;
      iVar17 = 0;
      do {
        local_b8 = *(QArrayData **)local_a8;
        if (1 < *(int *)local_b8 + 1U) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + 1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
        }
        if (local_98 != 0) {
          QString::QString(&local_68,0x3a);
          QString::section(&local_c8,&local_b8,&local_68,0,0,0);
          if (*(int *)local_68.field0_0x0 != -1) {
            if (*(int *)local_68.field0_0x0 != 0) {
              LOCK();
              *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
              local_31 = *(int *)local_68.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dc5edc;
            }
            QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
          }
LAB_100dc5edc:
          QString::trimmed();
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dc5f21;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
LAB_100dc5f21:
          QString::QString(&local_60,0x3a);
          QString::section(&local_d8,&local_b8,&local_60,1,0xffffffff,0);
          if (*(int *)local_60.field0_0x0 != -1) {
            if (*(int *)local_60.field0_0x0 != 0) {
              LOCK();
              *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
              local_31 = *(int *)local_60.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dc5f7e;
            }
            QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
          }
LAB_100dc5f7e:
          QString::trimmed();
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_31 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dc5fc3;
            }
            QArrayData::deallocate(local_d8,2,8);
          }
LAB_100dc5fc3:
          local_e0 = (QArrayData *)QString::fromAscii_helper(":",1);
          iVar5 = QString::indexOf(&local_b8,&local_e0,0,1);
          if (*(int *)local_e0 != -1) {
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_31 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dc6029;
            }
            QArrayData::deallocate(local_e0,2,8);
          }
LAB_100dc6029:
          local_2bc = -1;
          if (iVar5 != -1) {
            local_2bc = QString::indexOf(&local_b8,&local_d0,iVar5,1);
          }
          local_e8 = (QArrayData *)QString::fromAscii_helper("Proxy",5);
          cVar4 = QString::endsWith(&local_c0,&local_e8,1);
          if (*(int *)local_e8 != -1) {
            if (*(int *)local_e8 != 0) {
              LOCK();
              *(int *)local_e8 = *(int *)local_e8 + -1;
              local_31 = *(int *)local_e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dc60b8;
            }
            QArrayData::deallocate(local_e8,2,8);
          }
LAB_100dc60b8:
          iVar5 = (int)&local_b8;
          if (cVar4 == '\0') {
            local_100 = (QArrayData *)QString::fromAscii_helper("User",4);
            cVar4 = QString::endsWith(&local_c0,&local_100,1);
            if (*(int *)local_100 != -1) {
              if (*(int *)local_100 != 0) {
                LOCK();
                *(int *)local_100 = *(int *)local_100 + -1;
                local_31 = *(int *)local_100 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100dc6188;
              }
              QArrayData::deallocate(local_100,2,8);
            }
LAB_100dc6188:
            if (cVar4 == '\0') {
              iVar5 = QString::compare_helper
                                (local_c0 + *(long *)(local_c0 + 0x10),*(undefined4 *)(local_c0 + 4)
                                 ,"ProxyAutoConfigURLString",0xffffffff);
              if ((iVar5 == 0) &&
                 (iVar5 = QString::compare_helper
                                    ((QArrayData *)
                                     (local_d0.field0_0x0 + *(long *)(local_d0.field0_0x0 + 0x10)),
                                     *(undefined4 *)(local_d0.field0_0x0 + 4),"http://wpad/wpad.dat"
                                     ,0xffffffff), iVar5 != 0)) {
                QUrl::QUrl(local_118,&local_d0,0);
                QUrl::userName(&local_120,local_118,0x7f00000);
                if (*(int *)(local_120.field0_0x0 + 4) == 0) {
                  QString::fromUtf8_helper((char *)&local_58,0x1f02280);
                  QString::operator=(&local_120,&local_58);
                  if (*(int *)local_58.field0_0x0 != -1) {
                    if (*(int *)local_58.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
                      local_31 = *(int *)local_58.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100dc6682;
                    }
                    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
                  }
                }
                else {
                  pQVar10 = (QArrayData *)QString::fromAscii_helper("SOME-USER",9);
                  local_130 = pQVar10;
                  lVar7 = *(long *)(local_78 + 0x10);
                  lVar16 = 0;
                  if (*(long *)(local_78 + 0x10) == 0) {
LAB_100dc6587:
                    lVar14 = 0;
                  }
                  else {
                    do {
                      while (lVar14 = lVar7,
                            cVar4 = operator<((QString *)(lVar14 + 0x18),&local_120), cVar4 == '\0')
                      {
                        lVar7 = *(long *)(lVar14 + 8);
                        lVar16 = lVar14;
                        if (*(long *)(lVar14 + 8) == 0) goto LAB_100dc6577;
                      }
                      lVar7 = *(long *)(lVar14 + 0x10);
                    } while (*(long *)(lVar14 + 0x10) != 0);
                    lVar14 = lVar16;
                    if (lVar16 == 0) goto LAB_100dc6587;
LAB_100dc6577:
                    cVar4 = operator<(&local_120,(QString *)(lVar14 + 0x18));
                    if (cVar4 != '\0') goto LAB_100dc6587;
                  }
                  ppQVar9 = (QArrayData **)(lVar14 + 0x20);
                  if (lVar14 == 0) {
                    ppQVar9 = &local_130;
                  }
                  local_128.field0_0x0 = (QTypedArrayData<unsigned_short> *)*ppQVar9;
                  if (1 < *(int *)local_128.field0_0x0 + 1U) {
                    LOCK();
                    *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + 1;
                    local_31 = *(int *)local_128.field0_0x0 != 0;
                    UNLOCK();
                  }
                  QString::operator=(&local_120,&local_128);
                  if (*(int *)local_128.field0_0x0 != -1) {
                    if (*(int *)local_128.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
                      local_31 = *(int *)local_128.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100dc6602;
                    }
                    QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
                  }
LAB_100dc6602:
                  if (*(int *)pQVar10 != -1) {
                    if (*(int *)pQVar10 != 0) {
                      LOCK();
                      *(int *)pQVar10 = *(int *)pQVar10 + -1;
                      local_31 = *(int *)pQVar10 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100dc6682;
                    }
                    QArrayData::deallocate(pQVar10,2,8);
                  }
                }
LAB_100dc6682:
                QUrl::host(&local_138,local_118,0x7f00000);
                iVar5 = QString::compare_helper
                                  ((QArrayData *)
                                   (local_138.field0_0x0 + *(long *)(local_138.field0_0x0 + 0x10)),
                                   *(undefined4 *)(local_138.field0_0x0 + 4),"localhost",0xffffffff,
                                   1);
                if (iVar5 != 0) {
                  pQVar10 = (QArrayData *)QString::fromAscii_helper("SOME-HOST",9);
                  local_148 = pQVar10;
                  lVar7 = *(long *)(local_70 + 0x10);
                  lVar16 = 0;
                  if (*(long *)(local_70 + 0x10) == 0) {
LAB_100dc6749:
                    lVar14 = 0;
                  }
                  else {
                    do {
                      while (lVar14 = lVar7,
                            cVar4 = operator<((QString *)(lVar14 + 0x18),&local_138), cVar4 == '\0')
                      {
                        lVar7 = *(long *)(lVar14 + 8);
                        lVar16 = lVar14;
                        if (*(long *)(lVar14 + 8) == 0) goto LAB_100dc6735;
                      }
                      lVar7 = *(long *)(lVar14 + 0x10);
                    } while (*(long *)(lVar14 + 0x10) != 0);
                    lVar14 = lVar16;
                    if (lVar16 == 0) goto LAB_100dc6749;
LAB_100dc6735:
                    cVar4 = operator<(&local_138,(QString *)(lVar14 + 0x18));
                    if (cVar4 != '\0') goto LAB_100dc6749;
                  }
                  ppQVar9 = (QArrayData **)(lVar14 + 0x20);
                  if (lVar14 == 0) {
                    ppQVar9 = &local_148;
                  }
                  local_140.field0_0x0 = (QTypedArrayData<unsigned_short> *)*ppQVar9;
                  if (1 < *(int *)local_140.field0_0x0 + 1U) {
                    LOCK();
                    *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + 1;
                    local_31 = *(int *)local_140.field0_0x0 != 0;
                    UNLOCK();
                  }
                  QString::operator=(&local_138,&local_140);
                  if (*(int *)local_140.field0_0x0 != -1) {
                    if (*(int *)local_140.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
                      local_31 = *(int *)local_140.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100dc67c8;
                    }
                    QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
                  }
LAB_100dc67c8:
                  if (*(int *)pQVar10 != -1) {
                    if (*(int *)pQVar10 != 0) {
                      LOCK();
                      *(int *)pQVar10 = *(int *)pQVar10 + -1;
                      local_31 = *(int *)pQVar10 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100dc67f5;
                    }
                    QArrayData::deallocate(pQVar10,2,8);
                  }
                }
LAB_100dc67f5:
                local_180 = (QArrayData *)QString::fromAscii_helper("%1://%2:%3@%4:%5%6",0x12);
                QUrl::scheme();
                QString::arg(&local_178,&local_180,&local_188,0,0x20);
                QString::arg(&local_170,&local_178,&local_120,0,0x20);
                QUrl::password(&local_198,local_118,0x7f00000);
                bVar18 = *(int *)(local_198 + 4) != 0;
                pcVar15 = "SOME-PASSWORD";
                if (!bVar18) {
                  pcVar15 = "NO-PASSWORD";
                }
                local_190 = (QArrayData *)
                            QString::fromAscii_helper(pcVar15,bVar18 + 0xb + (uint)bVar18);
                QString::arg(&local_168,&local_170,&local_190,0,0x20);
                QString::arg(&local_160,&local_168,&local_138,0,0x20);
                iVar5 = QUrl::port((int)local_118);
                QString::arg(&local_158,&local_160,(long)iVar5,0,10);
                QUrl::path(&local_1a0,local_118,0x7f00000);
                QString::arg(&local_150,&local_158,&local_1a0,0);
                if (*(int *)local_1a0 != -1) {
                  if (*(int *)local_1a0 != 0) {
                    LOCK();
                    *(int *)local_1a0 = *(int *)local_1a0 + -1;
                    local_31 = *(int *)local_1a0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc6996;
                  }
                  QArrayData::deallocate(local_1a0,2,8);
                }
LAB_100dc6996:
                if (*(int *)local_158 != -1) {
                  if (*(int *)local_158 != 0) {
                    LOCK();
                    *(int *)local_158 = *(int *)local_158 + -1;
                    local_31 = *(int *)local_158 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc69cc;
                  }
                  QArrayData::deallocate(local_158,2,8);
                }
LAB_100dc69cc:
                if (*(int *)local_160 != -1) {
                  if (*(int *)local_160 != 0) {
                    LOCK();
                    *(int *)local_160 = *(int *)local_160 + -1;
                    local_31 = *(int *)local_160 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc6a02;
                  }
                  QArrayData::deallocate(local_160,2,8);
                }
LAB_100dc6a02:
                if (*(int *)local_168 != -1) {
                  if (*(int *)local_168 != 0) {
                    LOCK();
                    *(int *)local_168 = *(int *)local_168 + -1;
                    local_31 = *(int *)local_168 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc6a38;
                  }
                  QArrayData::deallocate(local_168,2,8);
                }
LAB_100dc6a38:
                if (*(int *)local_190 != -1) {
                  if (*(int *)local_190 != 0) {
                    LOCK();
                    *(int *)local_190 = *(int *)local_190 + -1;
                    local_31 = *(int *)local_190 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc6a6e;
                  }
                  QArrayData::deallocate(local_190,2,8);
                }
LAB_100dc6a6e:
                if (*(int *)local_198 != -1) {
                  if (*(int *)local_198 != 0) {
                    LOCK();
                    *(int *)local_198 = *(int *)local_198 + -1;
                    local_31 = *(int *)local_198 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc6aa4;
                  }
                  QArrayData::deallocate(local_198,2,8);
                }
LAB_100dc6aa4:
                if (*(int *)local_170 != -1) {
                  if (*(int *)local_170 != 0) {
                    LOCK();
                    *(int *)local_170 = *(int *)local_170 + -1;
                    local_31 = *(int *)local_170 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc6ada;
                  }
                  QArrayData::deallocate(local_170,2,8);
                }
LAB_100dc6ada:
                if (*(int *)local_178 != -1) {
                  if (*(int *)local_178 != 0) {
                    LOCK();
                    *(int *)local_178 = *(int *)local_178 + -1;
                    local_31 = *(int *)local_178 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc6b10;
                  }
                  QArrayData::deallocate(local_178,2,8);
                }
LAB_100dc6b10:
                if (*(int *)local_188 != -1) {
                  if (*(int *)local_188 != 0) {
                    LOCK();
                    *(int *)local_188 = *(int *)local_188 + -1;
                    local_31 = *(int *)local_188 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc6b46;
                  }
                  QArrayData::deallocate(local_188,2,8);
                }
LAB_100dc6b46:
                if (*(int *)local_180 != -1) {
                  if (*(int *)local_180 != 0) {
                    LOCK();
                    *(int *)local_180 = *(int *)local_180 + -1;
                    local_31 = *(int *)local_180 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc6b7c;
                  }
                  QArrayData::deallocate(local_180,2,8);
                }
LAB_100dc6b7c:
                QString::replace((int)&local_b8,local_2bc,
                                 (QString *)(ulong)*(uint *)(local_d0.field0_0x0 + 4));
                if (*(int *)local_150 != -1) {
                  if (*(int *)local_150 != 0) {
                    LOCK();
                    *(int *)local_150 = *(int *)local_150 + -1;
                    local_31 = *(int *)local_150 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc6bd1;
                  }
                  QArrayData::deallocate(local_150,2,8);
                }
LAB_100dc6bd1:
                if (*(int *)local_138.field0_0x0 != -1) {
                  if (*(int *)local_138.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
                    local_31 = *(int *)local_138.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc6c07;
                  }
                  QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
                }
LAB_100dc6c07:
                if (*(int *)local_120.field0_0x0 != -1) {
                  if (*(int *)local_120.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
                    local_31 = *(int *)local_120.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc6c3d;
                  }
                  QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
                }
LAB_100dc6c3d:
                QUrl::~QUrl(local_118);
              }
            }
            else {
              lVar7 = *(long *)(local_78 + 0x10);
              lVar16 = 0;
              if (*(long *)(local_78 + 0x10) == 0) {
LAB_100dc641e:
                pQVar8 = (QString *)FUN_1006f3180(&local_78,&local_d0);
                local_110 = (QArrayData *)QString::fromAscii_helper("USERNAME-%1",0xb);
                QString::arg(&local_108,&local_110,(long)iVar17,0);
                QString::operator=(pQVar8,&local_108);
                if (*(int *)local_108.field0_0x0 != -1) {
                  if (*(int *)local_108.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
                    local_31 = *(int *)local_108.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc64b7;
                  }
                  QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
                }
LAB_100dc64b7:
                iVar17 = iVar17 + 1;
                if (*(int *)local_110 != -1) {
                  if (*(int *)local_110 != 0) {
                    LOCK();
                    *(int *)local_110 = *(int *)local_110 + -1;
                    local_31 = *(int *)local_110 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100dc6541;
                  }
                  QArrayData::deallocate(local_110,2,8);
                }
              }
              else {
                do {
                  while (lVar14 = lVar7, cVar4 = operator<((QString *)(lVar14 + 0x18),&local_d0),
                        cVar4 == '\0') {
                    lVar7 = *(long *)(lVar14 + 8);
                    lVar16 = lVar14;
                    if (*(long *)(lVar14 + 8) == 0) goto LAB_100dc6407;
                  }
                  lVar7 = *(long *)(lVar14 + 0x10);
                } while (*(long *)(lVar14 + 0x10) != 0);
                lVar14 = lVar16;
                if (lVar16 == 0) goto LAB_100dc641e;
LAB_100dc6407:
                cVar4 = operator<(&local_d0,(QString *)(lVar14 + 0x18));
                if (cVar4 != '\0') goto LAB_100dc641e;
              }
LAB_100dc6541:
              uVar11 = *(uint *)(local_d0.field0_0x0 + 4);
              FUN_1006f3180(&local_78,&local_d0);
              QString::replace(iVar5,local_2bc,(QString *)(ulong)uVar11);
            }
          }
          else {
            lVar7 = *(long *)(local_70 + 0x10);
            lVar16 = 0;
            if (*(long *)(local_70 + 0x10) == 0) {
LAB_100dc6200:
              pQVar8 = (QString *)FUN_1006f3180(&local_70,&local_d0);
              local_f8 = (QArrayData *)QString::fromAscii_helper("HOSTNAME-%1",0xb);
              QString::arg(&local_f0,&local_f8,(long)iVar6,0);
              QString::operator=(pQVar8,&local_f0);
              if (*(int *)local_f0.field0_0x0 != -1) {
                if (*(int *)local_f0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
                  local_31 = *(int *)local_f0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100dc6299;
                }
                QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
              }
LAB_100dc6299:
              iVar6 = iVar6 + 1;
              if (*(int *)local_f8 != -1) {
                if (*(int *)local_f8 != 0) {
                  LOCK();
                  *(int *)local_f8 = *(int *)local_f8 + -1;
                  local_31 = *(int *)local_f8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100dc6510;
                }
                QArrayData::deallocate(local_f8,2,8);
              }
            }
            else {
              do {
                while (lVar14 = lVar7, cVar4 = operator<((QString *)(lVar14 + 0x18),&local_d0),
                      cVar4 == '\0') {
                  lVar7 = *(long *)(lVar14 + 8);
                  lVar16 = lVar14;
                  if (*(long *)(lVar14 + 8) == 0) goto LAB_100dc61e9;
                }
                lVar7 = *(long *)(lVar14 + 0x10);
              } while (*(long *)(lVar14 + 0x10) != 0);
              lVar14 = lVar16;
              if (lVar16 == 0) goto LAB_100dc6200;
LAB_100dc61e9:
              cVar4 = operator<(&local_d0,(QString *)(lVar14 + 0x18));
              if (cVar4 != '\0') goto LAB_100dc6200;
            }
LAB_100dc6510:
            uVar11 = *(uint *)(local_d0.field0_0x0 + 4);
            FUN_1006f3180(&local_70,&local_d0);
            QString::replace(iVar5,local_2bc,(QString *)(ulong)uVar11);
          }
          FUN_1000341d0(&local_80,&local_b8);
          if (*(int *)local_d0.field0_0x0 != -1) {
            if (*(int *)local_d0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
              local_31 = *(int *)local_d0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dc6ca4;
            }
            QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
          }
LAB_100dc6ca4:
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dc6cda;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_100dc6cda:
          local_98 = 0;
        }
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100dc6d1a;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_100dc6d1a:
        local_a8 = local_a8 + 2;
        uVar11 = local_98 ^ 1;
        bVar18 = local_98 != 1;
        local_98 = uVar11;
      } while ((bVar18) && (local_a8 != local_a0));
    }
    FUN_100039a80(&local_b0);
    pQVar10 = (QArrayData *)QString::fromAscii_helper("\n",1);
    QtPrivate::QStringList_join
              ((QStringList *)&local_1d8.field0,(QChar *)&local_80,
               (int)*(undefined8 *)(pQVar10 + 0x10) + (int)pQVar10);
    if (*(int *)pQVar10 != -1) {
      if (*(int *)pQVar10 != 0) {
        LOCK();
        *(int *)pQVar10 = *(int *)pQVar10 + -1;
        local_31 = *(int *)pQVar10 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc6db4;
      }
      QArrayData::deallocate(pQVar10,2,8);
    }
LAB_100dc6db4:
    FUN_100039a80(&local_88);
    FUN_100039a80(&local_80);
    pQVar3 = local_78;
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc6e0a;
      }
      if (*(long *)(local_78 + 0x10) != 0) {
        FUN_10012a490();
        QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar3);
    }
LAB_100dc6e0a:
    pQVar3 = local_70;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc6e4e;
      }
      if (*(long *)(local_70 + 0x10) != 0) {
        FUN_10012a490();
        QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar3);
    }
LAB_100dc6e4e:
    QString::append(param_1);
    if (*(int *)local_1d8.field1 != -1) {
      if (*(int *)local_1d8.field1 != 0) {
        LOCK();
        *(int *)local_1d8.field1 = *(int *)local_1d8.field1 + -1;
        local_31 = *(int *)local_1d8.field1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc7773;
      }
      QArrayData::deallocate((QArrayData *)local_1d8.field1,2,8);
    }
  }
LAB_100dc7773:
  if (*(int *)local_1c0.field0_0x0 != -1) {
    if (*(int *)local_1c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
      local_31 = *(int *)local_1c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100dc77a9;
    }
    QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
  }
LAB_100dc77a9:
  if (*(int *)local_1b8.field0_0x0 != -1) {
    if (*(int *)local_1b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_1b8.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
  }
  return param_1;
}

