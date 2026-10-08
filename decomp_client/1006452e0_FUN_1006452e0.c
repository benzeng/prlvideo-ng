
void FUN_1006452e0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  QVBoxLayout *pQVar4;
  QHBoxLayout *pQVar5;
  undefined8 *puVar6;
  QLabel *pQVar7;
  QWidget *pQVar8;
  QGridLayout *this;
  QString *pQVar9;
  undefined *puVar10;
  uint local_f8 [2];
  QArrayData *local_f0;
  QArrayData *local_e8;
  uint local_e0 [2];
  QArrayData *local_d8;
  QArrayData *local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
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
      if (*(int *)local_40 != 0) goto LAB_100645336;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100645336:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e0a1cb);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10064538d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10064538d:
  local_38 = true;
  uStack_37 = 0x1a0000003;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1e0a1db);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100645417;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100645417:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar9 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_68,0x1df3f10);
  QObject::setObjectName(pQVar9);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_100645495;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100645495:
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5);
  param_1[1] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar9 = (QString *)param_1[1];
  QString::fromUtf8_helper((char *)&local_70,0x1e0a1f0);
  QObject::setObjectName(pQVar9);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100645516;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100645516:
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar10 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x10000005a;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[2] = puVar6;
  (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],puVar6);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[3] = pQVar7;
  QString::fromUtf8_helper((char *)&local_78,0x1e0a204);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006455fd;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006455fd:
  local_80[0] = 0x750000;
  QSizePolicy::setControlType(local_80,1);
  local_80[0] = local_80[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_80[0] = local_80[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QWidget::setMinimumSize((int)param_1[3],0);
  QLabel::setAlignment(param_1[3],0x24);
  QLabel::setWordWrap(SUB81(param_1[3],0));
  QLabel::setOpenExternalLinks(SUB81(param_1[3],0));
  QBoxLayout::addWidget(param_1[1],param_1[3],0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x10000005a;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[4] = puVar6;
  (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],puVar6);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_2,0);
  param_1[5] = pQVar8;
  QString::fromUtf8_helper((char *)&local_88,0x1e0a214);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064576b;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10064576b:
  uVar3 = QWidget::sizePolicy();
  local_80[0] = local_80[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_1[5]);
  param_1[6] = this;
  QLayout::setContentsMargins((int)this,0,0,0);
  pQVar9 = (QString *)param_1[6];
  QString::fromUtf8_helper((char *)&local_90,0x1dd67e5);
  QObject::setObjectName(pQVar9);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_100645820;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100645820:
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x10000003c;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[7] = puVar6;
  QGridLayout::addItem(param_1[6],puVar6,0,0,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x10000003c;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[8] = puVar6;
  QGridLayout::addItem(param_1[6],puVar6,0,2,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[5],0);
  param_1[9] = pQVar7;
  QString::fromUtf8_helper((char *)&local_98,0x1e0a228);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_100645991;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100645991:
  QLabel::setAlignment(param_1[9],0x84);
  QGridLayout::addWidget(param_1[6],param_1[9],0,1,1,1,0);
  QBoxLayout::addWidget(*param_1,param_1[5],0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_2,0);
  param_1[10] = pQVar8;
  QString::fromUtf8_helper((char *)&local_a0,0x1e0a238);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100645a50;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100645a50:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_1[10]);
  param_1[0xb] = pQVar4;
  QLayout::setContentsMargins((int)pQVar4,0,0,0);
  pQVar9 = (QString *)param_1[0xb];
  QString::fromUtf8_helper((char *)&local_a8,0x1dd6e2a);
  QObject::setObjectName(pQVar9);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100645ade;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100645ade:
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[10],0);
  param_1[0xc] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b0,0x1e0a250);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100645b59;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100645b59:
  pQVar9 = (QString *)param_1[0xc];
  QString::fromUtf8_helper((char *)&local_b8,0x1e0a263);
  QWidget::setStyleSheet(pQVar9);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100645bb9;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100645bb9:
  QLabel::setAlignment(param_1[0xc],0x84);
  pcVar2 = (char *)param_1[0xc];
  QVariant::QVariant(&local_c8,true);
  QObject::setProperty(pcVar2,(QVariant *)"captionColor");
  QVariant::~QVariant(&local_c8);
  QBoxLayout::addWidget(param_1[0xb],param_1[0xc],0,0);
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5);
  param_1[0xd] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar9 = (QString *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_d0,0x1e0a2ac);
  QObject::setObjectName(pQVar9);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100645c91;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100645c91:
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar6;
  (**(code **)(*(long *)param_1[0xd] + 0x70))((long *)param_1[0xd],puVar6);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[10],0);
  param_1[0xf] = pQVar7;
  QString::fromUtf8_helper((char *)&local_d8,0x1e0a2c1);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100645d6d;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100645d6d:
  local_e0[0] = 0;
  QSizePolicy::setControlType(local_e0,1);
  local_e0[0] = CONCAT22(local_e0[0]._2_2_,0x101);
  uVar3 = QWidget::sizePolicy();
  local_e0[0] = local_e0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xf]);
  QWidget::setMinimumSize((int)param_1[0xf],0x105);
  QWidget::setMaximumSize((int)param_1[0xf],0x105);
  pQVar9 = (QString *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_e8,0x1e0a2d0);
  QWidget::setStyleSheet(pQVar9);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100645e41;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100645e41:
  QLabel::setAlignment(param_1[0xf],0x84);
  QBoxLayout::addWidget(param_1[0xd],param_1[0xf],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x10] = puVar6;
  (**(code **)(*(long *)param_1[0xd] + 0x70))((long *)param_1[0xd],puVar6);
  QBoxLayout::addLayout((QLayout *)param_1[0xb],(int)param_1[0xd]);
  QBoxLayout::addWidget(*param_1,param_1[10],0,0);
  pQVar9 = operator_new(0x38);
  FUN_10061df40(pQVar9,param_2);
  param_1[0x11] = pQVar9;
  QString::fromUtf8_helper((char *)&local_f0,0x1e0a318);
  QObject::setObjectName(pQVar9);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100645f5e;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100645f5e:
  local_f8[0] = 0x770000;
  QSizePolicy::setControlType(local_f8,1);
  local_f8[0] = local_f8[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_f8[0] = local_f8[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x11]);
  QBoxLayout::addWidget(*param_1,param_1[0x11],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x12] = puVar6;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar6);
  QBoxLayout::setStretch((int)*param_1,4);
  FUN_1006465c0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

