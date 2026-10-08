
void FUN_100538ac0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QString *pQVar3;
  undefined *puVar4;
  uint uVar5;
  QVBoxLayout *pQVar6;
  QHBoxLayout *pQVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  QLabel *pQVar10;
  QRadioButton *pQVar11;
  QCheckBox *this;
  QWidget *pQVar12;
  QTreeWidget *this_00;
  CImageButton *pCVar13;
  QArrayData *local_310;
  QArrayData *local_308;
  undefined8 local_300;
  QArrayData *local_2f8;
  QIcon local_2f0 [8];
  uint local_2e8 [2];
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  uint local_2d0 [2];
  QArrayData *local_2c8;
  uint local_2c0 [2];
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QString local_288;
  QVariant local_280;
  QArrayData *local_270;
  AnonymousUnion0 local_268;
  QVariant local_260;
  QArrayData *local_250;
  QArrayData *local_248;
  QString local_240;
  QVariant local_238;
  QString local_228;
  QVariant local_220;
  QArrayData *local_210;
  AnonymousUnion0 local_208;
  QVariant local_200;
  QVariant local_1f0;
  QArrayData *local_1e0;
  AnonymousUnion0 local_1d8;
  QVariant local_1d0;
  QArrayData *local_1c0;
  QString local_1b8;
  QVariant local_1b0;
  QString local_1a0;
  QVariant local_198;
  QArrayData *local_188;
  AnonymousUnion0 local_180;
  QVariant local_178;
  QVariant local_168;
  QArrayData *local_158;
  AnonymousUnion0 local_150;
  QVariant local_148;
  QArrayData *local_138;
  QString local_130;
  QVariant local_128;
  QString local_118;
  QVariant local_110;
  QArrayData *local_100;
  AnonymousUnion0 local_f8;
  QVariant local_f0;
  QVariant local_e0;
  QArrayData *local_d0;
  AnonymousUnion0 local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  uint local_a8 [2];
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QVariant local_80;
  QVariant local_70;
  undefined8 local_60;
  QArrayData *local_58;
  QIcon local_50 [8];
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
      if (*(int *)local_40 != 0) goto LAB_100538b16;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100538b16:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1dff626);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_100538b6d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100538b6d:
  local_38 = true;
  uStack_37 = 0x16c000001;
  QWidget::resize(param_2);
  QIcon::QIcon(local_50);
  QString::fromUtf8_helper((char *)&local_58,0x1dff63d);
  local_60 = 0xffffffffffffffff;
  QIcon::addFile(local_50,&local_58,&local_60,0,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_100538bf6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100538bf6:
  QIcon::operator_cast_to_QVariant((QIcon *)&local_70);
  QObject::setProperty((char *)param_2,(QVariant *)"icon");
  QVariant::~QVariant(&local_70);
  QVariant::QVariant(&local_80,true);
  QObject::setProperty((char *)param_2,(QVariant *)"hasRestoreDefaults");
  QVariant::~QVariant(&local_80);
  pQVar6 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar6,(QWidget *)param_2);
  *param_1 = pQVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1dd6e19);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_100538cb6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100538cb6:
  QLayout::setContentsMargins((int)*param_1,-1,-1,-1);
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7);
  param_1[1] = pQVar7;
  QString::fromUtf8_helper((char *)&local_90,0x1df027f);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_100538d4b;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100538d4b:
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  puVar9 = PTR_vtable_1021e17a0 + 0x10;
  *puVar8 = puVar9;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1900000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[2] = puVar8;
  (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],puVar8);
  pQVar6 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar6);
  param_1[3] = pQVar6;
  QString::fromUtf8_helper((char *)&local_98,0x1dc1597);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_100538e43;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100538e43:
  QLayout::setContentsMargins((int)param_1[3],0x14,-1,-1);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_2,0);
  param_1[4] = pQVar10;
  QString::fromUtf8_helper((char *)&local_a0,0x1dff654);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100538ede;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100538ede:
  local_a8[0] = 0x550000;
  QSizePolicy::setControlType(local_a8,1);
  local_a8[0] = CONCAT22(local_a8[0]._2_2_,1);
  uVar5 = QWidget::sizePolicy();
  local_a8[0] = local_a8[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[4]);
  QBoxLayout::addWidget(param_1[3],param_1[4],0,0);
  pQVar11 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar11,(QWidget *)param_2);
  param_1[5] = pQVar11;
  QString::fromUtf8_helper((char *)&local_b0,0x1dff66a);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100538fbb;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100538fbb:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar2 = (char *)param_1[5];
  local_c8.field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::fromUtf8_helper((char *)&local_d0,0x1dff675);
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
      if (local_38) goto LAB_100539067;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100539067:
  FUN_100039a80(&local_c8);
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_e0,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_e0);
  pcVar2 = (char *)param_1[5];
  local_f8.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_100,0x1dfeda8);
  FUN_1000341d0(&local_f8,&local_100);
  QVariant::QVariant(&local_f0,(QStringList *)&local_f8.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_f0);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_100539150;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100539150:
  FUN_100039a80(&local_f8);
  pcVar2 = (char *)param_1[5];
  QString::fromUtf8_helper((char *)&local_118,0x1dff69c);
  QVariant::QVariant(&local_110,&local_118);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_110);
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_38 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005391e4;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_1005391e4:
  pcVar2 = (char *)param_1[5];
  QString::fromUtf8_helper((char *)&local_130,0x1dff6b1);
  QVariant::QVariant(&local_128,&local_130);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_128);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_38 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10053926c;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_10053926c:
  QBoxLayout::addWidget(param_1[3],param_1[5],0,0);
  pQVar11 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar11,(QWidget *)param_2);
  param_1[6] = pQVar11;
  QString::fromUtf8_helper((char *)&local_138,0x1dff6c6);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005392f9;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1005392f9:
  pcVar2 = (char *)param_1[6];
  local_150.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_158,0x1dff675);
  FUN_1000341d0(&local_150,&local_158);
  QVariant::QVariant(&local_148,(QStringList *)&local_150.field0);
  QObject::setProperty(pcVar2,(QVariant *)"DispPreferences");
  QVariant::~QVariant(&local_148);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_10053939e;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10053939e:
  FUN_100039a80(&local_150);
  pcVar2 = (char *)param_1[6];
  QVariant::QVariant(&local_168,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_168);
  pcVar2 = (char *)param_1[6];
  local_180.field1 = (Data *)puVar4;
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
      if (local_38) goto LAB_100539487;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100539487:
  FUN_100039a80(&local_180);
  pcVar2 = (char *)param_1[6];
  QString::fromUtf8_helper((char *)&local_1a0,0x1dff69c);
  QVariant::QVariant(&local_198,&local_1a0);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_198);
  if (*(int *)local_1a0.field0_0x0 != -1) {
    if (*(int *)local_1a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
      local_38 = *(int *)local_1a0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10053951b;
    }
    QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
  }
LAB_10053951b:
  pcVar2 = (char *)param_1[6];
  QString::fromUtf8_helper((char *)&local_1b8,0x1dff6b1);
  QVariant::QVariant(&local_1b0,&local_1b8);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_1b0);
  if (*(int *)local_1b8.field0_0x0 != -1) {
    if (*(int *)local_1b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
      local_38 = *(int *)local_1b8.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005395a3;
    }
    QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
  }
LAB_1005395a3:
  QBoxLayout::addWidget(param_1[3],param_1[6],0,0);
  pQVar11 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar11,(QWidget *)param_2);
  param_1[7] = pQVar11;
  QString::fromUtf8_helper((char *)&local_1c0,0x1dff6d2);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_38 = *(int *)local_1c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100539630;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_100539630:
  pcVar2 = (char *)param_1[7];
  local_1d8.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_1e0,0x1dff675);
  FUN_1000341d0(&local_1d8,&local_1e0);
  QVariant::QVariant(&local_1d0,(QStringList *)&local_1d8.field0);
  QObject::setProperty(pcVar2,(QVariant *)"DispPreferences");
  QVariant::~QVariant(&local_1d0);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_38 = *(int *)local_1e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005396d5;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_1005396d5:
  FUN_100039a80(&local_1d8);
  pcVar2 = (char *)param_1[7];
  QVariant::QVariant(&local_1f0,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_1f0);
  pcVar2 = (char *)param_1[7];
  local_208.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_210,0x1dfeda8);
  FUN_1000341d0(&local_208,&local_210);
  QVariant::QVariant(&local_200,(QStringList *)&local_208.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_200);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_38 = *(int *)local_210 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005397be;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_1005397be:
  FUN_100039a80(&local_208);
  pcVar2 = (char *)param_1[7];
  QString::fromUtf8_helper((char *)&local_228,0x1dff69c);
  QVariant::QVariant(&local_220,&local_228);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_220);
  if (*(int *)local_228.field0_0x0 != -1) {
    if (*(int *)local_228.field0_0x0 != 0) {
      LOCK();
      *(int *)local_228.field0_0x0 = *(int *)local_228.field0_0x0 + -1;
      local_38 = *(int *)local_228.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100539852;
    }
    QArrayData::deallocate((QArrayData *)local_228.field0_0x0,2,8);
  }
LAB_100539852:
  pcVar2 = (char *)param_1[7];
  QString::fromUtf8_helper((char *)&local_240,0x1dff6b1);
  QVariant::QVariant(&local_238,&local_240);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_238);
  if (*(int *)local_240.field0_0x0 != -1) {
    if (*(int *)local_240.field0_0x0 != 0) {
      LOCK();
      *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + -1;
      local_38 = *(int *)local_240.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005398da;
    }
    QArrayData::deallocate((QArrayData *)local_240.field0_0x0,2,8);
  }
LAB_1005398da:
  QBoxLayout::addWidget(param_1[3],param_1[7],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar9;
  *(undefined8 *)((long)puVar8 + 0xc) = 0xa00000014;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[8] = puVar8;
  (**(code **)(*(long *)param_1[3] + 0x70))((long *)param_1[3],puVar8);
  this = operator_new(0x30);
  QCheckBox::QCheckBox(this,(QWidget *)param_2);
  param_1[9] = this;
  QString::fromUtf8_helper((char *)&local_248,0x1dff6dc);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_38 = *(int *)local_248 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005399dd;
    }
    QArrayData::deallocate(local_248,2,8);
  }
LAB_1005399dd:
  pQVar3 = (QString *)param_1[9];
  QString::fromUtf8_helper((char *)&local_250,0x1dff6f0);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_38 = *(int *)local_250 != 0;
      UNLOCK();
      if (local_38) goto LAB_100539a3f;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_100539a3f:
  QAbstractButton::setAutoRepeatDelay((int)param_1[9]);
  pcVar2 = (char *)param_1[9];
  local_268.field1 = (Data *)puVar4;
  QString::fromUtf8_helper((char *)&local_270,0x1dff70e);
  FUN_1000341d0(&local_268,&local_270);
  QVariant::QVariant(&local_260,(QStringList *)&local_268.field0);
  QObject::setProperty(pcVar2,(QVariant *)"DispPreferences");
  QVariant::~QVariant(&local_260);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_38 = *(int *)local_270 != 0;
      UNLOCK();
      if (local_38) goto LAB_100539af3;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_100539af3:
  FUN_100039a80(&local_268);
  pcVar2 = (char *)param_1[9];
  QString::fromUtf8_helper((char *)&local_288,0x1dfeda8);
  QVariant::QVariant(&local_280,&local_288);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_280);
  if (*(int *)local_288.field0_0x0 != -1) {
    if (*(int *)local_288.field0_0x0 != 0) {
      LOCK();
      *(int *)local_288.field0_0x0 = *(int *)local_288.field0_0x0 + -1;
      local_38 = *(int *)local_288.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100539b87;
    }
    QArrayData::deallocate((QArrayData *)local_288.field0_0x0,2,8);
  }
LAB_100539b87:
  QBoxLayout::addWidget(param_1[3],param_1[9],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[1],(int)param_1[3]);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar9;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1900000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[10] = puVar8;
  (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],puVar8);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  pQVar12 = operator_new(0x30);
  QWidget::QWidget(pQVar12,param_2,0);
  param_1[0xb] = pQVar12;
  QString::fromUtf8_helper((char *)&local_290,0x1df07cc);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_38 = *(int *)local_290 != 0;
      UNLOCK();
      if (local_38) goto LAB_100539cad;
    }
    QArrayData::deallocate(local_290,2,8);
  }
LAB_100539cad:
  pQVar3 = (QString *)param_1[0xb];
  QString::fromUtf8_helper((char *)&local_298,0x1e41978);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_38 = *(int *)local_298 != 0;
      UNLOCK();
      if (local_38) goto LAB_100539d0c;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_100539d0c:
  pQVar6 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar6,(QWidget *)param_1[0xb]);
  param_1[0xc] = pQVar6;
  QString::fromUtf8_helper((char *)&local_2a0,0x1dc1284);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_2a0 != -1) {
    if (*(int *)local_2a0 != 0) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + -1;
      local_38 = *(int *)local_2a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100539d88;
    }
    QArrayData::deallocate(local_2a0,2,8);
  }
LAB_100539d88:
  QLayout::setContentsMargins((int)param_1[0xc],0x12,0,0x12);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_1[0xb],0);
  param_1[0xd] = pQVar10;
  QString::fromUtf8_helper((char *)&local_2a8,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_2a8 != -1) {
    if (*(int *)local_2a8 != 0) {
      LOCK();
      *(int *)local_2a8 = *(int *)local_2a8 + -1;
      local_38 = *(int *)local_2a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100539e1f;
    }
    QArrayData::deallocate(local_2a8,2,8);
  }
LAB_100539e1f:
  QBoxLayout::addWidget(param_1[0xc],param_1[0xd],0,0);
  pQVar6 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar6);
  param_1[0xe] = pQVar6;
  QBoxLayout::setSpacing((int)pQVar6);
  pQVar3 = (QString *)param_1[0xe];
  QString::fromUtf8_helper((char *)&local_2b0,0x1dfb057);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_2b0 != -1) {
    if (*(int *)local_2b0 != 0) {
      LOCK();
      *(int *)local_2b0 = *(int *)local_2b0 + -1;
      local_38 = *(int *)local_2b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100539eb8;
    }
    QArrayData::deallocate(local_2b0,2,8);
  }
LAB_100539eb8:
  this_00 = operator_new(0x30);
  QTreeWidget::QTreeWidget(this_00,(QWidget *)param_1[0xb]);
  param_1[0xf] = this_00;
  QString::fromUtf8_helper((char *)&local_2b8,0x1dff743);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_38 = *(int *)local_2b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100539f34;
    }
    QArrayData::deallocate(local_2b8,2,8);
  }
LAB_100539f34:
  local_2c0[0] = 0x550000;
  QSizePolicy::setControlType(local_2c0,1);
  local_2c0[0] = local_2c0[0] & 0xffff0000;
  uVar5 = QWidget::sizePolicy();
  local_2c0[0] = local_2c0[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xf]);
  QWidget::setMinimumSize((int)param_1[0xf],0);
  QWidget::setMaximumSize((int)param_1[0xf],0xffffff);
  QWidget::setFocusPolicy(param_1[0xf],1);
  QAbstractItemView::setAlternatingRowColors(SUB81(param_1[0xf],0));
  QTreeView::setRootIsDecorated(SUB81(param_1[0xf],0));
  QBoxLayout::addWidget(param_1[0xe],param_1[0xf],0,0);
  pQVar12 = operator_new(0x30);
  QWidget::QWidget(pQVar12,param_1[0xb],0);
  param_1[0x10] = pQVar12;
  QString::fromUtf8_helper((char *)&local_2c8,0x1dff753);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_2c8 != -1) {
    if (*(int *)local_2c8 != 0) {
      LOCK();
      *(int *)local_2c8 = *(int *)local_2c8 + -1;
      local_38 = *(int *)local_2c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10053a068;
    }
    QArrayData::deallocate(local_2c8,2,8);
  }
LAB_10053a068:
  local_2d0[0] = 0x50000;
  QSizePolicy::setControlType(local_2d0,1);
  local_2d0[0] = local_2d0[0] & 0xffff0000;
  uVar5 = QWidget::sizePolicy();
  local_2d0[0] = local_2d0[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x10]);
  QWidget::setMinimumSize((int)param_1[0x10],0);
  QWidget::setMaximumSize((int)param_1[0x10],0xffffff);
  QBoxLayout::addWidget(param_1[0xe],param_1[0x10],0,0);
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7);
  param_1[0x11] = pQVar7;
  QBoxLayout::setSpacing((int)pQVar7);
  pQVar3 = (QString *)param_1[0x11];
  QString::fromUtf8_helper((char *)&local_2d8,0x1df401b);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_38 = *(int *)local_2d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10053a18f;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_10053a18f:
  pCVar13 = operator_new(0x60);
  CImageButton::CImageButton(pCVar13,(QWidget *)param_1[0xb]);
  param_1[0x12] = pCVar13;
  QString::fromUtf8_helper((char *)&local_2e0,0x1dff765);
  QObject::setObjectName((QString *)pCVar13);
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_38 = *(int *)local_2e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10053a20e;
    }
    QArrayData::deallocate(local_2e0,2,8);
  }
LAB_10053a20e:
  local_2e8[0] = 0;
  QSizePolicy::setControlType(local_2e8,1);
  local_2e8[0] = local_2e8[0] & 0xffff0000;
  uVar5 = QWidget::sizePolicy();
  local_2e8[0] = local_2e8[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x12]);
  QWidget::setMinimumSize((int)param_1[0x12],0x19);
  QWidget::setMaximumSize((int)param_1[0x12],0x19);
  QIcon::QIcon(local_2f0);
  QString::fromUtf8_helper((char *)&local_2f8,0x1dfb062);
  local_300 = 0xffffffffffffffff;
  QIcon::addFile(local_2f0,&local_2f8,&local_300,0,1);
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_38 = *(int *)local_2f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10053a31a;
    }
    QArrayData::deallocate(local_2f8,2,8);
  }
LAB_10053a31a:
  QAbstractButton::setIcon((QIcon *)param_1[0x12]);
  QBoxLayout::addWidget(param_1[0x11],param_1[0x12],0,0);
  pCVar13 = operator_new(0x60);
  CImageButton::CImageButton(pCVar13,(QWidget *)param_1[0xb]);
  param_1[0x13] = pCVar13;
  QString::fromUtf8_helper((char *)&local_308,0x1dff773);
  QObject::setObjectName((QString *)pCVar13);
  if (*(int *)local_308 != -1) {
    if (*(int *)local_308 != 0) {
      LOCK();
      *(int *)local_308 = *(int *)local_308 + -1;
      local_38 = *(int *)local_308 != 0;
      UNLOCK();
      if (local_38) goto LAB_10053a3c6;
    }
    QArrayData::deallocate(local_308,2,8);
  }
LAB_10053a3c6:
  uVar5 = QWidget::sizePolicy();
  local_2e8[0] = local_2e8[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x13]);
  QWidget::setMinimumSize((int)param_1[0x13],0x19);
  QWidget::setMaximumSize((int)param_1[0x13],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0x13]);
  QBoxLayout::addWidget(param_1[0x11],param_1[0x13],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar9;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x500000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x14] = puVar8;
  (**(code **)(*(long *)param_1[0x11] + 0x70))((long *)param_1[0x11],puVar8);
  pCVar13 = operator_new(0x60);
  CImageButton::CImageButton(pCVar13,(QWidget *)param_1[0xb]);
  param_1[0x15] = pCVar13;
  QString::fromUtf8_helper((char *)&local_310,0x1dff784);
  QObject::setObjectName((QString *)pCVar13);
  if (*(int *)local_310 != -1) {
    if (*(int *)local_310 != 0) {
      LOCK();
      *(int *)local_310 = *(int *)local_310 + -1;
      local_38 = *(int *)local_310 != 0;
      UNLOCK();
      if (local_38) goto LAB_10053a54e;
    }
    QArrayData::deallocate(local_310,2,8);
  }
LAB_10053a54e:
  uVar5 = QWidget::sizePolicy();
  local_2e8[0] = local_2e8[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x15]);
  QWidget::setMinimumSize((int)param_1[0x15],0x19);
  QWidget::setMaximumSize((int)param_1[0x15],0x19);
  QBoxLayout::addWidget(param_1[0x11],param_1[0x15],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[0xe],(int)param_1[0x11]);
  QBoxLayout::addLayout((QLayout *)param_1[0xc],(int)param_1[0xe]);
  QBoxLayout::addWidget(*param_1,param_1[0xb],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar9;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x16] = puVar8;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar8);
  FUN_10053b410(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QIcon::~QIcon(local_2f0);
  QIcon::~QIcon(local_50);
  return;
}

