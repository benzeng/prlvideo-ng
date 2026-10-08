
void FUN_10063b660(QSize *param_1)

{
  QSize *pQVar1;
  uint *puVar2;
  uint *puVar3;
  QSize QVar4;
  QSize QVar5;
  code *pcVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  QStandardItemModel *this;
  Data *pDVar10;
  long lVar11;
  QStandardItem *pQVar12;
  long *plVar13;
  long *plVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  long lVar18;
  bool bVar19;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [24];
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined8 local_290;
  QString local_288;
  QVariant local_280;
  undefined8 local_270;
  QDateTime local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QString local_240;
  QString local_238;
  QString local_230;
  QString local_228;
  QString local_220;
  QString local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 local_200;
  QFont local_1f8 [16];
  QVariant local_1e8;
  QString local_1d8;
  QString local_1d0;
  CDownloadedKeyInfo local_1c8 [240];
  QSize local_d8;
  int *local_d0;
  int *local_c8;
  uint local_c0;
  undefined8 local_b8;
  QDateTime local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  uint *local_70;
  uint *local_68;
  QFont local_60 [16];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10063db80(param_1[0xc],param_1);
  QWidget::setAttribute(param_1,0x37,1);
  uVar8 = WidgetUtils::getRadioButtonTextStartPos();
  QSpacerItem::changeSize(*(undefined8 *)((long)param_1[0xc] + 0x58),uVar8,1,0,1);
  QSpacerItem::changeSize(*(undefined8 *)((long)param_1[0xc] + 0x30),uVar8,1,0,1);
  QLabel::text();
  local_80 = (QArrayData *)QString::fromAscii_helper("$PD_EDITION_NAME",0x10);
  uVar8 = CDownloadedKeyInfo::getLicenseEdition();
  FUN_10063d240(&local_88,uVar8);
  QString::replace(&local_78,&local_80,&local_88,1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063b75a;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10063b75a:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063b78a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10063b78a:
  local_90 = (QArrayData *)QString::fromAscii_helper("$NUMBER_OF_LICENSES",0x13);
  iVar9 = CDownloadedKeyInfo::getLicenseCount();
  QString::number((int)&local_98,iVar9);
  QString::replace(&local_78,&local_90,&local_98,1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063b80f;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10063b80f:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063b845;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10063b845:
  local_a0 = (QArrayData *)QString::fromAscii_helper("$DATE",5);
  CDownloadedKeyInfo::getExpirationDate();
  local_b8 = QDateTime::date();
  QDate::toString(&local_a8,&local_b8,4);
  QString::replace(&local_78,&local_a0,&local_a8,1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063b8e9;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10063b8e9:
  QDateTime::~QDateTime(&local_b0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063b92b;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10063b92b:
  QLabel::setText(*(QString **)((long)param_1[0xc] + 0x60));
  this = operator_new(0x10);
  QStandardItemModel::QStandardItemModel(this,(QObject *)param_1);
  pQVar1 = param_1 + 0x20;
  QVar4 = param_1[0x20];
  if (1 < *(uint *)QVar4) {
    uVar17 = *(uint *)((long)QVar4 + 8);
    pDVar10 = (Data *)QListData::detach((int)pQVar1);
    QVar5 = *pQVar1;
    lVar11 = (long)*(int *)((long)QVar5 + 8);
    puVar2 = (uint *)((long)QVar5 + 0x10 + lVar11 * 8);
    if (((uint *)((long)QVar4 + 0x10) + (long)(int)uVar17 * 2 != puVar2) &&
       (lVar18 = *(int *)((long)QVar5 + 0xc) - lVar11,
       lVar18 != 0 && lVar11 <= *(int *)((long)QVar5 + 0xc))) {
      _memcpy(puVar2,(uint *)((long)QVar4 + 0x10) + (long)(int)uVar17 * 2,lVar18 * 8);
    }
    if (*(int *)pDVar10 != -1) {
      if (*(int *)pDVar10 != 0) {
        LOCK();
        *(int *)pDVar10 = *(int *)pDVar10 + -1;
        local_31 = *(int *)pDVar10 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10063b9de;
      }
      QListData::dispose(pDVar10);
    }
  }
LAB_10063b9de:
  QVar4 = *pQVar1;
  puVar2 = (uint *)((long)QVar4 + 0x10) + (long)(int)*(uint *)((long)QVar4 + 8) * 2;
  if (1 < *(uint *)QVar4) {
    pDVar10 = (Data *)QListData::detach((int)pQVar1);
    QVar4 = *pQVar1;
    lVar11 = (long)*(int *)((long)QVar4 + 8);
    puVar3 = (uint *)((long)QVar4 + 0x10 + lVar11 * 8);
    if ((puVar2 != puVar3) &&
       (lVar18 = *(int *)((long)QVar4 + 0xc) - lVar11,
       lVar18 != 0 && lVar11 <= *(int *)((long)QVar4 + 0xc))) {
      _memcpy(puVar3,puVar2,lVar18 * 8);
    }
    if (*(int *)pDVar10 != -1) {
      if (*(int *)pDVar10 != 0) {
        LOCK();
        *(int *)pDVar10 = *(int *)pDVar10 + -1;
        local_31 = *(int *)pDVar10 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10063ba5a;
      }
      QListData::dispose(pDVar10);
    }
  }
LAB_10063ba5a:
  local_d8 = *pQVar1;
  if (puVar2 != (uint *)((int *)((long)local_d8 + 0x10) + (long)*(int *)((long)local_d8 + 0xc) * 2))
  {
    local_70 = (uint *)((int *)((long)local_d8 + 0x10) + (long)*(int *)((long)local_d8 + 0xc) * 2);
    local_68 = puVar2;
    FUN_10063ef10(&local_68,&local_70,puVar2,FUN_10063d6d0);
    local_d8 = *pQVar1;
  }
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 == 0) {
      QListData::detach((int)&local_d8);
      lVar11 = (long)*(int *)((long)local_d8 + 8);
      QVar4 = *pQVar1;
      if (((int *)((long)QVar4 + (long)*(int *)((long)QVar4 + 8) * 8) !=
           (int *)((long)local_d8 + lVar11 * 8)) &&
         (lVar18 = *(int *)((long)local_d8 + 0xc) - lVar11,
         lVar18 != 0 && lVar11 <= *(int *)((long)local_d8 + 0xc))) {
        _memcpy((int *)((long)local_d8 + 0x10) + lVar11 * 2,
                (void *)((long)QVar4 + 0x10 + (long)*(int *)((long)QVar4 + 8) * 8),lVar18 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + 1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
    }
  }
  local_d0 = (int *)((long)local_d8 + 0x10) + (long)*(int *)((long)local_d8 + 8) * 2;
  local_c8 = (int *)((long)local_d8 + 0x10) + (long)*(int *)((long)local_d8 + 0xc) * 2;
  local_c0 = 1;
  if (*(int *)((long)local_d8 + 8) == *(int *)((long)local_d8 + 0xc)) {
    bVar16 = false;
  }
  else {
    bVar15 = false;
    bVar16 = false;
    do {
      CDownloadedKeyInfo::CDownloadedKeyInfo(local_1c8,*(CDownloadedKeyInfo **)local_d0);
      if (local_c0 != 0) {
        bVar7 = CDownloadedKeyInfo::isActiveHere();
        if ((!bVar15 & bVar7) == 1) {
          pQVar12 = operator_new(0x10);
          QMetaObject::tr((char *)&local_1d0,(char *)&PTR_staticMetaObject_102222c80,0x1e09a54);
          QStandardItem::QStandardItem(pQVar12,&local_1d0);
          bVar15 = true;
          if (*(int *)local_1d0.field0_0x0 != -1) {
            if (*(int *)local_1d0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
              local_31 = *(int *)local_1d0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10063bd00;
            }
            QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
          }
LAB_10063bd00:
          bVar19 = SUB81(pQVar12,0);
          QStandardItem::setEditable(bVar19);
          QStandardItem::setEnabled(bVar19);
          QStandardItem::setSelectable(bVar19);
          pcVar6 = *(code **)(*(long *)pQVar12 + 0x18);
          QVariant::QVariant(&local_1e8,"");
          (*pcVar6)(pQVar12,&local_1e8,0x100);
          QVariant::~QVariant(&local_1e8);
          QFont::QFont(local_1f8,
                       (QFont *)(*(long *)(*(long *)((long)param_1[0xc] + 0x38) + 0x28) + 0x38));
          QFont::setPixelSize((int)local_1f8);
          QFont::setWeight((int)local_1f8);
          pcVar6 = *(code **)(*(long *)pQVar12 + 0x18);
          QFont::operator_cast_to_QVariant(local_60);
          (*pcVar6)(pQVar12,local_60,6);
          QVariant::~QVariant((QVariant *)local_60);
          local_210 = 0xffffffff;
          local_20c = 0xffffffff;
          local_200 = 0;
          local_208 = 0;
          iVar9 = (**(code **)(*(long *)this + 0x78))(this,&local_210);
          QStandardItemModel::setItem((int)this,iVar9,(QStandardItem *)0x0);
          QFont::~QFont(local_1f8);
        }
        else {
          bVar7 = CDownloadedKeyInfo::isActiveHere();
          if ((!bVar16) && ((bVar15 & (bVar7 ^ 1)) != 0)) {
            pQVar12 = operator_new(0x10);
            QMetaObject::tr((char *)&local_1d8,(char *)&PTR_staticMetaObject_102222c80,0x1e09a64);
            QStandardItem::QStandardItem(pQVar12,&local_1d8);
            bVar16 = true;
            if (*(int *)local_1d8.field0_0x0 != -1) {
              if (*(int *)local_1d8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
                local_31 = *(int *)local_1d8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10063bd00;
              }
              QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
            }
            goto LAB_10063bd00;
          }
        }
        pQVar12 = operator_new(0x10);
        uVar8 = CDownloadedKeyInfo::getLicenseEdition();
        FUN_10063d240(&local_248,uVar8);
        local_240.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_248;
        if (1 < *(int *)local_248 + 1U) {
          LOCK();
          *(int *)local_248 = *(int *)local_248 + 1;
          local_31 = *(int *)local_248 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_50,0x1eeaa60);
        QString::append(&local_240);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063bebc;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_10063bebc:
        CDownloadedKeyInfo::getKey();
        local_238.field0_0x0 = local_240.field0_0x0;
        if (1 < *(int *)local_240.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + 1;
          local_31 = *(int *)local_240.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_238);
        local_230.field0_0x0 = local_238.field0_0x0;
        if (1 < *(int *)local_238.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + 1;
          local_31 = *(int *)local_238.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_48,0x1eeaa60);
        QString::append(&local_230);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063bf74;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_10063bf74:
        QMetaObject::tr((char *)&local_258,(char *)&PTR_staticMetaObject_102222c80,0x1e09a78);
        local_228.field0_0x0 = local_230.field0_0x0;
        if (1 < *(int *)local_230.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + 1;
          local_31 = *(int *)local_230.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_228);
        local_220.field0_0x0 = local_228.field0_0x0;
        if (1 < *(int *)local_228.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_228.field0_0x0 = *(int *)local_228.field0_0x0 + 1;
          local_31 = *(int *)local_228.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_40,0x1e31adc);
        QString::append(&local_220);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063c03f;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_10063c03f:
        CDownloadedKeyInfo::getGracePeriodStartDate();
        local_270 = QDateTime::date();
        QDate::toString(&local_260,&local_270,4);
        local_218.field0_0x0 = local_220.field0_0x0;
        if (1 < *(int *)local_220.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + 1;
          local_31 = *(int *)local_220.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_218);
        QStandardItem::QStandardItem(pQVar12,&local_218);
        if (*(int *)local_218.field0_0x0 != -1) {
          if (*(int *)local_218.field0_0x0 != 0) {
            LOCK();
            *(int *)local_218.field0_0x0 = *(int *)local_218.field0_0x0 + -1;
            local_31 = *(int *)local_218.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063c0f8;
          }
          QArrayData::deallocate((QArrayData *)local_218.field0_0x0,2,8);
        }
LAB_10063c0f8:
        if (*(int *)local_260 != -1) {
          if (*(int *)local_260 != 0) {
            LOCK();
            *(int *)local_260 = *(int *)local_260 + -1;
            local_31 = *(int *)local_260 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063c131;
          }
          QArrayData::deallocate(local_260,2,8);
        }
LAB_10063c131:
        QDateTime::~QDateTime(&local_268);
        if (*(int *)local_220.field0_0x0 != -1) {
          if (*(int *)local_220.field0_0x0 != 0) {
            LOCK();
            *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
            local_31 = *(int *)local_220.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063c172;
          }
          QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
        }
LAB_10063c172:
        if (*(int *)local_228.field0_0x0 != -1) {
          if (*(int *)local_228.field0_0x0 != 0) {
            LOCK();
            *(int *)local_228.field0_0x0 = *(int *)local_228.field0_0x0 + -1;
            local_31 = *(int *)local_228.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063c1a8;
          }
          QArrayData::deallocate((QArrayData *)local_228.field0_0x0,2,8);
        }
LAB_10063c1a8:
        if (*(int *)local_258 != -1) {
          if (*(int *)local_258 != 0) {
            LOCK();
            *(int *)local_258 = *(int *)local_258 + -1;
            local_31 = *(int *)local_258 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063c1e1;
          }
          QArrayData::deallocate(local_258,2,8);
        }
LAB_10063c1e1:
        if (*(int *)local_230.field0_0x0 != -1) {
          if (*(int *)local_230.field0_0x0 != 0) {
            LOCK();
            *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + -1;
            local_31 = *(int *)local_230.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063c217;
          }
          QArrayData::deallocate((QArrayData *)local_230.field0_0x0,2,8);
        }
LAB_10063c217:
        if (*(int *)local_238.field0_0x0 != -1) {
          if (*(int *)local_238.field0_0x0 != 0) {
            LOCK();
            *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + -1;
            local_31 = *(int *)local_238.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063c24d;
          }
          QArrayData::deallocate((QArrayData *)local_238.field0_0x0,2,8);
        }
LAB_10063c24d:
        if (*(int *)local_250 != -1) {
          if (*(int *)local_250 != 0) {
            LOCK();
            *(int *)local_250 = *(int *)local_250 + -1;
            local_31 = *(int *)local_250 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063c286;
          }
          QArrayData::deallocate(local_250,2,8);
        }
LAB_10063c286:
        if (*(int *)local_240.field0_0x0 != -1) {
          if (*(int *)local_240.field0_0x0 != 0) {
            LOCK();
            *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + -1;
            local_31 = *(int *)local_240.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063c2bf;
          }
          QArrayData::deallocate((QArrayData *)local_240.field0_0x0,2,8);
        }
LAB_10063c2bf:
        if (*(int *)local_248 != -1) {
          if (*(int *)local_248 != 0) {
            LOCK();
            *(int *)local_248 = *(int *)local_248 + -1;
            local_31 = *(int *)local_248 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063c2fc;
          }
          QArrayData::deallocate(local_248,2,8);
        }
LAB_10063c2fc:
        QStandardItem::setEditable(SUB81(pQVar12,0));
        pcVar6 = *(code **)(*(long *)pQVar12 + 0x18);
        CDownloadedKeyInfo::getKey();
        QVariant::QVariant(&local_280,&local_288);
        (*pcVar6)(pQVar12,&local_280,0x100);
        QVariant::~QVariant(&local_280);
        if (*(int *)local_288.field0_0x0 != -1) {
          if (*(int *)local_288.field0_0x0 != 0) {
            LOCK();
            *(int *)local_288.field0_0x0 = *(int *)local_288.field0_0x0 + -1;
            local_31 = *(int *)local_288.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063c37e;
          }
          QArrayData::deallocate((QArrayData *)local_288.field0_0x0,2,8);
        }
LAB_10063c37e:
        local_2a0 = 0xffffffff;
        local_29c = 0xffffffff;
        local_290 = 0;
        local_298 = 0;
        iVar9 = (**(code **)(*(long *)this + 0x78))(this,&local_2a0);
        QStandardItemModel::setItem((int)this,iVar9,(QStandardItem *)0x0);
        local_c0 = 0;
      }
      CDownloadedKeyInfo::~CDownloadedKeyInfo(local_1c8);
      local_d0 = local_d0 + 2;
      uVar17 = local_c0 ^ 1;
      bVar19 = local_c0 != 1;
      local_c0 = uVar17;
    } while ((bVar19) && (local_d0 != local_c8));
  }
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063c44c;
    }
    QListData::dispose((Data *)local_d8);
  }
LAB_10063c44c:
  (**(code **)(**(long **)((long)param_1[0xc] + 0x38) + 0x1c0))
            (*(long **)((long)param_1[0xc] + 0x38),this);
  QAbstractItemView::setSelectionMode(*(undefined8 *)((long)param_1[0xc] + 0x38),1);
  if (*(int *)((long)*pQVar1 + 0xc) - *(int *)((long)*pQVar1 + 8) == 1) {
    plVar13 = (long *)QAbstractItemView::selectionModel();
    pcVar6 = *(code **)(*plVar13 + 0x68);
    plVar14 = (long *)QAbstractItemView::model();
    local_2d0 = 0xffffffff;
    local_2cc = 0xffffffff;
    local_2c0 = 0;
    local_2c8 = 0;
    (**(code **)(*plVar14 + 0x60))(local_2b8,plVar14,bVar16,0,&local_2d0);
    (*pcVar6)(plVar13,local_2b8,0x12);
  }
  FUN_10063d790(param_1);
  (**(code **)((long)*param_1 + 0x78))(param_1);
  QWidget::setFixedSize(param_1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return;
}

