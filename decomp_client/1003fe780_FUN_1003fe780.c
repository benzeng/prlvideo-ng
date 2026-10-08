
void FUN_1003fe780(long param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined4 uVar5;
  Data *pDVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  char *pcVar15;
  undefined8 uVar16;
  size_t sVar17;
  QArrayData *pQVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  Data *pDVar23;
  int iVar24;
  uint *puVar25;
  uint *puVar26;
  QArrayData *pQVar27;
  bool bVar28;
  int local_43c;
  QVariant local_428;
  QString local_418;
  QVariant local_410;
  QString local_400;
  QVariant local_3f8;
  QVariant local_3e8;
  QVariant local_3d8;
  QVariant local_3c8;
  QArrayData *local_3b8;
  QArrayData *local_3b0;
  QArrayData *local_3a8;
  QArrayData *local_3a0;
  QString local_398;
  QString local_390;
  QVariant local_388;
  QArrayData *local_378;
  QArrayData *local_370;
  QArrayData *local_368;
  QVariant local_360;
  char local_350 [8];
  int *local_348;
  undefined8 local_340;
  QString local_338;
  int *local_330;
  char local_328;
  long local_320;
  undefined8 *local_318;
  undefined8 *local_310;
  uint local_308;
  QVariant local_300;
  uint *local_2f0;
  QArrayData *local_2e8;
  undefined1 local_2e0 [8];
  QArrayData *local_2d8;
  int local_2d0;
  undefined4 local_2cc;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined1 local_2b8;
  QString local_2b0;
  QVariant local_2a8;
  QVariant local_298;
  QArrayData *local_288;
  undefined1 local_280 [8];
  undefined *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined *local_268;
  undefined *local_260;
  undefined1 local_258;
  QString local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  undefined1 local_238 [8];
  QString local_230;
  undefined4 local_228;
  uint local_224;
  QArrayData *local_220;
  undefined *local_218;
  undefined1 local_210;
  Data *local_208;
  Data *local_200;
  Data *local_1f8;
  undefined4 local_1f0;
  QArrayData *local_1e8;
  undefined1 local_1e0 [8];
  QArrayData *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  QArrayData *local_1c8;
  undefined *local_1c0;
  undefined1 local_1b8;
  QString local_1b0;
  QArrayData *local_1a8;
  undefined1 local_1a0 [8];
  QArrayData *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  QArrayData *local_188;
  undefined *local_180;
  undefined1 local_178;
  undefined1 local_170 [8];
  QArrayData *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  QArrayData *local_158;
  QArrayData *local_150;
  undefined1 local_148;
  undefined4 local_140 [2];
  undefined *local_138;
  undefined4 local_130 [2];
  undefined *local_128;
  undefined4 local_120 [2];
  undefined *local_118;
  Data *local_110;
  QMapNodeBase *local_108;
  uint *local_100;
  QString local_f8;
  QVariant local_f0;
  Data_conflict local_e0;
  Data *local_d8;
  Data *local_d0;
  Data *local_c8;
  undefined4 local_c0;
  QString local_b8;
  QVariant local_b0;
  Data_conflict local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  undefined4 local_80;
  QVariant local_78;
  int local_64;
  QIcon local_60 [8];
  QIcon local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar12 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  if (lVar12 == 0) {
    return;
  }
  QObject::property((char *)&local_78);
  if (DAT_102273e70 == 0) {
    DAT_102273e70 = FUN_1003deea0("PRL_DEVICE_TYPE",0xffffffffffffffff,1);
  }
  uVar9 = DAT_102273e70;
  uVar8 = QVariant::userType();
  if (uVar9 == uVar8) {
    piVar13 = (int *)QVariant::constData();
    iVar11 = *piVar13;
  }
  else {
    cVar7 = QVariant::convert((int)&local_78,(void *)(ulong)uVar9);
    iVar11 = 0;
    if (cVar7 != '\0') {
      iVar11 = local_64;
    }
  }
  lVar14 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar14 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    goto LAB_10040069a;
  }
  if (0x11 < iVar11) {
    if (iVar11 == 0x14) {
      QComboBox::clear();
      uVar16 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
      uVar16 = FUN_10015a340(uVar16);
      FUN_10012d160(lVar12,uVar16,1,0,0);
    }
    else if (iVar11 == 0x12) {
      QComboBox::clear();
      uVar16 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
      lVar14 = FUN_10015a340(uVar16);
      plVar19 = *(long **)(lVar14 + 0x1a0);
      local_98 = (Data *)*plVar19;
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 == 0) {
          QListData::detach((int)&local_98);
          lVar21 = (long)*(int *)(local_98 + 8);
          lVar14 = *plVar19;
          if (((Data *)(lVar14 + (long)*(int *)(lVar14 + 8) * 8) != local_98 + lVar21 * 8) &&
             (lVar22 = *(int *)(local_98 + 0xc) - lVar21,
             lVar22 != 0 && lVar21 <= *(int *)(local_98 + 0xc))) {
            _memcpy(local_98 + lVar21 * 8 + 0x10,
                    (void *)(lVar14 + 0x10 + (long)*(int *)(lVar14 + 8) * 8),lVar22 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + 1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
        }
      }
      local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
      local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
      if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
        do {
          local_80 = 1;
          plVar19 = *(long **)local_90;
          (**(code **)(*plVar19 + 0xa8))(&local_a0,plVar19);
          (**(code **)(*plVar19 + 0xb8))(&local_b8,plVar19);
          QVariant::QVariant(&local_b0,&local_b8);
          uVar9 = QComboBox::count();
          QIcon::QIcon(local_60);
          QComboBox::insertItem
                    ((int)lVar12,(QIcon *)(ulong)uVar9,(QString *)local_60,(QVariant *)&local_a0);
          QIcon::~QIcon(local_60);
          QVariant::~QVariant(&local_b0);
          if (*(int *)local_b8.field0_0x0 != -1) {
            if (*(int *)local_b8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
              local_31 = *(int *)local_b8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100400615;
            }
            QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
          }
LAB_100400615:
          if (*(int *)local_a0.field15 != -1) {
            if (*(int *)local_a0.field15 != 0) {
              LOCK();
              *(int *)local_a0.field15 = *(int *)local_a0.field15 + -1;
              local_31 = *(int *)local_a0.field15 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10040064b;
            }
            QArrayData::deallocate((QArrayData *)local_a0.field15,2,8);
          }
LAB_10040064b:
          local_90 = local_90 + 8;
        } while (local_90 != local_88);
      }
      local_80 = 1;
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10040069a;
        }
        QListData::dispose(local_98);
      }
    }
    goto LAB_10040069a;
  }
  if (iVar11 != 8) {
    if (iVar11 == 0x11) {
      QComboBox::clear();
      uVar16 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
      lVar14 = FUN_10015a340(uVar16);
      plVar19 = *(long **)(lVar14 + 0x198);
      local_d8 = (Data *)*plVar19;
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 == 0) {
          QListData::detach((int)&local_d8);
          lVar21 = (long)*(int *)(local_d8 + 8);
          lVar14 = *plVar19;
          if (((Data *)(lVar14 + (long)*(int *)(lVar14 + 8) * 8) != local_d8 + lVar21 * 8) &&
             (lVar22 = *(int *)(local_d8 + 0xc) - lVar21,
             lVar22 != 0 && lVar21 <= *(int *)(local_d8 + 0xc))) {
            _memcpy(local_d8 + lVar21 * 8 + 0x10,
                    (void *)(lVar14 + 0x10 + (long)*(int *)(lVar14 + 8) * 8),lVar22 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + 1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
        }
      }
      local_d0 = local_d8 + (long)*(int *)(local_d8 + 8) * 8 + 0x10;
      local_c8 = local_d8 + (long)*(int *)(local_d8 + 0xc) * 8 + 0x10;
      if (*(int *)(local_d8 + 8) != *(int *)(local_d8 + 0xc)) {
        do {
          local_c0 = 1;
          plVar19 = *(long **)local_d0;
          iVar11 = CHwGenericPciDevice::getType();
          if ((iVar11 == 2) || (iVar11 = CHwGenericPciDevice::getType(), iVar11 == 3)) {
            (**(code **)(*plVar19 + 0xa8))(&local_e0,plVar19);
            (**(code **)(*plVar19 + 0xb8))(&local_f8,plVar19);
            QVariant::QVariant(&local_f0,&local_f8);
            uVar9 = QComboBox::count();
            QIcon::QIcon(local_58);
            QComboBox::insertItem
                      ((int)lVar12,(QIcon *)(ulong)uVar9,(QString *)local_58,(QVariant *)&local_e0);
            QIcon::~QIcon(local_58);
            QVariant::~QVariant(&local_f0);
            if (*(int *)local_f8.field0_0x0 != -1) {
              if (*(int *)local_f8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
                local_31 = *(int *)local_f8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100400483;
              }
              QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
            }
LAB_100400483:
            if (*(int *)local_e0.field15 != -1) {
              if (*(int *)local_e0.field15 != 0) {
                LOCK();
                *(int *)local_e0.field15 = *(int *)local_e0.field15 + -1;
                local_31 = *(int *)local_e0.field15 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004004b9;
              }
              QArrayData::deallocate((QArrayData *)local_e0.field15,2,8);
            }
          }
LAB_1004004b9:
          local_d0 = local_d0 + 8;
        } while (local_d0 != local_c8);
      }
      local_c0 = 1;
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10040069a;
        }
        QListData::dispose(local_d8);
      }
    }
    goto LAB_10040069a;
  }
  pcVar15 = (char *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fb2b0);
  puVar4 = PTR_shared_null_1021e15e8;
  if (pcVar15 == (char *)0x0) goto LAB_10040069a;
  local_100 = (uint *)PTR_shared_null_1021e15e8;
  uVar16 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  FUN_1001241b0(&local_108,uVar16);
  local_110 = (Data *)puVar4;
  local_120[0] = 1;
  local_118 = PTR_s_Shared_Network_10226e770;
  FUN_100419a00(&local_110,local_120);
  local_130[0] = 0;
  local_128 = PTR_s_Host_Only_Network_10226e768;
  FUN_100419a00(&local_110,local_130);
  cVar7 = FUN_100d80630(1);
  if (cVar7 == '\0') {
    local_140[0] = 2;
    local_138 = PTR_s_Bridged_Network_10226e760;
    FUN_100419a00(&local_110,local_140);
  }
  local_43c = -2;
  if ((int)*(uint *)(local_110 + 8) < (int)*(uint *)(local_110 + 0xc)) {
    local_43c = -2;
    lVar12 = 0;
    pQVar27 = (QArrayData *)PTR_shared_null_1021e1288;
    do {
      if (0 < lVar12) {
        local_170[0] = 1;
        iVar11 = *(int *)pQVar27;
        if (1 < iVar11 + 1U) {
          LOCK();
          *(int *)pQVar27 = *(int *)pQVar27 + 1;
          local_31 = *(int *)pQVar27 != 0;
          UNLOCK();
          iVar11 = *(int *)pQVar27;
        }
        local_160 = 1;
        local_15c = 0xffffffff;
        if (1 < iVar11 + 1U) {
          LOCK();
          *(int *)pQVar27 = *(int *)pQVar27 + 1;
          local_31 = *(int *)pQVar27 != 0;
          UNLOCK();
          iVar11 = *(int *)pQVar27;
        }
        if (1 < iVar11 + 1U) {
          LOCK();
          *(int *)pQVar27 = *(int *)pQVar27 + 1;
          local_31 = *(int *)pQVar27 != 0;
          UNLOCK();
        }
        local_148 = 0;
        local_168 = pQVar27;
        local_158 = pQVar27;
        local_150 = pQVar27;
        FUN_100419ac0(&local_100,local_170);
        FUN_10041a5a0(local_170);
        if (*(int *)pQVar27 != -1) {
          if (*(int *)pQVar27 == 0) {
LAB_1003fea15:
            QArrayData::deallocate(pQVar27,2,8);
          }
          else {
            LOCK();
            *(int *)pQVar27 = *(int *)pQVar27 + -1;
            local_31 = *(int *)pQVar27 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_1003fea15;
          }
          if (*(int *)pQVar27 != -1) {
            if (*(int *)pQVar27 == 0) {
LAB_1003fea42:
              QArrayData::deallocate(pQVar27,2,8);
            }
            else {
              LOCK();
              *(int *)pQVar27 = *(int *)pQVar27 + -1;
              local_31 = *(int *)pQVar27 != 0;
              UNLOCK();
              if (!(bool)local_31) goto LAB_1003fea42;
            }
            if (*(int *)pQVar27 != -1) {
              if (*(int *)pQVar27 != 0) {
                LOCK();
                *(int *)pQVar27 = *(int *)pQVar27 + -1;
                local_31 = *(int *)pQVar27 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003fea81;
              }
              QArrayData::deallocate(pQVar27,2,8);
            }
          }
        }
      }
LAB_1003fea81:
      if (1 < *(uint *)local_110) {
        FUN_10041dc30(&local_110,*(uint *)(local_110 + 4));
      }
      QMetaObject::tr((char *)&local_1a8,PTR_staticMetaObject_1021e1520,
                      (int)*(undefined8 *)
                            (*(long *)(local_110 +
                                      ((int)*(uint *)(local_110 + 8) + lVar12) * 8 + 0x10) + 8));
      uVar9 = *(uint *)local_110;
      if (1 < uVar9) {
        FUN_10041dc30(&local_110,*(uint *)(local_110 + 4));
        uVar9 = *(uint *)local_110;
      }
      uVar5 = DAT_102273e50;
      uVar8 = *(uint *)(local_110 + 8);
      uVar1 = **(undefined4 **)(local_110 + ((int)uVar8 + lVar12) * 8 + 0x10);
      if (1 < uVar9) {
        FUN_10041dc30(&local_110,*(uint *)(local_110 + 4));
        uVar8 = *(uint *)(local_110 + 8);
      }
      pcVar2 = *(char **)(*(long *)(local_110 + ((int)uVar8 + lVar12) * 8 + 0x10) + 8);
      iVar11 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar17 = _strlen(pcVar2);
        iVar11 = (int)sVar17;
      }
      pQVar18 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar11);
      local_1a0[0] = 0;
      local_198 = local_1a8;
      if (1 < *(int *)local_1a8 + 1U) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + 1;
        local_31 = *(int *)local_1a8 != 0;
        UNLOCK();
      }
      local_18c = uVar5;
      if (1 < *(int *)pQVar18 + 1U) {
        LOCK();
        *(int *)pQVar18 = *(int *)pQVar18 + 1;
        local_31 = *(int *)pQVar18 != 0;
        UNLOCK();
      }
      pQVar27 = (QArrayData *)PTR_shared_null_1021e1288;
      local_180 = PTR_shared_null_1021e1288;
      iVar11 = *(int *)PTR_shared_null_1021e1288;
      if (1 < iVar11 + 1U) {
        LOCK();
        *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
        local_31 = *(int *)pQVar27 != 0;
        UNLOCK();
        iVar11 = *(int *)pQVar27;
      }
      local_178 = 0;
      local_190 = uVar1;
      local_188 = pQVar18;
      if (iVar11 != -1) {
        if (iVar11 != 0) {
          LOCK();
          *(int *)pQVar27 = *(int *)pQVar27 + -1;
          local_31 = *(int *)pQVar27 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fec06;
        }
        QArrayData::deallocate(pQVar27,2,8);
      }
LAB_1003fec06:
      if (*(int *)pQVar18 != -1) {
        if (*(int *)pQVar18 != 0) {
          LOCK();
          *(int *)pQVar18 = *(int *)pQVar18 + -1;
          local_31 = *(int *)pQVar18 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fec33;
        }
        QArrayData::deallocate(pQVar18,2,8);
      }
LAB_1003fec33:
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_31 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fec7a;
        }
        QArrayData::deallocate(local_1a8,2,8);
      }
LAB_1003fec7a:
      FUN_100419ac0(&local_100,local_1a0);
      if (1 < *(uint *)local_110) {
        FUN_10041dc30(&local_110,*(uint *)(local_110 + 4));
      }
      plVar19 = (long *)FUN_100129b20(&local_108,
                                      *(undefined8 *)
                                       (local_110 +
                                       ((int)*(uint *)(local_110 + 8) + lVar12) * 8 + 0x10));
      if (*(int *)(*plVar19 + 0xc) - *(int *)(*plVar19 + 8) < 2) {
        if (1 < *(uint *)local_110) {
          FUN_10041dc30(&local_110,*(uint *)(local_110 + 4));
        }
        if (**(int **)(local_110 + ((int)*(uint *)(local_110 + 8) + lVar12) * 8 + 0x10) == 2)
        goto LAB_1003fed0c;
      }
      else {
LAB_1003fed0c:
        uVar9 = *local_100;
        if (1 < uVar9) {
          FUN_10041dd10(&local_100,local_100[1]);
          uVar9 = *local_100;
        }
        uVar8 = local_100[3];
        lVar14 = *(long *)(local_100 + (long)(int)uVar8 * 2 + 2);
        if (1 < uVar9) {
          FUN_10041dd10(&local_100,local_100[1]);
          uVar8 = local_100[3];
        }
        local_1b0.field0_0x0 =
             *(QTypedArrayData<unsigned_short> **)
              (*(long *)(local_100 + (long)(int)uVar8 * 2 + 2) + 8);
        if (1 < *(int *)local_1b0.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + 1;
          local_31 = *(int *)local_1b0.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_50,0x1e31af0);
        QString::append(&local_1b0);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003fedd2;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_1003fedd2:
        QString::operator=((QString *)(lVar14 + 8),&local_1b0);
        if (*(int *)local_1b0.field0_0x0 != -1) {
          if (*(int *)local_1b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
            local_31 = *(int *)local_1b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003fee1b;
          }
          QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
        }
LAB_1003fee1b:
        if (1 < *local_100) {
          FUN_10041dd10(&local_100,local_100[1]);
        }
        *(undefined1 *)(*(long *)(local_100 + (long)(int)local_100[3] * 2 + 2) + 0x28) = 1;
        if (1 < *(uint *)local_110) {
          FUN_10041dc30(&local_110,*(uint *)(local_110 + 4));
        }
        if (**(int **)(local_110 + ((int)*(uint *)(local_110 + 8) + lVar12) * 8 + 0x10) == 2) {
          if (1 < *local_100) {
            FUN_10041dd10(&local_100,local_100[1]);
          }
          *(int *)(*(long *)(local_100 + (long)(int)local_100[3] * 2 + 2) + 0x14) = local_43c;
          QMetaObject::tr((char *)&local_1e8,PTR_staticMetaObject_1021e1520,
                          (int)PTR_s_Default_Adapter_10226e7b8);
          uVar1 = DAT_102273e50;
          puVar4 = PTR_s_Default_Adapter_10226e7b8;
          iVar11 = -1;
          if (PTR_s_Default_Adapter_10226e7b8 != (undefined *)0x0) {
            sVar17 = _strlen(PTR_s_Default_Adapter_10226e7b8);
            iVar11 = (int)sVar17;
          }
          pQVar18 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar11);
          local_1e0[0] = 0;
          local_1d8 = local_1e8;
          if (1 < *(int *)local_1e8 + 1U) {
            LOCK();
            *(int *)local_1e8 = *(int *)local_1e8 + 1;
            local_31 = *(int *)local_1e8 != 0;
            UNLOCK();
          }
          local_1d0 = 2;
          local_1cc = uVar1;
          if (1 < *(int *)pQVar18 + 1U) {
            LOCK();
            *(int *)pQVar18 = *(int *)pQVar18 + 1;
            local_31 = *(int *)pQVar18 != 0;
            UNLOCK();
          }
          local_1c0 = pQVar27;
          iVar11 = *(int *)pQVar27;
          if (1 < iVar11 + 1U) {
            LOCK();
            *(int *)pQVar27 = *(int *)pQVar27 + 1;
            local_31 = *(int *)pQVar27 != 0;
            UNLOCK();
            iVar11 = *(int *)pQVar27;
          }
          local_1b8 = 0;
          local_1c8 = pQVar18;
          if (iVar11 != -1) {
            if (iVar11 != 0) {
              LOCK();
              *(int *)pQVar27 = *(int *)pQVar27 + -1;
              local_31 = *(int *)pQVar27 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003fefac;
            }
            QArrayData::deallocate(pQVar27,2,8);
          }
LAB_1003fefac:
          if (*(int *)pQVar18 != -1) {
            if (*(int *)pQVar18 != 0) {
              LOCK();
              *(int *)pQVar18 = *(int *)pQVar18 + -1;
              local_31 = *(int *)pQVar18 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003fefd7;
            }
            QArrayData::deallocate(pQVar18,2,8);
          }
LAB_1003fefd7:
          if (*(int *)local_1e8 != -1) {
            if (*(int *)local_1e8 != 0) {
              LOCK();
              *(int *)local_1e8 = *(int *)local_1e8 + -1;
              local_31 = *(int *)local_1e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ff00d;
            }
            QArrayData::deallocate(local_1e8,2,8);
          }
LAB_1003ff00d:
          FUN_100419ac0(&local_100,local_1e0);
          FUN_10041a5a0(local_1e0);
          local_43c = local_43c + -1;
        }
        if (1 < *(uint *)local_110) {
          FUN_10041dc30(&local_110,*(uint *)(local_110 + 4));
        }
        uVar16 = FUN_100129b20(&local_108,
                               *(undefined8 *)
                                (local_110 + ((int)*(uint *)(local_110 + 8) + lVar12) * 8 + 0x10));
        FUN_10012c3d0(&local_208,uVar16);
        local_200 = local_208 + (long)*(int *)(local_208 + 8) * 8 + 0x10;
        local_1f8 = local_208 + (long)*(int *)(local_208 + 0xc) * 8 + 0x10;
        if (*(int *)(local_208 + 8) != *(int *)(local_208 + 0xc)) {
          do {
            local_1f0 = 1;
            plVar19 = *(long **)local_200;
            (**(code **)(*plVar19 + 0xa8))(&local_240,plVar19);
            if (1 < *(uint *)local_110) {
              FUN_10041dc30(&local_110,*(uint *)(local_110 + 4));
            }
            uVar1 = **(undefined4 **)
                      (local_110 + ((int)*(uint *)(local_110 + 8) + lVar12) * 8 + 0x10);
            uVar9 = CHwNetAdapter::getSysIndex();
            (**(code **)(*plVar19 + 0xa8))(&local_248,plVar19);
            local_238[0] = 0;
            local_230.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_240;
            if (1 < *(int *)local_240 + 1U) {
              LOCK();
              *(int *)local_240 = *(int *)local_240 + 1;
              local_31 = *(int *)local_240 != 0;
              UNLOCK();
            }
            local_220 = local_248;
            if (1 < *(int *)local_248 + 1U) {
              LOCK();
              *(int *)local_248 = *(int *)local_248 + 1;
              local_31 = *(int *)local_248 != 0;
              UNLOCK();
            }
            puVar4 = PTR_shared_null_1021e1288;
            local_218 = PTR_shared_null_1021e1288;
            iVar11 = *(int *)PTR_shared_null_1021e1288;
            if (1 < iVar11 + 1U) {
              LOCK();
              *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
              local_31 = *(int *)puVar4 != 0;
              UNLOCK();
              iVar11 = *(int *)puVar4;
            }
            local_210 = 0;
            local_228 = uVar1;
            local_224 = uVar9;
            if (iVar11 != -1) {
              if (iVar11 != 0) {
                LOCK();
                *(int *)puVar4 = *(int *)puVar4 + -1;
                local_31 = *(int *)puVar4 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003ff1c1;
              }
              QArrayData::deallocate((QArrayData *)puVar4,2,8);
            }
LAB_1003ff1c1:
            if (*(int *)local_248 != -1) {
              if (*(int *)local_248 != 0) {
                LOCK();
                *(int *)local_248 = *(int *)local_248 + -1;
                local_31 = *(int *)local_248 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003ff1f7;
              }
              QArrayData::deallocate(local_248,2,8);
            }
LAB_1003ff1f7:
            if (*(int *)local_240 != -1) {
              if (*(int *)local_240 != 0) {
                LOCK();
                *(int *)local_240 = *(int *)local_240 + -1;
                local_31 = *(int *)local_240 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003ff230;
              }
              QArrayData::deallocate(local_240,2,8);
            }
LAB_1003ff230:
            uVar20 = CHwNetAdapter::getSysIndex();
            if ((uVar20 & 0x10000000) != 0) {
              if (1 < *(uint *)local_110) {
                FUN_10041dc30(&local_110,*(uint *)(local_110 + 4));
              }
              if (**(int **)(local_110 + ((int)*(uint *)(local_110 + 8) + lVar12) * 8 + 0x10) == 0)
              {
                local_224 = CHwNetAdapter::getSysIndex();
                local_224 = local_224 & 0xfffffff;
              }
              uVar16 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
              FUN_100175410(uVar16);
              uVar16 = CParallelsNetworkConfig::getVirtualNetworks();
              uVar9 = CHwNetAdapter::getSysIndex();
              lVar14 = FUN_100b3f210(uVar16,uVar9 & 0xfffffff);
              if (lVar14 != 0) {
                CVirtualNetwork::getNetworkID();
                QString::operator=(&local_230,&local_250);
                if (*(int *)local_250.field0_0x0 != -1) {
                  if (*(int *)local_250.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
                    local_31 = *(int *)local_250.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ff31a;
                  }
                  QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
                }
              }
            }
LAB_1003ff31a:
            FUN_100419ac0(&local_100,local_238);
            FUN_10041a5a0(local_238);
            local_200 = local_200 + 8;
          } while (local_200 != local_1f8);
        }
        pDVar6 = local_208;
        local_1f0 = 1;
        pQVar27 = (QArrayData *)PTR_shared_null_1021e1288;
        if (*(int *)local_208 != -1) {
          if (*(int *)local_208 != 0) {
            LOCK();
            *(int *)local_208 = *(int *)local_208 + -1;
            local_31 = *(int *)local_208 != 0;
            UNLOCK();
            pQVar27 = (QArrayData *)PTR_shared_null_1021e1288;
            if ((bool)local_31) goto LAB_1003ff407;
          }
          iVar11 = *(int *)(local_208 + 0xc);
          if (iVar11 != *(int *)(local_208 + 8)) {
            lVar14 = (long)*(int *)(local_208 + 8) * 8 + (long)iVar11 * -8;
            pDVar23 = local_208 + (long)iVar11 * 8 + 8;
            do {
              if (*(long **)pDVar23 != (long *)0x0) {
                (**(code **)(**(long **)pDVar23 + 0x88))();
              }
              pDVar23 = pDVar23 + -8;
              lVar14 = lVar14 + 8;
            } while (lVar14 != 0);
          }
          QListData::dispose(pDVar6);
          pQVar27 = (QArrayData *)PTR_shared_null_1021e1288;
        }
      }
LAB_1003ff407:
      FUN_10041a5a0(local_1a0);
      lVar12 = lVar12 + 1;
    } while (lVar12 < (long)(int)*(uint *)(local_110 + 0xc) - (long)(int)*(uint *)(local_110 + 8));
  }
  puVar4 = PTR_shared_null_1021e1288;
  local_280[0] = 1;
  local_278 = PTR_shared_null_1021e1288;
  iVar11 = *(int *)PTR_shared_null_1021e1288;
  if (1 < iVar11 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
    local_31 = *(int *)puVar4 != 0;
    UNLOCK();
    iVar11 = *(int *)puVar4;
  }
  local_270 = 1;
  local_26c = 0xffffffff;
  local_268 = puVar4;
  if (1 < iVar11 + 1U) {
    LOCK();
    *(int *)puVar4 = *(int *)puVar4 + 1;
    local_31 = *(int *)puVar4 != 0;
    UNLOCK();
    iVar11 = *(int *)puVar4;
  }
  local_260 = puVar4;
  if (1 < iVar11 + 1U) {
    LOCK();
    *(int *)puVar4 = *(int *)puVar4 + 1;
    local_31 = *(int *)puVar4 != 0;
    UNLOCK();
  }
  local_258 = 0;
  FUN_100419c20(&local_100,local_280);
  FUN_10041a5a0(local_280);
  if (*(int *)puVar4 != -1) {
    if (*(int *)puVar4 == 0) {
LAB_1003ff4ef:
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
    else {
      LOCK();
      *(int *)puVar4 = *(int *)puVar4 + -1;
      local_31 = *(int *)puVar4 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1003ff4ef;
    }
    if (*(int *)puVar4 != -1) {
      if (*(int *)puVar4 == 0) {
LAB_1003ff520:
        QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
      }
      else {
        LOCK();
        *(int *)puVar4 = *(int *)puVar4 + -1;
        local_31 = *(int *)puVar4 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_1003ff520;
      }
      if (*(int *)puVar4 != -1) {
        if (*(int *)puVar4 != 0) {
          LOCK();
          *(int *)puVar4 = *(int *)puVar4 + -1;
          local_31 = *(int *)puVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003ff567;
        }
        QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
      }
    }
  }
LAB_1003ff567:
  QObject::property((char *)&local_298);
  QVariant::toString();
  QVariant::~QVariant(&local_298);
  uVar16 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_2b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_288;
  if (1 < *(int *)local_288 + 1U) {
    LOCK();
    *(int *)local_288 = *(int *)local_288 + 1;
    local_31 = *(int *)local_288 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1df30be);
  QString::append(&local_2b0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ff620;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003ff620:
  FUN_1003e1800(&local_2a8,uVar16,&local_2b0,0);
  cVar7 = QVariant::toBool();
  QVariant::~QVariant(&local_2a8);
  if (*(int *)local_2b0.field0_0x0 != -1) {
    if (*(int *)local_2b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2b0.field0_0x0 = *(int *)local_2b0.field0_0x0 + -1;
      local_31 = *(int *)local_2b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ff688;
    }
    QArrayData::deallocate((QArrayData *)local_2b0.field0_0x0,2,8);
  }
LAB_1003ff688:
  if (cVar7 == '\0') {
    QMetaObject::tr((char *)&local_2e8,PTR_staticMetaObject_1021e1410,
                    (int)PTR_s_Disconnected_1022705b0);
  }
  else {
    QMetaObject::tr((char *)&local_2e8,PTR_staticMetaObject_1021e1410,
                    (int)PTR_s_Disconnect_1022705a8);
  }
  iVar11 = DAT_100e1b1a4;
  local_2e0[0] = 0;
  local_2d8 = local_2e8;
  if (1 < *(int *)local_2e8 + 1U) {
    LOCK();
    *(int *)local_2e8 = *(int *)local_2e8 + 1;
    local_31 = *(int *)local_2e8 != 0;
    UNLOCK();
  }
  local_2d0 = iVar11;
  local_2cc = 0xffffffff;
  local_2c8 = puVar4;
  iVar10 = *(int *)puVar4;
  if (1 < iVar10 + 1U) {
    LOCK();
    *(int *)puVar4 = *(int *)puVar4 + 1;
    local_31 = *(int *)puVar4 != 0;
    UNLOCK();
    iVar10 = *(int *)puVar4;
  }
  local_2c0 = puVar4;
  if (1 < iVar10 + 1U) {
    LOCK();
    *(int *)puVar4 = *(int *)puVar4 + 1;
    local_31 = *(int *)puVar4 != 0;
    UNLOCK();
    iVar10 = *(int *)puVar4;
  }
  local_2b8 = 0;
  if (iVar10 != -1) {
    if (iVar10 == 0) {
LAB_1003ff912:
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
    else {
      LOCK();
      *(int *)puVar4 = *(int *)puVar4 + -1;
      local_31 = *(int *)puVar4 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1003ff912;
    }
    if (*(int *)puVar4 != -1) {
      if (*(int *)puVar4 != 0) {
        LOCK();
        *(int *)puVar4 = *(int *)puVar4 + -1;
        local_31 = *(int *)puVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003ff95c;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
LAB_1003ff95c:
  if (*(int *)local_2e8 != -1) {
    if (*(int *)local_2e8 != 0) {
      LOCK();
      *(int *)local_2e8 = *(int *)local_2e8 + -1;
      local_31 = *(int *)local_2e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ff992;
    }
    QArrayData::deallocate(local_2e8,2,8);
  }
LAB_1003ff992:
  FUN_100419c20(&local_100,local_2e0);
  QObject::blockSignals(SUB81(pcVar15,0));
  QObject::property((char *)&local_300);
  FUN_10041de20(&local_2f0,&local_300);
  QVariant::~QVariant(&local_300);
  if (local_2f0 != local_100) {
    uVar9 = local_2f0[3];
    uVar8 = local_2f0[2];
    if (uVar9 - uVar8 == local_100[3] - local_100[2]) {
      if (uVar9 != uVar8) {
        puVar25 = local_2f0 + (long)(int)uVar8 * 2 + 4;
        puVar26 = local_100 + (long)(int)local_100[2] * 2 + 4;
        lVar12 = (long)(int)uVar9 * 8 + (long)(int)uVar8 * -8;
        do {
          pcVar2 = *(char **)puVar25;
          pcVar3 = *(char **)puVar26;
          if (((((*pcVar3 != *pcVar2) || (*(int *)(pcVar3 + 0x10) != *(int *)(pcVar2 + 0x10))) ||
               (*(int *)(pcVar3 + 0x14) != *(int *)(pcVar2 + 0x14))) ||
              ((cVar7 = operator==((QString *)(pcVar3 + 0x18),(QString *)(pcVar2 + 0x18)),
               cVar7 == '\0' || (pcVar3[0x28] != pcVar2[0x28])))) ||
             (cVar7 = operator==((QString *)(pcVar3 + 8),(QString *)(pcVar2 + 8)), cVar7 == '\0'))
          goto LAB_1003ffab7;
          puVar25 = puVar25 + 2;
          puVar26 = puVar26 + 2;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
    }
    else {
LAB_1003ffab7:
      FUN_10013dd60(pcVar15);
      FUN_10041e050(&local_320,&local_100);
      local_318 = (undefined8 *)(local_320 + 0x10 + (long)*(int *)(local_320 + 8) * 8);
      local_310 = (undefined8 *)(local_320 + 0x10 + (long)*(int *)(local_320 + 0xc) * 8);
      local_308 = 1;
      if (*(int *)(local_320 + 8) != *(int *)(local_320 + 0xc)) {
        do {
          pcVar2 = (char *)*local_318;
          local_350[0] = *pcVar2;
          local_348 = *(int **)(pcVar2 + 8);
          if (1 < *local_348 + 1U) {
            LOCK();
            *local_348 = *local_348 + 1;
            local_31 = *local_348 != 0;
            UNLOCK();
          }
          uVar20 = *(ulong *)(pcVar2 + 0x10);
          local_338.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(pcVar2 + 0x18);
          if (1 < *(int *)local_338.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_338.field0_0x0 = *(int *)local_338.field0_0x0 + 1;
            local_31 = *(int *)local_338.field0_0x0 != 0;
            UNLOCK();
          }
          local_330 = *(int **)(pcVar2 + 0x20);
          if (1 < *local_330 + 1U) {
            LOCK();
            *local_330 = *local_330 + 1;
            local_31 = *local_330 != 0;
            UNLOCK();
          }
          cVar7 = pcVar2[0x28];
          local_340 = uVar20;
          local_328 = cVar7;
          if (local_308 != 0) {
            if (local_350[0] == '\0') {
              local_340._0_4_ = (int)uVar20;
              if ((int)local_340 == iVar11) {
                QVariant::QVariant(&local_360,iVar11);
                local_368 = (QArrayData *)PTR_shared_null_1021e1288;
                local_370 = (QArrayData *)PTR_shared_null_1021e1288;
                QMetaObject::tr((char *)&local_378,PTR_staticMetaObject_1021e1410,
                                (int)PTR_s_Disconnected_1022705b0);
                FUN_10013d930(pcVar15,&local_348,iVar11,1,&local_360,&local_368,&local_370,
                              &local_378);
                if (*(int *)local_378 != -1) {
                  if (*(int *)local_378 != 0) {
                    LOCK();
                    *(int *)local_378 = *(int *)local_378 + -1;
                    local_31 = *(int *)local_378 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ffc93;
                  }
                  QArrayData::deallocate(local_378,2,8);
                }
LAB_1003ffc93:
                if (*(int *)local_370 != -1) {
                  if (*(int *)local_370 != 0) {
                    LOCK();
                    *(int *)local_370 = *(int *)local_370 + -1;
                    local_31 = *(int *)local_370 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ffcc9;
                  }
                  QArrayData::deallocate(local_370,2,8);
                }
LAB_1003ffcc9:
                if (*(int *)local_368 != -1) {
                  if (*(int *)local_368 != 0) {
                    LOCK();
                    *(int *)local_368 = *(int *)local_368 + -1;
                    local_31 = *(int *)local_368 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ffcff;
                  }
                  QArrayData::deallocate(local_368,2,8);
                }
LAB_1003ffcff:
                QVariant::~QVariant(&local_360);
              }
              else {
                iVar10 = (int)local_340;
                QString::number((int)&local_3a0,iVar10);
                local_398.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_3a0;
                if (1 < *(int *)local_3a0 + 1U) {
                  LOCK();
                  *(int *)local_3a0 = *(int *)local_3a0 + 1;
                  local_31 = *(int *)local_3a0 != 0;
                  UNLOCK();
                }
                QString::fromUtf8_helper((char *)&local_40,0x1db6a71);
                QString::append(&local_398);
                if (*(int *)local_40 != -1) {
                  if (*(int *)local_40 != 0) {
                    LOCK();
                    *(int *)local_40 = *(int *)local_40 + -1;
                    local_31 = *(int *)local_40 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ffd9e;
                  }
                  QArrayData::deallocate(local_40,2,8);
                }
LAB_1003ffd9e:
                QString::number((int)&local_3a8,local_340._4_4_);
                local_390.field0_0x0 = local_398.field0_0x0;
                if (1 < *(int *)local_398.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_398.field0_0x0 = *(int *)local_398.field0_0x0 + 1;
                  local_31 = *(int *)local_398.field0_0x0 != 0;
                  UNLOCK();
                }
                QString::append(&local_390);
                QVariant::QVariant(&local_388,&local_390);
                local_3b0 = (QArrayData *)PTR_shared_null_1021e1288;
                local_3b8 = (QArrayData *)PTR_shared_null_1021e1288;
                FUN_10013d930(pcVar15,&local_348,uVar20 & 0xffffffff,cVar7 == '\0',&local_388,
                              &local_3b0,&local_330,&local_3b8);
                if (*(int *)local_3b8 != -1) {
                  if (*(int *)local_3b8 != 0) {
                    LOCK();
                    *(int *)local_3b8 = *(int *)local_3b8 + -1;
                    local_31 = *(int *)local_3b8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ffe78;
                  }
                  QArrayData::deallocate(local_3b8,2,8);
                }
LAB_1003ffe78:
                if (*(int *)local_3b0 != -1) {
                  if (*(int *)local_3b0 != 0) {
                    LOCK();
                    *(int *)local_3b0 = *(int *)local_3b0 + -1;
                    local_31 = *(int *)local_3b0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ffeae;
                  }
                  QArrayData::deallocate(local_3b0,2,8);
                }
LAB_1003ffeae:
                QVariant::~QVariant(&local_388);
                if (*(int *)local_390.field0_0x0 != -1) {
                  if (*(int *)local_390.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_390.field0_0x0 = *(int *)local_390.field0_0x0 + -1;
                    local_31 = *(int *)local_390.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ffeec;
                  }
                  QArrayData::deallocate((QArrayData *)local_390.field0_0x0,2,8);
                }
LAB_1003ffeec:
                if (*(int *)local_3a8 != -1) {
                  if (*(int *)local_3a8 != 0) {
                    LOCK();
                    *(int *)local_3a8 = *(int *)local_3a8 + -1;
                    local_31 = *(int *)local_3a8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003fff22;
                  }
                  QArrayData::deallocate(local_3a8,2,8);
                }
LAB_1003fff22:
                if (*(int *)local_398.field0_0x0 != -1) {
                  if (*(int *)local_398.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_398.field0_0x0 = *(int *)local_398.field0_0x0 + -1;
                    local_31 = *(int *)local_398.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003fff58;
                  }
                  QArrayData::deallocate((QArrayData *)local_398.field0_0x0,2,8);
                }
LAB_1003fff58:
                if (*(int *)local_3a0 != -1) {
                  if (*(int *)local_3a0 != 0) {
                    LOCK();
                    *(int *)local_3a0 = *(int *)local_3a0 + -1;
                    local_31 = *(int *)local_3a0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003fff8e;
                  }
                  QArrayData::deallocate(local_3a0,2,8);
                }
LAB_1003fff8e:
                iVar10 = QComboBox::count();
                QVariant::QVariant(&local_3c8,(int)local_340);
                iVar24 = (int)pcVar15;
                QComboBox::setItemData(iVar24,(QVariant *)(ulong)(iVar10 - 1),(int)&local_3c8);
                QVariant::~QVariant(&local_3c8);
                if (local_43c < local_340._4_4_) {
                  iVar10 = QComboBox::count();
                  QVariant::QVariant(&local_3d8,local_340._4_4_);
                  QComboBox::setItemData(iVar24,(QVariant *)(ulong)(iVar10 - 1),(int)&local_3d8);
                  QVariant::~QVariant(&local_3d8);
                  iVar10 = QComboBox::count();
                  QVariant::QVariant(&local_3e8,&local_338);
                  QComboBox::setItemData(iVar24,(QVariant *)(ulong)(iVar10 - 1),(int)&local_3e8);
                  QVariant::~QVariant(&local_3e8);
                  iVar10 = QComboBox::count();
                  local_400.field0_0x0 =
                       (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
                  QVariant::QVariant(&local_3f8,&local_400);
                  QComboBox::setItemData(iVar24,(QVariant *)(ulong)(iVar10 - 1),(int)&local_3f8);
                  QVariant::~QVariant(&local_3f8);
                  if (*(int *)local_400.field0_0x0 != -1) {
                    if (*(int *)local_400.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_400.field0_0x0 = *(int *)local_400.field0_0x0 + -1;
                      local_31 = *(int *)local_400.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1004000f6;
                    }
                    QArrayData::deallocate((QArrayData *)local_400.field0_0x0,2,8);
                  }
LAB_1004000f6:
                  iVar10 = QComboBox::count();
                  local_418.field0_0x0 =
                       (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
                  QVariant::QVariant(&local_410,&local_418);
                  QComboBox::setItemData(iVar24,(QVariant *)(ulong)(iVar10 - 1),(int)&local_410);
                  QVariant::~QVariant(&local_410);
                  if (*(int *)local_418.field0_0x0 != -1) {
                    if (*(int *)local_418.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_418.field0_0x0 = *(int *)local_418.field0_0x0 + -1;
                      local_31 = *(int *)local_418.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100400181;
                    }
                    QArrayData::deallocate((QArrayData *)local_418.field0_0x0,2,8);
                  }
                }
              }
            }
            else {
              FUN_10013daf0(pcVar15);
            }
LAB_100400181:
            local_308 = 0;
          }
          FUN_10041a5a0(local_350);
          local_318 = local_318 + 1;
          uVar9 = local_308 ^ 1;
          bVar28 = local_308 != 1;
          local_308 = uVar9;
        } while ((bVar28) && (local_318 != local_310));
      }
      FUN_100419d80(&local_320);
    }
  }
  QObject::blockSignals(SUB81(pcVar15,0));
  if (DAT_102273fdc == 0) {
    DAT_102273fdc = FUN_10041def0("QList<DeviceSelectorComboItem>",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_428,DAT_102273fdc,&local_100,0);
  QObject::setProperty(pcVar15,(QVariant *)"InitInfo");
  QVariant::~QVariant(&local_428);
  FUN_100419d80(&local_2f0);
  FUN_10041a5a0(local_2e0);
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_31 = *(int *)local_288 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10040029e;
    }
    QArrayData::deallocate(local_288,2,8);
  }
LAB_10040029e:
  pDVar6 = local_110;
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100400307;
    }
    iVar11 = *(int *)(local_110 + 0xc);
    if (iVar11 != *(int *)(local_110 + 8)) {
      lVar12 = (long)*(int *)(local_110 + 8) * 8 + (long)iVar11 * -8;
      pDVar23 = local_110 + (long)iVar11 * 8 + 8;
      do {
        if (*(void **)pDVar23 != (void *)0x0) {
          operator_delete(*(void **)pDVar23);
        }
        pDVar23 = pDVar23 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100400307:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100400355;
    }
    if (*(long *)(local_108 + 0x10) != 0) {
      FUN_10012bff0();
      QMapDataBase::freeTree(local_108,(int)*(undefined8 *)(local_108 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_108);
  }
LAB_100400355:
  FUN_100419d80(&local_100);
LAB_10040069a:
  QVariant::~QVariant(&local_78);
  return;
}

