
void FUN_10066c7b0(long param_1)

{
  QList *pQVar1;
  QMapNodeBase *pQVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  QVariant *pQVar10;
  uint *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  QVariant local_520;
  QVariant local_510;
  QVariant local_500;
  QString local_4f0;
  QVariant local_4e8;
  QArrayData *local_4d8;
  QMapNodeBase *local_4d0;
  QString local_4c8;
  QMapNodeBase *local_4c0;
  QString local_4b8;
  QMapNodeBase *local_4b0;
  QVariant local_4a8;
  QArrayData *local_498;
  QArrayData *local_490;
  QArrayData *local_488;
  QString local_480;
  QString local_478;
  QString local_470;
  QString local_468;
  QString local_460;
  QString local_458;
  QArrayData *local_450;
  QArrayData *local_448;
  QString local_440;
  QVariant local_438;
  QArrayData *local_428;
  QVariant local_420;
  QArrayData *local_410;
  QMapNodeBase *local_408;
  QVariant local_400;
  QVariant local_3f0;
  QString local_3e0;
  QVariant local_3d8;
  QArrayData *local_3c8;
  QVariant local_3c0;
  QArrayData *local_3b0;
  QArrayData *local_3a8;
  QArrayData *local_3a0;
  QArrayData *local_398;
  QString local_390;
  QString local_388;
  QString local_380;
  QString local_378;
  QString local_370;
  QString local_368;
  QString local_360;
  QString local_358;
  QArrayData *local_350;
  QString local_348;
  QVariant local_340;
  QArrayData *local_330;
  QArrayData *local_328;
  QArrayData *local_320;
  QString local_318;
  QString local_310;
  QString local_308;
  QString local_300;
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  QString local_2e8;
  QString local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QString local_2c8;
  QString local_2c0;
  QString local_2b8;
  QString local_2b0;
  QVariant local_2a8;
  QArrayData *local_298;
  QMapNodeBase *local_290;
  QDateTime local_288;
  QDateTime local_280;
  long local_278;
  QDateTime local_270;
  CDownloadedKeyInfo local_268 [240];
  Data *local_178;
  Data *local_170;
  Data *local_168;
  uint local_160;
  QArrayData *local_158;
  CDownloadedKeyList local_150 [152];
  Data *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QVariant local_98;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pcVar7 = (char *)CDeclarativeWizardPage::pageContentItem();
  if (pcVar7 == (char *)0x0) {
    return;
  }
  pQVar1 = (QList *)(param_1 + 0x50);
  FUN_100673930(pQVar1);
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  CAbstractWizardPage::wizardModel();
  lVar8 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  if (*(char *)(lVar8 + 0x19a) == '\0') {
    CAbstractWizardPage::wizardModel();
    lVar8 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    if (*(int *)(lVar8 + 0x78) != 4) {
      CAbstractWizardPage::wizardModel();
      QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
      QObject::property((char *)&local_98);
      iVar5 = QVariant::toInt((bool *)&local_98);
      QVariant::~QVariant(&local_98);
      if (iVar5 != 8) {
        QMetaObject::tr((char *)&local_a8,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c824);
        QString::fromUtf8_helper((char *)&local_a0,0x1ddad42);
        QString::append(&local_a0);
        QString::operator=(&local_88,&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10066c920;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_10066c920:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10066c956;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
      }
    }
  }
LAB_10066c956:
  CAbstractWizardPage::wizardModel();
  lVar8 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  local_b0.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar8 + 0x140);
  if (1 < *(int *)local_b0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + 1;
    local_31 = *(int *)local_b0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=((QString *)(param_1 + 0x48),&local_b0);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10066c9d5;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_10066c9d5:
  CDownloadedKeyList::CDownloadedKeyList(local_150);
  local_158 = (QArrayData *)((QString *)(param_1 + 0x48))->field0_0x0;
  if (1 < *(int *)local_158 + 1U) {
    LOCK();
    *(int *)local_158 = *(int *)local_158 + 1;
    local_31 = *(int *)local_158 != 0;
    UNLOCK();
  }
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)local_150,SUB81(&local_158,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10066ca5d;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10066ca5d:
  local_178 = local_b8;
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 == 0) {
      QListData::detach((int)&local_178);
      lVar8 = (long)*(int *)(local_178 + 8);
      if ((local_b8 + (long)*(int *)(local_b8 + 8) * 8 != local_178 + lVar8 * 8) &&
         (lVar13 = *(int *)(local_178 + 0xc) - lVar8,
         lVar13 != 0 && lVar8 <= *(int *)(local_178 + 0xc))) {
        _memcpy(local_178 + lVar8 * 8 + 0x10,local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10,
                lVar13 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + 1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
    }
  }
  local_170 = local_178 + (long)*(int *)(local_178 + 8) * 8 + 0x10;
  local_168 = local_178 + (long)*(int *)(local_178 + 0xc) * 8 + 0x10;
  local_160 = 1;
  if (*(int *)(local_178 + 8) == *(int *)(local_178 + 0xc)) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    do {
      CDownloadedKeyInfo::CDownloadedKeyInfo(local_268,*(CDownloadedKeyInfo **)local_170);
      if (local_160 != 0) {
        cVar4 = CDownloadedKeyInfo::isTrial();
        if (cVar4 == '\0') {
LAB_10066cba4:
          cVar4 = CDownloadedKeyInfo::isTrial();
          if (cVar4 == '\0') {
            CDownloadedKeyInfo::getGracePeriodStartDate();
            local_278 = QDateTime::date();
            QDateTime::~QDateTime(&local_288);
          }
          else {
            CDownloadedKeyInfo::getExpirationDate();
            local_278 = QDateTime::date();
            QDateTime::~QDateTime(&local_280);
          }
          lVar8 = QDate::currentDate();
          if (lVar8 <= local_278) {
            bVar3 = true;
            CDownloadedKeyInfo::isTrial();
          }
          local_290 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
          local_298 = (QArrayData *)QString::fromAscii_helper("downloaded",10);
          pQVar10 = (QVariant *)FUN_10008c590(&local_290,&local_298);
          CBaseNode::toString(SUB81(&local_2b0,0),SUB81(local_268,0));
          QVariant::QVariant(&local_2a8,&local_2b0);
          QVariant::operator=(pQVar10,&local_2a8);
          QVariant::~QVariant(&local_2a8);
          if (*(int *)local_2b0.field0_0x0 != -1) {
            if (*(int *)local_2b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_2b0.field0_0x0 = *(int *)local_2b0.field0_0x0 + -1;
              local_31 = *(int *)local_2b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066ccff;
            }
            QArrayData::deallocate((QArrayData *)local_2b0.field0_0x0,2,8);
          }
LAB_10066ccff:
          if (*(int *)local_298 != -1) {
            if (*(int *)local_298 != 0) {
              LOCK();
              *(int *)local_298 = *(int *)local_298 + -1;
              local_31 = *(int *)local_298 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066cd35;
            }
            QArrayData::deallocate(local_298,2,8);
          }
LAB_10066cd35:
          local_2b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
          lVar8 = QDate::currentDate();
          if (local_278 < lVar8) {
            QMetaObject::tr((char *)&local_320,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c886);
            QString::fromUtf8_helper((char *)&local_318,0x1e0c85f);
            QString::append(&local_318);
            local_310.field0_0x0 = local_318.field0_0x0;
            if (1 < *(int *)local_318.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_318.field0_0x0 = *(int *)local_318.field0_0x0 + 1;
              local_31 = *(int *)local_318.field0_0x0 != 0;
              UNLOCK();
            }
            QString::fromUtf8_helper((char *)&local_70,0x1e31adc);
            QString::append(&local_310);
            if (*(int *)local_70 != -1) {
              if (*(int *)local_70 != 0) {
                LOCK();
                *(int *)local_70 = *(int *)local_70 + -1;
                local_31 = *(int *)local_70 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10066ce12;
              }
              QArrayData::deallocate(local_70,2,8);
            }
LAB_10066ce12:
            QDate::toString(&local_328,&local_278,4);
            local_308.field0_0x0 = local_310.field0_0x0;
            if (1 < *(int *)local_310.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_310.field0_0x0 = *(int *)local_310.field0_0x0 + 1;
              local_31 = *(int *)local_310.field0_0x0 != 0;
              UNLOCK();
            }
            QString::append(&local_308);
            local_300.field0_0x0 = local_308.field0_0x0;
            if (1 < *(int *)local_308.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_308.field0_0x0 = *(int *)local_308.field0_0x0 + 1;
              local_31 = *(int *)local_308.field0_0x0 != 0;
              UNLOCK();
            }
            QString::fromUtf8_helper((char *)&local_68,0x1e0a4fd);
            QString::append(&local_300);
            if (*(int *)local_68 != -1) {
              if (*(int *)local_68 != 0) {
                LOCK();
                *(int *)local_68 = *(int *)local_68 + -1;
                local_31 = *(int *)local_68 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10066ced0;
              }
              QArrayData::deallocate(local_68,2,8);
            }
LAB_10066ced0:
            QString::operator=(&local_2b8,&local_300);
            if (*(int *)local_300.field0_0x0 != -1) {
              if (*(int *)local_300.field0_0x0 != 0) {
                LOCK();
                *(int *)local_300.field0_0x0 = *(int *)local_300.field0_0x0 + -1;
                local_31 = *(int *)local_300.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10066cf15;
              }
              QArrayData::deallocate((QArrayData *)local_300.field0_0x0,2,8);
            }
LAB_10066cf15:
            if (*(int *)local_308.field0_0x0 != -1) {
              if (*(int *)local_308.field0_0x0 != 0) {
                LOCK();
                *(int *)local_308.field0_0x0 = *(int *)local_308.field0_0x0 + -1;
                local_31 = *(int *)local_308.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10066cf4b;
              }
              QArrayData::deallocate((QArrayData *)local_308.field0_0x0,2,8);
            }
LAB_10066cf4b:
            if (*(int *)local_328 != -1) {
              if (*(int *)local_328 != 0) {
                LOCK();
                *(int *)local_328 = *(int *)local_328 + -1;
                local_31 = *(int *)local_328 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10066cf81;
              }
              QArrayData::deallocate(local_328,2,8);
            }
LAB_10066cf81:
            if (*(int *)local_310.field0_0x0 != -1) {
              if (*(int *)local_310.field0_0x0 != 0) {
                LOCK();
                *(int *)local_310.field0_0x0 = *(int *)local_310.field0_0x0 + -1;
                local_31 = *(int *)local_310.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10066cfb7;
              }
              QArrayData::deallocate((QArrayData *)local_310.field0_0x0,2,8);
            }
LAB_10066cfb7:
            if (*(int *)local_318.field0_0x0 != -1) {
              if (*(int *)local_318.field0_0x0 != 0) {
                LOCK();
                *(int *)local_318.field0_0x0 = *(int *)local_318.field0_0x0 + -1;
                local_31 = *(int *)local_318.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10066cfed;
              }
              QArrayData::deallocate((QArrayData *)local_318.field0_0x0,2,8);
            }
LAB_10066cfed:
            if (*(int *)local_320 != -1) {
              if (*(int *)local_320 != 0) {
                LOCK();
                *(int *)local_320 = *(int *)local_320 + -1;
                local_31 = *(int *)local_320 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10066d3f0;
              }
              QArrayData::deallocate(local_320,2,8);
            }
          }
          else {
            cVar4 = CDownloadedKeyInfo::isAutoRenewable();
            if (cVar4 == '\0') {
              QMetaObject::tr((char *)&local_2f0,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c853);
              local_2e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_2f0;
              if (1 < *(int *)local_2f0 + 1U) {
                LOCK();
                *(int *)local_2f0 = *(int *)local_2f0 + 1;
                local_31 = *(int *)local_2f0 != 0;
                UNLOCK();
              }
              QString::fromUtf8_helper((char *)&local_78,0x1e31adc);
              QString::append(&local_2e8);
              if (*(int *)local_78 != -1) {
                if (*(int *)local_78 != 0) {
                  LOCK();
                  *(int *)local_78 = *(int *)local_78 + -1;
                  local_31 = *(int *)local_78 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10066d2c1;
                }
                QArrayData::deallocate(local_78,2,8);
              }
LAB_10066d2c1:
              QDate::toString(&local_2f8,&local_278,4);
              local_2e0.field0_0x0 = local_2e8.field0_0x0;
              if (1 < *(int *)local_2e8.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_2e8.field0_0x0 = *(int *)local_2e8.field0_0x0 + 1;
                local_31 = *(int *)local_2e8.field0_0x0 != 0;
                UNLOCK();
              }
              QString::append(&local_2e0);
              QString::operator=(&local_2b8,&local_2e0);
              if (*(int *)local_2e0.field0_0x0 != -1) {
                if (*(int *)local_2e0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_2e0.field0_0x0 = *(int *)local_2e0.field0_0x0 + -1;
                  local_31 = *(int *)local_2e0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10066d344;
                }
                QArrayData::deallocate((QArrayData *)local_2e0.field0_0x0,2,8);
              }
LAB_10066d344:
              if (*(int *)local_2f8 != -1) {
                if (*(int *)local_2f8 != 0) {
                  LOCK();
                  *(int *)local_2f8 = *(int *)local_2f8 + -1;
                  local_31 = *(int *)local_2f8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10066d37a;
                }
                QArrayData::deallocate(local_2f8,2,8);
              }
LAB_10066d37a:
              if (*(int *)local_2e8.field0_0x0 != -1) {
                if (*(int *)local_2e8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_2e8.field0_0x0 = *(int *)local_2e8.field0_0x0 + -1;
                  local_31 = *(int *)local_2e8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10066d3b7;
                }
                QArrayData::deallocate((QArrayData *)local_2e8.field0_0x0,2,8);
              }
LAB_10066d3b7:
              if (*(int *)local_2f0 != -1) {
                if (*(int *)local_2f0 != 0) {
                  LOCK();
                  *(int *)local_2f0 = *(int *)local_2f0 + -1;
                  local_31 = *(int *)local_2f0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10066d3f0;
                }
                QArrayData::deallocate(local_2f0,2,8);
              }
            }
            else {
              QMetaObject::tr((char *)&local_2d0,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c845);
              local_2c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_2d0;
              if (1 < *(int *)local_2d0 + 1U) {
                LOCK();
                *(int *)local_2d0 = *(int *)local_2d0 + 1;
                local_31 = *(int *)local_2d0 != 0;
                UNLOCK();
              }
              QString::fromUtf8_helper((char *)&local_80,0x1e31adc);
              QString::append(&local_2c8);
              if (*(int *)local_80 != -1) {
                if (*(int *)local_80 != 0) {
                  LOCK();
                  *(int *)local_80 = *(int *)local_80 + -1;
                  local_31 = *(int *)local_80 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10066d0e6;
                }
                QArrayData::deallocate(local_80,2,8);
              }
LAB_10066d0e6:
              QDate::toString(&local_2d8,&local_278,4);
              local_2c0.field0_0x0 = local_2c8.field0_0x0;
              if (1 < *(int *)local_2c8.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_2c8.field0_0x0 = *(int *)local_2c8.field0_0x0 + 1;
                local_31 = *(int *)local_2c8.field0_0x0 != 0;
                UNLOCK();
              }
              QString::append(&local_2c0);
              QString::operator=(&local_2b8,&local_2c0);
              if (*(int *)local_2c0.field0_0x0 != -1) {
                if (*(int *)local_2c0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_2c0.field0_0x0 = *(int *)local_2c0.field0_0x0 + -1;
                  local_31 = *(int *)local_2c0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10066d169;
                }
                QArrayData::deallocate((QArrayData *)local_2c0.field0_0x0,2,8);
              }
LAB_10066d169:
              if (*(int *)local_2d8 != -1) {
                if (*(int *)local_2d8 != 0) {
                  LOCK();
                  *(int *)local_2d8 = *(int *)local_2d8 + -1;
                  local_31 = *(int *)local_2d8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10066d19f;
                }
                QArrayData::deallocate(local_2d8,2,8);
              }
LAB_10066d19f:
              if (*(int *)local_2c8.field0_0x0 != -1) {
                if (*(int *)local_2c8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_2c8.field0_0x0 = *(int *)local_2c8.field0_0x0 + -1;
                  local_31 = *(int *)local_2c8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10066d1dc;
                }
                QArrayData::deallocate((QArrayData *)local_2c8.field0_0x0,2,8);
              }
LAB_10066d1dc:
              if (*(int *)local_2d0 != -1) {
                if (*(int *)local_2d0 != 0) {
                  LOCK();
                  *(int *)local_2d0 = *(int *)local_2d0 + -1;
                  local_31 = *(int *)local_2d0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10066d3f0;
                }
                QArrayData::deallocate(local_2d0,2,8);
              }
            }
          }
LAB_10066d3f0:
          local_330 = (QArrayData *)QString::fromAscii_helper("info",4);
          pQVar10 = (QVariant *)FUN_10008c590(&local_290,&local_330);
          cVar4 = CDownloadedKeyInfo::isTrial();
          if (cVar4 == '\0') {
            QMetaObject::tr((char *)&local_350,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c8a3);
          }
          else {
            QMetaObject::tr((char *)&local_350,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c892);
          }
          QString::fromUtf8_helper((char *)&local_360,0x1e0a4fd);
          QString::append(&local_360);
          local_358.field0_0x0 = local_360.field0_0x0;
          if (1 < *(int *)local_360.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_360.field0_0x0 = *(int *)local_360.field0_0x0 + 1;
            local_31 = *(int *)local_360.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_60,0x1e0c8b5);
          QString::append(&local_358);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d519;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_10066d519:
          QMetaObject::tr((char *)&local_398,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c8c5);
          QString::fromUtf8_helper((char *)&local_390,0x1e0c8bc);
          QString::append(&local_390);
          local_388.field0_0x0 = local_390.field0_0x0;
          if (1 < *(int *)local_390.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_390.field0_0x0 = *(int *)local_390.field0_0x0 + 1;
            local_31 = *(int *)local_390.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_58,0x1e0c8fe);
          QString::append(&local_388);
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d5d6;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_10066d5d6:
          QMetaObject::tr((char *)&local_3a0,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c90b);
          local_380.field0_0x0 = local_388.field0_0x0;
          if (1 < *(int *)local_388.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_388.field0_0x0 = *(int *)local_388.field0_0x0 + 1;
            local_31 = *(int *)local_388.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_380);
          local_378.field0_0x0 = local_380.field0_0x0;
          if (1 < *(int *)local_380.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_380.field0_0x0 = *(int *)local_380.field0_0x0 + 1;
            local_31 = *(int *)local_380.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_50,0x1e0c8fe);
          QString::append(&local_378);
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d69a;
            }
            QArrayData::deallocate(local_50,2,8);
          }
LAB_10066d69a:
          QMetaObject::tr((char *)&local_3a8,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c921);
          local_370.field0_0x0 = local_378.field0_0x0;
          if (1 < *(int *)local_378.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_378.field0_0x0 = *(int *)local_378.field0_0x0 + 1;
            local_31 = *(int *)local_378.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_370);
          local_368.field0_0x0 = local_370.field0_0x0;
          if (1 < *(int *)local_370.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_370.field0_0x0 = *(int *)local_370.field0_0x0 + 1;
            local_31 = *(int *)local_370.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_368);
          FUN_100670470(&local_348,&local_350,&local_358,&local_368);
          QVariant::QVariant(&local_340,&local_348);
          QVariant::operator=(pQVar10,&local_340);
          QVariant::~QVariant(&local_340);
          if (*(int *)local_348.field0_0x0 != -1) {
            if (*(int *)local_348.field0_0x0 != 0) {
              LOCK();
              *(int *)local_348.field0_0x0 = *(int *)local_348.field0_0x0 + -1;
              local_31 = *(int *)local_348.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d798;
            }
            QArrayData::deallocate((QArrayData *)local_348.field0_0x0,2,8);
          }
LAB_10066d798:
          if (*(int *)local_368.field0_0x0 != -1) {
            if (*(int *)local_368.field0_0x0 != 0) {
              LOCK();
              *(int *)local_368.field0_0x0 = *(int *)local_368.field0_0x0 + -1;
              local_31 = *(int *)local_368.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d7ce;
            }
            QArrayData::deallocate((QArrayData *)local_368.field0_0x0,2,8);
          }
LAB_10066d7ce:
          if (*(int *)local_370.field0_0x0 != -1) {
            if (*(int *)local_370.field0_0x0 != 0) {
              LOCK();
              *(int *)local_370.field0_0x0 = *(int *)local_370.field0_0x0 + -1;
              local_31 = *(int *)local_370.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d804;
            }
            QArrayData::deallocate((QArrayData *)local_370.field0_0x0,2,8);
          }
LAB_10066d804:
          if (*(int *)local_3a8 != -1) {
            if (*(int *)local_3a8 != 0) {
              LOCK();
              *(int *)local_3a8 = *(int *)local_3a8 + -1;
              local_31 = *(int *)local_3a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d83a;
            }
            QArrayData::deallocate(local_3a8,2,8);
          }
LAB_10066d83a:
          if (*(int *)local_378.field0_0x0 != -1) {
            if (*(int *)local_378.field0_0x0 != 0) {
              LOCK();
              *(int *)local_378.field0_0x0 = *(int *)local_378.field0_0x0 + -1;
              local_31 = *(int *)local_378.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d870;
            }
            QArrayData::deallocate((QArrayData *)local_378.field0_0x0,2,8);
          }
LAB_10066d870:
          if (*(int *)local_380.field0_0x0 != -1) {
            if (*(int *)local_380.field0_0x0 != 0) {
              LOCK();
              *(int *)local_380.field0_0x0 = *(int *)local_380.field0_0x0 + -1;
              local_31 = *(int *)local_380.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d8a6;
            }
            QArrayData::deallocate((QArrayData *)local_380.field0_0x0,2,8);
          }
LAB_10066d8a6:
          if (*(int *)local_3a0 != -1) {
            if (*(int *)local_3a0 != 0) {
              LOCK();
              *(int *)local_3a0 = *(int *)local_3a0 + -1;
              local_31 = *(int *)local_3a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d8dc;
            }
            QArrayData::deallocate(local_3a0,2,8);
          }
LAB_10066d8dc:
          if (*(int *)local_388.field0_0x0 != -1) {
            if (*(int *)local_388.field0_0x0 != 0) {
              LOCK();
              *(int *)local_388.field0_0x0 = *(int *)local_388.field0_0x0 + -1;
              local_31 = *(int *)local_388.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d912;
            }
            QArrayData::deallocate((QArrayData *)local_388.field0_0x0,2,8);
          }
LAB_10066d912:
          if (*(int *)local_390.field0_0x0 != -1) {
            if (*(int *)local_390.field0_0x0 != 0) {
              LOCK();
              *(int *)local_390.field0_0x0 = *(int *)local_390.field0_0x0 + -1;
              local_31 = *(int *)local_390.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d948;
            }
            QArrayData::deallocate((QArrayData *)local_390.field0_0x0,2,8);
          }
LAB_10066d948:
          if (*(int *)local_398 != -1) {
            if (*(int *)local_398 != 0) {
              LOCK();
              *(int *)local_398 = *(int *)local_398 + -1;
              local_31 = *(int *)local_398 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d97e;
            }
            QArrayData::deallocate(local_398,2,8);
          }
LAB_10066d97e:
          if (*(int *)local_358.field0_0x0 != -1) {
            if (*(int *)local_358.field0_0x0 != 0) {
              LOCK();
              *(int *)local_358.field0_0x0 = *(int *)local_358.field0_0x0 + -1;
              local_31 = *(int *)local_358.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d9b4;
            }
            QArrayData::deallocate((QArrayData *)local_358.field0_0x0,2,8);
          }
LAB_10066d9b4:
          if (*(int *)local_360.field0_0x0 != -1) {
            if (*(int *)local_360.field0_0x0 != 0) {
              LOCK();
              *(int *)local_360.field0_0x0 = *(int *)local_360.field0_0x0 + -1;
              local_31 = *(int *)local_360.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066d9ea;
            }
            QArrayData::deallocate((QArrayData *)local_360.field0_0x0,2,8);
          }
LAB_10066d9ea:
          if (*(int *)local_350 != -1) {
            if (*(int *)local_350 != 0) {
              LOCK();
              *(int *)local_350 = *(int *)local_350 + -1;
              local_31 = *(int *)local_350 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066da20;
            }
            QArrayData::deallocate(local_350,2,8);
          }
LAB_10066da20:
          if (*(int *)local_330 != -1) {
            if (*(int *)local_330 != 0) {
              LOCK();
              *(int *)local_330 = *(int *)local_330 + -1;
              local_31 = *(int *)local_330 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066da59;
            }
            QArrayData::deallocate(local_330,2,8);
          }
LAB_10066da59:
          cVar4 = CDownloadedKeyInfo::isActiveHere();
          if (cVar4 == '\0') {
            QVariant::QVariant(&local_400,(QMap *)&local_290);
            FUN_10012ae80(pQVar1,&local_400);
            QVariant::~QVariant(&local_400);
          }
          else {
            local_3b0 = (QArrayData *)QString::fromAscii_helper("active",6);
            pQVar10 = (QVariant *)FUN_10008c590(&local_290,&local_3b0);
            QVariant::QVariant(&local_3c0,true);
            QVariant::operator=(pQVar10,&local_3c0);
            QVariant::~QVariant(&local_3c0);
            if (*(int *)local_3b0 != -1) {
              if (*(int *)local_3b0 != 0) {
                LOCK();
                *(int *)local_3b0 = *(int *)local_3b0 + -1;
                local_31 = *(int *)local_3b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10066daff;
              }
              QArrayData::deallocate(local_3b0,2,8);
            }
LAB_10066daff:
            local_3c8 = (QArrayData *)QString::fromAscii_helper("header",6);
            pQVar10 = (QVariant *)FUN_10008c590(&local_290,&local_3c8);
            QMetaObject::tr((char *)&local_3e0,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c935);
            QVariant::QVariant(&local_3d8,&local_3e0);
            QVariant::operator=(pQVar10,&local_3d8);
            QVariant::~QVariant(&local_3d8);
            if (*(int *)local_3e0.field0_0x0 != -1) {
              if (*(int *)local_3e0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_3e0.field0_0x0 = *(int *)local_3e0.field0_0x0 + -1;
                local_31 = *(int *)local_3e0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10066dbaf;
              }
              QArrayData::deallocate((QArrayData *)local_3e0.field0_0x0,2,8);
            }
LAB_10066dbaf:
            if (*(int *)local_3c8 != -1) {
              if (*(int *)local_3c8 != 0) {
                LOCK();
                *(int *)local_3c8 = *(int *)local_3c8 + -1;
                local_31 = *(int *)local_3c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10066dbe8;
              }
              QArrayData::deallocate(local_3c8,2,8);
            }
LAB_10066dbe8:
            QVariant::QVariant(&local_3f0,(QMap *)&local_290);
            FUN_1006739a0(pQVar1,&local_3f0);
            QVariant::~QVariant(&local_3f0);
          }
          if (*(int *)local_2b8.field0_0x0 != -1) {
            if (*(int *)local_2b8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_2b8.field0_0x0 = *(int *)local_2b8.field0_0x0 + -1;
              local_31 = *(int *)local_2b8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066dc7c;
            }
            QArrayData::deallocate((QArrayData *)local_2b8.field0_0x0,2,8);
          }
LAB_10066dc7c:
          pQVar2 = local_290;
          if (*(int *)local_290 != -1) {
            if (*(int *)local_290 != 0) {
              LOCK();
              *(int *)local_290 = *(int *)local_290 + -1;
              local_31 = *(int *)local_290 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10066dced;
            }
            if (*(long *)(local_290 + 0x10) != 0) {
              FUN_100037d60();
              QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
            }
            QMapDataBase::freeData((QMapDataBase *)pQVar2);
          }
        }
        else {
          CDownloadedKeyInfo::getExpirationDate();
          lVar8 = QDateTime::date();
          lVar13 = QDate::currentDate();
          QDateTime::~QDateTime(&local_270);
          bVar3 = true;
          if (lVar13 <= lVar8) goto LAB_10066cba4;
        }
LAB_10066dced:
        local_160 = 0;
      }
      CDownloadedKeyInfo::~CDownloadedKeyInfo(local_268);
      local_170 = local_170 + 8;
      uVar12 = local_160 ^ 1;
      bVar16 = local_160 != 1;
      local_160 = uVar12;
    } while ((bVar16) && (local_170 != local_168));
  }
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10066dd64;
    }
    QListData::dispose(local_178);
  }
LAB_10066dd64:
  CAbstractWizardPage::wizardModel();
  uVar9 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  uVar9 = FUN_100675e00(uVar9);
  uVar9 = FUN_10016f500(uVar9);
  cVar4 = FUN_10061b4d0(uVar9,0x20);
  if ((!bVar3) && (cVar4 != '\x01')) {
    local_408 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    local_410 = (QArrayData *)QString::fromAscii_helper("trial",5);
    pQVar10 = (QVariant *)FUN_10008c590(&local_408,&local_410);
    QVariant::QVariant(&local_420,true);
    QVariant::operator=(pQVar10,&local_420);
    QVariant::~QVariant(&local_420);
    if (*(int *)local_410 != -1) {
      if (*(int *)local_410 != 0) {
        LOCK();
        *(int *)local_410 = *(int *)local_410 + -1;
        local_31 = *(int *)local_410 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066de59;
      }
      QArrayData::deallocate(local_410,2,8);
    }
LAB_10066de59:
    local_428 = (QArrayData *)QString::fromAscii_helper("info",4);
    pQVar10 = (QVariant *)FUN_10008c590(&local_408,&local_428);
    QMetaObject::tr((char *)&local_448,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c892);
    local_450 = (QArrayData *)QString::fromAscii_helper("",0);
    QMetaObject::tr((char *)&local_488,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c8c5);
    QString::fromUtf8_helper((char *)&local_480,0x1e0c8bc);
    QString::append(&local_480);
    local_478.field0_0x0 = local_480.field0_0x0;
    if (1 < *(int *)local_480.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_480.field0_0x0 = *(int *)local_480.field0_0x0 + 1;
      local_31 = *(int *)local_480.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_48,0x1e0c8fe);
    QString::append(&local_478);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066df7f;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10066df7f:
    QMetaObject::tr((char *)&local_490,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c90b);
    local_470.field0_0x0 = local_478.field0_0x0;
    if (1 < *(int *)local_478.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_478.field0_0x0 = *(int *)local_478.field0_0x0 + 1;
      local_31 = *(int *)local_478.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_470);
    local_468.field0_0x0 = local_470.field0_0x0;
    if (1 < *(int *)local_470.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_470.field0_0x0 = *(int *)local_470.field0_0x0 + 1;
      local_31 = *(int *)local_470.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1e0c8fe);
    QString::append(&local_468);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e047;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10066e047:
    QMetaObject::tr((char *)&local_498,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c921);
    local_460.field0_0x0 = local_468.field0_0x0;
    if (1 < *(int *)local_468.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_468.field0_0x0 = *(int *)local_468.field0_0x0 + 1;
      local_31 = *(int *)local_468.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_460);
    local_458.field0_0x0 = local_460.field0_0x0;
    if (1 < *(int *)local_460.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_460.field0_0x0 = *(int *)local_460.field0_0x0 + 1;
      local_31 = *(int *)local_460.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_458);
    FUN_100670470(&local_440,&local_448,&local_450,&local_458);
    QVariant::QVariant(&local_438,&local_440);
    QVariant::operator=(pQVar10,&local_438);
    QVariant::~QVariant(&local_438);
    if (*(int *)local_440.field0_0x0 != -1) {
      if (*(int *)local_440.field0_0x0 != 0) {
        LOCK();
        *(int *)local_440.field0_0x0 = *(int *)local_440.field0_0x0 + -1;
        local_31 = *(int *)local_440.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e14f;
      }
      QArrayData::deallocate((QArrayData *)local_440.field0_0x0,2,8);
    }
LAB_10066e14f:
    if (*(int *)local_458.field0_0x0 != -1) {
      if (*(int *)local_458.field0_0x0 != 0) {
        LOCK();
        *(int *)local_458.field0_0x0 = *(int *)local_458.field0_0x0 + -1;
        local_31 = *(int *)local_458.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e185;
      }
      QArrayData::deallocate((QArrayData *)local_458.field0_0x0,2,8);
    }
LAB_10066e185:
    if (*(int *)local_460.field0_0x0 != -1) {
      if (*(int *)local_460.field0_0x0 != 0) {
        LOCK();
        *(int *)local_460.field0_0x0 = *(int *)local_460.field0_0x0 + -1;
        local_31 = *(int *)local_460.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e1bb;
      }
      QArrayData::deallocate((QArrayData *)local_460.field0_0x0,2,8);
    }
LAB_10066e1bb:
    if (*(int *)local_498 != -1) {
      if (*(int *)local_498 != 0) {
        LOCK();
        *(int *)local_498 = *(int *)local_498 + -1;
        local_31 = *(int *)local_498 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e1f1;
      }
      QArrayData::deallocate(local_498,2,8);
    }
LAB_10066e1f1:
    if (*(int *)local_468.field0_0x0 != -1) {
      if (*(int *)local_468.field0_0x0 != 0) {
        LOCK();
        *(int *)local_468.field0_0x0 = *(int *)local_468.field0_0x0 + -1;
        local_31 = *(int *)local_468.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e227;
      }
      QArrayData::deallocate((QArrayData *)local_468.field0_0x0,2,8);
    }
LAB_10066e227:
    if (*(int *)local_470.field0_0x0 != -1) {
      if (*(int *)local_470.field0_0x0 != 0) {
        LOCK();
        *(int *)local_470.field0_0x0 = *(int *)local_470.field0_0x0 + -1;
        local_31 = *(int *)local_470.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e25d;
      }
      QArrayData::deallocate((QArrayData *)local_470.field0_0x0,2,8);
    }
LAB_10066e25d:
    if (*(int *)local_490 != -1) {
      if (*(int *)local_490 != 0) {
        LOCK();
        *(int *)local_490 = *(int *)local_490 + -1;
        local_31 = *(int *)local_490 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e293;
      }
      QArrayData::deallocate(local_490,2,8);
    }
LAB_10066e293:
    if (*(int *)local_478.field0_0x0 != -1) {
      if (*(int *)local_478.field0_0x0 != 0) {
        LOCK();
        *(int *)local_478.field0_0x0 = *(int *)local_478.field0_0x0 + -1;
        local_31 = *(int *)local_478.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e2c9;
      }
      QArrayData::deallocate((QArrayData *)local_478.field0_0x0,2,8);
    }
LAB_10066e2c9:
    if (*(int *)local_480.field0_0x0 != -1) {
      if (*(int *)local_480.field0_0x0 != 0) {
        LOCK();
        *(int *)local_480.field0_0x0 = *(int *)local_480.field0_0x0 + -1;
        local_31 = *(int *)local_480.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e2ff;
      }
      QArrayData::deallocate((QArrayData *)local_480.field0_0x0,2,8);
    }
LAB_10066e2ff:
    if (*(int *)local_488 != -1) {
      if (*(int *)local_488 != 0) {
        LOCK();
        *(int *)local_488 = *(int *)local_488 + -1;
        local_31 = *(int *)local_488 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e335;
      }
      QArrayData::deallocate(local_488,2,8);
    }
LAB_10066e335:
    if (*(int *)local_450 != -1) {
      if (*(int *)local_450 != 0) {
        LOCK();
        *(int *)local_450 = *(int *)local_450 + -1;
        local_31 = *(int *)local_450 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e36b;
      }
      QArrayData::deallocate(local_450,2,8);
    }
LAB_10066e36b:
    if (*(int *)local_448 != -1) {
      if (*(int *)local_448 != 0) {
        LOCK();
        *(int *)local_448 = *(int *)local_448 + -1;
        local_31 = *(int *)local_448 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e3a1;
      }
      QArrayData::deallocate(local_448,2,8);
    }
LAB_10066e3a1:
    if (*(int *)local_428 != -1) {
      if (*(int *)local_428 != 0) {
        LOCK();
        *(int *)local_428 = *(int *)local_428 + -1;
        local_31 = *(int *)local_428 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e3d7;
      }
      QArrayData::deallocate(local_428,2,8);
    }
LAB_10066e3d7:
    QVariant::QVariant(&local_4a8,(QMap *)&local_408);
    FUN_10012ae80(pQVar1,&local_4a8);
    QVariant::~QVariant(&local_4a8);
    pQVar2 = local_408;
    if (*(int *)local_408 != -1) {
      if (*(int *)local_408 != 0) {
        LOCK();
        *(int *)local_408 = *(int *)local_408 + -1;
        local_31 = *(int *)local_408 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066e453;
      }
      if (*(long *)(local_408 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar2);
    }
  }
LAB_10066e453:
  if (*(int *)(*(long *)pQVar1 + 0xc) == *(int *)(*(long *)pQVar1 + 8)) goto LAB_10066e8b1;
  QVariant::toMap();
  local_4b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("active",6);
  if (*(long *)(local_4b0 + 0x10) == 0) {
LAB_10066e4f5:
    lVar14 = 0;
  }
  else {
    lVar8 = *(long *)(local_4b0 + 0x10);
    lVar13 = 0;
    do {
      while (lVar14 = lVar8, cVar4 = operator<((QString *)(lVar14 + 0x18),&local_4b8), cVar4 == '\0'
            ) {
        lVar8 = *(long *)(lVar14 + 8);
        lVar13 = lVar14;
        if (*(long *)(lVar14 + 8) == 0) goto LAB_10066e4e1;
      }
      lVar8 = *(long *)(lVar14 + 0x10);
    } while (*(long *)(lVar14 + 0x10) != 0);
    lVar14 = lVar13;
    if (lVar13 == 0) goto LAB_10066e4f5;
LAB_10066e4e1:
    cVar4 = operator<(&local_4b8,(QString *)(lVar14 + 0x18));
    if (cVar4 != '\0') goto LAB_10066e4f5;
  }
  if (*(int *)local_4b8.field0_0x0 != -1) {
    if (*(int *)local_4b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_4b8.field0_0x0 = *(int *)local_4b8.field0_0x0 + -1;
      local_31 = *(int *)local_4b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10066e52d;
    }
    QArrayData::deallocate((QArrayData *)local_4b8.field0_0x0,2,8);
  }
LAB_10066e52d:
  if (*(int *)local_4b0 != -1) {
    if (*(int *)local_4b0 != 0) {
      LOCK();
      *(int *)local_4b0 = *(int *)local_4b0 + -1;
      local_31 = *(int *)local_4b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10066e57d;
    }
    if (*(long *)(local_4b0 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_4b0,(int)*(undefined8 *)(local_4b0 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_4b0);
  }
LAB_10066e57d:
  if ((lVar14 != 0) && (1 < *(int *)(*(long *)pQVar1 + 0xc) - *(int *)(*(long *)pQVar1 + 8))) {
    lVar8 = 1;
    do {
      QVariant::toMap();
      local_4c8.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("active",6);
      lVar13 = *(long *)(local_4c0 + 0x10);
      lVar14 = 0;
      if (*(long *)(local_4c0 + 0x10) == 0) {
LAB_10066e658:
        lVar15 = 0;
      }
      else {
        do {
          while (lVar15 = lVar13, cVar4 = operator<((QString *)(lVar15 + 0x18),&local_4c8),
                cVar4 == '\0') {
            lVar13 = *(long *)(lVar15 + 8);
            lVar14 = lVar15;
            if (*(long *)(lVar15 + 8) == 0) goto LAB_10066e648;
          }
          lVar13 = *(long *)(lVar15 + 0x10);
        } while (*(long *)(lVar15 + 0x10) != 0);
        lVar15 = lVar14;
        if (lVar14 == 0) goto LAB_10066e658;
LAB_10066e648:
        cVar4 = operator<(&local_4c8,(QString *)(lVar15 + 0x18));
        if (cVar4 != '\0') goto LAB_10066e658;
      }
      if (*(int *)local_4c8.field0_0x0 != -1) {
        if (*(int *)local_4c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_4c8.field0_0x0 = *(int *)local_4c8.field0_0x0 + -1;
          local_31 = *(int *)local_4c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10066e691;
        }
        QArrayData::deallocate((QArrayData *)local_4c8.field0_0x0,2,8);
      }
LAB_10066e691:
      pQVar2 = local_4c0;
      if (*(int *)local_4c0 != -1) {
        if (*(int *)local_4c0 != 0) {
          LOCK();
          *(int *)local_4c0 = *(int *)local_4c0 + -1;
          local_31 = *(int *)local_4c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10066e6df;
        }
        if (*(long *)(local_4c0 + 0x10) != 0) {
          FUN_100037d60();
          QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)pQVar2);
      }
LAB_10066e6df:
      if (lVar15 == 0) {
        QVariant::toMap();
        local_4d8 = (QArrayData *)QString::fromAscii_helper("header",6);
        pQVar10 = (QVariant *)FUN_10008c590(&local_4d0,&local_4d8);
        QMetaObject::tr((char *)&local_4f0,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c942);
        QVariant::QVariant(&local_4e8,&local_4f0);
        QVariant::operator=(pQVar10,&local_4e8);
        QVariant::~QVariant(&local_4e8);
        if (*(int *)local_4f0.field0_0x0 != -1) {
          if (*(int *)local_4f0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_4f0.field0_0x0 = *(int *)local_4f0.field0_0x0 + -1;
            local_31 = *(int *)local_4f0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10066e7dd;
          }
          QArrayData::deallocate((QArrayData *)local_4f0.field0_0x0,2,8);
        }
LAB_10066e7dd:
        if (*(int *)local_4d8 != -1) {
          if (*(int *)local_4d8 != 0) {
            LOCK();
            *(int *)local_4d8 = *(int *)local_4d8 + -1;
            local_31 = *(int *)local_4d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10066e813;
          }
          QArrayData::deallocate(local_4d8,2,8);
        }
LAB_10066e813:
        puVar11 = *(uint **)pQVar1;
        if (1 < *puVar11) {
          FUN_100673d70(pQVar1,puVar11[1]);
          puVar11 = *(uint **)pQVar1;
        }
        pQVar10 = *(QVariant **)(puVar11 + ((int)puVar11[2] + lVar8) * 2 + 4);
        QVariant::QVariant(&local_500,(QMap *)&local_4d0);
        QVariant::operator=(pQVar10,&local_500);
        QVariant::~QVariant(&local_500);
        if (*(int *)local_4d0 == -1) break;
        if (*(int *)local_4d0 != 0) {
          LOCK();
          *(int *)local_4d0 = *(int *)local_4d0 + -1;
          local_31 = *(int *)local_4d0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        if (*(long *)(local_4d0 + 0x10) != 0) {
          FUN_100037d60();
          QMapDataBase::freeTree(local_4d0,(int)*(undefined8 *)(local_4d0 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)local_4d0);
        break;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (long)*(int *)(*(long *)pQVar1 + 0xc) - (long)*(int *)(*(long *)pQVar1 + 8));
  }
LAB_10066e8b1:
  QVariant::QVariant(&local_510,pQVar1);
  QObject::setProperty(pcVar7,(QVariant *)"listModel");
  QVariant::~QVariant(&local_510);
  QObject::property((char *)&local_520);
  uVar6 = QVariant::toInt((bool *)&local_520);
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  QVariant::~QVariant(&local_520);
  FUN_1006723e0(param_1);
  CAbstractWizardPage::wizardModel();
  QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  CDownloadedKeyList::~CDownloadedKeyList(local_150);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_88.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
  return;
}

