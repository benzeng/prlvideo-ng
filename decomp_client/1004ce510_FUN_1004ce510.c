
void FUN_1004ce510(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QString *pQVar3;
  AnonymousUnion0 AVar4;
  uint uVar5;
  QVBoxLayout *this;
  QGridLayout *this_00;
  QLabel *pQVar6;
  undefined8 *puVar7;
  QPushButton *pQVar8;
  QFrame *pQVar9;
  QCheckBox *this_01;
  QWidget *pQVar10;
  QHBoxLayout *this_02;
  QComboBox *pQVar11;
  long lVar12;
  QArrayData *pQVar13;
  undefined *puVar14;
  Data *pDVar15;
  QArrayData *local_208;
  AnonymousUnion0 local_200;
  QVariant local_1f8;
  QArrayData *local_1e8;
  AnonymousUnion0 local_1e0;
  QVariant local_1d8;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  AnonymousUnion0 local_1b8;
  QVariant local_1b0;
  QArrayData *local_1a0;
  AnonymousUnion0 local_198;
  QVariant local_190;
  QArrayData *local_180;
  uint local_178 [2];
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QVariant local_158;
  QArrayData *local_148;
  QArrayData *local_140;
  AnonymousUnion0 local_138;
  QVariant local_130;
  QArrayData *local_120;
  AnonymousUnion0 local_118;
  QVariant local_110;
  QArrayData *local_100;
  undefined1 local_f8 [16];
  QBrush local_e8 [8];
  undefined1 local_e0 [16];
  QBrush local_d0 [8];
  QPalette local_c8 [16];
  QArrayData *local_b8;
  QArrayData *local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  uint local_80 [2];
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
      if (*(int *)local_40 != 0) goto LAB_1004ce566;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004ce566:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1dfa19e);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004ce5bd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004ce5bd:
  local_38 = true;
  uStack_37 = 0x154000002;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1dfa1b5);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ce647;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004ce647:
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
      if (local_38) goto LAB_1004ce6b5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004ce6b5:
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_70,0x1dd67e5);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ce721;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004ce721:
  QGridLayout::setVerticalSpacing((int)param_1[1]);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[2] = pQVar6;
  QString::fromUtf8_helper((char *)&local_78,0x1dfa1c9);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ce79d;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004ce79d:
  local_80[0] = 0x570000;
  QSizePolicy::setControlType(local_80,1);
  local_80[0] = local_80[0] & 0xffff0000;
  uVar5 = QWidget::sizePolicy();
  local_80[0] = local_80[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[2]);
  QLabel::setAlignment(param_1[2],0x82);
  QGridLayout::addWidget(param_1[1],param_1[2],0,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[3] = pQVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1dfa1d7);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ce880;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004ce880:
  QLabel::setAlignment(param_1[3],0x82);
  QGridLayout::addWidget(param_1[1],param_1[3],5,0,1,1,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  puVar14 = PTR_vtable_1021e17a0 + 0x10;
  *puVar7 = puVar14;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x100000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[4] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,0xe,0,1,4,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[5] = pQVar6;
  QString::fromUtf8_helper((char *)&local_90,0x1dfa1e2);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ce9ba;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1004ce9ba:
  QLabel::setAlignment(param_1[5],0x82);
  QGridLayout::addWidget(param_1[1],param_1[5],2,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[6] = pQVar6;
  QString::fromUtf8_helper((char *)&local_98,0x1dfa1f3);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cea69;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004cea69:
  QLabel::setWordWrap(SUB81(param_1[6],0));
  pcVar2 = (char *)param_1[6];
  QVariant::QVariant(&local_a8,true);
  QObject::setProperty(pcVar2,(QVariant *)"SmallFont");
  QVariant::~QVariant(&local_a8);
  QGridLayout::addWidget(param_1[1],param_1[6],3,1,1,3,0);
  pQVar8 = operator_new(0x30);
  QPushButton::QPushButton(pQVar8,(QWidget *)param_2);
  param_1[7] = pQVar8;
  QString::fromUtf8_helper((char *)&local_b0,0x1dfa210);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004ceb4f;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004ceb4f:
  QGridLayout::addWidget(param_1[1],param_1[7],7,1,1,2,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar14;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x900000006;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[8] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,1,0,1,4,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar14;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x900000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[9] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,6,0,1,4,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar14;
  *(undefined8 *)((long)puVar7 + 0xc) = 0xf00000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[10] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,4,0,1,4,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar14;
  *(undefined8 *)((long)puVar7 + 0xc) = 0xf00000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0xb] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,8,0,1,4,0);
  pQVar9 = operator_new(0x30);
  QFrame::QFrame(pQVar9,param_2,0);
  param_1[0xc] = pQVar9;
  QString::fromUtf8_helper((char *)&local_b8,0x1dfa21d);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cedef;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004cedef:
  QPalette::QPalette(local_c8);
  QColor::setRgb((int)local_e0,0xd5,0xd5,0xd5);
  QBrush::QBrush(local_d0,local_e0,1);
  QBrush::setStyle(local_d0,1);
  QPalette::setBrush(local_c8,0,0,local_d0);
  QPalette::setBrush(local_c8,2,0,local_d0);
  QColor::setRgb((int)local_f8,0x7f,0x7f,0x7f);
  QBrush::QBrush(local_e8,local_f8,1);
  QBrush::setStyle(local_e8,1);
  QPalette::setBrush(local_c8,1,0,local_e8);
  QWidget::setPalette((QPalette *)param_1[0xc]);
  QFrame::setFrameShadow(param_1[0xc],0x10);
  QFrame::setFrameShape(param_1[0xc],4);
  QGridLayout::addWidget(param_1[1],param_1[0xc],9,0,1,4,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar14;
  *(undefined8 *)((long)puVar7 + 0xc) = 0xd00000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0xd] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,10,0,1,4,0);
  this_01 = operator_new(0x30);
  QCheckBox::QCheckBox(this_01,(QWidget *)param_2);
  param_1[0xe] = this_01;
  QString::fromUtf8_helper((char *)&local_100,0x1dfa247);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cf034;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1004cf034:
  pcVar2 = (char *)param_1[0xe];
  local_118.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_120,0x1df20b9);
  FUN_1000341d0(&local_118,&local_120);
  QVariant::QVariant(&local_110,(QStringList *)&local_118.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_110);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cf0dc;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1004cf0dc:
  AVar4 = local_118;
  if (*(int *)local_118.field1 != -1) {
    if (*(int *)local_118.field1 != 0) {
      LOCK();
      *(int *)local_118.field1 = *(int *)local_118.field1 + -1;
      local_38 = *(int *)local_118.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cf171;
    }
    iVar1 = *(int *)(local_118.field1 + 0xc);
    if (iVar1 != *(int *)(local_118.field1 + 8)) {
      lVar12 = (long)*(int *)(local_118.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar15 = (Data *)(local_118.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar15;
        if (*(int *)pQVar13 == 0) {
LAB_1004cf150:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar15;
            goto LAB_1004cf150;
          }
        }
        pDVar15 = pDVar15 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004cf171:
  pcVar2 = (char *)param_1[0xe];
  local_138.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_140,0x1df2ff4);
  FUN_1000341d0(&local_138,&local_140);
  QVariant::QVariant(&local_130,(QStringList *)&local_138.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_130);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_38 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cf219;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1004cf219:
  AVar4 = local_138;
  if (*(int *)local_138.field1 != -1) {
    if (*(int *)local_138.field1 != 0) {
      LOCK();
      *(int *)local_138.field1 = *(int *)local_138.field1 + -1;
      local_38 = *(int *)local_138.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cf2b1;
    }
    iVar1 = *(int *)(local_138.field1 + 0xc);
    if (iVar1 != *(int *)(local_138.field1 + 8)) {
      lVar12 = (long)*(int *)(local_138.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar15 = (Data *)(local_138.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar15;
        if (*(int *)pQVar13 == 0) {
LAB_1004cf290:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar15;
            goto LAB_1004cf290;
          }
        }
        pDVar15 = pDVar15 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004cf2b1:
  QGridLayout::addWidget(param_1[1],param_1[0xe],0xb,1,1,3,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar14;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x900000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0xf] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,0xc,0,1,4,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[0x10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_148,0x1dfa26f);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_38 = *(int *)local_148 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cf3e0;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1004cf3e0:
  QLabel::setWordWrap(SUB81(param_1[0x10],0));
  pcVar2 = (char *)param_1[0x10];
  QVariant::QVariant(&local_158,true);
  QObject::setProperty(pcVar2,(QVariant *)"SmallFont");
  QVariant::~QVariant(&local_158);
  QGridLayout::addWidget(param_1[1],param_1[0x10],0xd,1,1,3,0);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[0x11] = pQVar10;
  QString::fromUtf8_helper((char *)&local_160,0x1dfa298);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cf4da;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1004cf4da:
  this_02 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_02,(QWidget *)param_1[0x11]);
  param_1[0x12] = this_02;
  QBoxLayout::setSpacing((int)this_02);
  pQVar3 = (QString *)param_1[0x12];
  QString::fromUtf8_helper((char *)&local_168,0x1df0473);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cf56b;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1004cf56b:
  QLayout::setContentsMargins((int)param_1[0x12],0,0,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar14;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1400000000;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x13] = puVar7;
  (**(code **)(*(long *)param_1[0x12] + 0x70))((long *)param_1[0x12],puVar7);
  pQVar8 = operator_new(0x30);
  QPushButton::QPushButton(pQVar8,(QWidget *)param_1[0x11]);
  param_1[0x14] = pQVar8;
  QString::fromUtf8_helper((char *)&local_170,0x1dfa2b1);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_38 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cf673;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1004cf673:
  local_178[0] = 0;
  QSizePolicy::setControlType(local_178,1);
  local_178[0] = local_178[0] & 0xffff0000;
  uVar5 = QWidget::sizePolicy();
  local_178[0] = local_178[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x14]);
  QWidget::setContextMenuPolicy(param_1[0x14],0);
  QBoxLayout::addWidget(param_1[0x12],param_1[0x14],0,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar14;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1400000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x15] = puVar7;
  (**(code **)(*(long *)param_1[0x12] + 0x70))((long *)param_1[0x12],puVar7);
  QBoxLayout::setStretch((int)param_1[0x12],2);
  QGridLayout::addWidget(param_1[1],param_1[0x11],2,1,1,2,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar14;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x16] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,7,3,1,1,0);
  pQVar11 = operator_new(0x30);
  QComboBox::QComboBox(pQVar11,(QWidget *)param_2);
  param_1[0x17] = pQVar11;
  QString::fromUtf8_helper((char *)&local_180,0x1dfa2c3);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_38 = *(int *)local_180 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cf8ac;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_1004cf8ac:
  QWidget::setMinimumSize((int)param_1[0x17],0x78);
  pcVar2 = (char *)param_1[0x17];
  local_198.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_1a0,0x1dfa2ce);
  FUN_1000341d0(&local_198,&local_1a0);
  QVariant::QVariant(&local_190,(QStringList *)&local_198.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_190);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_38 = *(int *)local_1a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cf96a;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1004cf96a:
  AVar4 = local_198;
  if (*(int *)local_198.field1 != -1) {
    if (*(int *)local_198.field1 != 0) {
      LOCK();
      *(int *)local_198.field1 = *(int *)local_198.field1 + -1;
      local_38 = *(int *)local_198.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cfa01;
    }
    iVar1 = *(int *)(local_198.field1 + 0xc);
    if (iVar1 != *(int *)(local_198.field1 + 8)) {
      lVar12 = (long)*(int *)(local_198.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar15 = (Data *)(local_198.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar15;
        if (*(int *)pQVar13 == 0) {
LAB_1004cf9e0:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar15;
            goto LAB_1004cf9e0;
          }
        }
        pDVar15 = pDVar15 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004cfa01:
  pcVar2 = (char *)param_1[0x17];
  local_1b8.field1 = (Data *)PTR_shared_null_1021e15e8;
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
      if (local_38) goto LAB_1004cfaac;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_1004cfaac:
  AVar4 = local_1b8;
  if (*(int *)local_1b8.field1 != -1) {
    if (*(int *)local_1b8.field1 != 0) {
      LOCK();
      *(int *)local_1b8.field1 = *(int *)local_1b8.field1 + -1;
      local_38 = *(int *)local_1b8.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cfb41;
    }
    iVar1 = *(int *)(local_1b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1b8.field1 + 8)) {
      lVar12 = (long)*(int *)(local_1b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar15 = (Data *)(local_1b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar15;
        if (*(int *)pQVar13 == 0) {
LAB_1004cfb20:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar15;
            goto LAB_1004cfb20;
          }
        }
        pDVar15 = pDVar15 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004cfb41:
  QGridLayout::addWidget(param_1[1],param_1[0x17],5,1,1,2,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar14;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x18] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,0,3,1,1,0);
  pQVar11 = operator_new(0x30);
  QComboBox::QComboBox(pQVar11,(QWidget *)param_2);
  param_1[0x19] = pQVar11;
  QString::fromUtf8_helper((char *)&local_1c8,0x1dfa30c);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_38 = *(int *)local_1c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cfc74;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_1004cfc74:
  QWidget::setMinimumSize((int)param_1[0x19],0x78);
  pcVar2 = (char *)param_1[0x19];
  local_1e0.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_1e8,0x1dfa31a);
  FUN_1000341d0(&local_1e0,&local_1e8);
  QVariant::QVariant(&local_1d8,(QStringList *)&local_1e0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_1d8);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_38 = *(int *)local_1e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cfd32;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_1004cfd32:
  AVar4 = local_1e0;
  if (*(int *)local_1e0.field1 != -1) {
    if (*(int *)local_1e0.field1 != 0) {
      LOCK();
      *(int *)local_1e0.field1 = *(int *)local_1e0.field1 + -1;
      local_38 = *(int *)local_1e0.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cfdc1;
    }
    iVar1 = *(int *)(local_1e0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1e0.field1 + 8)) {
      lVar12 = (long)*(int *)(local_1e0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar15 = (Data *)(local_1e0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar15;
        if (*(int *)pQVar13 == 0) {
LAB_1004cfda0:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar15;
            goto LAB_1004cfda0;
          }
        }
        pDVar15 = pDVar15 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004cfdc1:
  pcVar2 = (char *)param_1[0x19];
  local_200.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_208,0x1df20b9);
  FUN_1000341d0(&local_200,&local_208);
  QVariant::QVariant(&local_1f8,(QStringList *)&local_200.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_1f8);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_38 = *(int *)local_208 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cfe6c;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_1004cfe6c:
  AVar4 = local_200;
  if (*(int *)local_200.field1 != -1) {
    if (*(int *)local_200.field1 != 0) {
      LOCK();
      *(int *)local_200.field1 = *(int *)local_200.field1 + -1;
      local_38 = *(int *)local_200.field1 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cff01;
    }
    iVar1 = *(int *)(local_200.field1 + 0xc);
    if (iVar1 != *(int *)(local_200.field1 + 8)) {
      lVar12 = (long)*(int *)(local_200.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar15 = (Data *)(local_200.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar13 = *(QArrayData **)pDVar15;
        if (*(int *)pQVar13 == 0) {
LAB_1004cfee0:
          QArrayData::deallocate(pQVar13,2,8);
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_38 = *(int *)pQVar13 != 0;
          UNLOCK();
          if (!local_38) {
            pQVar13 = *(QArrayData **)pDVar15;
            goto LAB_1004cfee0;
          }
        }
        pDVar15 = pDVar15 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar4.field1);
  }
LAB_1004cff01:
  QGridLayout::addWidget(param_1[1],param_1[0x19],0,1,1,2,0);
  QGridLayout::setRowStretch((int)param_1[1],0xe);
  QGridLayout::setColumnStretch((int)param_1[1],0);
  QGridLayout::setColumnStretch((int)param_1[1],3);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  FUN_1004d0c90(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QBrush::~QBrush(local_e8);
  QBrush::~QBrush(local_d0);
  QPalette::~QPalette(local_c8);
  return;
}

