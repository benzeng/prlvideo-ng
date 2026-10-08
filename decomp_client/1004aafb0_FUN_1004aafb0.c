
void FUN_1004aafb0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  uint uVar6;
  QGridLayout *this;
  QRadioButton *pQVar7;
  undefined8 *puVar8;
  QStackedWidget *this_00;
  QWidget *pQVar9;
  QFormLayout *this_01;
  QLabel *pQVar10;
  QComboBox *pQVar11;
  QSpinBox *this_02;
  Data *pDVar12;
  QArrayData *pQVar13;
  long lVar14;
  undefined *puVar15;
  QVariant local_3c0;
  QString local_3b0;
  QVariant local_3a8;
  QString local_398;
  QVariant local_390;
  QString local_380;
  QVariant local_378;
  QArrayData *local_368;
  QArrayData *local_360;
  QArrayData *local_358;
  QArrayData *local_350;
  QArrayData *local_348;
  QArrayData *local_340;
  QArrayData *local_338;
  AnonymousUnion0 local_330;
  QVariant local_328;
  QArrayData *local_318;
  AnonymousUnion0 local_310;
  QVariant local_308;
  QArrayData *local_2f8;
  QVariant local_2f0;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QString local_2c0;
  QVariant local_2b8;
  QString local_2a8;
  QVariant local_2a0;
  QArrayData *local_290;
  QArrayData *local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  QVariant local_270;
  QArrayData *local_260;
  QArrayData *local_258;
  QVariant local_250;
  uint local_240 [2];
  QArrayData *local_238;
  QArrayData *local_230;
  uint local_228 [2];
  QArrayData *local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QVariant local_1f8;
  QString local_1e8;
  QVariant local_1e0;
  QString local_1d0;
  QVariant local_1c8;
  QString local_1b8;
  QVariant local_1b0;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  AnonymousUnion0 local_180;
  QVariant local_178;
  QArrayData *local_168;
  AnonymousUnion0 local_160;
  QVariant local_158;
  QArrayData *local_148;
  QVariant local_140;
  QString local_130;
  QVariant local_128;
  QString local_118;
  QVariant local_110;
  QString local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  AnonymousUnion0 local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  AnonymousUnion0 local_90;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  bool local_38;
  undefined7 uStack_37;
  
  QObject::objectName();
  iVar1 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      _local_38 = CONCAT71(uStack_37,*(int *)local_40 != 0);
      if (*(int *)local_40 != 0) goto LAB_1004ab006;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004ab006:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df8b96);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004ab05d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004ab05d:
  local_38 = true;
  uStack_37 = 0x1a9000002;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df8bb4);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab0e7;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004ab0e7:
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_68,0x1dd67e5);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab156;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004ab156:
  QGridLayout::setVerticalSpacing((int)*param_1);
  QLayout::setContentsMargins((int)*param_1,-1,-1,-1);
  pQVar7 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar7,(QWidget *)param_2);
  param_1[1] = pQVar7;
  QString::fromUtf8_helper((char *)&local_70,0x1df8bcf);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab1ef;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004ab1ef:
  pQVar2 = (QString *)param_1[1];
  QString::fromUtf8_helper((char *)&local_78,0x1e41978);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab244;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004ab244:
  QAbstractButton::setAutoExclusive(SUB81(param_1[1],0));
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = (char *)param_1[1];
  local_90.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_98,0x1df20b9);
  FUN_1000341d0(&local_90,&local_98);
  QVariant::QVariant(&local_88,(QStringList *)&local_90.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_88);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab2f0;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004ab2f0:
  AVar5 = local_90;
  if (*(int *)local_90.field1 != -1) {
    if (*(int *)local_90.field1 != 0) {
      LOCK();
      *(int *)local_90.field1 = *(int *)local_90.field1 + -1;
      local_38 = *(int *)local_90.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab3ab;
    }
    iVar1 = *(int *)(local_90.field1 + 0xc);
    if (iVar1 != *(int *)(local_90.field1 + 8)) {
      lVar14 = (long)*(int *)(local_90.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = (Data *)(local_90.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar13 == 0) {
LAB_1004ab380:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar12;
            goto LAB_1004ab380;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004ab3ab:
  pcVar3 = (char *)param_1[1];
  local_b0.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_b8,0x1df27bf);
  FUN_1000341d0(&local_b0,&local_b8);
  QString::fromUtf8_helper((char *)&local_c0,0x1df27da);
  FUN_1000341d0(&local_b0,&local_c0);
  QString::fromUtf8_helper((char *)&local_c8,0x1df25d6);
  FUN_1000341d0(&local_b0,&local_c8);
  QString::fromUtf8_helper((char *)&local_d0,0x1df8bda);
  FUN_1000341d0(&local_b0,&local_d0);
  QString::fromUtf8_helper((char *)&local_d8,0x1df8bf8);
  FUN_1000341d0(&local_b0,&local_d8);
  QString::fromUtf8_helper((char *)&local_e0,0x1df2280);
  FUN_1000341d0(&local_b0,&local_e0);
  QString::fromUtf8_helper((char *)&local_e8,0x1df27f5);
  FUN_1000341d0(&local_b0,&local_e8);
  QVariant::QVariant(&local_a8,(QStringList *)&local_b0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab54f;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1004ab54f:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab585;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004ab585:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab5bb;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004ab5bb:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab5f1;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004ab5f1:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab627;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1004ab627:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab65d;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004ab65d:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab693;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004ab693:
  AVar5 = local_b0;
  if (*(int *)local_b0.field1 != -1) {
    if (*(int *)local_b0.field1 != 0) {
      LOCK();
      *(int *)local_b0.field1 = *(int *)local_b0.field1 + -1;
      local_38 = *(int *)local_b0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab74b;
    }
    iVar1 = *(int *)(local_b0.field1 + 0xc);
    if (iVar1 != *(int *)(local_b0.field1 + 8)) {
      lVar14 = (long)*(int *)(local_b0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = (Data *)(local_b0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar13 == 0) {
LAB_1004ab720:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar12;
            goto LAB_1004ab720;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004ab74b:
  pcVar3 = (char *)param_1[1];
  QString::fromUtf8_helper((char *)&local_100,0x1df8c13);
  QVariant::QVariant(&local_f8,&local_100);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_38 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab7d2;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_1004ab7d2:
  pcVar3 = (char *)param_1[1];
  QString::fromUtf8_helper((char *)&local_118,0x1df8c30);
  QVariant::QVariant(&local_110,&local_118);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_110);
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_38 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab859;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_1004ab859:
  pcVar3 = (char *)param_1[1];
  QString::fromUtf8_helper((char *)&local_130,0x1dc8727);
  QVariant::QVariant(&local_128,&local_130);
  QObject::setProperty(pcVar3,(QVariant *)"mode");
  QVariant::~QVariant(&local_128);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_38 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab8e0;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_1004ab8e0:
  pcVar3 = (char *)param_1[1];
  QVariant::QVariant(&local_140,true);
  QObject::setProperty(pcVar3,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_140);
  QGridLayout::addWidget(*param_1,param_1[1],0,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar7,(QWidget *)param_2);
  param_1[2] = pQVar7;
  QString::fromUtf8_helper((char *)&local_148,0x1df8c4d);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_38 = *(int *)local_148 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ab9b8;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1004ab9b8:
  QAbstractButton::setAutoExclusive(SUB81(param_1[2],0));
  pcVar3 = (char *)param_1[2];
  local_160.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_168,0x1df20b9);
  FUN_1000341d0(&local_160,&local_168);
  QVariant::QVariant(&local_158,(QStringList *)&local_160.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_158);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004aba66;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1004aba66:
  AVar5 = local_160;
  if (*(int *)local_160.field1 != -1) {
    if (*(int *)local_160.field1 != 0) {
      LOCK();
      *(int *)local_160.field1 = *(int *)local_160.field1 + -1;
      local_38 = *(int *)local_160.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004abb1b;
    }
    iVar1 = *(int *)(local_160.field1 + 0xc);
    if (iVar1 != *(int *)(local_160.field1 + 8)) {
      lVar14 = (long)*(int *)(local_160.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = (Data *)(local_160.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar13 == 0) {
LAB_1004abaf0:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar12;
            goto LAB_1004abaf0;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004abb1b:
  pcVar3 = (char *)param_1[2];
  local_180.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_188,0x1df27bf);
  FUN_1000341d0(&local_180,&local_188);
  QString::fromUtf8_helper((char *)&local_190,0x1df27da);
  FUN_1000341d0(&local_180,&local_190);
  QString::fromUtf8_helper((char *)&local_198,0x1df25d6);
  FUN_1000341d0(&local_180,&local_198);
  QString::fromUtf8_helper((char *)&local_1a0,0x1df2280);
  FUN_1000341d0(&local_180,&local_1a0);
  QVariant::QVariant(&local_178,(QStringList *)&local_180.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_178);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_38 = *(int *)local_1a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004abc3e;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1004abc3e:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_38 = *(int *)local_198 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004abc74;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_1004abc74:
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_38 = *(int *)local_190 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004abcaa;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_1004abcaa:
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_38 = *(int *)local_188 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004abce0;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_1004abce0:
  AVar5 = local_180;
  if (*(int *)local_180.field1 != -1) {
    if (*(int *)local_180.field1 != 0) {
      LOCK();
      *(int *)local_180.field1 = *(int *)local_180.field1 + -1;
      local_38 = *(int *)local_180.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004abd9b;
    }
    iVar1 = *(int *)(local_180.field1 + 0xc);
    if (iVar1 != *(int *)(local_180.field1 + 8)) {
      lVar14 = (long)*(int *)(local_180.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = (Data *)(local_180.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar13 == 0) {
LAB_1004abd70:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar12;
            goto LAB_1004abd70;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004abd9b:
  pcVar3 = (char *)param_1[2];
  QString::fromUtf8_helper((char *)&local_1b8,0x1df8c13);
  QVariant::QVariant(&local_1b0,&local_1b8);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_1b0);
  if (*(int *)local_1b8.field0_0x0 != -1) {
    if (*(int *)local_1b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
      local_38 = *(int *)local_1b8.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004abe22;
    }
    QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
  }
LAB_1004abe22:
  pcVar3 = (char *)param_1[2];
  QString::fromUtf8_helper((char *)&local_1d0,0x1df8c30);
  QVariant::QVariant(&local_1c8,&local_1d0);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_1c8);
  if (*(int *)local_1d0.field0_0x0 != -1) {
    if (*(int *)local_1d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
      local_38 = *(int *)local_1d0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004abea9;
    }
    QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
  }
LAB_1004abea9:
  pcVar3 = (char *)param_1[2];
  QString::fromUtf8_helper((char *)&local_1e8,0x1dc8714);
  QVariant::QVariant(&local_1e0,&local_1e8);
  QObject::setProperty(pcVar3,(QVariant *)"mode");
  QVariant::~QVariant(&local_1e0);
  if (*(int *)local_1e8.field0_0x0 != -1) {
    if (*(int *)local_1e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1e8.field0_0x0 = *(int *)local_1e8.field0_0x0 + -1;
      local_38 = *(int *)local_1e8.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004abf30;
    }
    QArrayData::deallocate((QArrayData *)local_1e8.field0_0x0,2,8);
  }
LAB_1004abf30:
  pcVar3 = (char *)param_1[2];
  QVariant::QVariant(&local_1f8,true);
  QObject::setProperty(pcVar3,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_1f8);
  QGridLayout::addWidget(*param_1,param_1[2],5,1,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  puVar15 = PTR_vtable_1021e17a0 + 0x10;
  *puVar8 = puVar15;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x500000014;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[3] = puVar8;
  QGridLayout::addItem(*param_1,puVar8,8,0,1,4,0);
  this_00 = operator_new(0x30);
  QStackedWidget::QStackedWidget(this_00,(QWidget *)param_2);
  param_1[4] = this_00;
  QString::fromUtf8_helper((char *)&local_200,0x1df8c58);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_38 = *(int *)local_200 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac09e;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_1004ac09e:
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,0,0);
  param_1[5] = pQVar9;
  QString::fromUtf8_helper((char *)&local_208,0x1df8c69);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_38 = *(int *)local_208 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac118;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_1004ac118:
  this_01 = operator_new(0x20);
  QFormLayout::QFormLayout(this_01,(QWidget *)param_1[5]);
  param_1[6] = this_01;
  QString::fromUtf8_helper((char *)&local_210,0x1df4574);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_38 = *(int *)local_210 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac193;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_1004ac193:
  QFormLayout::setFieldGrowthPolicy(param_1[6],0);
  QFormLayout::setLabelAlignment(param_1[6],0x82);
  QFormLayout::setFormAlignment(param_1[6],0x24);
  QFormLayout::setVerticalSpacing((int)param_1[6]);
  QLayout::setContentsMargins((int)param_1[6],0,0,0);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_1[5],0);
  param_1[7] = pQVar10;
  QString::fromUtf8_helper((char *)&local_218,0x1df8c7f);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      local_38 = *(int *)local_218 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac25f;
    }
    QArrayData::deallocate(local_218,2,8);
  }
LAB_1004ac25f:
  QLabel::setAlignment(param_1[7],0x82);
  QLabel::setMargin((int)param_1[7]);
  QFormLayout::setWidget(param_1[6],0,0,param_1[7]);
  pQVar11 = operator_new(0x30);
  QComboBox::QComboBox(pQVar11,(QWidget *)param_1[5]);
  param_1[8] = pQVar11;
  QString::fromUtf8_helper((char *)&local_220,0x1df8c90);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_220 != -1) {
    if (*(int *)local_220 != 0) {
      LOCK();
      *(int *)local_220 = *(int *)local_220 + -1;
      local_38 = *(int *)local_220 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac308;
    }
    QArrayData::deallocate(local_220,2,8);
  }
LAB_1004ac308:
  local_228[0] = 0x70000;
  QSizePolicy::setControlType(local_228,1);
  local_228[0] = local_228[0] & 0xffff0000;
  uVar6 = QWidget::sizePolicy();
  local_228[0] = local_228[0] & 0xdfffffff | uVar6 & 0x20000000;
  QWidget::setSizePolicy(param_1[8]);
  QComboBox::setSizeAdjustPolicy(param_1[8],0);
  QFormLayout::setWidget(param_1[6],0,1,param_1[8]);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_1[5],0);
  param_1[9] = pQVar10;
  QString::fromUtf8_helper((char *)&local_230,0x1df8ca1);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_38 = *(int *)local_230 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac3f8;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_1004ac3f8:
  QLabel::setAlignment(param_1[9],0x82);
  QFormLayout::setWidget(param_1[6],1,0,param_1[9]);
  this_02 = operator_new(0x30);
  QSpinBox::QSpinBox(this_02,(QWidget *)param_1[5]);
  param_1[10] = this_02;
  QString::fromUtf8_helper((char *)&local_238,0x1df8cac);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_38 = *(int *)local_238 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac498;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_1004ac498:
  local_240[0] = 0;
  QSizePolicy::setControlType(local_240,1);
  local_240[0] = local_240[0] & 0xffff0000;
  uVar6 = QWidget::sizePolicy();
  local_240[0] = local_240[0] & 0xdfffffff | uVar6 & 0x20000000;
  QWidget::setSizePolicy(param_1[10]);
  QSpinBox::setMaximum((int)param_1[10]);
  QSpinBox::setValue((int)param_1[10]);
  pcVar3 = (char *)param_1[10];
  QVariant::QVariant(&local_250,true);
  QObject::setProperty(pcVar3,(QVariant *)"typeUInt");
  QVariant::~QVariant(&local_250);
  QFormLayout::setWidget(param_1[6],1,1,param_1[10]);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_1[5],0);
  param_1[0xb] = pQVar10;
  QString::fromUtf8_helper((char *)&local_258,0x1df8cb7);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_38 = *(int *)local_258 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac5d4;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_1004ac5d4:
  QLabel::setAlignment(param_1[0xb],0x82);
  QFormLayout::setWidget(param_1[6],2,0,param_1[0xb]);
  pQVar11 = operator_new(0x30);
  QComboBox::QComboBox(pQVar11,(QWidget *)param_1[5]);
  param_1[0xc] = pQVar11;
  QString::fromUtf8_helper((char *)&local_260,0x1df8cc3);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_38 = *(int *)local_260 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac674;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_1004ac674:
  QComboBox::setSizeAdjustPolicy(param_1[0xc],0);
  pcVar3 = (char *)param_1[0xc];
  QVariant::QVariant(&local_270,true);
  QObject::setProperty(pcVar3,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_270);
  QFormLayout::setWidget(param_1[6],2,1,param_1[0xc]);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_1[5],0);
  param_1[0xd] = pQVar10;
  QString::fromUtf8_helper((char *)&local_278,0x1df8cd5);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_38 = *(int *)local_278 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac74d;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_1004ac74d:
  QLabel::setAlignment(param_1[0xd],0x82);
  QFormLayout::setWidget(param_1[6],3,0,param_1[0xd]);
  pQVar11 = operator_new(0x30);
  QComboBox::QComboBox(pQVar11,(QWidget *)param_1[5]);
  param_1[0xe] = pQVar11;
  QString::fromUtf8_helper((char *)&local_280,0x1df8ceb);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_280 != -1) {
    if (*(int *)local_280 != 0) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + -1;
      local_38 = *(int *)local_280 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac7ed;
    }
    QArrayData::deallocate(local_280,2,8);
  }
LAB_1004ac7ed:
  QComboBox::setSizeAdjustPolicy(param_1[0xe],0);
  QFormLayout::setWidget(param_1[6],3,1,param_1[0xe]);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_1[5],0);
  param_1[0xf] = pQVar10;
  QString::fromUtf8_helper((char *)&local_288,0x1df8cfd);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_38 = *(int *)local_288 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac88f;
    }
    QArrayData::deallocate(local_288,2,8);
  }
LAB_1004ac88f:
  QLabel::setAlignment(param_1[0xf],0x82);
  QFormLayout::setWidget(param_1[6],4,0,param_1[0xf]);
  pQVar11 = operator_new(0x30);
  QComboBox::QComboBox(pQVar11,(QWidget *)param_1[5]);
  param_1[0x10] = pQVar11;
  QString::fromUtf8_helper((char *)&local_290,0x1df8d0f);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_38 = *(int *)local_290 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac932;
    }
    QArrayData::deallocate(local_290,2,8);
  }
LAB_1004ac932:
  QComboBox::setSizeAdjustPolicy(param_1[0x10],0);
  pcVar3 = (char *)param_1[0x10];
  QString::fromUtf8_helper((char *)&local_2a8,0x1df8bf8);
  QVariant::QVariant(&local_2a0,&local_2a8);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_2a0);
  if (*(int *)local_2a8.field0_0x0 != -1) {
    if (*(int *)local_2a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2a8.field0_0x0 = *(int *)local_2a8.field0_0x0 + -1;
      local_38 = *(int *)local_2a8.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ac9cb;
    }
    QArrayData::deallocate((QArrayData *)local_2a8.field0_0x0,2,8);
  }
LAB_1004ac9cb:
  pcVar3 = (char *)param_1[0x10];
  QString::fromUtf8_helper((char *)&local_2c0,0x1df8d21);
  QVariant::QVariant(&local_2b8,&local_2c0);
  QObject::setProperty(pcVar3,(QVariant *)"initer");
  QVariant::~QVariant(&local_2b8);
  if (*(int *)local_2c0.field0_0x0 != -1) {
    if (*(int *)local_2c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2c0.field0_0x0 = *(int *)local_2c0.field0_0x0 + -1;
      local_38 = *(int *)local_2c0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004aca55;
    }
    QArrayData::deallocate((QArrayData *)local_2c0.field0_0x0,2,8);
  }
LAB_1004aca55:
  QFormLayout::setWidget(param_1[6],4,1,param_1[0x10]);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_1[5],0);
  param_1[0x11] = pQVar10;
  QString::fromUtf8_helper((char *)&local_2c8,0x1df8d37);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_2c8 != -1) {
    if (*(int *)local_2c8 != 0) {
      LOCK();
      *(int *)local_2c8 = *(int *)local_2c8 + -1;
      local_38 = *(int *)local_2c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004acaf1;
    }
    QArrayData::deallocate(local_2c8,2,8);
  }
LAB_1004acaf1:
  QLabel::setAlignment(param_1[0x11],0x82);
  QFormLayout::setWidget(param_1[6],5,0,param_1[0x11]);
  pQVar11 = operator_new(0x30);
  QComboBox::QComboBox(pQVar11,(QWidget *)param_1[5]);
  param_1[0x12] = pQVar11;
  QString::fromUtf8_helper((char *)&local_2d0,0x1df8d4a);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_2d0 != -1) {
    if (*(int *)local_2d0 != 0) {
      LOCK();
      *(int *)local_2d0 = *(int *)local_2d0 + -1;
      local_38 = *(int *)local_2d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004acb9a;
    }
    QArrayData::deallocate(local_2d0,2,8);
  }
LAB_1004acb9a:
  uVar6 = QWidget::sizePolicy();
  local_228[0] = local_228[0] & 0xdfffffff | uVar6 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x12]);
  QComboBox::setSizeAdjustPolicy(param_1[0x12],0);
  QFormLayout::setWidget(param_1[6],5,1,param_1[0x12]);
  QStackedWidget::addWidget((QWidget *)param_1[4]);
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,0,0);
  param_1[0x13] = pQVar9;
  QString::fromUtf8_helper((char *)&local_2d8,0x1df8d5d);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_38 = *(int *)local_2d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004acc83;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_1004acc83:
  QStackedWidget::addWidget((QWidget *)param_1[4]);
  QGridLayout::addWidget(*param_1,param_1[4],7,1,1,1,0);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_2,0);
  param_1[0x14] = pQVar10;
  QString::fromUtf8_helper((char *)&local_2e0,0x1df8d69);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_38 = *(int *)local_2e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004acd3e;
    }
    QArrayData::deallocate(local_2e0,2,8);
  }
LAB_1004acd3e:
  QLabel::setWordWrap(SUB81(param_1[0x14],0));
  QLabel::setIndent((int)param_1[0x14]);
  pcVar3 = (char *)param_1[0x14];
  QVariant::QVariant(&local_2f0,true);
  QObject::setProperty(pcVar3,(QVariant *)"SmallFont");
  QVariant::~QVariant(&local_2f0);
  QGridLayout::addWidget(*param_1,param_1[0x14],3,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar7,(QWidget *)param_2);
  param_1[0x15] = pQVar7;
  QString::fromUtf8_helper((char *)&local_2f8,0x1df8d80);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_38 = *(int *)local_2f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ace46;
    }
    QArrayData::deallocate(local_2f8,2,8);
  }
LAB_1004ace46:
  QAbstractButton::setAutoExclusive(SUB81(param_1[0x15],0));
  pcVar3 = (char *)param_1[0x15];
  local_310.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_318,0x1df20b9);
  FUN_1000341d0(&local_310,&local_318);
  QVariant::QVariant(&local_308,(QStringList *)&local_310.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_308);
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      local_38 = *(int *)local_318 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004acefa;
    }
    QArrayData::deallocate(local_318,2,8);
  }
LAB_1004acefa:
  AVar5 = local_310;
  if (*(int *)local_310.field1 != -1) {
    if (*(int *)local_310.field1 != 0) {
      LOCK();
      *(int *)local_310.field1 = *(int *)local_310.field1 + -1;
      local_38 = *(int *)local_310.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004acfcb;
    }
    iVar1 = *(int *)(local_310.field1 + 0xc);
    if (iVar1 != *(int *)(local_310.field1 + 8)) {
      lVar14 = (long)*(int *)(local_310.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = (Data *)(local_310.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar13 == 0) {
LAB_1004acfa0:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar12;
            goto LAB_1004acfa0;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004acfcb:
  pcVar3 = (char *)param_1[0x15];
  local_330.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_338,0x1df27bf);
  FUN_1000341d0(&local_330,&local_338);
  QString::fromUtf8_helper((char *)&local_340,0x1df27da);
  FUN_1000341d0(&local_330,&local_340);
  QString::fromUtf8_helper((char *)&local_348,0x1df25d6);
  FUN_1000341d0(&local_330,&local_348);
  QString::fromUtf8_helper((char *)&local_350,0x1df8bda);
  FUN_1000341d0(&local_330,&local_350);
  QString::fromUtf8_helper((char *)&local_358,0x1df8bf8);
  FUN_1000341d0(&local_330,&local_358);
  QString::fromUtf8_helper((char *)&local_360,0x1df2280);
  FUN_1000341d0(&local_330,&local_360);
  QString::fromUtf8_helper((char *)&local_368,0x1df27f5);
  FUN_1000341d0(&local_330,&local_368);
  QVariant::QVariant(&local_328,(QStringList *)&local_330.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_328);
  if (*(int *)local_368 != -1) {
    if (*(int *)local_368 != 0) {
      LOCK();
      *(int *)local_368 = *(int *)local_368 + -1;
      local_38 = *(int *)local_368 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ad172;
    }
    QArrayData::deallocate(local_368,2,8);
  }
LAB_1004ad172:
  if (*(int *)local_360 != -1) {
    if (*(int *)local_360 != 0) {
      LOCK();
      *(int *)local_360 = *(int *)local_360 + -1;
      local_38 = *(int *)local_360 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ad1a8;
    }
    QArrayData::deallocate(local_360,2,8);
  }
LAB_1004ad1a8:
  if (*(int *)local_358 != -1) {
    if (*(int *)local_358 != 0) {
      LOCK();
      *(int *)local_358 = *(int *)local_358 + -1;
      local_38 = *(int *)local_358 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ad1de;
    }
    QArrayData::deallocate(local_358,2,8);
  }
LAB_1004ad1de:
  if (*(int *)local_350 != -1) {
    if (*(int *)local_350 != 0) {
      LOCK();
      *(int *)local_350 = *(int *)local_350 + -1;
      local_38 = *(int *)local_350 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ad214;
    }
    QArrayData::deallocate(local_350,2,8);
  }
LAB_1004ad214:
  if (*(int *)local_348 != -1) {
    if (*(int *)local_348 != 0) {
      LOCK();
      *(int *)local_348 = *(int *)local_348 + -1;
      local_38 = *(int *)local_348 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ad24a;
    }
    QArrayData::deallocate(local_348,2,8);
  }
LAB_1004ad24a:
  if (*(int *)local_340 != -1) {
    if (*(int *)local_340 != 0) {
      LOCK();
      *(int *)local_340 = *(int *)local_340 + -1;
      local_38 = *(int *)local_340 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ad280;
    }
    QArrayData::deallocate(local_340,2,8);
  }
LAB_1004ad280:
  if (*(int *)local_338 != -1) {
    if (*(int *)local_338 != 0) {
      LOCK();
      *(int *)local_338 = *(int *)local_338 + -1;
      local_38 = *(int *)local_338 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ad2b6;
    }
    QArrayData::deallocate(local_338,2,8);
  }
LAB_1004ad2b6:
  AVar5 = local_330;
  if (*(int *)local_330.field1 != -1) {
    if (*(int *)local_330.field1 != 0) {
      LOCK();
      *(int *)local_330.field1 = *(int *)local_330.field1 + -1;
      local_38 = *(int *)local_330.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ad341;
    }
    iVar1 = *(int *)(local_330.field1 + 0xc);
    if (iVar1 != *(int *)(local_330.field1 + 8)) {
      lVar14 = (long)*(int *)(local_330.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = (Data *)(local_330.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar13 == 0) {
LAB_1004ad320:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar12;
            goto LAB_1004ad320;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004ad341:
  pcVar3 = (char *)param_1[0x15];
  QString::fromUtf8_helper((char *)&local_380,0x1df8c13);
  QVariant::QVariant(&local_378,&local_380);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_378);
  if (*(int *)local_380.field0_0x0 != -1) {
    if (*(int *)local_380.field0_0x0 != 0) {
      LOCK();
      *(int *)local_380.field0_0x0 = *(int *)local_380.field0_0x0 + -1;
      local_38 = *(int *)local_380.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ad3cb;
    }
    QArrayData::deallocate((QArrayData *)local_380.field0_0x0,2,8);
  }
LAB_1004ad3cb:
  pcVar3 = (char *)param_1[0x15];
  QString::fromUtf8_helper((char *)&local_398,0x1df8c30);
  QVariant::QVariant(&local_390,&local_398);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_390);
  if (*(int *)local_398.field0_0x0 != -1) {
    if (*(int *)local_398.field0_0x0 != 0) {
      LOCK();
      *(int *)local_398.field0_0x0 = *(int *)local_398.field0_0x0 + -1;
      local_38 = *(int *)local_398.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ad455;
    }
    QArrayData::deallocate((QArrayData *)local_398.field0_0x0,2,8);
  }
LAB_1004ad455:
  pcVar3 = (char *)param_1[0x15];
  QString::fromUtf8_helper((char *)&local_3b0,0x1df2815);
  QVariant::QVariant(&local_3a8,&local_3b0);
  QObject::setProperty(pcVar3,(QVariant *)"mode");
  QVariant::~QVariant(&local_3a8);
  if (*(int *)local_3b0.field0_0x0 != -1) {
    if (*(int *)local_3b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3b0.field0_0x0 = *(int *)local_3b0.field0_0x0 + -1;
      local_38 = *(int *)local_3b0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ad4df;
    }
    QArrayData::deallocate((QArrayData *)local_3b0.field0_0x0,2,8);
  }
LAB_1004ad4df:
  pcVar3 = (char *)param_1[0x15];
  QVariant::QVariant(&local_3c0,true);
  QObject::setProperty(pcVar3,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_3c0);
  QGridLayout::addWidget(*param_1,param_1[0x15],2,1,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar15;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x800000014;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x16] = puVar8;
  QGridLayout::addItem(*param_1,puVar8,1,1,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar15;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000014;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x17] = puVar8;
  QGridLayout::addItem(*param_1,puVar8,6,1,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar15;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x600000014;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x18] = puVar8;
  QGridLayout::addItem(*param_1,puVar8,4,1,1,1,0);
  QWidget::setTabOrder((QWidget *)param_1[8],(QWidget *)param_1[10]);
  QWidget::setTabOrder((QWidget *)param_1[10],(QWidget *)param_1[0xc]);
  QWidget::setTabOrder((QWidget *)param_1[0xc],(QWidget *)param_1[0xe]);
  QWidget::setTabOrder((QWidget *)param_1[0xe],(QWidget *)param_1[0x12]);
  FUN_1004aecd0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

