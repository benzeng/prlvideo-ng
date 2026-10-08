
void FUN_100529080(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QString *pQVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  uint uVar6;
  QVBoxLayout *pQVar7;
  QFormLayout *this;
  QLabel *pQVar8;
  QCheckBox *pQVar9;
  QWidget *pQVar10;
  CPrlFileDevSelectorWidget *this_00;
  QComboBox *pQVar11;
  CImageButtonComplex *this_01;
  long lVar12;
  QArrayData *pQVar13;
  Data *pDVar14;
  QVariant local_4a8;
  QArrayData *local_498;
  QArrayData *local_490;
  AnonymousUnion0 local_488;
  QVariant local_480;
  QArrayData *local_470;
  AnonymousUnion0 local_468;
  QVariant local_460;
  QArrayData *local_450;
  QArrayData *local_448;
  QArrayData *local_440;
  QArrayData *local_438;
  QString local_430;
  QVariant local_428;
  QArrayData *local_418;
  QArrayData *local_410;
  QString local_408;
  QVariant local_400;
  QString local_3f0;
  QVariant local_3e8;
  QString local_3d8;
  QVariant local_3d0;
  QArrayData *local_3c0;
  QArrayData *local_3b8;
  QArrayData *local_3b0;
  QArrayData *local_3a8;
  AnonymousUnion0 local_3a0;
  QVariant local_398;
  QArrayData *local_388;
  AnonymousUnion0 local_380;
  QVariant local_378;
  uint local_368 [2];
  QArrayData *local_360;
  QArrayData *local_358;
  AnonymousUnion0 local_350;
  QVariant local_348;
  QArrayData *local_338;
  AnonymousUnion0 local_330;
  QVariant local_328;
  QArrayData *local_318;
  QArrayData *local_310;
  QArrayData *local_308;
  QString local_300;
  QVariant local_2f8;
  QArrayData *local_2e8;
  AnonymousUnion0 local_2e0;
  QVariant local_2d8;
  QArrayData *local_2c8;
  AnonymousUnion0 local_2c0;
  QVariant local_2b8;
  QArrayData *local_2a8;
  QString local_2a0;
  QVariant local_298;
  QArrayData *local_288;
  QArrayData *local_280;
  QString local_278;
  QVariant local_270;
  QVariant local_260;
  QString local_250;
  QVariant local_248;
  QArrayData *local_238;
  AnonymousUnion0 local_230;
  QVariant local_228;
  uint local_218 [2];
  QArrayData *local_210;
  QString local_208;
  QVariant local_200;
  QString local_1f0;
  QVariant local_1e8;
  QArrayData *local_1d8;
  AnonymousUnion0 local_1d0;
  QVariant local_1c8;
  QArrayData *local_1b8;
  QString local_1b0;
  QVariant local_1a8;
  QArrayData *local_198;
  QArrayData *local_190;
  QString local_188;
  QVariant local_180;
  QString local_170;
  QVariant local_168;
  QArrayData *local_158;
  AnonymousUnion0 local_150;
  QVariant local_148;
  QArrayData *local_138;
  AnonymousUnion0 local_130;
  QVariant local_128;
  QVariant local_118;
  uint local_108 [2];
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  AnonymousUnion0 local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  AnonymousUnion0 local_c0;
  QVariant local_b8;
  QString local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QString local_88;
  QVariant local_80;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
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
      if (*(int *)local_40 != 0) goto LAB_1005290d6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005290d6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1dfeba1);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10052912d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10052912d:
  local_38 = true;
  uStack_37 = 0x205000002;
  QWidget::resize(param_2);
  QVariant::QVariant(&local_58,true);
  QObject::setProperty((char *)param_2,(QVariant *)"hasRestoreDefaults");
  QVariant::~QVariant(&local_58);
  pQVar7 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar7,(QWidget *)param_2);
  *param_1 = pQVar7;
  QString::fromUtf8_helper((char *)&local_60,0x1dc1597);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005291e1;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005291e1:
  this = operator_new(0x20);
  QFormLayout::QFormLayout(this,(QWidget *)0x0);
  param_1[1] = this;
  QString::fromUtf8_helper((char *)&local_68,0x1df4574);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052924f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10052924f:
  QFormLayout::setFieldGrowthPolicy(param_1[1],0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[2] = pQVar8;
  QString::fromUtf8_helper((char *)&local_70,0x1dfebbc);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005292cb;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005292cb:
  pcVar2 = (char *)param_1[2];
  QString::fromUtf8_helper((char *)&local_88,0x1e2ee62);
  QVariant::QVariant(&local_80,&local_88);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_80);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_38 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052933f;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10052933f:
  QFormLayout::setWidget(param_1[1],0,0,param_1[2]);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[3] = pQVar9;
  QString::fromUtf8_helper((char *)&local_90,0x1dfebcb);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005293c8;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005293c8:
  pcVar2 = (char *)param_1[3];
  QString::fromUtf8_helper((char *)&local_a8,0x1e2ee62);
  QVariant::QVariant(&local_a0,&local_a8);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_38 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052944e;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_10052944e:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar2 = (char *)param_1[3];
  local_c0.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_c8,0x1dfea87);
  FUN_1000341d0(&local_c0,&local_c8);
  QVariant::QVariant(&local_b8,(QStringList *)&local_c0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_b8);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005294f6;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1005294f6:
  AVar5 = local_c0;
  if (*(int *)local_c0.field1 != -1) {
    if (*(int *)local_c0.field1 != 0) {
      LOCK();
      *(int *)local_c0.field1 = *(int *)local_c0.field1 + -1;
      local_38 = *(int *)local_c0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005295cb;
    }
    iVar1 = *(int *)(local_c0.field1 + 0xc);
    if (iVar1 != *(int *)(local_c0.field1 + 8)) {
      lVar12 = (long)*(int *)(local_c0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_c0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_1005295a0:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_1005295a0;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1005295cb:
  pcVar2 = (char *)param_1[3];
  local_e0.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_e8,0x1dfebde);
  FUN_1000341d0(&local_e0,&local_e8);
  QVariant::QVariant(&local_d8,(QStringList *)&local_e0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"QSettings");
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052966c;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10052966c:
  AVar5 = local_e0;
  if (*(int *)local_e0.field1 != -1) {
    if (*(int *)local_e0.field1 != 0) {
      LOCK();
      *(int *)local_e0.field1 = *(int *)local_e0.field1 + -1;
      local_38 = *(int *)local_e0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052972b;
    }
    iVar1 = *(int *)(local_e0.field1 + 0xc);
    if (iVar1 != *(int *)(local_e0.field1 + 8)) {
      lVar12 = (long)*(int *)(local_e0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_e0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_100529700:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_100529700;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10052972b:
  QFormLayout::setWidget(param_1[1],0,1,param_1[3]);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[4] = pQVar10;
  QString::fromUtf8_helper((char *)&local_f0,0x1dfebed);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005297b9;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1005297b9:
  QFormLayout::setWidget(param_1[1],1,0,param_1[4]);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[5] = pQVar8;
  QString::fromUtf8_helper((char *)&local_f8,0x1dfebfd);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100529847;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100529847:
  QLabel::setAlignment(param_1[5],0x82);
  QFormLayout::setWidget(param_1[1],2,0,param_1[5]);
  this_00 = operator_new(0x38);
  CPrlFileDevSelectorWidget::CPrlFileDevSelectorWidget(this_00,(QWidget *)param_2);
  param_1[6] = this_00;
  QString::fromUtf8_helper((char *)&local_100,0x1dfec10);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005298e1;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1005298e1:
  local_108[0] = 0x40000;
  QSizePolicy::setControlType(local_108,1);
  local_108[0] = local_108[0] & 0xffff0000;
  uVar6 = QWidget::sizePolicy();
  local_108[0] = local_108[0] & 0xdfffffff | uVar6 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  QWidget::setMinimumSize((int)param_1[6],0xe6);
  QWidget::setMaximumSize((int)param_1[6],0x168);
  pcVar2 = (char *)param_1[6];
  QVariant::QVariant(&local_118,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_118);
  pcVar2 = (char *)param_1[6];
  local_130.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_138,0x1dfec35);
  FUN_1000341d0(&local_130,&local_138);
  QVariant::QVariant(&local_128,(QStringList *)&local_130.field0);
  QObject::setProperty(pcVar2,(QVariant *)"UserPreferences");
  QVariant::~QVariant(&local_128);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_100529a2a;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100529a2a:
  AVar5 = local_130;
  if (*(int *)local_130.field1 != -1) {
    if (*(int *)local_130.field1 != 0) {
      LOCK();
      *(int *)local_130.field1 = *(int *)local_130.field1 + -1;
      local_38 = *(int *)local_130.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_100529aeb;
    }
    iVar1 = *(int *)(local_130.field1 + 0xc);
    if (iVar1 != *(int *)(local_130.field1 + 8)) {
      lVar12 = (long)*(int *)(local_130.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_130.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_100529ac0:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_100529ac0;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100529aeb:
  pcVar2 = (char *)param_1[6];
  local_150.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_158,0x1dfec25);
  FUN_1000341d0(&local_150,&local_158);
  QVariant::QVariant(&local_148,(QStringList *)&local_150.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_148);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_100529b8c;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100529b8c:
  AVar5 = local_150;
  if (*(int *)local_150.field1 != -1) {
    if (*(int *)local_150.field1 != 0) {
      LOCK();
      *(int *)local_150.field1 = *(int *)local_150.field1 + -1;
      local_38 = *(int *)local_150.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_100529c4b;
    }
    iVar1 = *(int *)(local_150.field1 + 0xc);
    if (iVar1 != *(int *)(local_150.field1 + 8)) {
      lVar12 = (long)*(int *)(local_150.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_150.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_100529c20:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_100529c20;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100529c4b:
  pcVar2 = (char *)param_1[6];
  QString::fromUtf8_helper((char *)&local_170,0x1dfec57);
  QVariant::QVariant(&local_168,&local_170);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_168);
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      local_38 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100529cd1;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
LAB_100529cd1:
  pcVar2 = (char *)param_1[6];
  QString::fromUtf8_helper((char *)&local_188,0x1dfec6a);
  QVariant::QVariant(&local_180,&local_188);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_180);
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_38 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100529d57;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_100529d57:
  QFormLayout::setWidget(param_1[1],2,1,param_1[6]);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[7] = pQVar10;
  QString::fromUtf8_helper((char *)&local_190,0x1dfec7d);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_38 = *(int *)local_190 != 0;
      UNLOCK();
      if (local_38) goto LAB_100529de8;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100529de8:
  QWidget::setMaximumSize((int)param_1[7],0xffffff);
  QFormLayout::setWidget(param_1[1],3,1,param_1[7]);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[8] = pQVar8;
  QString::fromUtf8_helper((char *)&local_198,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_38 = *(int *)local_198 != 0;
      UNLOCK();
      if (local_38) goto LAB_100529e8c;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_100529e8c:
  QLabel::setAlignment(param_1[8],0x82);
  pcVar2 = (char *)param_1[8];
  QString::fromUtf8_helper((char *)&local_1b0,0x1dfec8c);
  QVariant::QVariant(&local_1a8,&local_1b0);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_1a8);
  if (*(int *)local_1b0.field0_0x0 != -1) {
    if (*(int *)local_1b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
      local_38 = *(int *)local_1b0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100529f20;
    }
    QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
  }
LAB_100529f20:
  QFormLayout::setWidget(param_1[1],4,0,param_1[8]);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[9] = pQVar9;
  QString::fromUtf8_helper((char *)&local_1b8,0x1dfec8f);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_38 = *(int *)local_1b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100529fac;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_100529fac:
  pcVar2 = (char *)param_1[9];
  local_1d0.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_1d8,0x1dfea87);
  FUN_1000341d0(&local_1d0,&local_1d8);
  QVariant::QVariant(&local_1c8,(QStringList *)&local_1d0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_1c8);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_38 = *(int *)local_1d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a04d;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_10052a04d:
  AVar5 = local_1d0;
  if (*(int *)local_1d0.field1 != -1) {
    if (*(int *)local_1d0.field1 != 0) {
      LOCK();
      *(int *)local_1d0.field1 = *(int *)local_1d0.field1 + -1;
      local_38 = *(int *)local_1d0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a10b;
    }
    iVar1 = *(int *)(local_1d0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1d0.field1 + 8)) {
      lVar12 = (long)*(int *)(local_1d0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_1d0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_10052a0e0:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_10052a0e0;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10052a10b:
  pcVar2 = (char *)param_1[9];
  QString::fromUtf8_helper((char *)&local_1f0,0x1dfebde);
  QVariant::QVariant(&local_1e8,&local_1f0);
  QObject::setProperty(pcVar2,(QVariant *)"QSettings");
  QVariant::~QVariant(&local_1e8);
  if (*(int *)local_1f0.field0_0x0 != -1) {
    if (*(int *)local_1f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
      local_38 = *(int *)local_1f0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a191;
    }
    QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
  }
LAB_10052a191:
  pcVar2 = (char *)param_1[9];
  QString::fromUtf8_helper((char *)&local_208,0x1dfec8c);
  QVariant::QVariant(&local_200,&local_208);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_200);
  if (*(int *)local_208.field0_0x0 != -1) {
    if (*(int *)local_208.field0_0x0 != 0) {
      LOCK();
      *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + -1;
      local_38 = *(int *)local_208.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a217;
    }
    QArrayData::deallocate((QArrayData *)local_208.field0_0x0,2,8);
  }
LAB_10052a217:
  QFormLayout::setWidget(param_1[1],4,1,param_1[9]);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[10] = pQVar9;
  QString::fromUtf8_helper((char *)&local_210,0x1dfeca1);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_38 = *(int *)local_210 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a2a6;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_10052a2a6:
  local_218[0] = 0x550000;
  QSizePolicy::setControlType(local_218,1);
  local_218[0] = local_218[0] & 0xffff0000;
  uVar6 = QWidget::sizePolicy();
  local_218[0] = local_218[0] & 0xdfffffff | uVar6 & 0x20000000;
  QWidget::setSizePolicy(param_1[10]);
  pcVar2 = (char *)param_1[10];
  local_230.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_238,0x1dfea87);
  FUN_1000341d0(&local_230,&local_238);
  QVariant::QVariant(&local_228,(QStringList *)&local_230.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_228);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_38 = *(int *)local_238 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a396;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_10052a396:
  AVar5 = local_230;
  if (*(int *)local_230.field1 != -1) {
    if (*(int *)local_230.field1 != 0) {
      LOCK();
      *(int *)local_230.field1 = *(int *)local_230.field1 + -1;
      local_38 = *(int *)local_230.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a45b;
    }
    iVar1 = *(int *)(local_230.field1 + 0xc);
    if (iVar1 != *(int *)(local_230.field1 + 8)) {
      lVar12 = (long)*(int *)(local_230.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_230.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_10052a430:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_10052a430;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10052a45b:
  pcVar2 = (char *)param_1[10];
  QString::fromUtf8_helper((char *)&local_250,0x1dfecb8);
  QVariant::QVariant(&local_248,&local_250);
  QObject::setProperty(pcVar2,(QVariant *)"QSettings");
  QVariant::~QVariant(&local_248);
  if (*(int *)local_250.field0_0x0 != -1) {
    if (*(int *)local_250.field0_0x0 != 0) {
      LOCK();
      *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
      local_38 = *(int *)local_250.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a4e1;
    }
    QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
  }
LAB_10052a4e1:
  pcVar2 = (char *)param_1[10];
  QVariant::QVariant(&local_260,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_260);
  pcVar2 = (char *)param_1[10];
  QString::fromUtf8_helper((char *)&local_278,0x1dfec8c);
  QVariant::QVariant(&local_270,&local_278);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_270);
  if (*(int *)local_278.field0_0x0 != -1) {
    if (*(int *)local_278.field0_0x0 != 0) {
      LOCK();
      *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + -1;
      local_38 = *(int *)local_278.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a59d;
    }
    QArrayData::deallocate((QArrayData *)local_278.field0_0x0,2,8);
  }
LAB_10052a59d:
  QFormLayout::setWidget(param_1[1],5,1,param_1[10]);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[0xb] = pQVar10;
  QString::fromUtf8_helper((char *)&local_280,0x1dfeccc);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_280 != -1) {
    if (*(int *)local_280 != 0) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + -1;
      local_38 = *(int *)local_280 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a62e;
    }
    QArrayData::deallocate(local_280,2,8);
  }
LAB_10052a62e:
  QWidget::setMaximumSize((int)param_1[0xb],0xffffff);
  QFormLayout::setWidget(param_1[1],6,1,param_1[0xb]);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[0xc] = pQVar8;
  QString::fromUtf8_helper((char *)&local_288,0x1dfecdc);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_38 = *(int *)local_288 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a6d2;
    }
    QArrayData::deallocate(local_288,2,8);
  }
LAB_10052a6d2:
  QLabel::setAlignment(param_1[0xc],0x82);
  pcVar2 = (char *)param_1[0xc];
  QString::fromUtf8_helper((char *)&local_2a0,0x1e2ee62);
  QVariant::QVariant(&local_298,&local_2a0);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_298);
  if (*(int *)local_2a0.field0_0x0 != -1) {
    if (*(int *)local_2a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2a0.field0_0x0 = *(int *)local_2a0.field0_0x0 + -1;
      local_38 = *(int *)local_2a0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a766;
    }
    QArrayData::deallocate((QArrayData *)local_2a0.field0_0x0,2,8);
  }
LAB_10052a766:
  QFormLayout::setWidget(param_1[1],7,0,param_1[0xc]);
  pQVar11 = operator_new(0x30);
  QComboBox::QComboBox(pQVar11,(QWidget *)param_2);
  param_1[0xd] = pQVar11;
  QString::fromUtf8_helper((char *)&local_2a8,0x1dfecea);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_2a8 != -1) {
    if (*(int *)local_2a8 != 0) {
      LOCK();
      *(int *)local_2a8 = *(int *)local_2a8 + -1;
      local_38 = *(int *)local_2a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a7f2;
    }
    QArrayData::deallocate(local_2a8,2,8);
  }
LAB_10052a7f2:
  uVar6 = QWidget::sizePolicy();
  local_108[0] = local_108[0] & 0xdfffffff | uVar6 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xd]);
  QWidget::setMinimumSize((int)param_1[0xd],0xe6);
  pcVar2 = (char *)param_1[0xd];
  local_2c0.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_2c8,0x1dbed24);
  FUN_1000341d0(&local_2c0,&local_2c8);
  QVariant::QVariant(&local_2b8,(QStringList *)&local_2c0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"QSettings");
  QVariant::~QVariant(&local_2b8);
  if (*(int *)local_2c8 != -1) {
    if (*(int *)local_2c8 != 0) {
      LOCK();
      *(int *)local_2c8 = *(int *)local_2c8 + -1;
      local_38 = *(int *)local_2c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a8cd;
    }
    QArrayData::deallocate(local_2c8,2,8);
  }
LAB_10052a8cd:
  AVar5 = local_2c0;
  if (*(int *)local_2c0.field1 != -1) {
    if (*(int *)local_2c0.field1 != 0) {
      LOCK();
      *(int *)local_2c0.field1 = *(int *)local_2c0.field1 + -1;
      local_38 = *(int *)local_2c0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052a98b;
    }
    iVar1 = *(int *)(local_2c0.field1 + 0xc);
    if (iVar1 != *(int *)(local_2c0.field1 + 8)) {
      lVar12 = (long)*(int *)(local_2c0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_2c0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_10052a960:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_10052a960;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10052a98b:
  pcVar2 = (char *)param_1[0xd];
  local_2e0.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_2e8,0x1dfea87);
  FUN_1000341d0(&local_2e0,&local_2e8);
  QVariant::QVariant(&local_2d8,(QStringList *)&local_2e0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_2d8);
  if (*(int *)local_2e8 != -1) {
    if (*(int *)local_2e8 != 0) {
      LOCK();
      *(int *)local_2e8 = *(int *)local_2e8 + -1;
      local_38 = *(int *)local_2e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052aa2c;
    }
    QArrayData::deallocate(local_2e8,2,8);
  }
LAB_10052aa2c:
  AVar5 = local_2e0;
  if (*(int *)local_2e0.field1 != -1) {
    if (*(int *)local_2e0.field1 != 0) {
      LOCK();
      *(int *)local_2e0.field1 = *(int *)local_2e0.field1 + -1;
      local_38 = *(int *)local_2e0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052aaeb;
    }
    iVar1 = *(int *)(local_2e0.field1 + 0xc);
    if (iVar1 != *(int *)(local_2e0.field1 + 8)) {
      lVar12 = (long)*(int *)(local_2e0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_2e0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_10052aac0:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_10052aac0;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10052aaeb:
  pcVar2 = (char *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_300,0x1e2ee62);
  QVariant::QVariant(&local_2f8,&local_300);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_2f8);
  if (*(int *)local_300.field0_0x0 != -1) {
    if (*(int *)local_300.field0_0x0 != 0) {
      LOCK();
      *(int *)local_300.field0_0x0 = *(int *)local_300.field0_0x0 + -1;
      local_38 = *(int *)local_300.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052ab71;
    }
    QArrayData::deallocate((QArrayData *)local_300.field0_0x0,2,8);
  }
LAB_10052ab71:
  QFormLayout::setWidget(param_1[1],7,1,param_1[0xd]);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[0xe] = pQVar10;
  QString::fromUtf8_helper((char *)&local_308,0x1dfecf8);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_308 != -1) {
    if (*(int *)local_308 != 0) {
      LOCK();
      *(int *)local_308 = *(int *)local_308 + -1;
      local_38 = *(int *)local_308 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052ac02;
    }
    QArrayData::deallocate(local_308,2,8);
  }
LAB_10052ac02:
  QWidget::setMaximumSize((int)param_1[0xe],0xffffff);
  QFormLayout::setWidget(param_1[1],8,1,param_1[0xe]);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[0xf] = pQVar8;
  QString::fromUtf8_helper((char *)&local_310,0x1dfed08);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_310 != -1) {
    if (*(int *)local_310 != 0) {
      LOCK();
      *(int *)local_310 = *(int *)local_310 + -1;
      local_38 = *(int *)local_310 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052aca6;
    }
    QArrayData::deallocate(local_310,2,8);
  }
LAB_10052aca6:
  QLabel::setAlignment(param_1[0xf],0x82);
  QFormLayout::setWidget(param_1[1],9,0,param_1[0xf]);
  pQVar11 = operator_new(0x30);
  QComboBox::QComboBox(pQVar11,(QWidget *)param_2);
  param_1[0x10] = pQVar11;
  QString::fromUtf8_helper((char *)&local_318,0x1dfed1d);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      local_38 = *(int *)local_318 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052ad43;
    }
    QArrayData::deallocate(local_318,2,8);
  }
LAB_10052ad43:
  uVar6 = QWidget::sizePolicy();
  local_108[0] = local_108[0] & 0xdfffffff | uVar6 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x10]);
  QWidget::setMinimumSize((int)param_1[0x10],0xe6);
  QComboBox::setFrame(SUB81(param_1[0x10],0));
  pcVar2 = (char *)param_1[0x10];
  local_330.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_338,0x1dfed2f);
  FUN_1000341d0(&local_330,&local_338);
  QVariant::QVariant(&local_328,(QStringList *)&local_330.field0);
  QObject::setProperty(pcVar2,(QVariant *)"QSettings");
  QVariant::~QVariant(&local_328);
  if (*(int *)local_338 != -1) {
    if (*(int *)local_338 != 0) {
      LOCK();
      *(int *)local_338 = *(int *)local_338 + -1;
      local_38 = *(int *)local_338 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052ae3b;
    }
    QArrayData::deallocate(local_338,2,8);
  }
LAB_10052ae3b:
  AVar5 = local_330;
  if (*(int *)local_330.field1 != -1) {
    if (*(int *)local_330.field1 != 0) {
      LOCK();
      *(int *)local_330.field1 = *(int *)local_330.field1 + -1;
      local_38 = *(int *)local_330.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052aefb;
    }
    iVar1 = *(int *)(local_330.field1 + 0xc);
    if (iVar1 != *(int *)(local_330.field1 + 8)) {
      lVar12 = (long)*(int *)(local_330.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_330.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_10052aed0:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_10052aed0;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10052aefb:
  pcVar2 = (char *)param_1[0x10];
  local_350.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_358,0x1dfea87);
  FUN_1000341d0(&local_350,&local_358);
  QVariant::QVariant(&local_348,(QStringList *)&local_350.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_348);
  if (*(int *)local_358 != -1) {
    if (*(int *)local_358 != 0) {
      LOCK();
      *(int *)local_358 = *(int *)local_358 + -1;
      local_38 = *(int *)local_358 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052af9f;
    }
    QArrayData::deallocate(local_358,2,8);
  }
LAB_10052af9f:
  AVar5 = local_350;
  if (*(int *)local_350.field1 != -1) {
    if (*(int *)local_350.field1 != 0) {
      LOCK();
      *(int *)local_350.field1 = *(int *)local_350.field1 + -1;
      local_38 = *(int *)local_350.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b05b;
    }
    iVar1 = *(int *)(local_350.field1 + 0xc);
    if (iVar1 != *(int *)(local_350.field1 + 8)) {
      lVar12 = (long)*(int *)(local_350.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_350.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_10052b030:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_10052b030;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10052b05b:
  QFormLayout::setWidget(param_1[1],9,1,param_1[0x10]);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[0x11] = pQVar9;
  QString::fromUtf8_helper((char *)&local_360,0x1dfed41);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_360 != -1) {
    if (*(int *)local_360 != 0) {
      LOCK();
      *(int *)local_360 = *(int *)local_360 + -1;
      local_38 = *(int *)local_360 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b0f0;
    }
    QArrayData::deallocate(local_360,2,8);
  }
LAB_10052b0f0:
  local_368[0] = 0x50000;
  QSizePolicy::setControlType(local_368,1);
  local_368[0] = local_368[0] & 0xffff0000;
  uVar6 = QWidget::sizePolicy();
  local_368[0] = local_368[0] & 0xdfffffff | uVar6 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x11]);
  pcVar2 = (char *)param_1[0x11];
  local_380.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_388,0x1dfed53);
  FUN_1000341d0(&local_380,&local_388);
  QVariant::QVariant(&local_378,(QStringList *)&local_380.field0);
  QObject::setProperty(pcVar2,(QVariant *)"QSettings");
  QVariant::~QVariant(&local_378);
  if (*(int *)local_388 != -1) {
    if (*(int *)local_388 != 0) {
      LOCK();
      *(int *)local_388 = *(int *)local_388 + -1;
      local_38 = *(int *)local_388 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b1e9;
    }
    QArrayData::deallocate(local_388,2,8);
  }
LAB_10052b1e9:
  AVar5 = local_380;
  if (*(int *)local_380.field1 != -1) {
    if (*(int *)local_380.field1 != 0) {
      LOCK();
      *(int *)local_380.field1 = *(int *)local_380.field1 + -1;
      local_38 = *(int *)local_380.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b2ab;
    }
    iVar1 = *(int *)(local_380.field1 + 0xc);
    if (iVar1 != *(int *)(local_380.field1 + 8)) {
      lVar12 = (long)*(int *)(local_380.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_380.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_10052b280:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_10052b280;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10052b2ab:
  pcVar2 = (char *)param_1[0x11];
  local_3a0.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_3a8,0x1dfea87);
  FUN_1000341d0(&local_3a0,&local_3a8);
  QVariant::QVariant(&local_398,(QStringList *)&local_3a0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_398);
  if (*(int *)local_3a8 != -1) {
    if (*(int *)local_3a8 != 0) {
      LOCK();
      *(int *)local_3a8 = *(int *)local_3a8 + -1;
      local_38 = *(int *)local_3a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b34f;
    }
    QArrayData::deallocate(local_3a8,2,8);
  }
LAB_10052b34f:
  AVar5 = local_3a0;
  if (*(int *)local_3a0.field1 != -1) {
    if (*(int *)local_3a0.field1 != 0) {
      LOCK();
      *(int *)local_3a0.field1 = *(int *)local_3a0.field1 + -1;
      local_38 = *(int *)local_3a0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b40b;
    }
    iVar1 = *(int *)(local_3a0.field1 + 0xc);
    if (iVar1 != *(int *)(local_3a0.field1 + 8)) {
      lVar12 = (long)*(int *)(local_3a0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_3a0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_10052b3e0:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_10052b3e0;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10052b40b:
  QFormLayout::setWidget(param_1[1],10,1,param_1[0x11]);
  this_01 = operator_new(0x78);
  CImageButtonComplex::CImageButtonComplex(this_01,(QWidget *)param_2);
  param_1[0x12] = this_01;
  QString::fromUtf8_helper((char *)&local_3b0,0x1dfed72);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_3b0 != -1) {
    if (*(int *)local_3b0 != 0) {
      LOCK();
      *(int *)local_3b0 = *(int *)local_3b0 + -1;
      local_38 = *(int *)local_3b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b4a0;
    }
    QArrayData::deallocate(local_3b0,2,8);
  }
LAB_10052b4a0:
  uVar6 = QWidget::sizePolicy();
  local_108[0] = local_108[0] & 0xdfffffff | uVar6 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x12]);
  QFormLayout::setWidget(param_1[1],0xb,1,param_1[0x12]);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[0x13] = pQVar10;
  QString::fromUtf8_helper((char *)&local_3b8,0x1dfed7f);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_3b8 != -1) {
    if (*(int *)local_3b8 != 0) {
      LOCK();
      *(int *)local_3b8 = *(int *)local_3b8 + -1;
      local_38 = *(int *)local_3b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b567;
    }
    QArrayData::deallocate(local_3b8,2,8);
  }
LAB_10052b567:
  QWidget::setMaximumSize((int)param_1[0x13],0xffffff);
  QFormLayout::setWidget(param_1[1],0xc,1,param_1[0x13]);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[0x14] = pQVar9;
  QString::fromUtf8_helper((char *)&local_3c0,0x1dfed8f);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_3c0 != -1) {
    if (*(int *)local_3c0 != 0) {
      LOCK();
      *(int *)local_3c0 = *(int *)local_3c0 + -1;
      local_38 = *(int *)local_3c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b612;
    }
    QArrayData::deallocate(local_3c0,2,8);
  }
LAB_10052b612:
  pcVar2 = (char *)param_1[0x14];
  QString::fromUtf8_helper((char *)&local_3d8,0x1dfeda8);
  QVariant::QVariant(&local_3d0,&local_3d8);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_3d0);
  if (*(int *)local_3d8.field0_0x0 != -1) {
    if (*(int *)local_3d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3d8.field0_0x0 = *(int *)local_3d8.field0_0x0 + -1;
      local_38 = *(int *)local_3d8.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b69b;
    }
    QArrayData::deallocate((QArrayData *)local_3d8.field0_0x0,2,8);
  }
LAB_10052b69b:
  pcVar2 = (char *)param_1[0x14];
  QString::fromUtf8_helper((char *)&local_3f0,0x1dfedb8);
  QVariant::QVariant(&local_3e8,&local_3f0);
  QObject::setProperty(pcVar2,(QVariant *)"DispPreferences");
  QVariant::~QVariant(&local_3e8);
  if (*(int *)local_3f0.field0_0x0 != -1) {
    if (*(int *)local_3f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3f0.field0_0x0 = *(int *)local_3f0.field0_0x0 + -1;
      local_38 = *(int *)local_3f0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b724;
    }
    QArrayData::deallocate((QArrayData *)local_3f0.field0_0x0,2,8);
  }
LAB_10052b724:
  pcVar2 = (char *)param_1[0x14];
  QString::fromUtf8_helper((char *)&local_408,0x1dfec8c);
  QVariant::QVariant(&local_400,&local_408);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_400);
  if (*(int *)local_408.field0_0x0 != -1) {
    if (*(int *)local_408.field0_0x0 != 0) {
      LOCK();
      *(int *)local_408.field0_0x0 = *(int *)local_408.field0_0x0 + -1;
      local_38 = *(int *)local_408.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b7ad;
    }
    QArrayData::deallocate((QArrayData *)local_408.field0_0x0,2,8);
  }
LAB_10052b7ad:
  QFormLayout::setWidget(param_1[1],0xd,1,param_1[0x14]);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[0x15] = pQVar10;
  QString::fromUtf8_helper((char *)&local_410,0x1dfedde);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_410 != -1) {
    if (*(int *)local_410 != 0) {
      LOCK();
      *(int *)local_410 = *(int *)local_410 + -1;
      local_38 = *(int *)local_410 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b844;
    }
    QArrayData::deallocate(local_410,2,8);
  }
LAB_10052b844:
  QFormLayout::setWidget(param_1[1],0xe,1,param_1[0x15]);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[0x16] = pQVar8;
  QString::fromUtf8_helper((char *)&local_418,0x1dfedee);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_418 != -1) {
    if (*(int *)local_418 != 0) {
      LOCK();
      *(int *)local_418 = *(int *)local_418 + -1;
      local_38 = *(int *)local_418 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b8db;
    }
    QArrayData::deallocate(local_418,2,8);
  }
LAB_10052b8db:
  QLabel::setAlignment(param_1[0x16],0x21);
  pcVar2 = (char *)param_1[0x16];
  QString::fromUtf8_helper((char *)&local_430,0x1e2ee62);
  QVariant::QVariant(&local_428,&local_430);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_428);
  if (*(int *)local_430.field0_0x0 != -1) {
    if (*(int *)local_430.field0_0x0 != 0) {
      LOCK();
      *(int *)local_430.field0_0x0 = *(int *)local_430.field0_0x0 + -1;
      local_38 = *(int *)local_430.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052b975;
    }
    QArrayData::deallocate((QArrayData *)local_430.field0_0x0,2,8);
  }
LAB_10052b975:
  QFormLayout::setWidget(param_1[1],0xf,0);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[0x17] = pQVar10;
  QString::fromUtf8_helper((char *)&local_438,0x1dfedfa);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_438 != -1) {
    if (*(int *)local_438 != 0) {
      LOCK();
      *(int *)local_438 = *(int *)local_438 + -1;
      local_38 = *(int *)local_438 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052ba09;
    }
    QArrayData::deallocate(local_438,2,8);
  }
LAB_10052ba09:
  QWidget::setMinimumSize((int)param_1[0x17],200);
  pQVar7 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar7,(QWidget *)param_1[0x17]);
  param_1[0x18] = pQVar7;
  QBoxLayout::setSpacing((int)pQVar7);
  pQVar3 = (QString *)param_1[0x18];
  QString::fromUtf8_helper((char *)&local_440,0x1dd6e19);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_440 != -1) {
    if (*(int *)local_440 != 0) {
      LOCK();
      *(int *)local_440 = *(int *)local_440 + -1;
      local_38 = *(int *)local_440 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052bab2;
    }
    QArrayData::deallocate(local_440,2,8);
  }
LAB_10052bab2:
  QLayout::setContentsMargins((int)param_1[0x18],0,0,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[0x17]);
  param_1[0x19] = pQVar9;
  QString::fromUtf8_helper((char *)&local_448,0x1dfee09);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_448 != -1) {
    if (*(int *)local_448 != 0) {
      LOCK();
      *(int *)local_448 = *(int *)local_448 + -1;
      local_38 = *(int *)local_448 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052bb46;
    }
    QArrayData::deallocate(local_448,2,8);
  }
LAB_10052bb46:
  pQVar3 = (QString *)param_1[0x19];
  QString::fromUtf8_helper((char *)&local_450,0x1dfee15);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_450 != -1) {
    if (*(int *)local_450 != 0) {
      LOCK();
      *(int *)local_450 = *(int *)local_450 + -1;
      local_38 = *(int *)local_450 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052bba9;
    }
    QArrayData::deallocate(local_450,2,8);
  }
LAB_10052bba9:
  pcVar2 = (char *)param_1[0x19];
  local_468.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_470,0x1dfee43);
  FUN_1000341d0(&local_468,&local_470);
  QVariant::QVariant(&local_460,(QStringList *)&local_468.field0);
  QObject::setProperty(pcVar2,(QVariant *)"QSettings");
  QVariant::~QVariant(&local_460);
  if (*(int *)local_470 != -1) {
    if (*(int *)local_470 != 0) {
      LOCK();
      *(int *)local_470 = *(int *)local_470 + -1;
      local_38 = *(int *)local_470 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052bc4d;
    }
    QArrayData::deallocate(local_470,2,8);
  }
LAB_10052bc4d:
  AVar5 = local_468;
  if (*(int *)local_468.field1 != -1) {
    if (*(int *)local_468.field1 != 0) {
      LOCK();
      *(int *)local_468.field1 = *(int *)local_468.field1 + -1;
      local_38 = *(int *)local_468.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052bd0b;
    }
    iVar1 = *(int *)(local_468.field1 + 0xc);
    if (iVar1 != *(int *)(local_468.field1 + 8)) {
      lVar12 = (long)*(int *)(local_468.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_468.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_10052bce0:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_10052bce0;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10052bd0b:
  pcVar2 = (char *)param_1[0x19];
  local_488.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_490,0x1dfea87);
  FUN_1000341d0(&local_488,&local_490);
  QVariant::QVariant(&local_480,(QStringList *)&local_488.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_480);
  if (*(int *)local_490 != -1) {
    if (*(int *)local_490 != 0) {
      LOCK();
      *(int *)local_490 = *(int *)local_490 + -1;
      local_38 = *(int *)local_490 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052bdaf;
    }
    QArrayData::deallocate(local_490,2,8);
  }
LAB_10052bdaf:
  AVar5 = local_488;
  if (*(int *)local_488.field1 != -1) {
    if (*(int *)local_488.field1 != 0) {
      LOCK();
      *(int *)local_488.field1 = *(int *)local_488.field1 + -1;
      local_38 = *(int *)local_488.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052be51;
    }
    iVar1 = *(int *)(local_488.field1 + 0xc);
    if (iVar1 != *(int *)(local_488.field1 + 8)) {
      lVar12 = (long)*(int *)(local_488.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_488.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar13 == 0) {
LAB_10052be30:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar14;
            goto LAB_10052be30;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10052be51:
  QBoxLayout::addWidget(param_1[0x18],param_1[0x19],0,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[0x17],0);
  param_1[0x1a] = pQVar8;
  QString::fromUtf8_helper((char *)&local_498,0x1dfee59);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_498 != -1) {
    if (*(int *)local_498 != 0) {
      LOCK();
      *(int *)local_498 = *(int *)local_498 + -1;
      local_38 = *(int *)local_498 != 0;
      UNLOCK();
      if (local_38) goto LAB_10052bee9;
    }
    QArrayData::deallocate(local_498,2,8);
  }
LAB_10052bee9:
  pcVar2 = (char *)param_1[0x1a];
  QVariant::QVariant(&local_4a8,true);
  QObject::setProperty(pcVar2,(QVariant *)"SmallFont");
  QVariant::~QVariant(&local_4a8);
  QBoxLayout::addWidget(param_1[0x18],param_1[0x1a],0,0);
  QFormLayout::setWidget(param_1[1],0xf,1,param_1[0x17]);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  FUN_10052dbf0(param_1,param_2);
  QComboBox::setCurrentIndex((int)param_1[0xd]);
  QComboBox::setCurrentIndex((int)param_1[0x10]);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

