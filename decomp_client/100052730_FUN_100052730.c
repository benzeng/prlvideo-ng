
void FUN_100052730(undefined8 param_1,QString *param_2)

{
  QString *pQVar1;
  int *piVar2;
  long lVar3;
  bool bVar4;
  QArrayData *pQVar5;
  Data *pDVar6;
  char cVar7;
  undefined2 uVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  int *piVar14;
  ulong uVar15;
  uint uVar16;
  int *piVar17;
  bool bVar18;
  bool bVar19;
  QFileInfo *this;
  QString *pQVar20;
  char *pcVar21;
  long lVar22;
  undefined8 in_stack_fffffffffffffc28;
  undefined4 uVar23;
  QArrayData *local_388;
  QString local_380;
  QArrayData *local_378;
  QArrayData *local_370;
  QString local_368;
  QArrayData *local_360;
  int *local_358;
  int *local_350;
  QArrayData *local_348;
  QArrayData *local_340;
  QArrayData *local_338;
  QArrayData *local_330;
  QArrayData *local_328;
  QArrayData *local_320;
  QArrayData *local_318;
  QArrayData *local_310;
  QArrayData *local_308;
  QArrayData *local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  char *local_2e8;
  char local_2d1;
  QArrayData *local_2d0;
  QString local_2c8;
  QFileInfo local_2c0 [8];
  Data *local_2b8;
  QDir local_2b0 [8];
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QArrayData *local_288;
  QString local_280;
  QTypedArrayData<unsigned_short> *local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QString local_240;
  QString local_238;
  QFileInfo local_230 [8];
  QArrayData *local_228;
  QArrayData *local_220;
  undefined8 local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QString local_200;
  QString local_1f8;
  QFileInfo local_1f0 [8];
  QString local_1e8;
  QString local_1e0;
  undefined1 local_1d1;
  undefined8 local_1d0;
  undefined1 local_1c1;
  undefined1 local_1c0 [76];
  undefined4 local_174;
  byte local_16b;
  undefined1 local_128 [80];
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  long local_38;
  
  lVar22 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_358 = (int *)PTR_shared_null_1021e15e8;
  local_38 = lVar22;
  local_360 = (QArrayData *)QString::fromAscii_helper("/Applications",0xd);
  FUN_1000341d0(&local_358,&local_360);
  FUN_1000a65d0(&local_370);
  local_368.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_370;
  if (1 < *(int *)local_370 + 1U) {
    LOCK();
    *(int *)local_370 = *(int *)local_370 + 1;
    local_1c1 = *(int *)local_370 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_348,0x1db66b6);
  QString::append(&local_368);
  if (*(int *)local_348 != -1) {
    if (*(int *)local_348 != 0) {
      LOCK();
      *(int *)local_348 = *(int *)local_348 + -1;
      local_1c1 = *(int *)local_348 != 0;
      UNLOCK();
      if ((bool)local_1c1) goto LAB_100052832;
    }
    QArrayData::deallocate(local_348,2,8);
  }
LAB_100052832:
  FUN_1000341d0(&local_358,&local_368);
  local_378 = (QArrayData *)QString::fromAscii_helper("/Applications/Parallels",0x17);
  FUN_1000341d0(&local_358,&local_378);
  FUN_1000a65d0(&local_388);
  local_380.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_388;
  if (1 < *(int *)local_388 + 1U) {
    LOCK();
    *(int *)local_388 = *(int *)local_388 + 1;
    local_1c1 = *(int *)local_388 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_340,0x1db71c4);
  QString::append(&local_380);
  if (*(int *)local_340 != -1) {
    if (*(int *)local_340 != 0) {
      LOCK();
      *(int *)local_340 = *(int *)local_340 + -1;
      local_1c1 = *(int *)local_340 != 0;
      UNLOCK();
      if ((bool)local_1c1) goto LAB_100052905;
    }
    QArrayData::deallocate(local_340,2,8);
  }
LAB_100052905:
  FUN_1000341d0(&local_358,&local_380);
  local_350 = local_358;
  if (*local_358 != -1) {
    if (*local_358 == 0) {
      QListData::detach((int)&local_350);
      iVar11 = local_350[2];
      if (iVar11 != local_350[3]) {
        piVar14 = local_358 + (long)local_358[2] * 2 + 4;
        piVar17 = local_350 + (long)iVar11 * 2 + 4;
        lVar12 = (long)local_350[3] * 8 + (long)iVar11 * -8;
        do {
          piVar2 = *(int **)piVar14;
          *(int **)piVar17 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_1c1 = *piVar2 != 0;
            UNLOCK();
          }
          piVar17 = piVar17 + 2;
          piVar14 = piVar14 + 2;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
    }
    else {
      LOCK();
      *local_358 = *local_358 + 1;
      local_1c1 = *local_358 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_380.field0_0x0 != -1) {
    if (*(int *)local_380.field0_0x0 != 0) {
      LOCK();
      *(int *)local_380.field0_0x0 = *(int *)local_380.field0_0x0 + -1;
      local_1c1 = *(int *)local_380.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1c1) goto LAB_1000529f1;
    }
    QArrayData::deallocate((QArrayData *)local_380.field0_0x0,2,8);
  }
LAB_1000529f1:
  if (*(int *)local_388 != -1) {
    if (*(int *)local_388 != 0) {
      LOCK();
      *(int *)local_388 = *(int *)local_388 + -1;
      local_1c1 = *(int *)local_388 != 0;
      UNLOCK();
      if ((bool)local_1c1) goto LAB_100052a2d;
    }
    QArrayData::deallocate(local_388,2,8);
  }
LAB_100052a2d:
  if (*(int *)local_378 != -1) {
    if (*(int *)local_378 != 0) {
      LOCK();
      *(int *)local_378 = *(int *)local_378 + -1;
      local_1c1 = *(int *)local_378 != 0;
      UNLOCK();
      if ((bool)local_1c1) goto LAB_100052a62;
    }
    QArrayData::deallocate(local_378,2,8);
  }
LAB_100052a62:
  if (*(int *)local_368.field0_0x0 != -1) {
    if (*(int *)local_368.field0_0x0 != 0) {
      LOCK();
      *(int *)local_368.field0_0x0 = *(int *)local_368.field0_0x0 + -1;
      local_1c1 = *(int *)local_368.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1c1) goto LAB_100052a9e;
    }
    QArrayData::deallocate((QArrayData *)local_368.field0_0x0,2,8);
  }
LAB_100052a9e:
  if (*(int *)local_370 != -1) {
    if (*(int *)local_370 != 0) {
      LOCK();
      *(int *)local_370 = *(int *)local_370 + -1;
      local_1c1 = *(int *)local_370 != 0;
      UNLOCK();
      if ((bool)local_1c1) goto LAB_100052ada;
    }
    QArrayData::deallocate(local_370,2,8);
  }
LAB_100052ada:
  if (*(int *)local_360 != -1) {
    if (*(int *)local_360 != 0) {
      LOCK();
      *(int *)local_360 = *(int *)local_360 + -1;
      local_1c1 = *(int *)local_360 != 0;
      UNLOCK();
      if ((bool)local_1c1) goto LAB_100052b0f;
    }
    QArrayData::deallocate(local_360,2,8);
  }
LAB_100052b0f:
  FUN_100039a80(&local_358);
  if (local_350[2] != local_350[3]) {
    pQVar1 = (QString *)(local_350 + (long)local_350[3] * 2 + 4);
    pQVar20 = (QString *)(local_350 + (long)local_350[2] * 2 + 4);
    do {
      if (*(int *)(pQVar20->field0_0x0 + 4) != 0) {
        QDir::QDir(local_2b0,pQVar20);
        QDir::setFilter(local_2b0,0x6103);
        QDir::entryInfoList(&local_2b8,local_2b0,0xffffffff,0xffffffff);
        QFileInfo::QFileInfo(local_2c0,pQVar20);
        uVar15 = (ulong)*(uint *)(local_2b8 + 8);
        lVar12 = 0;
        bVar19 = false;
        if ((int)*(uint *)(local_2b8 + 8) < *(int *)(local_2b8 + 0xc)) {
          do {
            cVar7 = QFileInfo::operator==
                              (local_2c0,
                               (QFileInfo *)(local_2b8 + ((int)uVar15 + lVar12) * 8 + 0x10));
            if (cVar7 == '\0') {
              QFileInfo::filePath();
              QString::toUtf8();
              iVar11 = FUN_100d77340(local_2d0 + *(long *)(local_2d0 + 0x10),&local_2d1);
              if ((iVar11 == 0) && (local_2d1 != '\0')) {
                local_2f8 = 0;
                uStack_2f0 = 0;
                local_2e8 = (char *)0x0;
                iVar11 = FUN_100d77620(local_2d0 + *(long *)(local_2d0 + 0x10),&local_2f8);
                if (iVar11 == 0) {
                  pcVar21 = local_2e8;
                  if ((local_2f8 & 1) == 0) {
                    pcVar21 = (char *)((long)&local_2f8 + 1);
                  }
                  QByteArray::QByteArray((QByteArray *)&local_2a8,pcVar21,-1);
                  FUN_1000551a0(&local_300,&local_2a8);
                  if (*(int *)local_2a8 != -1) {
                    if (*(int *)local_2a8 != 0) {
                      LOCK();
                      *(int *)local_2a8 = *(int *)local_2a8 + -1;
                      local_1c1 = *(int *)local_2a8 != 0;
                      UNLOCK();
                      if ((bool)local_1c1) goto LAB_100052cfc;
                    }
                    QArrayData::deallocate(local_2a8,1,8);
                  }
LAB_100052cfc:
                  iVar11 = QString::compare(param_1,&local_300,1);
                  bVar18 = bVar19;
                  if (iVar11 == 0) {
                    if (1 < DAT_10230ffd0) {
                      QString::toUtf8();
                      pQVar5 = local_308;
                      lVar3 = *(long *)(local_308 + 0x10);
                      QString::toUtf8();
                      FUN_100df99c0("SGASMGMT","prl_client_app",2,
                                    "Found alias to fix: \"%s\"->\"%s\"",pQVar5 + lVar3,
                                    local_310 + *(long *)(local_310 + 0x10));
                      if (*(int *)local_310 != -1) {
                        if (*(int *)local_310 != 0) {
                          LOCK();
                          *(int *)local_310 = *(int *)local_310 + -1;
                          local_1c1 = *(int *)local_310 != 0;
                          UNLOCK();
                          if ((bool)local_1c1) goto LAB_100052dcd;
                        }
                        QArrayData::deallocate(local_310,1,8);
                      }
LAB_100052dcd:
                      if (*(int *)local_308 != -1) {
                        if (*(int *)local_308 != 0) {
                          LOCK();
                          *(int *)local_308 = *(int *)local_308 + -1;
                          local_1c1 = *(int *)local_308 != 0;
                          UNLOCK();
                          if ((bool)local_1c1) goto LAB_100052e16;
                        }
                        QArrayData::deallocate(local_308,1,8);
                      }
                    }
LAB_100052e16:
                    cVar7 = QFile::remove(&local_2c8);
                    if (cVar7 == '\0') {
                      if (0 < DAT_10230ffd0) {
                        QString::toUtf8();
                        FUN_100df99c0("SGASMGMT","prl_client_app",1,"Failed to remove alias \"%s\"",
                                      local_318 + *(long *)(local_318 + 0x10));
                        if (*(int *)local_318 != -1) {
                          if (*(int *)local_318 != 0) {
                            LOCK();
                            *(int *)local_318 = *(int *)local_318 + -1;
                            local_1c1 = *(int *)local_318 != 0;
                            UNLOCK();
                            if ((bool)local_1c1) goto LAB_10005394b;
                          }
                          QArrayData::deallocate(local_318,1,8);
                        }
                      }
                    }
                    else if (bVar19) {
                      if (DAT_10230ffd0 < 2) goto LAB_10005394b;
                      QString::toUtf8();
                      pQVar5 = local_320;
                      lVar3 = *(long *)(local_320 + 0x10);
                      QString::toUtf8();
                      FUN_100df99c0("SGASMGMT","prl_client_app",2,
                                    "Some alias in \"%s\" already fixed, another alias \"%s\" just removed"
                                    ,pQVar5 + lVar3,local_328 + *(long *)(local_328 + 0x10));
                      if (*(int *)local_328 != -1) {
                        if (*(int *)local_328 != 0) {
                          LOCK();
                          *(int *)local_328 = *(int *)local_328 + -1;
                          local_1c1 = *(int *)local_328 != 0;
                          UNLOCK();
                          if ((bool)local_1c1) goto LAB_100053465;
                        }
                        QArrayData::deallocate(local_328,1,8);
                      }
LAB_100053465:
                      if (*(int *)local_320 != -1) {
                        if (*(int *)local_320 != 0) {
                          LOCK();
                          *(int *)local_320 = *(int *)local_320 + -1;
                          local_1c1 = *(int *)local_320 != 0;
                          UNLOCK();
                          if ((bool)local_1c1) goto LAB_10005394b;
                        }
                        QArrayData::deallocate(local_320,1,8);
                      }
                    }
                    else {
                      if (3 < DAT_10230ffd0) {
                        QString::toUtf8();
                        pQVar5 = local_220;
                        lVar3 = *(long *)(local_220 + 0x10);
                        QString::toUtf8();
                        FUN_100df99c0("SGASMGMT","prl_client_app",4,
                                      "finderCreateAlias(objectPath=\"%s\", aliasPath=\"%s\")",
                                      pQVar5 + lVar3,local_228 + *(long *)(local_228 + 0x10));
                        if (*(int *)local_228 != -1) {
                          if (*(int *)local_228 != 0) {
                            LOCK();
                            *(int *)local_228 = *(int *)local_228 + -1;
                            local_1c1 = *(int *)local_228 != 0;
                            UNLOCK();
                            if ((bool)local_1c1) goto LAB_100052ee3;
                          }
                          QArrayData::deallocate(local_228,1,8);
                        }
LAB_100052ee3:
                        if (*(int *)local_220 != -1) {
                          if (*(int *)local_220 != 0) {
                            LOCK();
                            *(int *)local_220 = *(int *)local_220 + -1;
                            local_1c1 = *(int *)local_220 != 0;
                            UNLOCK();
                            if ((bool)local_1c1) goto LAB_100052f29;
                          }
                          QArrayData::deallocate(local_220,1,8);
                        }
                      }
LAB_100052f29:
                      QFileInfo::QFileInfo(local_230,&local_2c8);
                      QFileInfo::absolutePath();
                      uVar8 = QDir::separator();
                      local_250 = local_258;
                      if (1 < *(uint *)local_258 + 1) {
                        LOCK();
                        *(uint *)local_258 = *(uint *)local_258 + 1;
                        local_1c1 = *(uint *)local_258 != 0;
                        UNLOCK();
                      }
                      uVar16 = *(uint *)(local_258 + 4);
                      if ((1 < *(uint *)local_258) ||
                         ((*(uint *)(local_258 + 8) & 0x7fffffff) < uVar16 + 2)) {
                        QString::reallocData((uint)&local_250,SUB41(uVar16 + 2,0));
                        uVar16 = *(uint *)(local_250 + 4);
                      }
                      *(uint *)(local_250 + 4) = uVar16 + 1;
                      *(undefined2 *)
                       (local_250 + (long)(int)uVar16 * 2 + *(long *)(local_250 + 0x10)) = uVar8;
                      *(undefined2 *)
                       (local_250 +
                       (long)(int)*(uint *)(local_250 + 4) * 2 + *(long *)(local_250 + 0x10)) = 0;
                      if (1 < *(uint *)local_250 + 1) {
                        LOCK();
                        *(uint *)local_250 = *(uint *)local_250 + 1;
                        local_1c1 = *(uint *)local_250 != 0;
                        UNLOCK();
                      }
                      uVar16 = *(uint *)(local_250 + 4);
                      local_248 = local_250;
                      if ((1 < *(uint *)local_250) ||
                         ((*(uint *)(local_250 + 8) & 0x7fffffff) < uVar16 + 2)) {
                        QString::reallocData((uint)&local_248,SUB41(uVar16 + 2,0));
                        uVar16 = *(uint *)(local_248 + 4);
                      }
                      *(uint *)(local_248 + 4) = uVar16 + 1;
                      *(undefined2 *)
                       (local_248 + (long)(int)uVar16 * 2 + *(long *)(local_248 + 0x10)) = 0x2e;
                      *(undefined2 *)
                       (local_248 +
                       (long)(int)*(uint *)(local_248 + 4) * 2 + *(long *)(local_248 + 0x10)) = 0;
                      QFileInfo::fileName();
                      local_240.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_248;
                      if (1 < *(uint *)local_248 + 1) {
                        LOCK();
                        *(uint *)local_248 = *(uint *)local_248 + 1;
                        local_1c1 = *(uint *)local_248 != 0;
                        UNLOCK();
                      }
                      QString::append(&local_240);
                      local_238.field0_0x0 = local_240.field0_0x0;
                      if (1 < *(uint *)local_240.field0_0x0 + 1) {
                        LOCK();
                        *(uint *)local_240.field0_0x0 = *(uint *)local_240.field0_0x0 + 1;
                        local_1c1 = *(uint *)local_240.field0_0x0 != 0;
                        UNLOCK();
                      }
                      uVar16 = *(uint *)(local_240.field0_0x0 + 4);
                      if ((1 < *(uint *)local_240.field0_0x0) ||
                         ((*(uint *)(local_240.field0_0x0 + 8) & 0x7fffffff) < uVar16 + 2)) {
                        QString::reallocData((uint)&local_238,SUB41(uVar16 + 2,0));
                        uVar16 = *(uint *)(local_238.field0_0x0 + 4);
                      }
                      *(uint *)(local_238.field0_0x0 + 4) = uVar16 + 1;
                      *(undefined2 *)
                       (local_238.field0_0x0 +
                       (long)(int)uVar16 * 2 + *(long *)(local_238.field0_0x0 + 0x10)) = 0x7e;
                      *(undefined2 *)
                       (local_238.field0_0x0 +
                       (long)(int)*(uint *)(local_238.field0_0x0 + 4) * 2 +
                       *(long *)(local_238.field0_0x0 + 0x10)) = 0;
                      if (*(int *)local_240.field0_0x0 != -1) {
                        if (*(int *)local_240.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + -1;
                          local_1c1 = *(int *)local_240.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_1c1) goto LAB_100053154;
                        }
                        QArrayData::deallocate((QArrayData *)local_240.field0_0x0,2,8);
                      }
LAB_100053154:
                      if (*(int *)local_260 != -1) {
                        if (*(int *)local_260 != 0) {
                          LOCK();
                          *(int *)local_260 = *(int *)local_260 + -1;
                          local_1c1 = *(int *)local_260 != 0;
                          UNLOCK();
                          if ((bool)local_1c1) goto LAB_100053190;
                        }
                        QArrayData::deallocate(local_260,2,8);
                      }
LAB_100053190:
                      if (*(int *)local_248 != -1) {
                        if (*(int *)local_248 != 0) {
                          LOCK();
                          *(int *)local_248 = *(int *)local_248 + -1;
                          local_1c1 = *(int *)local_248 != 0;
                          UNLOCK();
                          if ((bool)local_1c1) goto LAB_1000531cc;
                        }
                        QArrayData::deallocate(local_248,2,8);
                      }
LAB_1000531cc:
                      if (*(int *)local_250 != -1) {
                        if (*(int *)local_250 != 0) {
                          LOCK();
                          *(int *)local_250 = *(int *)local_250 + -1;
                          local_1c1 = *(int *)local_250 != 0;
                          UNLOCK();
                          if ((bool)local_1c1) goto LAB_100053208;
                        }
                        QArrayData::deallocate(local_250,2,8);
                      }
LAB_100053208:
                      if (*(int *)local_258 != -1) {
                        if (*(int *)local_258 != 0) {
                          LOCK();
                          *(int *)local_258 = *(int *)local_258 + -1;
                          local_1c1 = *(int *)local_258 != 0;
                          UNLOCK();
                          if ((bool)local_1c1) goto LAB_100053244;
                        }
                        QArrayData::deallocate(local_258,2,8);
                      }
LAB_100053244:
                      cVar7 = QFile::exists(param_2);
                      if (cVar7 == '\0') {
                        QString::toUtf8();
                        FUN_100df99c0("SGASMGMT","prl_client_app",0,
                                      "Error: file sysytem object \"%s\" doesn\'t exists",
                                      local_268 + *(long *)(local_268 + 0x10));
                        if (*(int *)local_268 != -1) {
                          if (*(int *)local_268 != 0) {
                            LOCK();
                            *(int *)local_268 = *(int *)local_268 + -1;
                            local_1c1 = *(int *)local_268 != 0;
                            UNLOCK();
                            if ((bool)local_1c1) goto LAB_100053506;
                          }
                          QArrayData::deallocate(local_268,1,8);
                        }
LAB_100053506:
                        bVar4 = false;
                      }
                      else {
                        cVar7 = QFile::exists(&local_2c8);
                        if (cVar7 != '\0') {
                          if (2 < DAT_10230ffd0) {
                            QString::toUtf8();
                            FUN_100df99c0("SGASMGMT","prl_client_app",3,
                                          "File system object \"%s\" already exists and will be removed"
                                          ,local_270 + *(long *)(local_270 + 0x10));
                            if (*(int *)local_270 != -1) {
                              if (*(int *)local_270 != 0) {
                                LOCK();
                                *(int *)local_270 = *(int *)local_270 + -1;
                                local_1c1 = *(int *)local_270 != 0;
                                UNLOCK();
                                if ((bool)local_1c1) goto LAB_1000532eb;
                              }
                              QArrayData::deallocate(local_270,1,8);
                            }
                          }
LAB_1000532eb:
                          QFile::remove(&local_2c8);
                        }
                        while (cVar7 = QFile::exists(&local_238), cVar7 != '\0') {
                          QString::append(&local_238,0x7e);
                        }
                        local_278 = param_2->field0_0x0;
                        if (1 < *(int *)local_278 + 1U) {
                          LOCK();
                          *(int *)local_278 = *(int *)local_278 + 1;
                          local_1c1 = *(int *)local_278 != 0;
                          UNLOCK();
                        }
                        local_280.field0_0x0 = local_238.field0_0x0;
                        if (1 < *(uint *)local_238.field0_0x0 + 1) {
                          LOCK();
                          *(uint *)local_238.field0_0x0 = *(uint *)local_238.field0_0x0 + 1;
                          local_1c1 = *(uint *)local_238.field0_0x0 != 0;
                          UNLOCK();
                        }
                        local_1e0.field0_0x0 =
                             (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
                        local_1e8.field0_0x0 =
                             (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
                        QFileInfo::QFileInfo(local_1f0,&local_280);
                        QFileInfo::absolutePath();
                        QString::operator=(&local_1e0,&local_1f8);
                        if (*(int *)local_1f8.field0_0x0 != -1) {
                          if (*(int *)local_1f8.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_1f8.field0_0x0 = *(int *)local_1f8.field0_0x0 + -1;
                            local_1c1 = *(int *)local_1f8.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_1c1) goto LAB_100053751;
                          }
                          QArrayData::deallocate((QArrayData *)local_1f8.field0_0x0,2,8);
                        }
LAB_100053751:
                        QFileInfo::fileName();
                        QString::operator=(&local_1e8,&local_200);
                        if (*(int *)local_200.field0_0x0 != -1) {
                          if (*(int *)local_200.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
                            local_1c1 = *(int *)local_200.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_1c1) goto LAB_1000537b3;
                          }
                          QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
                        }
LAB_1000537b3:
                        QString::toUtf8();
                        if ((1 < *(uint *)local_208) || (*(long *)(local_208 + 0x10) != 0x18)) {
                          QByteArray::reallocData
                                    (&local_208,*(uint *)(local_208 + 4) + 1,
                                     *(uint *)(local_208 + 8) >> 0x1f);
                        }
                        iVar11 = _FSPathMakeRef(local_208 + *(long *)(local_208 + 0x10),local_88,
                                                &local_1d1);
                        if (*(int *)local_208 != -1) {
                          if (*(int *)local_208 != 0) {
                            LOCK();
                            *(int *)local_208 = *(int *)local_208 + -1;
                            local_1c1 = *(int *)local_208 != 0;
                            UNLOCK();
                            if ((bool)local_1c1) goto LAB_100053849;
                          }
                          QArrayData::deallocate(local_208,1,8);
                        }
LAB_100053849:
                        if (iVar11 == 0) {
                          QString::toUtf8();
                          if ((1 < *(uint *)local_210) || (*(long *)(local_210 + 0x10) != 0x18)) {
                            QByteArray::reallocData
                                      (&local_210,*(uint *)(local_210 + 4) + 1,
                                       *(uint *)(local_210 + 8) >> 0x1f);
                          }
                          iVar11 = _FSPathMakeRef(local_210 + *(long *)(local_210 + 0x10),local_d8,
                                                  &local_1d1);
                          if (*(int *)local_210 != -1) {
                            if (*(int *)local_210 != 0) {
                              LOCK();
                              *(int *)local_210 = *(int *)local_210 + -1;
                              local_1c1 = *(int *)local_210 != 0;
                              UNLOCK();
                              if ((bool)local_1c1) goto LAB_1000538ea;
                            }
                            QArrayData::deallocate(local_210,1,8);
                          }
LAB_1000538ea:
                          if (iVar11 == 0) {
                            sVar9 = _FSNewAliasMinimal(local_88,&local_1d0);
                            if (sVar9 == 0) {
                              FUN_100d77820();
                              iVar11 = *(int *)(local_1e8.field0_0x0 + 4);
                              uVar13 = QString::utf16();
                              in_stack_fffffffffffffc28 = 0;
                              _FSCreateResFile(local_d8,(long)iVar11,uVar13,0,0,local_128,0);
                              sVar9 = _FSOpenResFile(local_128,3);
                              sVar10 = _ResError();
                              if (sVar9 == -1) {
                                FUN_100d77870();
                                iVar11 = (int)sVar10;
                              }
                              else {
                                _UseResFile((int)sVar9);
                                _AddResource(local_1d0,0x616c6973,0,"");
                                local_218 = 0;
                                iVar11 = _ReadIconFromFSRef(local_88,&local_218);
                                if (iVar11 == 0) {
                                  _AddResource(local_218,0x69636e73,0xffffbfb9,"");
                                  _DisposeHandle(local_218);
                                }
                                _CloseResFile((int)sVar9);
                                FUN_100d77870();
                                _FSGetCatalogInfo(local_128,0x800,local_1c0,0,0,0);
                                local_16b = local_16b | 0x84;
                                local_174 = 0x64726f70;
                                _FSSetCatalogInfo(local_128,0x800,local_1c0);
                                iVar11 = 0;
                              }
                            }
                            else {
                              iVar11 = (int)sVar9;
                            }
                          }
                        }
                        QFileInfo::~QFileInfo(local_1f0);
                        if (*(int *)local_1e8.field0_0x0 != -1) {
                          if (*(int *)local_1e8.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_1e8.field0_0x0 = *(int *)local_1e8.field0_0x0 + -1;
                            local_1c1 = *(int *)local_1e8.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_1c1) goto LAB_100053bef;
                          }
                          QArrayData::deallocate((QArrayData *)local_1e8.field0_0x0,2,8);
                        }
LAB_100053bef:
                        if (*(int *)local_1e0.field0_0x0 != -1) {
                          if (*(int *)local_1e0.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
                            local_1c1 = *(int *)local_1e0.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_1c1) goto LAB_100053c2b;
                          }
                          QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
                        }
LAB_100053c2b:
                        if (*(int *)local_280.field0_0x0 != -1) {
                          if (*(int *)local_280.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1;
                            local_1c1 = *(int *)local_280.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_1c1) goto LAB_100053c67;
                          }
                          QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
                        }
LAB_100053c67:
                        if (*(int *)local_278 != -1) {
                          if (*(int *)local_278 != 0) {
                            LOCK();
                            *(int *)local_278 = *(int *)local_278 + -1;
                            local_1c1 = *(int *)local_278 != 0;
                            UNLOCK();
                            if ((bool)local_1c1) goto LAB_100053ca3;
                          }
                          QArrayData::deallocate((QArrayData *)local_278,2,8);
                        }
LAB_100053ca3:
                        uVar23 = (undefined4)((ulong)in_stack_fffffffffffffc28 >> 0x20);
                        if (iVar11 != 0) {
                          QString::toUtf8();
                          pQVar5 = local_288;
                          lVar22 = *(long *)(local_288 + 0x10);
                          QString::toUtf8();
                          in_stack_fffffffffffffc28 = CONCAT44(uVar23,iVar11);
                          FUN_100df99c0("SGASMGMT","prl_client_app",0,
                                        "Error: failed to create alias \"%s\" for file system object \"%s\" (err=%i"
                                        ,pQVar5 + lVar22,local_290 + *(long *)(local_290 + 0x10),
                                        in_stack_fffffffffffffc28);
                          if (*(int *)local_290 != -1) {
                            if (*(int *)local_290 != 0) {
                              LOCK();
                              *(int *)local_290 = *(int *)local_290 + -1;
                              local_1c1 = *(int *)local_290 != 0;
                              UNLOCK();
                              if ((bool)local_1c1) goto LAB_100053d59;
                            }
                            QArrayData::deallocate(local_290,1,8);
                          }
LAB_100053d59:
                          lVar22 = *(long *)PTR____stack_chk_guard_1021e1840;
                          if (*(int *)local_288 != -1) {
                            if (*(int *)local_288 != 0) {
                              LOCK();
                              *(int *)local_288 = *(int *)local_288 + -1;
                              local_1c1 = *(int *)local_288 != 0;
                              UNLOCK();
                              if ((bool)local_1c1) goto LAB_100053506;
                            }
                            QArrayData::deallocate(local_288,1,8);
                          }
                          goto LAB_100053506;
                        }
                        cVar7 = QFile::rename(&local_238,&local_2c8);
                        bVar4 = true;
                        if (cVar7 == '\0') {
                          QString::toUtf8();
                          pQVar5 = local_298;
                          lVar3 = *(long *)(local_298 + 0x10);
                          QString::toUtf8();
                          FUN_100df99c0("SGASMGMT","prl_client_app",0,
                                        "Error: failed to rename alias \"%s\" to \"%s\"",
                                        pQVar5 + lVar3,local_2a0 + *(long *)(local_2a0 + 0x10));
                          if (*(int *)local_2a0 != -1) {
                            if (*(int *)local_2a0 != 0) {
                              LOCK();
                              *(int *)local_2a0 = *(int *)local_2a0 + -1;
                              local_1c1 = *(int *)local_2a0 != 0;
                              UNLOCK();
                              if ((bool)local_1c1) goto LAB_100053e64;
                            }
                            QArrayData::deallocate(local_2a0,1,8);
                          }
LAB_100053e64:
                          if (*(int *)local_298 != -1) {
                            if (*(int *)local_298 != 0) {
                              LOCK();
                              *(int *)local_298 = *(int *)local_298 + -1;
                              local_1c1 = *(int *)local_298 != 0;
                              UNLOCK();
                              if ((bool)local_1c1) goto LAB_100053eaa;
                            }
                            QArrayData::deallocate(local_298,1,8);
                          }
LAB_100053eaa:
                          QFile::remove(&local_238);
                          goto LAB_100053506;
                        }
                      }
                      if (*(int *)local_238.field0_0x0 != -1) {
                        if (*(int *)local_238.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + -1;
                          local_1c1 = *(int *)local_238.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_1c1) goto LAB_10005354a;
                        }
                        QArrayData::deallocate((QArrayData *)local_238.field0_0x0,2,8);
                      }
LAB_10005354a:
                      QFileInfo::~QFileInfo(local_230);
                      bVar18 = true;
                      if ((!bVar4) && (bVar18 = bVar19, 0 < DAT_10230ffd0)) {
                        QString::toUtf8();
                        pQVar5 = local_330;
                        lVar3 = *(long *)(local_330 + 0x10);
                        QString::toUtf8();
                        FUN_100df99c0("SGASMGMT","prl_client_app",1,
                                      "Failed to create alias \"%s\"->\"%s\"",pQVar5 + lVar3,
                                      local_338 + *(long *)(local_338 + 0x10));
                        if (*(int *)local_338 != -1) {
                          if (*(int *)local_338 != 0) {
                            LOCK();
                            *(int *)local_338 = *(int *)local_338 + -1;
                            local_1c1 = *(int *)local_338 != 0;
                            UNLOCK();
                            if ((bool)local_1c1) goto LAB_100053614;
                          }
                          QArrayData::deallocate(local_338,1,8);
                        }
LAB_100053614:
                        if (*(int *)local_330 != -1) {
                          if (*(int *)local_330 != 0) {
                            LOCK();
                            *(int *)local_330 = *(int *)local_330 + -1;
                            local_1c1 = *(int *)local_330 != 0;
                            UNLOCK();
                            if ((bool)local_1c1) goto LAB_10005394b;
                          }
                          QArrayData::deallocate(local_330,1,8);
                        }
                      }
                    }
                  }
LAB_10005394b:
                  bVar19 = bVar18;
                  if (*(int *)local_300 != -1) {
                    if (*(int *)local_300 != 0) {
                      LOCK();
                      *(int *)local_300 = *(int *)local_300 + -1;
                      local_1c1 = *(int *)local_300 != 0;
                      UNLOCK();
                      if ((bool)local_1c1) goto LAB_100053987;
                    }
                    QArrayData::deallocate(local_300,2,8);
                  }
                }
LAB_100053987:
                std::string::~string((string *)&local_2f8);
              }
              if (*(int *)local_2d0 != -1) {
                if (*(int *)local_2d0 != 0) {
                  LOCK();
                  *(int *)local_2d0 = *(int *)local_2d0 + -1;
                  local_1c1 = *(int *)local_2d0 != 0;
                  UNLOCK();
                  if ((bool)local_1c1) goto LAB_1000539d8;
                }
                QArrayData::deallocate(local_2d0,1,8);
              }
LAB_1000539d8:
              if (*(int *)local_2c8.field0_0x0 != -1) {
                if (*(int *)local_2c8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_2c8.field0_0x0 = *(int *)local_2c8.field0_0x0 + -1;
                  local_1c1 = *(int *)local_2c8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_1c1) goto LAB_100053a20;
                }
                QArrayData::deallocate((QArrayData *)local_2c8.field0_0x0,2,8);
              }
            }
LAB_100053a20:
            lVar12 = lVar12 + 1;
            uVar15 = (ulong)*(int *)(local_2b8 + 8);
          } while (lVar12 < (long)((long)*(int *)(local_2b8 + 0xc) - uVar15));
        }
        QFileInfo::~QFileInfo(local_2c0);
        pDVar6 = local_2b8;
        if (*(int *)local_2b8 != -1) {
          if (*(int *)local_2b8 != 0) {
            LOCK();
            *(int *)local_2b8 = *(int *)local_2b8 + -1;
            local_1c1 = *(int *)local_2b8 != 0;
            UNLOCK();
            if ((bool)local_1c1) goto LAB_100053f58;
          }
          iVar11 = *(int *)(local_2b8 + 0xc);
          if (iVar11 != *(int *)(local_2b8 + 8)) {
            lVar22 = (long)*(int *)(local_2b8 + 8) * 8 + (long)iVar11 * -8;
            this = (QFileInfo *)(local_2b8 + (long)iVar11 * 8 + 8);
            do {
              QFileInfo::~QFileInfo(this);
              this = this + -8;
              lVar22 = lVar22 + 8;
            } while (lVar22 != 0);
          }
          QListData::dispose(pDVar6);
          lVar22 = *(long *)PTR____stack_chk_guard_1021e1840;
        }
LAB_100053f58:
        QDir::~QDir(local_2b0);
      }
      pQVar20 = pQVar20 + 1;
    } while (pQVar20 != pQVar1);
  }
  FUN_100039a80(&local_350);
  if (lVar22 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

