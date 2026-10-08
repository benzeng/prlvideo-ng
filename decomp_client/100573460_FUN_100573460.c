
void FUN_100573460(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  bool bVar4;
  uint uVar5;
  QVBoxLayout *pQVar6;
  QGridLayout *this;
  QLabel *pQVar7;
  QCheckBox *pQVar8;
  undefined8 *puVar9;
  QLineEdit *pQVar10;
  QWidget *pQVar11;
  QTableView *this_00;
  long *plVar12;
  QHBoxLayout *this_01;
  QToolButton *pQVar13;
  undefined *puVar14;
  Connection local_2c0 [8];
  Connection local_2b8 [8];
  Connection local_2b0 [8];
  Connection local_2a8 [8];
  Connection local_2a0 [8];
  Connection local_298 [8];
  Connection local_290 [8];
  QArrayData *local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QFont local_250 [16];
  uint local_240 [2];
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  QString local_218;
  QVariant local_210;
  QString local_200;
  QVariant local_1f8;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QVariant local_1c0;
  QString local_1b0;
  QVariant local_1a8;
  QString local_198;
  QVariant local_190;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QString local_150;
  QVariant local_148;
  QString local_138;
  QVariant local_130;
  uint local_120 [2];
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  QVariant local_f8;
  QString local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QVariant local_b0;
  undefined8 local_a0;
  QArrayData *local_98;
  QIcon local_90 [8];
  QString local_88;
  QVariant local_80;
  QString local_70;
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
      if (*(int *)local_40 != 0) goto LAB_1005734b6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005734b6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e01c65);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10057350d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10057350d:
  local_38 = true;
  uStack_37 = 0x224000001;
  QWidget::resize(param_2);
  QVariant::QVariant(&local_58,true);
  QObject::setProperty((char *)param_2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_58);
  QString::fromUtf8_helper((char *)&local_70,0x1e01c7b);
  QVariant::QVariant(&local_68,&local_70);
  QObject::setProperty((char *)param_2,(QVariant *)"setter");
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_38 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005735c3;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1005735c3:
  QString::fromUtf8_helper((char *)&local_88,0x1e01c9f);
  QVariant::QVariant(&local_80,&local_88);
  QObject::setProperty((char *)param_2,(QVariant *)"getter");
  QVariant::~QVariant(&local_80);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_38 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100573633;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100573633:
  QIcon::QIcon(local_90);
  QString::fromUtf8_helper((char *)&local_98,0x1e005d9);
  local_a0 = 0xffffffffffffffff;
  QIcon::addFile(local_90,&local_98,&local_a0,0,1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005736ba;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005736ba:
  QIcon::operator_cast_to_QVariant((QIcon *)&local_b0);
  QObject::setProperty((char *)param_2,(QVariant *)"icon");
  QVariant::~QVariant(&local_b0);
  pQVar6 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar6,(QWidget *)param_2);
  *param_1 = pQVar6;
  QLayout::setContentsMargins((int)pQVar6,0,0,0);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_b8,0x1e00987);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10057377b;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10057377b:
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this);
  param_1[1] = this;
  QString::fromUtf8_helper((char *)&local_c0,0x1dd6d5e);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005737f1;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1005737f1:
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[2] = pQVar7;
  QString::fromUtf8_helper((char *)&local_c8,0x1e01cc3);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10057386c;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10057386c:
  QGridLayout::addWidget(param_1[1],param_1[2],6,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar8,(QWidget *)param_2);
  param_1[3] = pQVar8;
  QString::fromUtf8_helper((char *)&local_d0,0x1e01cce);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10057390f;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10057390f:
  pcVar3 = (char *)param_1[3];
  QString::fromUtf8_helper((char *)&local_e8,0x1e01cdd);
  QVariant::QVariant(&local_e0,&local_e8);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_38 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100573996;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_100573996:
  pcVar3 = (char *)param_1[3];
  QString::fromUtf8_helper((char *)&local_100,0x1e01cf2);
  QVariant::QVariant(&local_f8,&local_100);
  QObject::setProperty(pcVar3,(QVariant *)"NetworkConfigStorage");
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_38 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100573a1d;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_100573a1d:
  QGridLayout::addWidget(param_1[1],param_1[3],2,1,1,2,1);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[4] = pQVar7;
  QString::fromUtf8_helper((char *)&local_108,0x1e01d22);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_100573ac2;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100573ac2:
  QLabel::setAlignment(param_1[4],0x82);
  QGridLayout::addWidget(param_1[1],param_1[4],10,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[5] = pQVar7;
  QString::fromUtf8_helper((char *)&local_110,0x1e01d36);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_100573b72;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100573b72:
  QLabel::setAlignment(param_1[5],0x82);
  QGridLayout::addWidget(param_1[1],param_1[5],9,0,1,1,0);
  pQVar8 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar8,(QWidget *)param_2);
  param_1[6] = pQVar8;
  QString::fromUtf8_helper((char *)&local_118,0x1e01d44);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_100573c20;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100573c20:
  local_120[0] = 0x70000;
  QSizePolicy::setControlType(local_120,1);
  local_120[0] = local_120[0] & 0xffff0000;
  uVar5 = QWidget::sizePolicy();
  local_120[0] = local_120[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  pcVar3 = (char *)param_1[6];
  QString::fromUtf8_helper((char *)&local_138,0x1e01cdd);
  QVariant::QVariant(&local_130,&local_138);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_130);
  if (*(int *)local_138.field0_0x0 != -1) {
    if (*(int *)local_138.field0_0x0 != 0) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
      local_38 = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100573cf6;
    }
    QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
  }
LAB_100573cf6:
  pcVar3 = (char *)param_1[6];
  QString::fromUtf8_helper((char *)&local_150,0x1e01d53);
  QVariant::QVariant(&local_148,&local_150);
  QObject::setProperty(pcVar3,(QVariant *)"NetworkConfigStorage");
  QVariant::~QVariant(&local_148);
  if (*(int *)local_150.field0_0x0 != -1) {
    if (*(int *)local_150.field0_0x0 != 0) {
      LOCK();
      *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
      local_38 = *(int *)local_150.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100573d7d;
    }
    QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
  }
LAB_100573d7d:
  QGridLayout::addWidget(param_1[1],param_1[6],8,1,1,2,1);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_158,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_100573e22;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100573e22:
  QLabel::setAlignment(param_1[7],0x82);
  QGridLayout::addWidget(param_1[1],param_1[7],3,0,1,1,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  puVar14 = PTR_vtable_1021e17a0 + 0x10;
  *puVar9 = puVar14;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[8] = puVar9;
  QGridLayout::addItem(param_1[1],puVar9,3,2,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[9] = pQVar7;
  QString::fromUtf8_helper((char *)&local_160,0x1df4d10);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_100573f63;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100573f63:
  QLabel::setAlignment(param_1[9],0x82);
  QGridLayout::addWidget(param_1[1],param_1[9],4,0,1,1,0);
  pQVar10 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar10,(QWidget *)param_2);
  param_1[10] = pQVar10;
  QString::fromUtf8_helper((char *)&local_168,0x1e01d85);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_100574011;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100574011:
  QGridLayout::addWidget(param_1[1],param_1[10],4,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0xb] = pQVar7;
  QString::fromUtf8_helper((char *)&local_170,0x1df4ccc);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_38 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005740b6;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1005740b6:
  QLabel::setAlignment(param_1[0xb],0x82);
  QGridLayout::addWidget(param_1[1],param_1[0xb],6,0,1,1,0);
  pQVar10 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar10,(QWidget *)param_2);
  param_1[0xc] = pQVar10;
  QString::fromUtf8_helper((char *)&local_178,0x1e01d94);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_38 = *(int *)local_178 != 0;
      UNLOCK();
      if (local_38) goto LAB_100574164;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100574164:
  QGridLayout::addWidget(param_1[1],param_1[0xc],10,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar8,(QWidget *)param_2);
  param_1[0xd] = pQVar8;
  QString::fromUtf8_helper((char *)&local_180,0x1e01da5);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_38 = *(int *)local_180 != 0;
      UNLOCK();
      if (local_38) goto LAB_100574207;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_100574207:
  pcVar3 = (char *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_198,0x1e01cdd);
  QVariant::QVariant(&local_190,&local_198);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_190);
  if (*(int *)local_198.field0_0x0 != -1) {
    if (*(int *)local_198.field0_0x0 != 0) {
      LOCK();
      *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
      local_38 = *(int *)local_198.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10057428e;
    }
    QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
  }
LAB_10057428e:
  pcVar3 = (char *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_1b0,0x1e01dc4);
  QVariant::QVariant(&local_1a8,&local_1b0);
  QObject::setProperty(pcVar3,(QVariant *)"NetworkConfigStorage");
  QVariant::~QVariant(&local_1a8);
  if (*(int *)local_1b0.field0_0x0 != -1) {
    if (*(int *)local_1b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
      local_38 = *(int *)local_1b0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100574315;
    }
    QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
  }
LAB_100574315:
  pcVar3 = (char *)param_1[0xd];
  QVariant::QVariant(&local_1c0,true);
  QObject::setProperty(pcVar3,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_1c0);
  QGridLayout::addWidget(param_1[1],param_1[0xd],1,1,1,2,0);
  pQVar10 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar10,(QWidget *)param_2);
  param_1[0xe] = pQVar10;
  QString::fromUtf8_helper((char *)&local_1c8,0x1e01e00);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_38 = *(int *)local_1c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005743ef;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_1005743ef:
  QGridLayout::addWidget(param_1[1],param_1[0xe],5,1,1,1,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = puVar14;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x1400000014;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x310000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0xf] = puVar9;
  QGridLayout::addItem(param_1[1],puVar9,7,1,1,1,0);
  pQVar10 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar10,(QWidget *)param_2);
  param_1[0x10] = pQVar10;
  QString::fromUtf8_helper((char *)&local_1d0,0x1e01e0f);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_38 = *(int *)local_1d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10057451b;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_10057451b:
  QGridLayout::addWidget(param_1[1],param_1[0x10],9,1,1,2,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0x11] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1d8,0x1dd681a);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_38 = *(int *)local_1d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005745c6;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_1005745c6:
  QLabel::setAlignment(param_1[0x11],0x82);
  QGridLayout::addWidget(param_1[1],param_1[0x11],5,0,1,1,0);
  pQVar10 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar10,(QWidget *)param_2);
  param_1[0x12] = pQVar10;
  QString::fromUtf8_helper((char *)&local_1e0,0x1e01e1a);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_38 = *(int *)local_1e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10057467d;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_10057467d:
  QGridLayout::addWidget(param_1[1],param_1[0x12],3,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar8,(QWidget *)param_2);
  param_1[0x13] = pQVar8;
  QString::fromUtf8_helper((char *)&local_1e8,0x1e01e2b);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_38 = *(int *)local_1e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100574726;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_100574726:
  pcVar3 = (char *)param_1[0x13];
  QString::fromUtf8_helper((char *)&local_200,0x1e01cdd);
  QVariant::QVariant(&local_1f8,&local_200);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_1f8);
  if (*(int *)local_200.field0_0x0 != -1) {
    if (*(int *)local_200.field0_0x0 != 0) {
      LOCK();
      *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
      local_38 = *(int *)local_200.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005747b0;
    }
    QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
  }
LAB_1005747b0:
  pcVar3 = (char *)param_1[0x13];
  QString::fromUtf8_helper((char *)&local_218,0x1e01e47);
  QVariant::QVariant(&local_210,&local_218);
  QObject::setProperty(pcVar3,(QVariant *)"NetworkConfigStorage");
  QVariant::~QVariant(&local_210);
  if (*(int *)local_218.field0_0x0 != -1) {
    if (*(int *)local_218.field0_0x0 != 0) {
      LOCK();
      *(int *)local_218.field0_0x0 = *(int *)local_218.field0_0x0 + -1;
      local_38 = *(int *)local_218.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10057483a;
    }
    QArrayData::deallocate((QArrayData *)local_218.field0_0x0,2,8);
  }
LAB_10057483a:
  QGridLayout::addWidget(param_1[1],param_1[0x13],0,1,1,2,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = puVar14;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x82;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x110000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0x14] = puVar9;
  QGridLayout::addItem(param_1[1],puVar9,0,0,1,1,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = puVar14;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x1600000014;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x310000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0x15] = puVar9;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar9);
  pQVar11 = operator_new(0x30);
  QWidget::QWidget(pQVar11,param_2,0);
  param_1[0x16] = pQVar11;
  QString::fromUtf8_helper((char *)&local_220,0x1e01e7d);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_220 != -1) {
    if (*(int *)local_220 != 0) {
      LOCK();
      *(int *)local_220 = *(int *)local_220 + -1;
      local_38 = *(int *)local_220 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005749dc;
    }
    QArrayData::deallocate(local_220,2,8);
  }
LAB_1005749dc:
  pQVar6 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar6,(QWidget *)param_1[0x16]);
  param_1[0x17] = pQVar6;
  QBoxLayout::setSpacing((int)pQVar6);
  QLayout::setContentsMargins((int)param_1[0x17],0,0,0);
  pQVar2 = (QString *)param_1[0x17];
  QString::fromUtf8_helper((char *)&local_228,0x1dd6e2a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_38 = *(int *)local_228 != 0;
      UNLOCK();
      if (local_38) goto LAB_100574a82;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_100574a82:
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x16],0);
  param_1[0x18] = pQVar7;
  QString::fromUtf8_helper((char *)&local_230,0x1e01e92);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_38 = *(int *)local_230 != 0;
      UNLOCK();
      if (local_38) goto LAB_100574b04;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_100574b04:
  QBoxLayout::addWidget(param_1[0x17],param_1[0x18],0,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = puVar14;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x700000014;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0x19] = puVar9;
  (**(code **)(*(long *)param_1[0x17] + 0x70))((long *)param_1[0x17],puVar9);
  this_00 = operator_new(0x30);
  QTableView::QTableView(this_00,(QWidget *)param_1[0x16]);
  param_1[0x1a] = this_00;
  QString::fromUtf8_helper((char *)&local_238,0x1e01e9a);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_38 = *(int *)local_238 != 0;
      UNLOCK();
      if (local_38) goto LAB_100574c0e;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_100574c0e:
  local_240[0] = 0xd70000;
  QSizePolicy::setControlType(local_240,1);
  local_240[0] = local_240[0] & 0xffff0000;
  uVar5 = QWidget::sizePolicy();
  local_240[0] = local_240[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x1a]);
  QFont::QFont(local_250);
  QFont::setPointSize((int)local_250);
  QWidget::setFont((QFont *)param_1[0x1a]);
  QAbstractScrollArea::setHorizontalScrollBarPolicy(param_1[0x1a],1);
  QAbstractItemView::setAlternatingRowColors(SUB81(param_1[0x1a],0));
  QAbstractItemView::setSelectionMode(param_1[0x1a],1);
  QAbstractItemView::setSelectionBehavior(param_1[0x1a],1);
  QTableView::setShowGrid(SUB81(param_1[0x1a],0));
  QTableView::setGridStyle(param_1[0x1a],0);
  QTableView::setWordWrap(SUB81(param_1[0x1a],0));
  bVar4 = (bool)QTableView::horizontalHeader();
  QHeaderView::setHighlightSections(bVar4);
  plVar12 = (long *)QTableView::verticalHeader();
  (**(code **)(*plVar12 + 0x68))(plVar12,0);
  QBoxLayout::addWidget(param_1[0x17],param_1[0x1a],0,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = puVar14;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x700000014;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0x1b] = puVar9;
  (**(code **)(*(long *)param_1[0x17] + 0x70))((long *)param_1[0x17],puVar9);
  this_01 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_01);
  param_1[0x1c] = this_01;
  QBoxLayout::setSpacing((int)this_01);
  pQVar2 = (QString *)param_1[0x1c];
  QString::fromUtf8_helper((char *)&local_258,0x1e01eb2);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_38 = *(int *)local_258 != 0;
      UNLOCK();
      if (local_38) goto LAB_100574e3b;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_100574e3b:
  pQVar13 = operator_new(0x30);
  QToolButton::QToolButton(pQVar13,(QWidget *)param_1[0x16]);
  param_1[0x1d] = pQVar13;
  QString::fromUtf8_helper((char *)&local_260,0x1e01eb5);
  QObject::setObjectName((QString *)pQVar13);
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_38 = *(int *)local_260 != 0;
      UNLOCK();
      if (local_38) goto LAB_100574ebb;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_100574ebb:
  QWidget::setMinimumSize((int)param_1[0x1d],0x17);
  QWidget::setMaximumSize((int)param_1[0x1d],0x17);
  pQVar2 = (QString *)param_1[0x1d];
  local_268 = (QArrayData *)
              QString::fromLatin1_helper
                        ("QToolButton {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_plus.png);\n\tborder: none;\n}\nQToolButton:pressed {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_plus_pressed.png);\n}\n"
                         ,0xbd);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_38 = *(int *)local_268 != 0;
      UNLOCK();
      if (local_38) goto LAB_100574f4b;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_100574f4b:
  QBoxLayout::addWidget(param_1[0x1c],param_1[0x1d],0,0);
  pQVar13 = operator_new(0x30);
  QToolButton::QToolButton(pQVar13,(QWidget *)param_1[0x16]);
  param_1[0x1e] = pQVar13;
  QString::fromUtf8_helper((char *)&local_270,0x1e01f81);
  QObject::setObjectName((QString *)pQVar13);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_38 = *(int *)local_270 != 0;
      UNLOCK();
      if (local_38) goto LAB_100574fe2;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_100574fe2:
  QWidget::setMinimumSize((int)param_1[0x1e],0x17);
  QWidget::setMaximumSize((int)param_1[0x1e],0x17);
  pQVar2 = (QString *)param_1[0x1e];
  local_278 = (QArrayData *)
              QString::fromLatin1_helper
                        ("QToolButton {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_minus.png);\n\tborder: none;\n}\nQToolButton:pressed {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_minus_pressed.png);\n}\nQToolButton:disabled {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_minus_disabled.png);\n}\n"
                         ,0x121);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_38 = *(int *)local_278 != 0;
      UNLOCK();
      if (local_38) goto LAB_100575072;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_100575072:
  QBoxLayout::addWidget(param_1[0x1c],param_1[0x1e],0,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = puVar14;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0x1f] = puVar9;
  (**(code **)(*(long *)param_1[0x1c] + 0x70))((long *)param_1[0x1c],puVar9);
  pQVar13 = operator_new(0x30);
  QToolButton::QToolButton(pQVar13,(QWidget *)param_1[0x16]);
  param_1[0x20] = pQVar13;
  QString::fromUtf8_helper((char *)&local_280,0x1e020b4);
  QObject::setObjectName((QString *)pQVar13);
  if (*(int *)local_280 != -1) {
    if (*(int *)local_280 != 0) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + -1;
      local_38 = *(int *)local_280 != 0;
      UNLOCK();
      if (local_38) goto LAB_10057517c;
    }
    QArrayData::deallocate(local_280,2,8);
  }
LAB_10057517c:
  QWidget::setMinimumSize((int)param_1[0x20],0x17);
  QWidget::setMaximumSize((int)param_1[0x20],0x17);
  pQVar2 = (QString *)param_1[0x20];
  local_288 = (QArrayData *)
              QString::fromLatin1_helper
                        ("QToolButton {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_edit.png);\n\tborder: none;\n}\nQToolButton:pressed {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_edit_pressed.png);\n}\nQToolButton:disabled {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_edit_disabled.png);\n}\n"
                         ,0x11e);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_38 = *(int *)local_288 != 0;
      UNLOCK();
      if (local_38) goto LAB_10057520c;
    }
    QArrayData::deallocate(local_288,2,8);
  }
LAB_10057520c:
  QBoxLayout::addWidget(param_1[0x1c],param_1[0x20],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[0x17],(int)param_1[0x1c]);
  QBoxLayout::setStretch((int)param_1[0x17],2);
  QBoxLayout::addWidget(*param_1,param_1[0x16],0,0);
  QBoxLayout::setStretch((int)*param_1,2);
  QWidget::setTabOrder((QWidget *)param_1[3],(QWidget *)param_1[0x12]);
  QWidget::setTabOrder((QWidget *)param_1[0x12],(QWidget *)param_1[10]);
  QWidget::setTabOrder((QWidget *)param_1[10],(QWidget *)param_1[0xe]);
  QWidget::setTabOrder((QWidget *)param_1[0xe],(QWidget *)param_1[6]);
  QWidget::setTabOrder((QWidget *)param_1[6],(QWidget *)param_1[0x10]);
  QWidget::setTabOrder((QWidget *)param_1[0x10],(QWidget *)param_1[0xc]);
  QWidget::setTabOrder((QWidget *)param_1[0xc],(QWidget *)param_1[0x20]);
  FUN_100576420(param_1,param_2);
  QObject::connect(local_290,param_1[3],"2toggled(bool)",param_1[10],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_290);
  QObject::connect(local_298,param_1[6],"2toggled(bool)",param_1[0xc],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_298);
  QObject::connect(local_2a0,param_1[3],"2toggled(bool)",param_1[2],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_2a0);
  QObject::connect(local_2a8,param_1[3],"2toggled(bool)",param_1[0xe],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_2a8);
  QObject::connect(local_2b0,param_1[6],"2toggled(bool)",param_1[0x10],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_2b0);
  QObject::connect(local_2b8,param_1[3],"2toggled(bool)",param_1[0x12],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_2b8);
  QObject::connect(local_2c0,param_1[0x13],"2toggled(bool)",param_1[0xd],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_2c0);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_250);
  QIcon::~QIcon(local_90);
  return;
}

