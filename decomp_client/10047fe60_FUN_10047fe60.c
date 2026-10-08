
void FUN_10047fe60(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  AnonymousUnion0 AVar4;
  QGridLayout *this;
  QLabel *pQVar5;
  QFrame *pQVar6;
  QComboBox *pQVar7;
  QCheckBox *pQVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  QWidget *pQVar11;
  QSlider *this_00;
  QHBoxLayout *this_01;
  QArrayData *pQVar12;
  long lVar13;
  Data *pDVar14;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QVariant local_188;
  QArrayData *local_178;
  AnonymousUnion0 local_170;
  QVariant local_168;
  QArrayData *local_158;
  AnonymousUnion0 local_150;
  QVariant local_148;
  QArrayData *local_138;
  QVariant local_130;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined1 local_c8 [16];
  QBrush local_b8 [8];
  undefined1 local_b0 [16];
  QBrush local_a0 [8];
  QPalette local_98 [16];
  QArrayData *local_88;
  QVariant local_80;
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
      if (*(int *)local_40 != 0) goto LAB_10047feb6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10047feb6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df6b58);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10047ff0d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10047ff0d:
  local_38 = true;
  uStack_37 = 0x19d000002;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df6b70);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047ff97;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10047ff97:
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_68,0x1df6b83);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_100480005;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100480005:
  QLayout::setContentsMargins((int)*param_1,0xc,0xc,0xc);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[1] = pQVar5;
  QString::fromUtf8_helper((char *)&local_70,0x1df6b8e);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100480093;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100480093:
  QLabel::setWordWrap(SUB81(param_1[1],0));
  pcVar2 = (char *)param_1[1];
  QVariant::QVariant(&local_80,true);
  QObject::setProperty(pcVar2,(QVariant *)"SmallFont");
  QVariant::~QVariant(&local_80);
  QGridLayout::addWidget(*param_1,param_1[1],0xb,2,1,2,0);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_2,0);
  param_1[2] = pQVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1df6bac);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048016b;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10048016b:
  QPalette::QPalette(local_98);
  QColor::setRgb((int)local_b0,0xd5,0xd5,0xd5);
  QBrush::QBrush(local_a0,local_b0,1);
  QBrush::setStyle(local_a0,1);
  QPalette::setBrush(local_98,0,0,local_a0);
  QPalette::setBrush(local_98,2,0,local_a0);
  QColor::setRgb((int)local_c8,0x7f,0x7f,0x7f);
  QBrush::QBrush(local_b8,local_c8,1);
  QBrush::setStyle(local_b8,1);
  QPalette::setBrush(local_98,1,0,local_b8);
  QWidget::setPalette((QPalette *)param_1[2]);
  QFrame::setFrameShadow(param_1[2],0x10);
  QFrame::setLineWidth((int)param_1[2]);
  QFrame::setFrameShape(param_1[2],4);
  QGridLayout::addWidget(*param_1,param_1[2],8,0,1,5,0);
  pQVar7 = operator_new(0x30);
  QComboBox::QComboBox(pQVar7,(QWidget *)param_2);
  param_1[3] = pQVar7;
  QString::fromUtf8_helper((char *)&local_d0,0x1df6bb1);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048032f;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10048032f:
  QGridLayout::addWidget(*param_1,param_1[3],0,2,1,2,0);
  pQVar8 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar8,(QWidget *)param_2);
  param_1[4] = pQVar8;
  QString::fromUtf8_helper((char *)&local_d8,0x1df6bc2);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004803ce;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004803ce:
  QGridLayout::addWidget(*param_1,param_1[4],1,2,1,2,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  puVar10 = PTR_vtable_1021e17a0 + 0x10;
  *puVar9 = puVar10;
  *(undefined8 *)((long)puVar9 + 0xc) = 0xa000000028;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[5] = puVar9;
  QGridLayout::addItem(*param_1,puVar9,0,0,8,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[6] = pQVar5;
  QString::fromUtf8_helper((char *)&local_e0,0x1df6bda);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100480503;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100480503:
  QLabel::setAlignment(param_1[6],0x82);
  QGridLayout::addWidget(*param_1,param_1[6],9,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar8,(QWidget *)param_2);
  param_1[7] = pQVar8;
  QString::fromUtf8_helper((char *)&local_e8,0x1df6bed);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004805b3;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1004805b3:
  QGridLayout::addWidget(*param_1,param_1[7],2,2,1,2,0);
  pQVar8 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar8,(QWidget *)param_2);
  param_1[8] = pQVar8;
  QString::fromUtf8_helper((char *)&local_f0,0x1df6bfe);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100480655;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100480655:
  QGridLayout::addWidget(*param_1,param_1[8],3,2,1,2,0);
  pQVar11 = operator_new(0x30);
  QWidget::QWidget(pQVar11,param_2,0);
  param_1[9] = pQVar11;
  QString::fromUtf8_helper((char *)&local_f8,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004806f9;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1004806f9:
  pcVar2 = (char *)param_1[9];
  QVariant::QVariant(&local_108,true);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidgetBig");
  QVariant::~QVariant(&local_108);
  QGridLayout::addWidget(*param_1,param_1[9],4,2,1,2,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[10] = pQVar5;
  QString::fromUtf8_helper((char *)&local_110,0x1df6c0f);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004807d4;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1004807d4:
  QLabel::setAlignment(param_1[10],0x82);
  QGridLayout::addWidget(*param_1,param_1[10],5,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QComboBox::QComboBox(pQVar7,(QWidget *)param_2);
  param_1[0xb] = pQVar7;
  QString::fromUtf8_helper((char *)&local_118,0x1df6c1c);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_100480884;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100480884:
  QGridLayout::addWidget(*param_1,param_1[0xb],5,2,1,2,0);
  pQVar8 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar8,(QWidget *)param_2);
  param_1[0xc] = pQVar8;
  QString::fromUtf8_helper((char *)&local_120,0x1df6c32);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_100480926;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100480926:
  pcVar2 = (char *)param_1[0xc];
  QVariant::QVariant(&local_130,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_130);
  QGridLayout::addWidget(*param_1,param_1[0xc],6,2,1,2,0);
  this_00 = operator_new(0x30);
  QSlider::QSlider(this_00,(QWidget *)param_2);
  param_1[0xd] = this_00;
  QString::fromUtf8_helper((char *)&local_138,0x1df6c49);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004809ff;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1004809ff:
  QAbstractSlider::setMaximum((int)param_1[0xd]);
  QAbstractSlider::setSingleStep((int)param_1[0xd]);
  QAbstractSlider::setPageStep((int)param_1[0xd]);
  QAbstractSlider::setOrientation(param_1[0xd],1);
  QSlider::setTickPosition(param_1[0xd],2);
  QSlider::setTickInterval((int)param_1[0xd]);
  puVar3 = PTR_shared_null_1021e15e8;
  pcVar2 = (char *)param_1[0xd];
  local_150.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_158,0x1df20b9);
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
      if (local_38) goto LAB_100480afb;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100480afb:
  AVar4 = local_150;
  if (*(int *)local_150.field1 != -1) {
    if (*(int *)local_150.field1 != 0) {
      LOCK();
      *(int *)local_150.field1 = *(int *)local_150.field1 + -1;
      local_38 = *(int *)local_150.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_100480ba8;
    }
    iVar1 = *(int *)(local_150.field1 + 0xc);
    if (iVar1 != *(int *)(local_150.field1 + 8)) {
      lVar13 = (long)*(int *)(local_150.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_150.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar12 == 0) {
LAB_100480b80:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar14;
            goto LAB_100480b80;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_100480ba8:
  pcVar2 = (char *)param_1[0xd];
  local_170.field1 = (Data *)puVar3;
  QString::fromUtf8_helper((char *)&local_178,0x1df6a59);
  FUN_1000341d0(&local_170,&local_178);
  QVariant::QVariant(&local_168,(QStringList *)&local_170.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_168);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_38 = *(int *)local_178 != 0;
      UNLOCK();
      if (local_38) goto LAB_100480c49;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100480c49:
  AVar4 = local_170;
  if (*(int *)local_170.field1 != -1) {
    if (*(int *)local_170.field1 != 0) {
      LOCK();
      *(int *)local_170.field1 = *(int *)local_170.field1 + -1;
      local_38 = *(int *)local_170.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_100480cf4;
    }
    iVar1 = *(int *)(local_170.field1 + 0xc);
    if (iVar1 != *(int *)(local_170.field1 + 8)) {
      lVar13 = (long)*(int *)(local_170.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_170.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar12 == 0) {
LAB_100480cd0:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar14;
            goto LAB_100480cd0;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_100480cf4:
  pcVar2 = (char *)param_1[0xd];
  QVariant::QVariant(&local_188,0x19);
  QObject::setProperty(pcVar2,(QVariant *)"divisor");
  QVariant::~QVariant(&local_188);
  QGridLayout::addWidget(*param_1,param_1[0xd],9,2,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0xe] = pQVar5;
  QString::fromUtf8_helper((char *)&local_190,0x1dc12be);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_38 = *(int *)local_190 != 0;
      UNLOCK();
      if (local_38) goto LAB_100480dcf;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100480dcf:
  QLabel::setAlignment(param_1[0xe],0x82);
  QGridLayout::addWidget(*param_1,param_1[0xe],0,1,1,1,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = puVar10;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0xf] = puVar9;
  QGridLayout::addItem(*param_1,puVar9,0xc,2,1,2,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = puVar10;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0x10] = puVar9;
  QGridLayout::addItem(*param_1,puVar9,0,4,6,1,0);
  pQVar11 = operator_new(0x30);
  QWidget::QWidget(pQVar11,param_2,0);
  param_1[0x11] = pQVar11;
  QString::fromUtf8_helper((char *)&local_198,0x1df6c5a);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_38 = *(int *)local_198 != 0;
      UNLOCK();
      if (local_38) goto LAB_100480f99;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_100480f99:
  QWidget::setMinimumSize((int)param_1[0x11],0);
  this_01 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_01,(QWidget *)param_1[0x11]);
  param_1[0x12] = this_01;
  QString::fromUtf8_helper((char *)&local_1a0,0x1df027f);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_38 = *(int *)local_1a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048102c;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10048102c:
  QLayout::setContentsMargins((int)param_1[0x12],0,0,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[0x11],0);
  param_1[0x13] = pQVar5;
  QString::fromUtf8_helper((char *)&local_1a8,0x1df6c69);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_38 = *(int *)local_1a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004810c3;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_1004810c3:
  QBoxLayout::addWidget(param_1[0x12],param_1[0x13],0,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = puVar10;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0x14] = puVar9;
  (**(code **)(*(long *)param_1[0x12] + 0x70))((long *)param_1[0x12],puVar9);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[0x11],0);
  param_1[0x15] = pQVar5;
  QString::fromUtf8_helper((char *)&local_1b0,0x1df6c72);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_38 = *(int *)local_1b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004811cc;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_1004811cc:
  QBoxLayout::addWidget(param_1[0x12],param_1[0x15],0,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = puVar10;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0x16] = puVar9;
  (**(code **)(*(long *)param_1[0x12] + 0x70))((long *)param_1[0x12],puVar9);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[0x11],0);
  param_1[0x17] = pQVar5;
  QString::fromUtf8_helper((char *)&local_1b8,0x1df6c7e);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_38 = *(int *)local_1b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004812d5;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_1004812d5:
  QBoxLayout::addWidget(param_1[0x12],param_1[0x17],0,0);
  QGridLayout::addWidget(*param_1,param_1[0x11],10,2,1,2,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = puVar10;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x140000000e;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x140000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0x18] = puVar9;
  QGridLayout::addItem(*param_1,puVar9,9,3,1,1,0);
  QGridLayout::setColumnStretch((int)*param_1,4);
  QWidget::setTabOrder((QWidget *)param_1[3],(QWidget *)param_1[4]);
  QWidget::setTabOrder((QWidget *)param_1[4],(QWidget *)param_1[7]);
  QWidget::setTabOrder((QWidget *)param_1[7],(QWidget *)param_1[0xb]);
  QWidget::setTabOrder((QWidget *)param_1[0xb],(QWidget *)param_1[0xc]);
  FUN_100481dc0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QBrush::~QBrush(local_b8);
  QBrush::~QBrush(local_a0);
  QPalette::~QPalette(local_98);
  return;
}

