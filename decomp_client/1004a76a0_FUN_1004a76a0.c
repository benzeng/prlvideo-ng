
void FUN_1004a76a0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  AnonymousUnion0 AVar4;
  uint uVar5;
  QVBoxLayout *this;
  QGridLayout *this_00;
  undefined8 *puVar6;
  QComboBox *pQVar7;
  QLabel *pQVar8;
  QCheckBox *pQVar9;
  QWidget *pQVar10;
  long lVar11;
  QArrayData *pQVar12;
  undefined *puVar13;
  Data *pDVar14;
  QArrayData *local_1e0;
  AnonymousUnion0 local_1d8;
  QVariant local_1d0;
  QArrayData *local_1c0;
  AnonymousUnion0 local_1b8;
  QVariant local_1b0;
  QArrayData *local_1a0;
  QVariant local_198;
  QArrayData *local_188;
  QArrayData *local_180;
  AnonymousUnion0 local_178;
  QVariant local_170;
  QArrayData *local_160;
  AnonymousUnion0 local_158;
  QVariant local_150;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  AnonymousUnion0 local_128;
  QVariant local_120;
  QArrayData *local_110;
  AnonymousUnion0 local_108;
  QVariant local_100;
  QVariant local_f0;
  QArrayData *local_e0;
  uint local_d8 [2];
  QArrayData *local_d0;
  QArrayData *local_c8;
  AnonymousUnion0 local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  AnonymousUnion0 local_a0;
  QVariant local_98;
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
      if (*(int *)local_40 != 0) goto LAB_1004a76f6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004a76f6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df8851);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004a774d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004a774d:
  local_38 = true;
  uStack_37 = 0x140000001;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df8862);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a77d7;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004a77d7:
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_68,0x1dc1597);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a7845;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004a7845:
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_70,0x1dc1bb6);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a78b1;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004a78b1:
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar13 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar13;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000028;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[2] = puVar6;
  QGridLayout::addItem(param_1[1],puVar6,0,2,2,1,0);
  pQVar7 = operator_new(0x30);
  QComboBox::QComboBox(pQVar7,(QWidget *)param_2);
  param_1[3] = pQVar7;
  QString::fromUtf8_helper((char *)&local_78,0x1df886e);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a79b2;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004a79b2:
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_88,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_88);
  puVar3 = PTR_shared_null_1021e15e8;
  pcVar2 = (char *)param_1[3];
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
      if (local_38) goto LAB_1004a7a8a;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1004a7a8a:
  AVar4 = local_a0;
  if (*(int *)local_a0.field1 != -1) {
    if (*(int *)local_a0.field1 != 0) {
      LOCK();
      *(int *)local_a0.field1 = *(int *)local_a0.field1 + -1;
      local_38 = *(int *)local_a0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a7b5b;
    }
    iVar1 = *(int *)(local_a0.field1 + 0xc);
    if (iVar1 != *(int *)(local_a0.field1 + 8)) {
      lVar11 = (long)*(int *)(local_a0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_a0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar12 == 0) {
LAB_1004a7b30:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar14;
            goto LAB_1004a7b30;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004a7b5b:
  pcVar2 = (char *)param_1[3];
  local_c0.field1 = (Data *)puVar3;
  QString::fromUtf8_helper((char *)&local_c8,0x1df8880);
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
      if (local_38) goto LAB_1004a7bfc;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1004a7bfc:
  AVar4 = local_c0;
  if (*(int *)local_c0.field1 != -1) {
    if (*(int *)local_c0.field1 != 0) {
      LOCK();
      *(int *)local_c0.field1 = *(int *)local_c0.field1 + -1;
      local_38 = *(int *)local_c0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a7cbb;
    }
    iVar1 = *(int *)(local_c0.field1 + 0xc);
    if (iVar1 != *(int *)(local_c0.field1 + 8)) {
      lVar11 = (long)*(int *)(local_c0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_c0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar12 == 0) {
LAB_1004a7c90:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar14;
            goto LAB_1004a7c90;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004a7cbb:
  QGridLayout::addWidget(param_1[1],param_1[3],0,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[4] = pQVar8;
  QString::fromUtf8_helper((char *)&local_d0,0x1df88ba);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a7d5c;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004a7d5c:
  local_d8[0] = 0x570000;
  QSizePolicy::setControlType(local_d8,1);
  local_d8[0] = local_d8[0] & 0xffff0000;
  uVar5 = QWidget::sizePolicy();
  local_d8[0] = local_d8[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[4]);
  QLabel::setAlignment(param_1[4],0x82);
  QGridLayout::addWidget(param_1[1],param_1[4],0,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QComboBox::QComboBox(pQVar7,(QWidget *)param_2);
  param_1[5] = pQVar7;
  QString::fromUtf8_helper((char *)&local_e0,0x1df88cb);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a7e55;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004a7e55:
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_f0,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_f0);
  pcVar2 = (char *)param_1[5];
  local_108.field1 = (Data *)puVar3;
  QString::fromUtf8_helper((char *)&local_110,0x1df20b9);
  FUN_1000341d0(&local_108,&local_110);
  QVariant::QVariant(&local_100,(QStringList *)&local_108.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_100);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a7f2c;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1004a7f2c:
  AVar4 = local_108;
  if (*(int *)local_108.field1 != -1) {
    if (*(int *)local_108.field1 != 0) {
      LOCK();
      *(int *)local_108.field1 = *(int *)local_108.field1 + -1;
      local_38 = *(int *)local_108.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a7feb;
    }
    iVar1 = *(int *)(local_108.field1 + 0xc);
    if (iVar1 != *(int *)(local_108.field1 + 8)) {
      lVar11 = (long)*(int *)(local_108.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_108.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar12 == 0) {
LAB_1004a7fc0:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar14;
            goto LAB_1004a7fc0;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004a7feb:
  pcVar2 = (char *)param_1[5];
  local_128.field1 = (Data *)puVar3;
  QString::fromUtf8_helper((char *)&local_130,0x1df88dc);
  FUN_1000341d0(&local_128,&local_130);
  QVariant::QVariant(&local_120,(QStringList *)&local_128.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_120);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a808c;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1004a808c:
  AVar4 = local_128;
  if (*(int *)local_128.field1 != -1) {
    if (*(int *)local_128.field1 != 0) {
      LOCK();
      *(int *)local_128.field1 = *(int *)local_128.field1 + -1;
      local_38 = *(int *)local_128.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a814b;
    }
    iVar1 = *(int *)(local_128.field1 + 0xc);
    if (iVar1 != *(int *)(local_128.field1 + 8)) {
      lVar11 = (long)*(int *)(local_128.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_128.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar12 == 0) {
LAB_1004a8120:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar14;
            goto LAB_1004a8120;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004a814b:
  QGridLayout::addWidget(param_1[1],param_1[5],1,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[6] = pQVar8;
  QString::fromUtf8_helper((char *)&local_138,0x1df8915);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a81ef;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1004a81ef:
  uVar5 = QWidget::sizePolicy();
  local_d8[0] = local_d8[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  QLabel::setAlignment(param_1[6],0x82);
  QGridLayout::addWidget(param_1[1],param_1[6],1,0,1,1,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[7] = pQVar9;
  QString::fromUtf8_helper((char *)&local_140,0x1df8927);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_38 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a82c6;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1004a82c6:
  pcVar2 = (char *)param_1[7];
  local_158.field1 = (Data *)puVar3;
  QString::fromUtf8_helper((char *)&local_160,0x1df20b9);
  FUN_1000341d0(&local_158,&local_160);
  QVariant::QVariant(&local_150,(QStringList *)&local_158.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_150);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a8367;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1004a8367:
  AVar4 = local_158;
  if (*(int *)local_158.field1 != -1) {
    if (*(int *)local_158.field1 != 0) {
      LOCK();
      *(int *)local_158.field1 = *(int *)local_158.field1 + -1;
      local_38 = *(int *)local_158.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a842b;
    }
    iVar1 = *(int *)(local_158.field1 + 0xc);
    if (iVar1 != *(int *)(local_158.field1 + 8)) {
      lVar11 = (long)*(int *)(local_158.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_158.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar12 == 0) {
LAB_1004a8400:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar14;
            goto LAB_1004a8400;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004a842b:
  pcVar2 = (char *)param_1[7];
  local_178.field1 = (Data *)puVar3;
  QString::fromUtf8_helper((char *)&local_180,0x1df8936);
  FUN_1000341d0(&local_178,&local_180);
  QVariant::QVariant(&local_170,(QStringList *)&local_178.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_170);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_38 = *(int *)local_180 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a84cc;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_1004a84cc:
  AVar4 = local_178;
  if (*(int *)local_178.field1 != -1) {
    if (*(int *)local_178.field1 != 0) {
      LOCK();
      *(int *)local_178.field1 = *(int *)local_178.field1 + -1;
      local_38 = *(int *)local_178.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a858b;
    }
    iVar1 = *(int *)(local_178.field1 + 0xc);
    if (iVar1 != *(int *)(local_178.field1 + 8)) {
      lVar11 = (long)*(int *)(local_178.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_178.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar12 == 0) {
LAB_1004a8560:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar14;
            goto LAB_1004a8560;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004a858b:
  QGridLayout::addWidget(param_1[1],param_1[7],3,1,1,2,0);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[8] = pQVar10;
  QString::fromUtf8_helper((char *)&local_188,0x1df894e);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_38 = *(int *)local_188 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a862f;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_1004a862f:
  pcVar2 = (char *)param_1[8];
  QVariant::QVariant(&local_198,true);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidget");
  QVariant::~QVariant(&local_198);
  QGridLayout::addWidget(param_1[1],param_1[8],2,0,1,3,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[9] = pQVar9;
  QString::fromUtf8_helper((char *)&local_1a0,0x1df895d);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_38 = *(int *)local_1a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a8704;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1004a8704:
  pcVar2 = (char *)param_1[9];
  local_1b8.field1 = (Data *)puVar3;
  QString::fromUtf8_helper((char *)&local_1c0,0x1df20b9);
  FUN_1000341d0(&local_1b8,&local_1c0);
  QVariant::QVariant(&local_1b0,(QStringList *)&local_1b8.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_1b0);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_38 = *(int *)local_1c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a87a5;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_1004a87a5:
  AVar4 = local_1b8;
  if (*(int *)local_1b8.field1 != -1) {
    if (*(int *)local_1b8.field1 != 0) {
      LOCK();
      *(int *)local_1b8.field1 = *(int *)local_1b8.field1 + -1;
      local_38 = *(int *)local_1b8.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a886b;
    }
    iVar1 = *(int *)(local_1b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1b8.field1 + 8)) {
      lVar11 = (long)*(int *)(local_1b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_1b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar12 == 0) {
LAB_1004a8840:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar14;
            goto LAB_1004a8840;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004a886b:
  pcVar2 = (char *)param_1[9];
  local_1d8.field1 = (Data *)puVar3;
  QString::fromUtf8_helper((char *)&local_1e0,0x1df8965);
  FUN_1000341d0(&local_1d8,&local_1e0);
  QVariant::QVariant(&local_1d0,(QStringList *)&local_1d8.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_1d0);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_38 = *(int *)local_1e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a890c;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_1004a890c:
  AVar4 = local_1d8;
  if (*(int *)local_1d8.field1 != -1) {
    if (*(int *)local_1d8.field1 != 0) {
      LOCK();
      *(int *)local_1d8.field1 = *(int *)local_1d8.field1 + -1;
      local_38 = *(int *)local_1d8.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a89a1;
    }
    iVar1 = *(int *)(local_1d8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1d8.field1 + 8)) {
      lVar11 = (long)*(int *)(local_1d8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = (Data *)(local_1d8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar12 = *(QArrayData **)pDVar14;
        if (*(int *)pQVar12 == 0) {
LAB_1004a8980:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_38 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar12 = *(QArrayData **)pDVar14;
            goto LAB_1004a8980;
          }
        }
        pDVar14 = pDVar14 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004a89a1:
  QGridLayout::addWidget(param_1[1],param_1[9],4,1,1,2,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar13;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x9800000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[10] = puVar6;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar6);
  FUN_1004a9650(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

