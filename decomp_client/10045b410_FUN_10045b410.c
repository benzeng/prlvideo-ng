
void FUN_10045b410(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  AnonymousUnion0 AVar3;
  QGridLayout *this;
  QCheckBox *pQVar4;
  QLabel *pQVar5;
  undefined8 *puVar6;
  QHBoxLayout *this_00;
  QComboBox *this_01;
  Data *pDVar7;
  QArrayData *pQVar8;
  long lVar9;
  undefined *puVar10;
  QVariant local_188;
  QArrayData *local_178;
  QArrayData *local_170;
  AnonymousUnion0 local_168;
  QVariant local_160;
  QArrayData *local_150;
  AnonymousUnion0 local_148;
  QVariant local_140;
  QVariant local_130;
  QArrayData *local_120;
  QString local_118;
  QVariant local_110;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QVariant local_e8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  AnonymousUnion0 local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  AnonymousUnion0 local_a0;
  QVariant local_98;
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
      if (*(int *)local_40 != 0) goto LAB_10045b466;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10045b466:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df5888);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10045b4bd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10045b4bd:
  local_38 = true;
  uStack_37 = 0x18d000002;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df589e);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045b547;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10045b547:
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
      if (local_38) goto LAB_10045b5b5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10045b5b5:
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[1] = pQVar4;
  QString::fromUtf8_helper((char *)&local_70,0x1df58af);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045b624;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10045b624:
  pcVar2 = (char *)param_1[1];
  QVariant::QVariant(&local_80,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_80);
  QGridLayout::addWidget(*param_1,param_1[1],6,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[2] = pQVar4;
  QString::fromUtf8_helper((char *)&local_88,0x1df58c7);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045b6ec;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10045b6ec:
  pcVar2 = (char *)param_1[2];
  local_a0.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_a8,0x1df20b9);
  FUN_1000341d0(&local_a0,&local_a8);
  QVariant::QVariant(&local_98,(QStringList *)&local_a0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045b794;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10045b794:
  AVar3 = local_a0;
  if (*(int *)local_a0.field1 != -1) {
    if (*(int *)local_a0.field1 != 0) {
      LOCK();
      *(int *)local_a0.field1 = *(int *)local_a0.field1 + -1;
      local_38 = *(int *)local_a0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045b831;
    }
    iVar1 = *(int *)(local_a0.field1 + 0xc);
    if (iVar1 != *(int *)(local_a0.field1 + 8)) {
      lVar9 = (long)*(int *)(local_a0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_a0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_10045b810:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_38 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_10045b810;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar3.field1);
  }
LAB_10045b831:
  pcVar2 = (char *)param_1[2];
  local_c0.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_c8,0x1df585d);
  FUN_1000341d0(&local_c0,&local_c8);
  QVariant::QVariant(&local_b8,(QStringList *)&local_c0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_b8);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045b8d9;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10045b8d9:
  AVar3 = local_c0;
  if (*(int *)local_c0.field1 != -1) {
    if (*(int *)local_c0.field1 != 0) {
      LOCK();
      *(int *)local_c0.field1 = *(int *)local_c0.field1 + -1;
      local_38 = *(int *)local_c0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045b971;
    }
    iVar1 = *(int *)(local_c0.field1 + 0xc);
    if (iVar1 != *(int *)(local_c0.field1 + 8)) {
      lVar9 = (long)*(int *)(local_c0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_c0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_10045b950:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_38 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_10045b950;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar3.field1);
  }
LAB_10045b971:
  QGridLayout::addWidget(*param_1,param_1[2],0,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[3] = pQVar4;
  QString::fromUtf8_helper((char *)&local_d0,0x1df58df);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045ba0f;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10045ba0f:
  QGridLayout::addWidget(*param_1,param_1[3],3,1,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_d8,0x1df58f5);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045bab2;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10045bab2:
  QLabel::setIndent((int)param_1[4]);
  pcVar2 = (char *)param_1[4];
  QVariant::QVariant(&local_e8,true);
  QObject::setProperty(pcVar2,(QVariant *)"SmallFont");
  QVariant::~QVariant(&local_e8);
  QGridLayout::addWidget(*param_1,param_1[4],4,1,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar10 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0xc800000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[5] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,8,0,1,3,0);
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00);
  param_1[6] = this_00;
  QString::fromUtf8_helper((char *)&local_f0,0x1df027f);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045bc1e;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10045bc1e:
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[7] = pQVar5;
  QString::fromUtf8_helper((char *)&local_f8,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045bc98;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10045bc98:
  QBoxLayout::addWidget(param_1[6],param_1[7],0,0);
  this_01 = operator_new(0x30);
  QComboBox::QComboBox(this_01,(QWidget *)param_2);
  param_1[8] = this_01;
  QString::fromUtf8_helper((char *)&local_100,0x1df5911);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045bd21;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10045bd21:
  pcVar2 = (char *)param_1[8];
  QString::fromUtf8_helper((char *)&local_118,0x1df5927);
  QVariant::QVariant(&local_110,&local_118);
  QObject::setProperty(pcVar2,(QVariant *)"criticalViewModes");
  QVariant::~QVariant(&local_110);
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_38 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045bda7;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_10045bda7:
  QBoxLayout::addWidget(param_1[6],param_1[8],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[9] = puVar6;
  (**(code **)(*(long *)param_1[6] + 0x70))((long *)param_1[6],puVar6);
  QGridLayout::addLayout(*param_1,param_1[6],7,1,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x600000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[10] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,5,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[0xb] = pQVar4;
  QString::fromUtf8_helper((char *)&local_120,0x1df5936);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045bf42;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10045bf42:
  pcVar2 = (char *)param_1[0xb];
  QVariant::QVariant(&local_130,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_130);
  pcVar2 = (char *)param_1[0xb];
  local_148.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_150,0x1df20b9);
  FUN_1000341d0(&local_148,&local_150);
  QVariant::QVariant(&local_140,(QStringList *)&local_148.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_140);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045c020;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10045c020:
  AVar3 = local_148;
  if (*(int *)local_148.field1 != -1) {
    if (*(int *)local_148.field1 != 0) {
      LOCK();
      *(int *)local_148.field1 = *(int *)local_148.field1 + -1;
      local_38 = *(int *)local_148.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045c0d8;
    }
    iVar1 = *(int *)(local_148.field1 + 0xc);
    if (iVar1 != *(int *)(local_148.field1 + 8)) {
      lVar9 = (long)*(int *)(local_148.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_148.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_10045c0b0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_38 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_10045c0b0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar3.field1);
  }
LAB_10045c0d8:
  pcVar2 = (char *)param_1[0xb];
  local_168.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_170,0x1df594b);
  FUN_1000341d0(&local_168,&local_170);
  QVariant::QVariant(&local_160,(QStringList *)&local_168.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_160);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_38 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045c180;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10045c180:
  AVar3 = local_168;
  if (*(int *)local_168.field1 != -1) {
    if (*(int *)local_168.field1 != 0) {
      LOCK();
      *(int *)local_168.field1 = *(int *)local_168.field1 + -1;
      local_38 = *(int *)local_168.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045c238;
    }
    iVar1 = *(int *)(local_168.field1 + 0xc);
    if (iVar1 != *(int *)(local_168.field1 + 8)) {
      lVar9 = (long)*(int *)(local_168.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_168.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_10045c210:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_38 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_10045c210;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar3.field1);
  }
LAB_10045c238:
  QGridLayout::addWidget(*param_1,param_1[0xb],1,1,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0xc] = pQVar5;
  QString::fromUtf8_helper((char *)&local_178,0x1df597d);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_38 = *(int *)local_178 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045c2db;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10045c2db:
  QLabel::setWordWrap(SUB81(param_1[0xc],0));
  QLabel::setIndent((int)param_1[0xc]);
  pcVar2 = (char *)param_1[0xc];
  QVariant::QVariant(&local_188,true);
  QObject::setProperty(pcVar2,(QVariant *)"SmallFont");
  QVariant::~QVariant(&local_188);
  QGridLayout::addWidget(*param_1,param_1[0xc],2,1,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xd] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,6,2,2,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x140000001e;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,6,0,2,1,0);
  QGridLayout::setRowStretch((int)*param_1,8);
  QWidget::setTabOrder((QWidget *)param_1[3],(QWidget *)param_1[8]);
  QWidget::setTabOrder((QWidget *)param_1[8],(QWidget *)param_1[1]);
  FUN_10045cd50(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

