
undefined8 FUN_10026e760(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  QArrayData *pQVar7;
  Data *pDVar8;
  Data *pDVar9;
  char *pcVar10;
  long lVar11;
  Data_conflict local_218;
  undefined4 local_210;
  QArrayData *local_208;
  int *local_200 [4];
  QVariant local_1e0 [2];
  undefined1 local_1c8 [40];
  int *local_1a0 [4];
  QVariant local_180 [2];
  undefined1 local_168 [40];
  int *local_140 [4];
  QVariant local_120 [2];
  undefined1 local_108 [32];
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  CAppVersion local_d0 [16];
  CAppVersion local_c0 [16];
  AnonymousUnion0 local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  undefined1 local_90 [80];
  AnonymousUnion0 local_40;
  QString local_38;
  undefined1 local_29;
  
  cVar1 = FUN_100d80680();
  if (cVar1 == '\0') {
    uVar6 = FUN_1001d50a0();
    cVar1 = FUN_100ae8a70(uVar6);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else {
    if (DAT_102310930 == (void *)0x0) {
      pvVar4 = operator_new(0x18);
      FUN_1001e5440(pvVar4);
      DAT_102273630 = 1;
      DAT_102310930 = pvVar4;
    }
    iVar2 = FUN_1001e5550(DAT_102310930,0);
    if (-1 < iVar2) {
      return 0;
    }
  }
  FUN_100dfa5a0(1);
  local_c0 = (CAppVersion  [16])CAppVersion::currentVersion();
  cVar1 = FUN_100d80680();
  if (cVar1 == '\0') {
    MacUtils::getOtherRunningAppInstancePath((bool *)&local_d8);
    local_d0 = (CAppVersion  [16])CAppVersion::fromMacBundle(&local_d8);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_29 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026e8a9;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
  }
  else {
    if (DAT_102310930 == (void *)0x0) {
      pvVar4 = operator_new(0x18);
      FUN_1001e5440(pvVar4);
      DAT_102273630 = 1;
      DAT_102310930 = pvVar4;
    }
    pauVar5 = (undefined1 (*) [16])FUN_1001e5620(DAT_102310930);
    local_d0 = *(CAppVersion (*) [16])pauVar5;
  }
LAB_10026e8a9:
  iVar2 = CAppVersion::compare(local_d0,local_c0);
  if (1 < DAT_10230ffd0) {
    CAppVersion::toString();
    QString::toUtf8();
    pQVar7 = local_e0 + *(long *)(local_e0 + 0x10);
    CAppVersion::toString();
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,
                  "Current version: [%s]. Another instance version: [%s]. Res: %d",pQVar7,
                  (QArrayData *)(local_108._24_8_ + *(long *)(local_108._24_8_ + 0x10)),iVar2);
    if (*(int *)local_108._24_8_ != -1) {
      if (*(int *)local_108._24_8_ != 0) {
        LOCK();
        *(int *)local_108._24_8_ = *(int *)local_108._24_8_ + -1;
        local_29 = *(int *)local_108._24_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026e98e;
      }
      QArrayData::deallocate((QArrayData *)local_108._24_8_,1,8);
    }
LAB_10026e98e:
    if (*(int *)local_108._16_8_ != -1) {
      if (*(int *)local_108._16_8_ != 0) {
        LOCK();
        *(int *)local_108._16_8_ = *(int *)local_108._16_8_ + -1;
        local_29 = *(int *)local_108._16_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026e9c4;
      }
      QArrayData::deallocate((QArrayData *)local_108._16_8_,2,8);
    }
LAB_10026e9c4:
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_29 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026e9fa;
      }
      QArrayData::deallocate(local_e0,1,8);
    }
LAB_10026e9fa:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_29 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026ea30;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
  }
LAB_10026ea30:
  if (iVar2 != 0) {
    cVar1 = FUN_100d80680();
    if (cVar1 == '\0') goto LAB_10026ec8e;
    iVar3 = CMessageManager::instance();
    if (iVar2 == 1) {
      local_168._8_8_ = PTR_shared_null_1021e15e8;
      local_168._0_8_ = PTR_shared_null_1021e15e8;
      local_1c8._32_8_ = QString::fromAscii_helper("1onAnotherVersionRunningMessageClosed()",0x27);
      local_1c8._24_4_ = 0x80000000;
      local_1c8._16_8_ = (QMetaObject *)0x0;
      FUN_100a1c600(local_1a0,param_1,local_1c8 + 0x20,local_1c8 + 0x10);
      CMessageManager::showMessageBox
                (iVar3,(QWidget *)0x80015374,(QStringList *)0x0,(QStringList *)(local_168 + 8),
                 (CSlotInfo *)local_168,SUB81(local_1a0,0));
      QVariant::~QVariant(local_180);
      if (local_1a0[0] != (int *)0x0) {
        LOCK();
        *local_1a0[0] = *local_1a0[0] + -1;
        local_29 = *local_1a0[0] != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_1a0[0] != (int *)0x0)) {
          operator_delete(local_1a0[0]);
        }
      }
      QVariant::~QVariant((QVariant *)(local_1c8 + 0x10));
      if (*(int *)local_1c8._32_8_ != -1) {
        if (*(int *)local_1c8._32_8_ != 0) {
          LOCK();
          *(int *)local_1c8._32_8_ = *(int *)local_1c8._32_8_ + -1;
          local_29 = *(int *)local_1c8._32_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10026eb5b;
        }
        QArrayData::deallocate((QArrayData *)local_1c8._32_8_,2,8);
      }
LAB_10026eb5b:
      uVar6 = local_168._0_8_;
      if (*(int *)local_168._0_8_ != -1) {
        if (*(int *)local_168._0_8_ != 0) {
          LOCK();
          *(int *)local_168._0_8_ = *(int *)local_168._0_8_ + -1;
          local_29 = *(int *)local_168._0_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10026ebf0;
        }
        iVar2 = *(int *)(local_168._0_8_ + 0xc);
        if (iVar2 != *(int *)(local_168._0_8_ + 8)) {
          lVar11 = (long)*(int *)(local_168._0_8_ + 8) * 8 + (long)iVar2 * -8;
          pDVar8 = (Data *)(local_168._0_8_ + (long)iVar2 * 8 + 8);
          do {
            pQVar7 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar7 == 0) {
LAB_10026ebcf:
              QArrayData::deallocate(pQVar7,2,8);
            }
            else if (*(int *)pQVar7 != -1) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_29 = *(int *)pQVar7 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar7 = *(QArrayData **)pDVar8;
                goto LAB_10026ebcf;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar11 = lVar11 + 8;
          } while (lVar11 != 0);
        }
        QListData::dispose((Data *)uVar6);
      }
LAB_10026ebf0:
      pDVar8 = (Data *)local_168._8_8_;
      if (*(int *)local_168._8_8_ == -1) goto LAB_10026f3f0;
      if (*(int *)local_168._8_8_ != 0) {
        LOCK();
        *(int *)local_168._8_8_ = *(int *)local_168._8_8_ + -1;
        local_29 = *(int *)local_168._8_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026f3f0;
      }
      iVar2 = *(int *)(local_168._8_8_ + 0xc);
      if (iVar2 != *(int *)(local_168._8_8_ + 8)) {
        lVar11 = (long)*(int *)(local_168._8_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar9 = (Data *)(local_168._8_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar7 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar7 == 0) {
LAB_10026ec70:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_29 = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar7 = *(QArrayData **)pDVar9;
              goto LAB_10026ec70;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
    }
    else {
      local_1c8._8_8_ = PTR_shared_null_1021e15e8;
      local_1c8._0_8_ = PTR_shared_null_1021e15e8;
      local_208 = (QArrayData *)
                  QString::fromAscii_helper("1onAnotherVersionRunningMessageClosed()",0x27);
      local_210 = 0x80000000;
      local_218.field7 = 0;
      FUN_100a1c600(local_200,param_1,&local_208,&local_218);
      CMessageManager::showMessageBox
                (iVar3,(QWidget *)0x80015373,(QStringList *)0x0,(QStringList *)(local_1c8 + 8),
                 (CSlotInfo *)local_1c8,false);
      QVariant::~QVariant(local_1e0);
      if (local_200[0] != (int *)0x0) {
        LOCK();
        *local_200[0] = *local_200[0] + -1;
        local_29 = *local_200[0] != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_200[0] != (int *)0x0)) {
          operator_delete(local_200[0]);
        }
      }
      QVariant::~QVariant((QVariant *)&local_218);
      if (*(int *)local_208 != -1) {
        if (*(int *)local_208 != 0) {
          LOCK();
          *(int *)local_208 = *(int *)local_208 + -1;
          local_29 = *(int *)local_208 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10026f086;
        }
        QArrayData::deallocate(local_208,2,8);
      }
LAB_10026f086:
      uVar6 = local_1c8._0_8_;
      if (*(int *)local_1c8._0_8_ != -1) {
        if (*(int *)local_1c8._0_8_ != 0) {
          LOCK();
          *(int *)local_1c8._0_8_ = *(int *)local_1c8._0_8_ + -1;
          local_29 = *(int *)local_1c8._0_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10026f120;
        }
        iVar2 = *(int *)(local_1c8._0_8_ + 0xc);
        if (iVar2 != *(int *)(local_1c8._0_8_ + 8)) {
          lVar11 = (long)*(int *)(local_1c8._0_8_ + 8) * 8 + (long)iVar2 * -8;
          pDVar8 = (Data *)(local_1c8._0_8_ + (long)iVar2 * 8 + 8);
          do {
            pQVar7 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar7 == 0) {
LAB_10026f0ff:
              QArrayData::deallocate(pQVar7,2,8);
            }
            else if (*(int *)pQVar7 != -1) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_29 = *(int *)pQVar7 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar7 = *(QArrayData **)pDVar8;
                goto LAB_10026f0ff;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar11 = lVar11 + 8;
          } while (lVar11 != 0);
        }
        QListData::dispose((Data *)uVar6);
      }
LAB_10026f120:
      pDVar8 = (Data *)local_1c8._8_8_;
      if (*(int *)local_1c8._8_8_ == -1) goto LAB_10026f3f0;
      if (*(int *)local_1c8._8_8_ != 0) {
        LOCK();
        *(int *)local_1c8._8_8_ = *(int *)local_1c8._8_8_ + -1;
        local_29 = *(int *)local_1c8._8_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026f3f0;
      }
      iVar2 = *(int *)(local_1c8._8_8_ + 0xc);
      if (iVar2 != *(int *)(local_1c8._8_8_ + 8)) {
        lVar11 = (long)*(int *)(local_1c8._8_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar9 = (Data *)(local_1c8._8_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar7 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar7 == 0) {
LAB_10026f1a0:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_29 = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar7 = *(QArrayData **)pDVar9;
              goto LAB_10026f1a0;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
    }
LAB_10026f3e8:
    QListData::dispose(pDVar8);
LAB_10026f3f0:
    CAbstractTask::setWaitForSubTaskCompletion();
    return 0;
  }
LAB_10026ec8e:
  cVar1 = FUN_100d80680();
  if (cVar1 != '\0') {
    if (DAT_102310930 == (void *)0x0) {
      pvVar4 = operator_new(0x18);
      FUN_1001e5440(pvVar4);
      DAT_102273630 = 1;
      DAT_102310930 = pvVar4;
    }
    iVar2 = FUN_1001e5550(DAT_102310930,4);
    if (iVar2 < 0) {
      iVar2 = CMessageManager::instance();
      local_108._8_8_ = PTR_shared_null_1021e15e8;
      local_108._0_8_ = PTR_shared_null_1021e15e8;
      local_168._32_8_ = QString::fromAscii_helper("1onAnotherVersionRunningMessageClosed()",0x27);
      local_168._24_4_ = 0x80000000;
      local_168._16_8_ = (QMetaObject *)0x0;
      FUN_100a1c600(local_140,param_1,local_168 + 0x20,local_168 + 0x10);
      CMessageManager::showMessageBox
                (iVar2,(QWidget *)0x80015352,(QStringList *)0x0,(QStringList *)(local_108 + 8),
                 (CSlotInfo *)local_108,SUB81(local_140,0));
      QVariant::~QVariant(local_120);
      if (local_140[0] != (int *)0x0) {
        LOCK();
        *local_140[0] = *local_140[0] + -1;
        local_29 = *local_140[0] != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_140[0] != (int *)0x0)) {
          operator_delete(local_140[0]);
        }
      }
      QVariant::~QVariant((QVariant *)(local_168 + 0x10));
      if (*(int *)local_168._32_8_ != -1) {
        if (*(int *)local_168._32_8_ != 0) {
          LOCK();
          *(int *)local_168._32_8_ = *(int *)local_168._32_8_ + -1;
          local_29 = *(int *)local_168._32_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10026f2c9;
        }
        QArrayData::deallocate((QArrayData *)local_168._32_8_,2,8);
      }
LAB_10026f2c9:
      uVar6 = local_108._0_8_;
      if (*(int *)local_108._0_8_ != -1) {
        if (*(int *)local_108._0_8_ != 0) {
          LOCK();
          *(int *)local_108._0_8_ = *(int *)local_108._0_8_ + -1;
          local_29 = *(int *)local_108._0_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10026f353;
        }
        iVar2 = *(int *)(local_108._0_8_ + 0xc);
        if (iVar2 != *(int *)(local_108._0_8_ + 8)) {
          lVar11 = (long)*(int *)(local_108._0_8_ + 8) * 8 + (long)iVar2 * -8;
          pDVar8 = (Data *)(local_108._0_8_ + (long)iVar2 * 8 + 8);
          do {
            pQVar7 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar7 == 0) {
LAB_10026f332:
              QArrayData::deallocate(pQVar7,2,8);
            }
            else if (*(int *)pQVar7 != -1) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_29 = *(int *)pQVar7 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar7 = *(QArrayData **)pDVar8;
                goto LAB_10026f332;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar11 = lVar11 + 8;
          } while (lVar11 != 0);
        }
        QListData::dispose((Data *)uVar6);
      }
LAB_10026f353:
      pDVar8 = (Data *)local_108._8_8_;
      if (*(int *)local_108._8_8_ == -1) goto LAB_10026f3f0;
      if (*(int *)local_108._8_8_ != 0) {
        LOCK();
        *(int *)local_108._8_8_ = *(int *)local_108._8_8_ + -1;
        local_29 = *(int *)local_108._8_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026f3f0;
      }
      iVar2 = *(int *)(local_108._8_8_ + 0xc);
      if (iVar2 != *(int *)(local_108._8_8_ + 8)) {
        lVar11 = (long)*(int *)(local_108._8_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar9 = (Data *)(local_108._8_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar7 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar7 == 0) {
LAB_10026f3cf:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_29 = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar7 = *(QArrayData **)pDVar9;
              goto LAB_10026f3cf;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      goto LAB_10026f3e8;
    }
  }
  FUN_1001cda40(local_90,DAT_102310918);
  pQVar7 = (QArrayData *)QString::fromAscii_helper("##",2);
  QtPrivate::QStringList_join
            ((QStringList *)&local_40.field0,local_90,
             (int)*(undefined8 *)(pQVar7 + 0x10) + (int)pQVar7);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_29 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026ed49;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_10026ed49:
  FUN_1001091d0(local_90);
  if (*(int *)(local_40.field1 + 4) == 0) {
    QString::fromUtf8_helper((char *)&local_38,0x1de1063);
    QString::operator=((QString *)&local_40.field0,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026edb1;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_10026edb1:
  FUN_1001c72e0(&local_a0);
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"Another instance of %s is already running",
                local_98 + *(long *)(local_98 + 0x10));
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026ee32;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_10026ee32:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026ee68;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10026ee68:
  uVar6 = FUN_1001d50a0();
  cVar1 = FUN_100ae8a80(uVar6,&local_40,5000);
  local_b0.field1 = local_40.field1;
  if (1 < *(int *)local_40.field1 + 1U) {
    LOCK();
    *(int *)local_40.field1 = *(int *)local_40.field1 + 1;
    local_29 = *(int *)local_40.field1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  pcVar10 = "NOT ";
  if (cVar1 != '\0') {
    pcVar10 = "";
  }
  FUN_100df99c0("","prl_client_app",0,
                "An activation message <%s> to that instance has %sbeen delivered",
                local_a8 + *(long *)(local_a8 + 0x10),pcVar10);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026ef1a;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_10026ef1a:
  if (*(int *)local_b0.field1 != -1) {
    if (*(int *)local_b0.field1 != 0) {
      LOCK();
      *(int *)local_b0.field1 = *(int *)local_b0.field1 + -1;
      local_29 = *(int *)local_b0.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026ef50;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field1,2,8);
  }
LAB_10026ef50:
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      UNLOCK();
      if (*(int *)local_40.field1 != 0) {
        return 0x80015352;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field1,2,8);
  }
  return 0x80015352;
}

