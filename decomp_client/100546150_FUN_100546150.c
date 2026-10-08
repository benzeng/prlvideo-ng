
void FUN_100546150(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QString *pQVar3;
  QCursor *pQVar4;
  undefined *puVar5;
  AnonymousUnion0 AVar6;
  uint uVar7;
  QVBoxLayout *this;
  QFormLayout *this_00;
  QLabel *pQVar8;
  QCheckBox *pQVar9;
  QWidget *pQVar10;
  QHBoxLayout *this_01;
  CImageButtonComplex *this_02;
  long lVar11;
  QArrayData *pQVar12;
  Data *pDVar13;
  QArrayData *local_2b8;
  AnonymousUnion0 local_2b0;
  QVariant local_2a8;
  QArrayData *local_298;
  AnonymousUnion0 local_290;
  QVariant local_288;
  QArrayData *local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QString local_250;
  QVariant local_248;
  QString local_238;
  QVariant local_230;
  QArrayData *local_220;
  AnonymousUnion0 local_218;
  QVariant local_210;
  QVariant local_200;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  AnonymousUnion0 local_1e0;
  QVariant local_1d8;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QCursor local_1b0 [8];
  uint local_1a8 [2];
  QArrayData *local_1a0;
  QVariant local_198;
  QArrayData *local_188;
  AnonymousUnion0 local_180;
  QVariant local_178;
  QArrayData *local_168;
  AnonymousUnion0 local_160;
  QVariant local_158;
  QVariant local_148;
  QArrayData *local_138;
  uint local_130 [2];
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QString local_108;
  QVariant local_100;
  QArrayData *local_f0;
  AnonymousUnion0 local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  AnonymousUnion0 local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  uint local_a8 [2];
  QArrayData *local_a0;
  QString local_98;
  QVariant local_90;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QVariant local_68;
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
      if (*(int *)local_40 != 0) goto LAB_1005461a6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005461a6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1dfffa3);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1005461fd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1005461fd:
  local_38 = true;
  uStack_37 = 0xeb000001;
  QWidget::resize(param_2);
  QVariant::QVariant(&local_58,true);
  QObject::setProperty((char *)param_2,(QVariant *)"hasRestoreDefaults");
  QVariant::~QVariant(&local_58);
  QVariant::QVariant(&local_68,true);
  QObject::setProperty((char *)param_2,(QVariant *)"hasRemoteSettings");
  QVariant::~QVariant(&local_68);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_70,0x1dc1597);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005462dd;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005462dd:
  this_00 = operator_new(0x20);
  QFormLayout::QFormLayout(this_00,(QWidget *)0x0);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_78,0x1df4574);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054634b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10054634b:
  QFormLayout::setFieldGrowthPolicy(param_1[1],0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[2] = pQVar8;
  QString::fromUtf8_helper((char *)&local_80,0x1dfffbf);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005463c7;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005463c7:
  QLabel::setAlignment(param_1[2],0x82);
  pcVar2 = (char *)param_1[2];
  QString::fromUtf8_helper((char *)&local_98,0x1e2ee62);
  QVariant::QVariant(&local_90,&local_98);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_90);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_38 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054645b;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_10054645b:
  QFormLayout::setWidget(param_1[1],0,0,param_1[2]);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[3] = pQVar9;
  QString::fromUtf8_helper((char *)&local_a0,0x1dfffcb);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005464e4;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1005464e4:
  local_a8[0] = 0x30000;
  QSizePolicy::setControlType(local_a8,1);
  local_a8[0] = local_a8[0] & 0xffff0000;
  uVar7 = QWidget::sizePolicy();
  local_a8[0] = local_a8[0] & 0xdfffffff | uVar7 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  pQVar3 = (QString *)param_1[3];
  QString::fromUtf8_helper((char *)&local_b0,0x1dfffe5);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100546593;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100546593:
  puVar5 = PTR_shared_null_1021e15e8;
  pcVar2 = (char *)param_1[3];
  local_c8.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_d0,0x1e0000b);
  FUN_1000341d0(&local_c8,&local_d0);
  QVariant::QVariant(&local_c0,(QStringList *)&local_c8.field0);
  QObject::setProperty(pcVar2,(QVariant *)"DispPreferences");
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054663b;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10054663b:
  AVar6 = local_c8;
  if (*(int *)local_c8.field1 != -1) {
    if (*(int *)local_c8.field1 != 0) {
      LOCK();
      *(int *)local_c8.field1 = *(int *)local_c8.field1 + -1;
      local_38 = *(int *)local_c8.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054670b;
    }
    iVar1 = *(int *)(local_c8.field1 + 0xc);
    if (iVar1 != *(int *)(local_c8.field1 + 8)) {
      lVar11 = (long)*(int *)(local_c8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar13 = (Data *)(local_c8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar13;
        if (*(int *)pQVar12 == 0) {
LAB_1005466e0:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar13;
            goto LAB_1005466e0;
          }
        }
        pDVar13 = pDVar13 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10054670b:
  pcVar2 = (char *)param_1[3];
  local_e8.field1 = (Data *)puVar5;
  QString::fromUtf8_helper((char *)&local_f0,0x1dfeda8);
  FUN_1000341d0(&local_e8,&local_f0);
  QVariant::QVariant(&local_e0,(QStringList *)&local_e8.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005467ac;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1005467ac:
  AVar6 = local_e8;
  if (*(int *)local_e8.field1 != -1) {
    if (*(int *)local_e8.field1 != 0) {
      LOCK();
      *(int *)local_e8.field1 = *(int *)local_e8.field1 + -1;
      local_38 = *(int *)local_e8.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054686b;
    }
    iVar1 = *(int *)(local_e8.field1 + 0xc);
    if (iVar1 != *(int *)(local_e8.field1 + 8)) {
      lVar11 = (long)*(int *)(local_e8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar13 = (Data *)(local_e8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar13;
        if (*(int *)pQVar12 == 0) {
LAB_100546840:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar13;
            goto LAB_100546840;
          }
        }
        pDVar13 = pDVar13 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10054686b:
  pcVar2 = (char *)param_1[3];
  QString::fromUtf8_helper((char *)&local_108,0x1e2ee62);
  QVariant::QVariant(&local_100,&local_108);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_100);
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_38 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005468f1;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_1005468f1:
  QFormLayout::setWidget(param_1[1],0,1,param_1[3]);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[4] = pQVar10;
  QString::fromUtf8_helper((char *)&local_110,0x1dfecf8);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054697f;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10054697f:
  QWidget::setMaximumSize((int)param_1[4],0xffffff);
  QFormLayout::setWidget(param_1[1],1,1,param_1[4]);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[5] = pQVar8;
  QString::fromUtf8_helper((char *)&local_118,0x1e00035);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_100546a23;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100546a23:
  QLabel::setAlignment(param_1[5],0x82);
  QFormLayout::setWidget(param_1[1],2,0,param_1[5]);
  this_01 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_01);
  param_1[6] = this_01;
  QBoxLayout::setSpacing((int)this_01);
  pQVar3 = (QString *)param_1[6];
  QString::fromUtf8_helper((char *)&local_120,0x1df027f);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_100546acb;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100546acb:
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[7] = pQVar9;
  QString::fromUtf8_helper((char *)&local_128,0x1e00043);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_100546b43;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100546b43:
  local_130[0] = 0x50000;
  QSizePolicy::setControlType(local_130,1);
  local_130[0] = local_130[0] & 0xffff0000;
  uVar7 = QWidget::sizePolicy();
  local_130[0] = local_130[0] & 0xdfffffff | uVar7 & 0x20000000;
  QWidget::setSizePolicy(param_1[7]);
  pQVar3 = (QString *)param_1[7];
  QString::fromUtf8_helper((char *)&local_138,0x1df9fba);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_100546bf2;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100546bf2:
  pcVar2 = (char *)param_1[7];
  QVariant::QVariant(&local_148,true);
  QObject::setProperty(pcVar2,(QVariant *)"dontTouchMargins");
  QVariant::~QVariant(&local_148);
  pcVar2 = (char *)param_1[7];
  local_160.field1 = (Data *)puVar5;
  QString::fromUtf8_helper((char *)&local_168,0x1e00069);
  FUN_1000341d0(&local_160,&local_168);
  QVariant::QVariant(&local_158,(QStringList *)&local_160.field0);
  QObject::setProperty(pcVar2,(QVariant *)"DispPreferences");
  QVariant::~QVariant(&local_158);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_100546cc9;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100546cc9:
  AVar6 = local_160;
  if (*(int *)local_160.field1 != -1) {
    if (*(int *)local_160.field1 != 0) {
      LOCK();
      *(int *)local_160.field1 = *(int *)local_160.field1 + -1;
      local_38 = *(int *)local_160.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_100546d8b;
    }
    iVar1 = *(int *)(local_160.field1 + 0xc);
    if (iVar1 != *(int *)(local_160.field1 + 8)) {
      lVar11 = (long)*(int *)(local_160.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar13 = (Data *)(local_160.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar13;
        if (*(int *)pQVar12 == 0) {
LAB_100546d60:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar13;
            goto LAB_100546d60;
          }
        }
        pDVar13 = pDVar13 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100546d8b:
  pcVar2 = (char *)param_1[7];
  local_180.field1 = (Data *)puVar5;
  QString::fromUtf8_helper((char *)&local_188,0x1dfeda8);
  FUN_1000341d0(&local_180,&local_188);
  QVariant::QVariant(&local_178,(QStringList *)&local_180.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_178);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_38 = *(int *)local_188 != 0;
      UNLOCK();
      if (local_38) goto LAB_100546e2c;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100546e2c:
  AVar6 = local_180;
  if (*(int *)local_180.field1 != -1) {
    if (*(int *)local_180.field1 != 0) {
      LOCK();
      *(int *)local_180.field1 = *(int *)local_180.field1 + -1;
      local_38 = *(int *)local_180.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_100546eeb;
    }
    iVar1 = *(int *)(local_180.field1 + 0xc);
    if (iVar1 != *(int *)(local_180.field1 + 8)) {
      lVar11 = (long)*(int *)(local_180.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar13 = (Data *)(local_180.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar13;
        if (*(int *)pQVar12 == 0) {
LAB_100546ec0:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar13;
            goto LAB_100546ec0;
          }
        }
        pDVar13 = pDVar13 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100546eeb:
  pcVar2 = (char *)param_1[7];
  QVariant::QVariant(&local_198,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_198);
  QBoxLayout::addWidget(param_1[6],param_1[7],0,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[8] = pQVar8;
  QString::fromUtf8_helper((char *)&local_1a0,0x1e00098);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_38 = *(int *)local_1a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100546fac;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_100546fac:
  local_1a8[0] = 0x530000;
  QSizePolicy::setControlType(local_1a8,1);
  local_1a8[0] = local_1a8[0] & 0xffff0000;
  uVar7 = QWidget::sizePolicy();
  local_1a8[0] = local_1a8[0] & 0xdfffffff | uVar7 & 0x20000000;
  QWidget::setSizePolicy(param_1[8]);
  pQVar4 = (QCursor *)param_1[8];
  QCursor::QCursor(local_1b0,0xd);
  QWidget::setCursor(pQVar4);
  QCursor::~QCursor(local_1b0);
  QLabel::setOpenExternalLinks(SUB81(param_1[8],0));
  QBoxLayout::addWidget(param_1[6],param_1[8],0,0);
  QFormLayout::setLayout(param_1[1],2,1,param_1[6]);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[9] = pQVar10;
  QString::fromUtf8_helper((char *)&local_1b8,0x1dfed7f);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_38 = *(int *)local_1b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005470da;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_1005470da:
  QWidget::setMaximumSize((int)param_1[9],0xffffff);
  QFormLayout::setWidget(param_1[1],3,1,param_1[9]);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[10] = pQVar8;
  QString::fromUtf8_helper((char *)&local_1c0,0x1e000a1);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_38 = *(int *)local_1c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054717e;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_10054717e:
  QLabel::setAlignment(param_1[10],0x82);
  QFormLayout::setWidget(param_1[1],4,0,param_1[10]);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[0xb] = pQVar9;
  QString::fromUtf8_helper((char *)&local_1c8,0x1e000b6);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_38 = *(int *)local_1c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100547218;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_100547218:
  uVar7 = QWidget::sizePolicy();
  local_a8[0] = local_a8[0] & 0xdfffffff | uVar7 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xb]);
  QWidget::setMinimumSize((int)param_1[0xb],3);
  pcVar2 = (char *)param_1[0xb];
  local_1e0.field1 = (Data *)puVar5;
  QString::fromUtf8_helper((char *)&local_1e8,0x1dfff8b);
  FUN_1000341d0(&local_1e0,&local_1e8);
  QString::fromUtf8_helper((char *)&local_1f0,0x1e000ca);
  FUN_1000341d0(&local_1e0,&local_1f0);
  QVariant::QVariant(&local_1d8,(QStringList *)&local_1e0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"DispPreferences");
  QVariant::~QVariant(&local_1d8);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_38 = *(int *)local_1f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054731e;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_10054731e:
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_38 = *(int *)local_1e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100547354;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_100547354:
  AVar6 = local_1e0;
  if (*(int *)local_1e0.field1 != -1) {
    if (*(int *)local_1e0.field1 != 0) {
      LOCK();
      *(int *)local_1e0.field1 = *(int *)local_1e0.field1 + -1;
      local_38 = *(int *)local_1e0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054740b;
    }
    iVar1 = *(int *)(local_1e0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1e0.field1 + 8)) {
      lVar11 = (long)*(int *)(local_1e0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar13 = (Data *)(local_1e0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar13;
        if (*(int *)pQVar12 == 0) {
LAB_1005473e0:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar13;
            goto LAB_1005473e0;
          }
        }
        pDVar13 = pDVar13 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10054740b:
  pcVar2 = (char *)param_1[0xb];
  QVariant::QVariant(&local_200,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_200);
  pcVar2 = (char *)param_1[0xb];
  local_218.field1 = (Data *)puVar5;
  QString::fromUtf8_helper((char *)&local_220,0x1dfeda8);
  FUN_1000341d0(&local_218,&local_220);
  QVariant::QVariant(&local_210,(QStringList *)&local_218.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_210);
  if (*(int *)local_220 != -1) {
    if (*(int *)local_220 != 0) {
      LOCK();
      *(int *)local_220 = *(int *)local_220 + -1;
      local_38 = *(int *)local_220 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005474e2;
    }
    QArrayData::deallocate(local_220,2,8);
  }
LAB_1005474e2:
  AVar6 = local_218;
  if (*(int *)local_218.field1 != -1) {
    if (*(int *)local_218.field1 != 0) {
      LOCK();
      *(int *)local_218.field1 = *(int *)local_218.field1 + -1;
      local_38 = *(int *)local_218.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054759b;
    }
    iVar1 = *(int *)(local_218.field1 + 0xc);
    if (iVar1 != *(int *)(local_218.field1 + 8)) {
      lVar11 = (long)*(int *)(local_218.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar13 = (Data *)(local_218.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar13;
        if (*(int *)pQVar12 == 0) {
LAB_100547570:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar13;
            goto LAB_100547570;
          }
        }
        pDVar13 = pDVar13 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10054759b:
  pcVar2 = (char *)param_1[0xb];
  QString::fromUtf8_helper((char *)&local_238,0x1e000e5);
  QVariant::QVariant(&local_230,&local_238);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_230);
  if (*(int *)local_238.field0_0x0 != -1) {
    if (*(int *)local_238.field0_0x0 != 0) {
      LOCK();
      *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + -1;
      local_38 = *(int *)local_238.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100547621;
    }
    QArrayData::deallocate((QArrayData *)local_238.field0_0x0,2,8);
  }
LAB_100547621:
  pcVar2 = (char *)param_1[0xb];
  QString::fromUtf8_helper((char *)&local_250,0x1e000f7);
  QVariant::QVariant(&local_248,&local_250);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_248);
  if (*(int *)local_250.field0_0x0 != -1) {
    if (*(int *)local_250.field0_0x0 != 0) {
      LOCK();
      *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
      local_38 = *(int *)local_250.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005476a7;
    }
    QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
  }
LAB_1005476a7:
  QFormLayout::setWidget(param_1[1],4,1,param_1[0xb]);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[0xc] = pQVar10;
  QString::fromUtf8_helper((char *)&local_258,0x1dfedde);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_38 = *(int *)local_258 != 0;
      UNLOCK();
      if (local_38) goto LAB_100547738;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_100547738:
  QWidget::setMaximumSize((int)param_1[0xc],0xffffff);
  QFormLayout::setWidget(param_1[1],5,1,param_1[0xc]);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[0xd] = pQVar8;
  QString::fromUtf8_helper((char *)&local_260,0x1e00109);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_38 = *(int *)local_260 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005477dc;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_1005477dc:
  QLabel::setAlignment(param_1[0xd],0x82);
  QFormLayout::setWidget(param_1[1],6,0,param_1[0xd]);
  this_02 = operator_new(0x78);
  CImageButtonComplex::CImageButtonComplex(this_02,(QWidget *)param_2);
  param_1[0xe] = this_02;
  QString::fromUtf8_helper((char *)&local_268,0x1e0011d);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_38 = *(int *)local_268 != 0;
      UNLOCK();
      if (local_38) goto LAB_100547876;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_100547876:
  QWidget::setMinimumSize((int)param_1[0xe],0x73);
  QFormLayout::setWidget(param_1[1],6,1,param_1[0xe]);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[0xf] = pQVar10;
  QString::fromUtf8_helper((char *)&local_270,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_38 = *(int *)local_270 != 0;
      UNLOCK();
      if (local_38) goto LAB_100547917;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_100547917:
  QFormLayout::setWidget(param_1[1],7,1,param_1[0xf]);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[0x10] = pQVar9;
  QString::fromUtf8_helper((char *)&local_278,0x1e0012f);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_38 = *(int *)local_278 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005479a9;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_1005479a9:
  QAbstractButton::setChecked(SUB81(param_1[0x10],0));
  pcVar2 = (char *)param_1[0x10];
  local_290.field1 = (Data *)puVar5;
  QString::fromUtf8_helper((char *)&local_298,0x1dfea87);
  FUN_1000341d0(&local_290,&local_298);
  QVariant::QVariant(&local_288,(QStringList *)&local_290.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_288);
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_38 = *(int *)local_298 != 0;
      UNLOCK();
      if (local_38) goto LAB_100547a5e;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_100547a5e:
  AVar6 = local_290;
  if (*(int *)local_290.field1 != -1) {
    if (*(int *)local_290.field1 != 0) {
      LOCK();
      *(int *)local_290.field1 = *(int *)local_290.field1 + -1;
      local_38 = *(int *)local_290.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_100547b1b;
    }
    iVar1 = *(int *)(local_290.field1 + 0xc);
    if (iVar1 != *(int *)(local_290.field1 + 8)) {
      lVar11 = (long)*(int *)(local_290.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar13 = (Data *)(local_290.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar13;
        if (*(int *)pQVar12 == 0) {
LAB_100547af0:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar13;
            goto LAB_100547af0;
          }
        }
        pDVar13 = pDVar13 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100547b1b:
  pcVar2 = (char *)param_1[0x10];
  local_2b0.field1 = (Data *)puVar5;
  QString::fromUtf8_helper((char *)&local_2b8,0x1e00140);
  FUN_1000341d0(&local_2b0,&local_2b8);
  QVariant::QVariant(&local_2a8,(QStringList *)&local_2b0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"QSettings");
  QVariant::~QVariant(&local_2a8);
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_38 = *(int *)local_2b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100547bbf;
    }
    QArrayData::deallocate(local_2b8,2,8);
  }
LAB_100547bbf:
  AVar6 = local_2b0;
  if (*(int *)local_2b0.field1 != -1) {
    if (*(int *)local_2b0.field1 != 0) {
      LOCK();
      *(int *)local_2b0.field1 = *(int *)local_2b0.field1 + -1;
      local_38 = *(int *)local_2b0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_100547c61;
    }
    iVar1 = *(int *)(local_2b0.field1 + 0xc);
    if (iVar1 != *(int *)(local_2b0.field1 + 8)) {
      lVar11 = (long)*(int *)(local_2b0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar13 = (Data *)(local_2b0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar13;
        if (*(int *)pQVar12 == 0) {
LAB_100547c40:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar13;
            goto LAB_100547c40;
          }
        }
        pDVar13 = pDVar13 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100547c61:
  QFormLayout::setWidget(param_1[1],8,1,param_1[0x10]);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  FUN_100548ca0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

