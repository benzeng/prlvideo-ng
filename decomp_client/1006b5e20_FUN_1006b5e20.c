
void FUN_1006b5e20(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  char cVar19;
  int iVar20;
  QString *pQVar21;
  undefined8 uVar22;
  size_t sVar23;
  uint uVar24;
  long lVar25;
  int *piVar26;
  Data *pDVar27;
  long lVar28;
  int *piVar29;
  Data *pDVar30;
  QArrayData *pQVar31;
  QObject *pQVar32;
  bool bVar33;
  QIcon local_390 [8];
  QVariant local_388;
  QArrayData *local_378;
  QString local_370;
  QString local_368;
  QPixmap local_360 [32];
  QArrayData *local_340;
  QArrayData *local_338;
  QArrayData *local_330;
  QArrayData *local_328;
  QArrayData *local_320;
  QArrayData *local_318;
  QArrayData *local_310;
  QArrayData *local_308;
  QArrayData *local_300;
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  int local_2d0;
  int local_2cc;
  QVariant local_2c8;
  QVariant local_2b8;
  QArrayData *local_2a8;
  int *local_2a0;
  int *local_298;
  int *local_290;
  uint local_288;
  int *local_280;
  QVariant local_278;
  QVariant local_268;
  QObject *local_258;
  Data *local_250;
  Data *local_248;
  Data *local_240;
  undefined4 local_238;
  QArrayData *local_230;
  Data *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 local_218 [12];
  undefined1 local_208 [12];
  undefined1 local_1f8 [12];
  undefined1 local_1e8 [12];
  undefined1 local_1d8 [12];
  undefined1 local_1c8 [12];
  undefined1 local_1b8 [12];
  undefined1 local_1a8 [12];
  QVariant local_198;
  QString local_188;
  QVariant local_180;
  QVariant local_170;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QString local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  Data_conflict local_130;
  undefined4 local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QVariant local_110;
  QString local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  Data *local_e0;
  QArrayData *local_d8;
  QVariant local_d0;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  uint local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  uint local_58;
  int *local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar20 = QMetaObject::indexOfEnumerator("");
  if (iVar20 == -1) {
    FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "enumIdx != -1","MenuManager/CMenuBarPrototype.cpp",0xbc,"initActions");
  }
  local_1a8 = QMetaObject::enumerator(0x2224a58);
  iVar20 = QMetaObject::indexOfEnumerator(PTR_staticMetaObject_1021e1498);
  if (iVar20 == -1) {
    FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "enumIdx != -1","MenuManager/CMenuBarPrototype.cpp",0xc0,"initActions");
  }
  puVar3 = PTR_staticMetaObject_1021e1498;
  local_1b8 = QMetaObject::enumerator((int)PTR_staticMetaObject_1021e1498);
  iVar20 = QMetaObject::indexOfEnumerator(puVar3);
  if (iVar20 == -1) {
    FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "enumIdx != -1","MenuManager/CMenuBarPrototype.cpp",0xc4,"initActions");
  }
  puVar3 = PTR_staticMetaObject_1021e1498;
  local_1c8 = QMetaObject::enumerator((int)PTR_staticMetaObject_1021e1498);
  iVar20 = QMetaObject::indexOfEnumerator(puVar3);
  if (iVar20 == -1) {
    FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "enumIdx != -1","MenuManager/CMenuBarPrototype.cpp",200,"initActions");
  }
  local_1d8 = QMetaObject::enumerator((int)PTR_staticMetaObject_1021e1498);
  iVar20 = QMetaObject::indexOfEnumerator("");
  if (iVar20 == -1) {
    FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "enumIdx != -1","MenuManager/CMenuBarPrototype.cpp",0xcc,"initActions");
  }
  local_1e8 = QMetaObject::enumerator(0x22247e8);
  iVar20 = QMetaObject::indexOfEnumerator(PTR_staticMetaObject_1021e1498);
  if (iVar20 == -1) {
    FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "enumIdx != -1","MenuManager/CMenuBarPrototype.cpp",0xd0,"initActions");
  }
  puVar3 = PTR_staticMetaObject_1021e1498;
  local_1f8 = QMetaObject::enumerator((int)PTR_staticMetaObject_1021e1498);
  iVar20 = QMetaObject::indexOfEnumerator(puVar3);
  if (iVar20 == -1) {
    FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "enumIdx != -1","MenuManager/CMenuBarPrototype.cpp",0xd4,"initActions");
  }
  puVar3 = PTR_staticMetaObject_1021e1498;
  local_208 = QMetaObject::enumerator((int)PTR_staticMetaObject_1021e1498);
  iVar20 = QMetaObject::indexOfEnumerator(puVar3);
  if (iVar20 == -1) {
    FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "enumIdx != -1","MenuManager/CMenuBarPrototype.cpp",0xd8,"initActions");
  }
  local_218 = QMetaObject::enumerator((int)PTR_staticMetaObject_1021e1498);
  local_21c = 0x10;
  local_220 = 1;
  FUN_1006d8120(param_1 + 0x38,&local_21c,&local_220);
  local_230 = (QArrayData *)PTR_shared_null_1021e1288;
  local_228 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper
            (*(undefined8 *)(param_1 + 0x20),&local_230,PTR_staticMetaObject_1021e1500,&local_228,1)
  ;
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b629a;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_1006b629a:
  local_250 = local_228;
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 == 0) {
      QListData::detach((int)&local_250);
      lVar25 = (long)*(int *)(local_250 + 8);
      if ((local_228 + (long)*(int *)(local_228 + 8) * 8 != local_250 + lVar25 * 8) &&
         (lVar28 = *(int *)(local_250 + 0xc) - lVar25,
         lVar28 != 0 && lVar25 <= *(int *)(local_250 + 0xc))) {
        _memcpy(local_250 + lVar25 * 8 + 0x10,local_228 + (long)*(int *)(local_228 + 8) * 8 + 0x10,
                lVar28 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + 1;
      local_31 = *(int *)local_228 != 0;
      UNLOCK();
    }
  }
  puVar17 = PTR_s_checkedWithAttributes_1021f5588;
  puVar16 = PTR_s_visibleWithAttributes_1021f5580;
  puVar15 = PTR_s_enabledWithAttributes_1021f5578;
  puVar14 = PTR_s_visibleForView_1021f5570;
  puVar13 = PTR_s_checkedForView_1021f5568;
  puVar12 = PTR_s_enabledForView_1021f5560;
  puVar11 = PTR_s_enabledForAdditionStates_1021f5558;
  puVar10 = PTR_s_visibleForStates_1021f5550;
  puVar9 = PTR_s_checkedForStates_1021f5548;
  puVar8 = PTR_s_enabledForStates_1021f5540;
  puVar7 = PTR_s_enabledForServerStates_1021f5538;
  puVar6 = PTR_s_menuAction_1021f5508;
  puVar5 = PTR_s_product_1021f54e8;
  puVar4 = PTR_s_actionSlot_1021f54d8;
  puVar3 = PTR_s_actionType_1021f54c8;
  local_248 = local_250 + (long)*(int *)(local_250 + 8) * 8 + 0x10;
  local_240 = local_250 + (long)*(int *)(local_250 + 0xc) * 8 + 0x10;
  if (local_248 != local_240) {
    do {
      local_238 = 1;
      pQVar32 = *(QObject **)local_248;
      local_258 = pQVar32;
      cVar19 = QAction::isSeparator();
      if (cVar19 == '\0') {
        lVar25 = QAction::menu();
        if (lVar25 != 0) {
          QAction::menu();
          QObject::dynamicPropertyNames();
          local_2a0 = local_280;
          if (*local_280 != -1) {
            if (*local_280 == 0) {
              QListData::detach((int)&local_2a0);
              iVar20 = local_2a0[2];
              if (iVar20 != local_2a0[3]) {
                piVar26 = local_280 + (long)local_280[2] * 2 + 4;
                piVar29 = local_2a0 + (long)iVar20 * 2 + 4;
                lVar25 = (long)local_2a0[3] * 8 + (long)iVar20 * -8;
                do {
                  piVar2 = *(int **)piVar26;
                  *(int **)piVar29 = piVar2;
                  if (1 < *piVar2 + 1U) {
                    LOCK();
                    *piVar2 = *piVar2 + 1;
                    local_31 = *piVar2 != 0;
                    UNLOCK();
                  }
                  piVar29 = piVar29 + 2;
                  piVar26 = piVar26 + 2;
                  lVar25 = lVar25 + -8;
                  pQVar32 = local_258;
                } while (lVar25 != 0);
              }
            }
            else {
              LOCK();
              *local_280 = *local_280 + 1;
              local_31 = *local_280 != 0;
              UNLOCK();
            }
          }
          local_298 = local_2a0 + (long)local_2a0[2] * 2 + 4;
          local_290 = local_2a0 + (long)local_2a0[3] * 2 + 4;
          local_288 = 1;
          if (local_2a0[2] != local_2a0[3]) {
            do {
              local_2a8 = *(QArrayData **)local_298;
              if (1 < *(uint *)local_2a8 + 1) {
                LOCK();
                *(uint *)local_2a8 = *(uint *)local_2a8 + 1;
                local_31 = *(uint *)local_2a8 != 0;
                UNLOCK();
              }
              if (local_288 != 0) {
                if (2 < DAT_10230ffd0) {
                  if ((1 < *(uint *)local_2a8) || (*(long *)(local_2a8 + 0x10) != 0x18)) {
                    QByteArray::reallocData
                              (&local_2a8,*(uint *)(local_2a8 + 4) + 1,
                               *(uint *)(local_2a8 + 8) >> 0x1f);
                  }
                  FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",3,"%s",
                                local_2a8 + *(long *)(local_2a8 + 0x10));
                }
                if ((1 < *(uint *)local_2a8) || (*(long *)(local_2a8 + 0x10) != 0x18)) {
                  QByteArray::reallocData
                            (&local_2a8,*(uint *)(local_2a8 + 4) + 1,
                             *(uint *)(local_2a8 + 8) >> 0x1f);
                }
                pQVar31 = local_2a8 + *(long *)(local_2a8 + 0x10);
                QAction::menu();
                if ((1 < *(uint *)local_2a8) || (*(long *)(local_2a8 + 0x10) != 0x18)) {
                  QByteArray::reallocData
                            (&local_2a8,*(uint *)(local_2a8 + 4) + 1,
                             *(uint *)(local_2a8 + 8) >> 0x1f);
                }
                QObject::property((char *)&local_2b8);
                QObject::setProperty((char *)pQVar32,(QVariant *)pQVar31);
                QVariant::~QVariant(&local_2b8);
                QVariant::QVariant(&local_2c8,true);
                QObject::setProperty((char *)pQVar32,(QVariant *)puVar6);
                QVariant::~QVariant(&local_2c8);
                local_288 = 0;
              }
              if (*(int *)local_2a8 != -1) {
                if (*(int *)local_2a8 != 0) {
                  LOCK();
                  *(int *)local_2a8 = *(int *)local_2a8 + -1;
                  local_31 = *(int *)local_2a8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006b67ba;
                }
                QArrayData::deallocate(local_2a8,1,8);
              }
LAB_1006b67ba:
              local_298 = local_298 + 2;
              uVar24 = local_288 ^ 1;
              bVar33 = local_288 != 1;
              local_288 = uVar24;
            } while ((bVar33) && (local_298 != local_290));
          }
          FUN_1000ee530(&local_2a0);
          FUN_1000ee530(&local_280);
        }
        lVar25 = QAction::menu();
        if (lVar25 == 0) {
          QObject::objectName();
        }
        else {
          QAction::menu();
          QObject::objectName();
        }
        local_148.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_150;
        if (1 < *(int *)local_150 + 1U) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + 1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
        }
        local_138 = (QArrayData *)QString::fromAscii_helper("action",6);
        cVar19 = QString::startsWith(&local_148,&local_138,1);
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006b68c6;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_1006b68c6:
        iVar20 = (int)&local_148;
        if (cVar19 == '\0') {
          local_140 = (QArrayData *)QString::fromAscii_helper("menu",4);
          cVar19 = QString::startsWith(&local_148,&local_140,1);
          if (*(int *)local_140 != -1) {
            if (*(int *)local_140 != 0) {
              LOCK();
              *(int *)local_140 = *(int *)local_140 + -1;
              local_31 = *(int *)local_140 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b6992;
            }
            QArrayData::deallocate(local_140,2,8);
          }
LAB_1006b6992:
          if (cVar19 != '\0') {
            QString::remove(iVar20,0);
            QString::insert(&local_148,0,0x4d);
          }
        }
        else {
          pQVar31 = (QArrayData *)QString::fromAscii_helper("action",6);
          pQVar21 = (QString *)QString::remove(iVar20,0);
          QString::operator=(&local_148,pQVar21);
          if (*(int *)pQVar31 != -1) {
            if (*(int *)pQVar31 != 0) {
              LOCK();
              *(int *)pQVar31 = *(int *)pQVar31 + -1;
              local_31 = *(int *)pQVar31 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b69b4;
            }
            QArrayData::deallocate(pQVar31,2,8);
          }
        }
LAB_1006b69b4:
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_31 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006b69ea;
          }
          QArrayData::deallocate(local_150,2,8);
        }
LAB_1006b69ea:
        QString::toLatin1();
        iVar20 = QMetaEnum::keyToValue(local_1a8,(bool *)(local_158 + *(long *)(local_158 + 0x10)));
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            local_31 = *(int *)local_158 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006b6a4e;
          }
          QArrayData::deallocate(local_158,1,8);
        }
LAB_1006b6a4e:
        if (iVar20 == -1) {
          uVar22 = FUN_1006b9790(pQVar32);
          FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,
                        "%s action doesn\'t contain ActionType property",uVar22);
          iVar20 = 0;
          FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "false","MenuManager/CMenuBarPrototype.cpp",0x4d,"setActionType");
        }
        else if (iVar20 == 0) {
          uVar22 = FUN_1006b9790(pQVar32);
          FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,
                        "%s action contains an invalid ActionType property",uVar22);
          iVar20 = 0;
          FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "false","MenuManager/CMenuBarPrototype.cpp",0x46,"setActionType");
        }
        else {
          QObject::property((char *)&local_170);
          QVariant::toString();
          iVar1 = *(int *)(local_160 + 4);
          if (*(int *)local_160 != -1) {
            if (*(int *)local_160 != 0) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + -1;
              local_31 = *(int *)local_160 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b6ba8;
            }
            QArrayData::deallocate(local_160,2,8);
          }
LAB_1006b6ba8:
          QVariant::~QVariant(&local_170);
          if (iVar1 == 0) {
            QString::fromUtf8_helper((char *)&local_188,0x1e11063);
            QString::append(&local_188);
            QVariant::QVariant(&local_180,&local_188);
            QObject::setProperty((char *)pQVar32,(QVariant *)puVar4);
            QVariant::~QVariant(&local_180);
            if (*(int *)local_188.field0_0x0 != -1) {
              if (*(int *)local_188.field0_0x0 != 0) {
                LOCK();
                *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
                local_31 = *(int *)local_188.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b6c49;
              }
              QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
            }
          }
LAB_1006b6c49:
          QVariant::QVariant(&local_198,iVar20);
          QObject::setProperty((char *)pQVar32,(QVariant *)puVar3);
          QVariant::~QVariant(&local_198);
        }
        if (*(int *)local_148.field0_0x0 != -1) {
          if (*(int *)local_148.field0_0x0 != 0) {
            LOCK();
            *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
            local_31 = *(int *)local_148.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006b6caf;
          }
          QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
        }
LAB_1006b6caf:
        local_2cc = iVar20;
        if (iVar20 != 0) {
          local_48 = (Data *)PTR_shared_null_1021e15e8;
          QObject::dynamicPropertyNames();
          local_70 = local_50;
          if (*local_50 != -1) {
            if (*local_50 == 0) {
              QListData::detach((int)&local_70);
              iVar20 = local_70[2];
              if (iVar20 != local_70[3]) {
                piVar26 = local_50 + (long)local_50[2] * 2 + 4;
                piVar29 = local_70 + (long)iVar20 * 2 + 4;
                lVar25 = (long)local_70[3] * 8 + (long)iVar20 * -8;
                do {
                  piVar2 = *(int **)piVar26;
                  *(int **)piVar29 = piVar2;
                  if (1 < *piVar2 + 1U) {
                    LOCK();
                    *piVar2 = *piVar2 + 1;
                    local_31 = *piVar2 != 0;
                    UNLOCK();
                  }
                  piVar29 = piVar29 + 2;
                  piVar26 = piVar26 + 2;
                  lVar25 = lVar25 + -8;
                } while (lVar25 != 0);
              }
            }
            else {
              LOCK();
              *local_50 = *local_50 + 1;
              local_31 = *local_50 != 0;
              UNLOCK();
            }
          }
          local_68 = local_70 + (long)local_70[2] * 2 + 4;
          local_60 = local_70 + (long)local_70[3] * 2 + 4;
          local_58 = 1;
          if (local_70[2] != local_70[3]) {
            do {
              local_78 = *(QArrayData **)local_68;
              if (1 < *(int *)local_78 + 1U) {
                LOCK();
                *(int *)local_78 = *(int *)local_78 + 1;
                local_31 = *(int *)local_78 != 0;
                UNLOCK();
              }
              if (local_58 != 0) {
                iVar20 = QByteArray::indexOf((char *)&local_78,(int)PTR_s_AppContext_102270dc0);
                if (iVar20 != -1) {
                  lVar25 = 0;
                  pQVar31 = local_78 + *(long *)(local_78 + 0x10);
                  if ((pQVar31 != (QArrayData *)0x0) && (*(uint *)(local_78 + 4) != 0)) {
                    lVar25 = 0;
                    do {
                      if (pQVar31[lVar25] == (QArrayData)0x0) break;
                      lVar25 = lVar25 + 1;
                    } while ((uint)lVar25 < *(uint *)(local_78 + 4));
                  }
                  pQVar31 = (QArrayData *)QString::fromAscii_helper((char *)pQVar31,(int)lVar25);
                  local_80 = pQVar31;
                  FUN_1000341d0(&local_48,&local_80);
                  if (*(int *)pQVar31 != -1) {
                    if (*(int *)pQVar31 != 0) {
                      LOCK();
                      *(int *)pQVar31 = *(int *)pQVar31 + -1;
                      local_31 = *(int *)pQVar31 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006b6e51;
                    }
                    QArrayData::deallocate(pQVar31,2,8);
                  }
                }
LAB_1006b6e51:
                local_58 = 0;
              }
              if (*(int *)local_78 != -1) {
                if (*(int *)local_78 != 0) {
                  LOCK();
                  *(int *)local_78 = *(int *)local_78 + -1;
                  local_31 = *(int *)local_78 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006b6e88;
                }
                QArrayData::deallocate(local_78,1,8);
              }
LAB_1006b6e88:
              local_68 = local_68 + 2;
              uVar24 = local_58 ^ 1;
              bVar33 = local_58 != 1;
              local_58 = uVar24;
            } while ((bVar33) && (local_68 != local_60));
          }
          FUN_1000ee530(&local_70);
          local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
          local_a8 = local_48;
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 == 0) {
              QListData::detach((int)&local_a8);
              iVar20 = *(int *)(local_a8 + 8);
              if (iVar20 != *(int *)(local_a8 + 0xc)) {
                pDVar27 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
                pDVar30 = local_a8 + (long)iVar20 * 8 + 0x10;
                lVar25 = (long)*(int *)(local_a8 + 0xc) * 8 + (long)iVar20 * -8;
                do {
                  piVar26 = *(int **)pDVar27;
                  *(int **)pDVar30 = piVar26;
                  if (1 < *piVar26 + 1U) {
                    LOCK();
                    *piVar26 = *piVar26 + 1;
                    local_31 = *piVar26 != 0;
                    UNLOCK();
                  }
                  pDVar30 = pDVar30 + 8;
                  pDVar27 = pDVar27 + 8;
                  lVar25 = lVar25 + -8;
                } while (lVar25 != 0);
              }
            }
            else {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + 1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
            }
          }
          local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
          local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
          local_90 = 1;
          if (*(int *)(local_a8 + 8) != *(int *)(local_a8 + 0xc)) {
            do {
              local_b0 = *(QArrayData **)local_a0;
              if (1 < *(int *)local_b0 + 1U) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + 1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
              }
              if (local_90 != 0) {
                QString::trimmed();
                iVar20 = QString::compare_helper
                                   (local_b8 + *(long *)(local_b8 + 0x10),
                                    *(undefined4 *)(local_b8 + 4),PTR_s_AppContext_102270dc0,
                                    0xffffffff,1);
                if (*(int *)local_b8 != -1) {
                  if (*(int *)local_b8 != 0) {
                    LOCK();
                    *(int *)local_b8 = *(int *)local_b8 + -1;
                    local_31 = *(int *)local_b8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006b702c;
                  }
                  QArrayData::deallocate(local_b8,2,8);
                }
LAB_1006b702c:
                if (iVar20 == 0) {
                  QObject::property((char *)&local_d0);
                  QVariant::toString();
                  QString::operator=(&local_88,&local_c0);
                  if (*(int *)local_c0.field0_0x0 != -1) {
                    if (*(int *)local_c0.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                      local_31 = *(int *)local_c0.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006b7402;
                    }
                    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
                  }
LAB_1006b7402:
                  QVariant::~QVariant(&local_d0);
                }
                else {
                  local_e8 = (QArrayData *)QString::fromAscii_helper("_",1);
                  QString::split(&local_e0,&local_b0,&local_e8,0,1);
                  pDVar27 = local_e0;
                  local_d8 = *(QArrayData **)(local_e0 + (long)*(int *)(local_e0 + 8) * 8 + 0x10);
                  if (1 < *(int *)local_d8 + 1U) {
                    LOCK();
                    *(int *)local_d8 = *(int *)local_d8 + 1;
                    local_31 = *(int *)local_d8 != 0;
                    UNLOCK();
                  }
                  if (*(int *)local_e0 != -1) {
                    if (*(int *)local_e0 != 0) {
                      LOCK();
                      *(int *)local_e0 = *(int *)local_e0 + -1;
                      local_31 = *(int *)local_e0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006b7131;
                    }
                    iVar20 = *(int *)(local_e0 + 0xc);
                    if (iVar20 != *(int *)(local_e0 + 8)) {
                      lVar25 = (long)*(int *)(local_e0 + 8) * 8 + (long)iVar20 * -8;
                      pDVar30 = local_e0 + (long)iVar20 * 8 + 8;
                      do {
                        pQVar31 = *(QArrayData **)pDVar30;
                        if (*(int *)pQVar31 == 0) {
LAB_1006b7110:
                          QArrayData::deallocate(pQVar31,2,8);
                        }
                        else if (*(int *)pQVar31 != -1) {
                          LOCK();
                          *(int *)pQVar31 = *(int *)pQVar31 + -1;
                          local_31 = *(int *)pQVar31 != 0;
                          UNLOCK();
                          if (!(bool)local_31) {
                            pQVar31 = *(QArrayData **)pDVar30;
                            goto LAB_1006b7110;
                          }
                        }
                        pDVar30 = pDVar30 + -8;
                        lVar25 = lVar25 + 8;
                      } while (lVar25 != 0);
                    }
                    QListData::dispose(pDVar27);
                  }
LAB_1006b7131:
                  if (*(int *)local_e8 != -1) {
                    if (*(int *)local_e8 != 0) {
                      LOCK();
                      *(int *)local_e8 = *(int *)local_e8 + -1;
                      local_31 = *(int *)local_e8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006b7167;
                    }
                    QArrayData::deallocate(local_e8,2,8);
                  }
LAB_1006b7167:
                  QString::trimmed();
                  QString::toLatin1();
                  iVar20 = QMetaEnum::keyToValue
                                     (local_208,(bool *)(local_f0 + *(long *)(local_f0 + 0x10)));
                  if (*(int *)local_f0 != -1) {
                    if (*(int *)local_f0 != 0) {
                      LOCK();
                      *(int *)local_f0 = *(int *)local_f0 + -1;
                      local_31 = *(int *)local_f0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006b71de;
                    }
                    QArrayData::deallocate(local_f0,1,8);
                  }
LAB_1006b71de:
                  if (*(int *)local_f8 != -1) {
                    if (*(int *)local_f8 != 0) {
                      LOCK();
                      *(int *)local_f8 = *(int *)local_f8 + -1;
                      local_31 = *(int *)local_f8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006b7214;
                    }
                    QArrayData::deallocate(local_f8,2,8);
                  }
LAB_1006b7214:
                  if (iVar20 == -1) {
                    FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,
                                  "ASSERT( %s ) occured in %s:%d [%s]","-1 != appModeValue",
                                  "MenuManager/CMenuBarPrototype.cpp",0x6e,"setActionContext");
                  }
                  cVar19 = EnumUtils::testProduct(iVar20);
                  iVar20 = 0;
                  if (cVar19 != '\0') {
                    QString::toLatin1();
                    QObject::property((char *)&local_110);
                    QVariant::toString();
                    QString::operator=(&local_88,&local_100);
                    if (*(int *)local_100.field0_0x0 != -1) {
                      if (*(int *)local_100.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
                        local_31 = *(int *)local_100.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1006b72f1;
                      }
                      QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
                    }
LAB_1006b72f1:
                    QVariant::~QVariant(&local_110);
                    iVar20 = 0xb;
                    if (*(int *)local_118 != -1) {
                      if (*(int *)local_118 != 0) {
                        LOCK();
                        *(int *)local_118 = *(int *)local_118 + -1;
                        local_31 = *(int *)local_118 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1006b7340;
                      }
                      QArrayData::deallocate(local_118,1,8);
                    }
                  }
LAB_1006b7340:
                  if (*(int *)local_d8 != -1) {
                    if (*(int *)local_d8 != 0) {
                      LOCK();
                      *(int *)local_d8 = *(int *)local_d8 + -1;
                      local_31 = *(int *)local_d8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006b7376;
                    }
                    QArrayData::deallocate(local_d8,2,8);
                  }
LAB_1006b7376:
                  if (iVar20 == 0) {
                    local_90 = 0;
                  }
                }
              }
              if (*(int *)local_b0 != -1) {
                if (*(int *)local_b0 != 0) {
                  LOCK();
                  *(int *)local_b0 = *(int *)local_b0 + -1;
                  local_31 = *(int *)local_b0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006b7444;
                }
                QArrayData::deallocate(local_b0,2,8);
              }
LAB_1006b7444:
              local_a0 = local_a0 + 8;
              uVar24 = local_90 ^ 1;
              bVar33 = local_90 != 1;
              local_90 = uVar24;
            } while ((bVar33) && (local_a0 != local_98));
          }
          pDVar27 = local_a8;
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b7511;
            }
            iVar20 = *(int *)(local_a8 + 0xc);
            if (iVar20 != *(int *)(local_a8 + 8)) {
              lVar25 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar20 * -8;
              pDVar30 = local_a8 + (long)iVar20 * 8 + 8;
              do {
                pQVar31 = *(QArrayData **)pDVar30;
                if (*(int *)pQVar31 == 0) {
LAB_1006b74f0:
                  QArrayData::deallocate(pQVar31,2,8);
                }
                else if (*(int *)pQVar31 != -1) {
                  LOCK();
                  *(int *)pQVar31 = *(int *)pQVar31 + -1;
                  local_31 = *(int *)pQVar31 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar31 = *(QArrayData **)pDVar30;
                    goto LAB_1006b74f0;
                  }
                }
                pDVar30 = pDVar30 + -8;
                lVar25 = lVar25 + 8;
              } while (lVar25 != 0);
            }
            QListData::dispose(pDVar27);
          }
LAB_1006b7511:
          QString::toLatin1();
          iVar20 = QMetaEnum::keyToValue
                             (local_1b8,(bool *)(local_120 + *(long *)(local_120 + 0x10)));
          if (*(int *)local_120 != -1) {
            if (*(int *)local_120 != 0) {
              LOCK();
              *(int *)local_120 = *(int *)local_120 + -1;
              local_31 = *(int *)local_120 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b7573;
            }
            QArrayData::deallocate(local_120,1,8);
          }
LAB_1006b7573:
          if (iVar20 == -1) {
            uVar22 = FUN_1006b9790(pQVar32);
            FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,
                          "%s action doesn\'t contain AppContext property",uVar22);
            iVar20 = 0;
            FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]"
                          ,"false","MenuManager/CMenuBarPrototype.cpp",0x82,"setActionContext");
          }
          else if (iVar20 == 0) {
            uVar22 = FUN_1006b9790(pQVar32);
            FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,
                          "%s action contains an invalid AppContext property",uVar22);
            iVar20 = 0;
            FUN_100df99c0("[MENU_BAR_PROTO]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]"
                          ,"false","MenuManager/CMenuBarPrototype.cpp",0x7b,"setActionContext");
          }
          else {
            local_128 = 0x80000000;
            local_130.field7 = 0;
            QObject::setProperty((char *)pQVar32,(QVariant *)PTR_s_AppContext_102270dc0);
            QVariant::~QVariant((QVariant *)&local_130);
          }
          if (*(int *)local_88.field0_0x0 != -1) {
            if (*(int *)local_88.field0_0x0 != 0) {
              LOCK();
              *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
              local_31 = *(int *)local_88.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b76d0;
            }
            QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
          }
LAB_1006b76d0:
          FUN_1000ee530(&local_50);
          pDVar27 = local_48;
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b7771;
            }
            iVar1 = *(int *)(local_48 + 0xc);
            if (iVar1 != *(int *)(local_48 + 8)) {
              lVar25 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
              pDVar30 = local_48 + (long)iVar1 * 8 + 8;
              do {
                pQVar31 = *(QArrayData **)pDVar30;
                if (*(int *)pQVar31 == 0) {
LAB_1006b7750:
                  QArrayData::deallocate(pQVar31,2,8);
                }
                else if (*(int *)pQVar31 != -1) {
                  LOCK();
                  *(int *)pQVar31 = *(int *)pQVar31 + -1;
                  local_31 = *(int *)pQVar31 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar31 = *(QArrayData **)pDVar30;
                    goto LAB_1006b7750;
                  }
                }
                pDVar30 = pDVar30 + -8;
                lVar25 = lVar25 + 8;
              } while (lVar25 != 0);
            }
            QListData::dispose(pDVar27);
          }
LAB_1006b7771:
          local_2d0 = iVar20;
          if (iVar20 != 0) {
            FUN_1006d8120(param_1 + 0x38,&local_2cc,&local_2d0);
            pQVar32 = local_258;
            iVar20 = -1;
            if (puVar10 != (undefined *)0x0) {
              sVar23 = _strlen(puVar10);
              iVar20 = (int)sVar23;
            }
            local_2d8 = (QArrayData *)QString::fromAscii_helper(puVar10,iVar20);
            FUN_100a1fb80(pQVar32,local_1c8,&local_2d8);
            if (*(int *)local_2d8 != -1) {
              if (*(int *)local_2d8 != 0) {
                LOCK();
                *(int *)local_2d8 = *(int *)local_2d8 + -1;
                local_31 = *(int *)local_2d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7819;
              }
              QArrayData::deallocate(local_2d8,2,8);
            }
LAB_1006b7819:
            iVar20 = -1;
            if (puVar8 != (undefined *)0x0) {
              sVar23 = _strlen(puVar8);
              iVar20 = (int)sVar23;
            }
            local_2e0 = (QArrayData *)QString::fromAscii_helper(puVar8,iVar20);
            FUN_100a1fb80(pQVar32,local_1c8,&local_2e0);
            if (*(int *)local_2e0 != -1) {
              if (*(int *)local_2e0 != 0) {
                LOCK();
                *(int *)local_2e0 = *(int *)local_2e0 + -1;
                local_31 = *(int *)local_2e0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7890;
              }
              QArrayData::deallocate(local_2e0,2,8);
            }
LAB_1006b7890:
            iVar20 = -1;
            if (puVar9 != (undefined *)0x0) {
              sVar23 = _strlen(puVar9);
              iVar20 = (int)sVar23;
            }
            local_2e8 = (QArrayData *)QString::fromAscii_helper(puVar9,iVar20);
            FUN_100a1fb80(pQVar32,local_1c8,&local_2e8);
            if (*(int *)local_2e8 != -1) {
              if (*(int *)local_2e8 != 0) {
                LOCK();
                *(int *)local_2e8 = *(int *)local_2e8 + -1;
                local_31 = *(int *)local_2e8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7907;
              }
              QArrayData::deallocate(local_2e8,2,8);
            }
LAB_1006b7907:
            iVar20 = -1;
            if (puVar11 != (undefined *)0x0) {
              sVar23 = _strlen(puVar11);
              iVar20 = (int)sVar23;
            }
            local_2f0 = (QArrayData *)QString::fromAscii_helper(puVar11,iVar20);
            FUN_100a1fb80(pQVar32,local_1d8,&local_2f0);
            if (*(int *)local_2f0 != -1) {
              if (*(int *)local_2f0 != 0) {
                LOCK();
                *(int *)local_2f0 = *(int *)local_2f0 + -1;
                local_31 = *(int *)local_2f0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b797e;
              }
              QArrayData::deallocate(local_2f0,2,8);
            }
LAB_1006b797e:
            iVar20 = -1;
            if (puVar14 != (undefined *)0x0) {
              sVar23 = _strlen(puVar14);
              iVar20 = (int)sVar23;
            }
            local_2f8 = (QArrayData *)QString::fromAscii_helper(puVar14,iVar20);
            FUN_100a1fb80(pQVar32,local_218,&local_2f8);
            if (*(int *)local_2f8 != -1) {
              if (*(int *)local_2f8 != 0) {
                LOCK();
                *(int *)local_2f8 = *(int *)local_2f8 + -1;
                local_31 = *(int *)local_2f8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b79f5;
              }
              QArrayData::deallocate(local_2f8,2,8);
            }
LAB_1006b79f5:
            iVar20 = -1;
            if (puVar12 != (undefined *)0x0) {
              sVar23 = _strlen(puVar12);
              iVar20 = (int)sVar23;
            }
            local_300 = (QArrayData *)QString::fromAscii_helper(puVar12,iVar20);
            FUN_100a1fb80(pQVar32,local_218,&local_300);
            if (*(int *)local_300 != -1) {
              if (*(int *)local_300 != 0) {
                LOCK();
                *(int *)local_300 = *(int *)local_300 + -1;
                local_31 = *(int *)local_300 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7a6c;
              }
              QArrayData::deallocate(local_300,2,8);
            }
LAB_1006b7a6c:
            iVar20 = -1;
            if (puVar13 != (undefined *)0x0) {
              sVar23 = _strlen(puVar13);
              iVar20 = (int)sVar23;
            }
            local_308 = (QArrayData *)QString::fromAscii_helper(puVar13,iVar20);
            FUN_100a1fb80(pQVar32,local_218,&local_308);
            if (*(int *)local_308 != -1) {
              if (*(int *)local_308 != 0) {
                LOCK();
                *(int *)local_308 = *(int *)local_308 + -1;
                local_31 = *(int *)local_308 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7ae3;
              }
              QArrayData::deallocate(local_308,2,8);
            }
LAB_1006b7ae3:
            iVar20 = -1;
            if (puVar16 != (undefined *)0x0) {
              sVar23 = _strlen(puVar16);
              iVar20 = (int)sVar23;
            }
            local_310 = (QArrayData *)QString::fromAscii_helper(puVar16,iVar20);
            FUN_100a1fb80(pQVar32,local_1e8,&local_310);
            if (*(int *)local_310 != -1) {
              if (*(int *)local_310 != 0) {
                LOCK();
                *(int *)local_310 = *(int *)local_310 + -1;
                local_31 = *(int *)local_310 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7b5a;
              }
              QArrayData::deallocate(local_310,2,8);
            }
LAB_1006b7b5a:
            iVar20 = -1;
            if (puVar15 != (undefined *)0x0) {
              sVar23 = _strlen(puVar15);
              iVar20 = (int)sVar23;
            }
            local_318 = (QArrayData *)QString::fromAscii_helper(puVar15,iVar20);
            FUN_100a1fb80(pQVar32,local_1e8,&local_318);
            if (*(int *)local_318 != -1) {
              if (*(int *)local_318 != 0) {
                LOCK();
                *(int *)local_318 = *(int *)local_318 + -1;
                local_31 = *(int *)local_318 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7bd1;
              }
              QArrayData::deallocate(local_318,2,8);
            }
LAB_1006b7bd1:
            iVar20 = -1;
            if (puVar17 != (undefined *)0x0) {
              sVar23 = _strlen(puVar17);
              iVar20 = (int)sVar23;
            }
            local_320 = (QArrayData *)QString::fromAscii_helper(puVar17,iVar20);
            FUN_100a1fb80(pQVar32,local_1e8,&local_320);
            if (*(int *)local_320 != -1) {
              if (*(int *)local_320 != 0) {
                LOCK();
                *(int *)local_320 = *(int *)local_320 + -1;
                local_31 = *(int *)local_320 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7c48;
              }
              QArrayData::deallocate(local_320,2,8);
            }
LAB_1006b7c48:
            iVar20 = -1;
            if (puVar7 != (undefined *)0x0) {
              sVar23 = _strlen(puVar7);
              iVar20 = (int)sVar23;
            }
            local_328 = (QArrayData *)QString::fromAscii_helper(puVar7,iVar20);
            FUN_100a1fb80(pQVar32,local_1f8,&local_328);
            if (*(int *)local_328 != -1) {
              if (*(int *)local_328 != 0) {
                LOCK();
                *(int *)local_328 = *(int *)local_328 + -1;
                local_31 = *(int *)local_328 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7cbf;
              }
              QArrayData::deallocate(local_328,2,8);
            }
LAB_1006b7cbf:
            iVar20 = -1;
            if (puVar5 != (undefined *)0x0) {
              sVar23 = _strlen(puVar5);
              iVar20 = (int)sVar23;
            }
            local_330 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar20);
            FUN_100a1fb80(pQVar32,local_208,&local_330);
            if (*(int *)local_330 != -1) {
              if (*(int *)local_330 != 0) {
                LOCK();
                *(int *)local_330 = *(int *)local_330 + -1;
                local_31 = *(int *)local_330 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7d36;
              }
              QArrayData::deallocate(local_330,2,8);
            }
LAB_1006b7d36:
            lVar25 = QAction::menu();
            if (lVar25 != 0) {
              QAction::menu();
              QMenu::title();
              QAction::setText((QString *)pQVar32);
              if (*(int *)local_338 != -1) {
                if (*(int *)local_338 != 0) {
                  LOCK();
                  *(int *)local_338 = *(int *)local_338 + -1;
                  local_31 = *(int *)local_338 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006b7d9f;
                }
                QArrayData::deallocate(local_338,2,8);
              }
            }
LAB_1006b7d9f:
            WidgetUtils::Adjuster::adjustWidgetText(pQVar32,-1,-1);
            local_340 = (QArrayData *)QString::fromAscii_helper(" ",1);
            QAction::setToolTip((QString *)pQVar32);
            if (*(int *)local_340 != -1) {
              if (*(int *)local_340 != 0) {
                LOCK();
                *(int *)local_340 = *(int *)local_340 + -1;
                local_31 = *(int *)local_340 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7e0e;
              }
              QArrayData::deallocate(local_340,2,8);
            }
LAB_1006b7e0e:
            QObject::objectName();
            QString::fromUtf8_helper((char *)&local_370,0x1e0fa93);
            QString::append(&local_370);
            local_368.field0_0x0 = local_370.field0_0x0;
            if (1 < *(int *)local_370.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_370.field0_0x0 = *(int *)local_370.field0_0x0 + 1;
              local_31 = *(int *)local_370.field0_0x0 != 0;
              UNLOCK();
            }
            QString::fromUtf8_helper((char *)&local_40,0x1e0faa7);
            QString::append(&local_368);
            if (*(int *)local_40 != -1) {
              if (*(int *)local_40 != 0) {
                LOCK();
                *(int *)local_40 = *(int *)local_40 + -1;
                local_31 = *(int *)local_40 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7ec3;
              }
              QArrayData::deallocate(local_40,2,8);
            }
LAB_1006b7ec3:
            QPixmap::QPixmap(local_360,&local_368,0,0);
            if (*(int *)local_368.field0_0x0 != -1) {
              if (*(int *)local_368.field0_0x0 != 0) {
                LOCK();
                *(int *)local_368.field0_0x0 = *(int *)local_368.field0_0x0 + -1;
                local_31 = *(int *)local_368.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7f0c;
              }
              QArrayData::deallocate((QArrayData *)local_368.field0_0x0,2,8);
            }
LAB_1006b7f0c:
            if (*(int *)local_370.field0_0x0 != -1) {
              if (*(int *)local_370.field0_0x0 != 0) {
                LOCK();
                *(int *)local_370.field0_0x0 = *(int *)local_370.field0_0x0 + -1;
                local_31 = *(int *)local_370.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7f42;
              }
              QArrayData::deallocate((QArrayData *)local_370.field0_0x0,2,8);
            }
LAB_1006b7f42:
            if (*(int *)local_378 != -1) {
              if (*(int *)local_378 != 0) {
                LOCK();
                *(int *)local_378 = *(int *)local_378 + -1;
                local_31 = *(int *)local_378 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006b7f78;
              }
              QArrayData::deallocate(local_378,2,8);
            }
LAB_1006b7f78:
            QVariant::QVariant(&local_388,true);
            QObject::setProperty((char *)pQVar32,(QVariant *)"macUseTemplateIcon");
            QVariant::~QVariant(&local_388);
            cVar19 = QPixmap::isNull();
            if (cVar19 == '\0') {
              QIcon::QIcon(local_390,local_360);
              QAction::setIcon((QIcon *)pQVar32);
              QIcon::~QIcon(local_390);
            }
            QAction::setAutoRepeat(SUB81(pQVar32,0));
            FUN_100072390(param_1 + 0x28,&local_258);
            QPixmap::~QPixmap(local_360);
          }
        }
      }
      else {
        QVariant::QVariant(&local_268,0x10);
        QObject::setProperty((char *)pQVar32,(QVariant *)puVar3);
        QVariant::~QVariant(&local_268);
        puVar18 = PTR_s_AppContext_102270dc0;
        QVariant::QVariant(&local_278,1);
        QObject::setProperty((char *)pQVar32,(QVariant *)puVar18);
        QVariant::~QVariant(&local_278);
        FUN_100072390(param_1 + 0x28,&local_258);
      }
      local_248 = local_248 + 8;
    } while (local_248 != local_240);
  }
  local_238 = 1;
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b806f;
    }
    QListData::dispose(local_250);
  }
LAB_1006b806f:
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      UNLOCK();
      if (*(int *)local_228 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_228);
  }
  return;
}

