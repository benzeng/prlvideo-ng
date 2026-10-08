
void FUN_1004d5d40(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  AnonymousUnion0 AVar4;
  QGridLayout *pQVar5;
  QStackedWidget *this;
  QWidget *pQVar6;
  QFormLayout *this_00;
  QCheckBox *pQVar7;
  undefined8 *puVar8;
  QPushButton *this_01;
  QLabel *pQVar9;
  long lVar10;
  QArrayData *pQVar11;
  Data *pDVar12;
  QFont local_1b0 [16];
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QVariant local_188;
  QArrayData *local_178;
  QVariant local_170;
  QArrayData *local_160;
  AnonymousUnion0 local_158;
  QVariant local_150;
  QArrayData *local_140;
  AnonymousUnion0 local_138;
  QVariant local_130;
  QArrayData *local_120;
  QArrayData *local_118;
  AnonymousUnion0 local_110;
  QVariant local_108;
  QArrayData *local_f8;
  AnonymousUnion0 local_f0;
  QVariant local_e8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  AnonymousUnion0 local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  AnonymousUnion0 local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
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
      if (*(int *)local_40 != 0) goto LAB_1004d5d96;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004d5d96:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1dfa723);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004d5ded;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004d5ded:
  local_38 = true;
  uStack_37 = 0xfb000001;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1dfa73a);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d5e77;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004d5e77:
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1dd6d51);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d5ee5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004d5ee5:
  QLayout::setContentsMargins((int)*param_1,9,0xc,9);
  this = operator_new(0x30);
  QStackedWidget::QStackedWidget(this,(QWidget *)param_2);
  param_1[1] = this;
  QString::fromUtf8_helper((char *)&local_70,0x1dd652b);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d5f6e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004d5f6e:
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,0,0);
  param_1[2] = pQVar6;
  QString::fromUtf8_helper((char *)&local_78,0x1dfa74d);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d5fde;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004d5fde:
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_1[2]);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_80,0x1dd6d5e);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d604e;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004d604e:
  QLayout::setContentsMargins((int)param_1[3],0,0,0);
  this_00 = operator_new(0x20);
  QFormLayout::QFormLayout(this_00,(QWidget *)0x0);
  param_1[4] = this_00;
  QString::fromUtf8_helper((char *)&local_88,0x1df9e27);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d60ce;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004d60ce:
  QFormLayout::setFieldGrowthPolicy(param_1[4],0);
  QFormLayout::setLabelAlignment(param_1[4],0x82);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_1[2]);
  param_1[5] = pQVar7;
  QString::fromUtf8_helper((char *)&local_90,0x1dfa75b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d6167;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1004d6167:
  puVar3 = PTR_shared_null_1021e15e8;
  pcVar2 = (char *)param_1[5];
  local_a8.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_b0,0x1df20b9);
  FUN_1000341d0(&local_a8,&local_b0);
  QVariant::QVariant(&local_a0,(QStringList *)&local_a8.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d620f;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004d620f:
  AVar4 = local_a8;
  if (*(int *)local_a8.field1 != -1) {
    if (*(int *)local_a8.field1 != 0) {
      LOCK();
      *(int *)local_a8.field1 = *(int *)local_a8.field1 + -1;
      local_38 = *(int *)local_a8.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d62b1;
    }
    iVar1 = *(int *)(local_a8.field1 + 0xc);
    if (iVar1 != *(int *)(local_a8.field1 + 8)) {
      lVar10 = (long)*(int *)(local_a8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = (Data *)(local_a8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar11 == 0) {
LAB_1004d6290:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_38 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar11 = *(QArrayData **)pDVar12;
            goto LAB_1004d6290;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004d62b1:
  pcVar2 = (char *)param_1[5];
  local_c8.field1 = (Data *)puVar3;
  QString::fromUtf8_helper((char *)&local_d0,0x1dfa76b);
  FUN_1000341d0(&local_c8,&local_d0);
  QVariant::QVariant(&local_c0,(QStringList *)&local_c8.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d6352;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004d6352:
  AVar4 = local_c8;
  if (*(int *)local_c8.field1 != -1) {
    if (*(int *)local_c8.field1 != 0) {
      LOCK();
      *(int *)local_c8.field1 = *(int *)local_c8.field1 + -1;
      local_38 = *(int *)local_c8.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d63e1;
    }
    iVar1 = *(int *)(local_c8.field1 + 0xc);
    if (iVar1 != *(int *)(local_c8.field1 + 8)) {
      lVar10 = (long)*(int *)(local_c8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = (Data *)(local_c8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar11 == 0) {
LAB_1004d63c0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_38 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar11 = *(QArrayData **)pDVar12;
            goto LAB_1004d63c0;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004d63e1:
  QFormLayout::setWidget(param_1[4],0,1,param_1[5]);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_1[2]);
  param_1[6] = pQVar7;
  QString::fromUtf8_helper((char *)&local_d8,0x1dfa785);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d646e;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004d646e:
  pcVar2 = (char *)param_1[6];
  local_f0.field1 = (Data *)puVar3;
  QString::fromUtf8_helper((char *)&local_f8,0x1df20b9);
  FUN_1000341d0(&local_f0,&local_f8);
  QVariant::QVariant(&local_e8,(QStringList *)&local_f0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_e8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d650f;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1004d650f:
  AVar4 = local_f0;
  if (*(int *)local_f0.field1 != -1) {
    if (*(int *)local_f0.field1 != 0) {
      LOCK();
      *(int *)local_f0.field1 = *(int *)local_f0.field1 + -1;
      local_38 = *(int *)local_f0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d65b1;
    }
    iVar1 = *(int *)(local_f0.field1 + 0xc);
    if (iVar1 != *(int *)(local_f0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_f0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = (Data *)(local_f0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar11 == 0) {
LAB_1004d6590:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_38 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar11 = *(QArrayData **)pDVar12;
            goto LAB_1004d6590;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004d65b1:
  pcVar2 = (char *)param_1[6];
  local_110.field1 = (Data *)puVar3;
  QString::fromUtf8_helper((char *)&local_118,0x1dfa799);
  FUN_1000341d0(&local_110,&local_118);
  QVariant::QVariant(&local_108,(QStringList *)&local_110.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_108);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d6652;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1004d6652:
  AVar4 = local_110;
  if (*(int *)local_110.field1 != -1) {
    if (*(int *)local_110.field1 != 0) {
      LOCK();
      *(int *)local_110.field1 = *(int *)local_110.field1 + -1;
      local_38 = *(int *)local_110.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d66e1;
    }
    iVar1 = *(int *)(local_110.field1 + 0xc);
    if (iVar1 != *(int *)(local_110.field1 + 8)) {
      lVar10 = (long)*(int *)(local_110.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = (Data *)(local_110.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar11 == 0) {
LAB_1004d66c0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_38 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar11 = *(QArrayData **)pDVar12;
            goto LAB_1004d66c0;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004d66e1:
  QFormLayout::setWidget(param_1[4],1,1,param_1[6]);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_1[2]);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_120,0x1dfa7b7);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d6771;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1004d6771:
  pcVar2 = (char *)param_1[7];
  local_138.field1 = (Data *)puVar3;
  QString::fromUtf8_helper((char *)&local_140,0x1df20b9);
  FUN_1000341d0(&local_138,&local_140);
  QVariant::QVariant(&local_130,(QStringList *)&local_138.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_130);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_38 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d6812;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1004d6812:
  AVar4 = local_138;
  if (*(int *)local_138.field1 != -1) {
    if (*(int *)local_138.field1 != 0) {
      LOCK();
      *(int *)local_138.field1 = *(int *)local_138.field1 + -1;
      local_38 = *(int *)local_138.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d68a1;
    }
    iVar1 = *(int *)(local_138.field1 + 0xc);
    if (iVar1 != *(int *)(local_138.field1 + 8)) {
      lVar10 = (long)*(int *)(local_138.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = (Data *)(local_138.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar11 == 0) {
LAB_1004d6880:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_38 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar11 = *(QArrayData **)pDVar12;
            goto LAB_1004d6880;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004d68a1:
  pcVar2 = (char *)param_1[7];
  local_158.field1 = (Data *)puVar3;
  QString::fromUtf8_helper((char *)&local_160,0x1dfa7cc);
  FUN_1000341d0(&local_158,&local_160);
  QVariant::QVariant(&local_150,(QStringList *)&local_158.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_150);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d6942;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1004d6942:
  AVar4 = local_158;
  if (*(int *)local_158.field1 != -1) {
    if (*(int *)local_158.field1 != 0) {
      LOCK();
      *(int *)local_158.field1 = *(int *)local_158.field1 + -1;
      local_38 = *(int *)local_158.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d69e1;
    }
    iVar1 = *(int *)(local_158.field1 + 0xc);
    if (iVar1 != *(int *)(local_158.field1 + 8)) {
      lVar10 = (long)*(int *)(local_158.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = (Data *)(local_158.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar11 == 0) {
LAB_1004d69c0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_38 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar11 = *(QArrayData **)pDVar12;
            goto LAB_1004d69c0;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004d69e1:
  pcVar2 = (char *)param_1[7];
  QVariant::QVariant(&local_170,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_170);
  QFormLayout::setWidget(param_1[4],2,1,param_1[7]);
  QGridLayout::addLayout(param_1[3],param_1[4],0,0,1,2,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = PTR_vtable_1021e17a0 + 0x10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x11000000f6;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[8] = puVar8;
  QGridLayout::addItem(param_1[3],puVar8,1,0,1,1,0);
  this_01 = operator_new(0x30);
  QPushButton::QPushButton(this_01,(QWidget *)param_1[2]);
  param_1[9] = this_01;
  QString::fromUtf8_helper((char *)&local_178,0x1df7292);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_38 = *(int *)local_178 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d6b56;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_1004d6b56:
  pcVar2 = (char *)param_1[9];
  QVariant::QVariant(&local_188,true);
  QObject::setProperty(pcVar2,(QVariant *)"customUpdate");
  QVariant::~QVariant(&local_188);
  QGridLayout::addWidget(param_1[3],param_1[9],1,1,1,1,0);
  QStackedWidget::addWidget((QWidget *)param_1[1]);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,0,0);
  param_1[10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_190,0x1dfa7ee);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_38 = *(int *)local_190 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d6c3c;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_1004d6c3c:
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_1[10]);
  param_1[0xb] = pQVar5;
  QString::fromUtf8_helper((char *)&local_198,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_38 = *(int *)local_198 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d6cb5;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_1004d6cb5:
  QLayout::setContentsMargins((int)param_1[0xb],0,0,0);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_1[10],0);
  param_1[0xc] = pQVar9;
  QString::fromUtf8_helper((char *)&local_1a0,0x1df8f89);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_38 = *(int *)local_1a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d6d45;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1004d6d45:
  QFont::QFont(local_1b0);
  QFont::setPointSize((int)local_1b0);
  QFont::setWeight((int)local_1b0);
  QFont::setWeight((int)local_1b0);
  QWidget::setFont((QFont *)param_1[0xc]);
  QLabel::setAlignment(param_1[0xc],0x84);
  QLabel::setWordWrap(SUB81(param_1[0xc],0));
  QGridLayout::addWidget(param_1[0xb],param_1[0xc],0,0,1,1,0);
  QStackedWidget::addWidget((QWidget *)param_1[1]);
  QGridLayout::addWidget(*param_1,param_1[1],0,0,1,1,0);
  FUN_1004d78d0(param_1,param_2);
  QStackedWidget::setCurrentIndex((int)param_1[1]);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_1b0);
  return;
}

