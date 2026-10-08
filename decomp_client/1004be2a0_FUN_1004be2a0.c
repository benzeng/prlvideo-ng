
void FUN_1004be2a0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  QGridLayout *pQVar4;
  undefined8 *puVar5;
  QVBoxLayout *this;
  QLabel *pQVar6;
  QHBoxLayout *this_00;
  QPushButton *this_01;
  QCheckBox *pQVar7;
  undefined *puVar8;
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
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
      if (*(int *)local_40 != 0) goto LAB_1004be2f6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004be2f6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df976e);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004be34d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004be34d:
  local_38 = true;
  uStack_37 = 0x148000001;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df9779);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004be3d7;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004be3d7:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_68,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004be445;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004be445:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4);
  param_1[1] = pQVar4;
  QString::fromUtf8_helper((char *)&local_70,0x1dc1bb6);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004be4b1;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004be4b1:
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar8 = PTR_vtable_1021e17a0 + 0x10;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x4600000014;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[2] = puVar5;
  QGridLayout::addItem(param_1[1],puVar5,1,0,1,3,0);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this);
  param_1[3] = this;
  QBoxLayout::setSpacing((int)this);
  pQVar2 = (QString *)param_1[3];
  QString::fromUtf8_helper((char *)&local_78,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004be5b6;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004be5b6:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_80,0x1df9785);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004be627;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004be627:
  pQVar2 = (QString *)param_1[4];
  QString::fromUtf8_helper((char *)&local_88,0x1df7999);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004be67e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004be67e:
  QLabel::setAlignment(param_1[4],0x84);
  QBoxLayout::addWidget(param_1[3],param_1[4],0,0);
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00);
  param_1[5] = this_00;
  QString::fromUtf8_helper((char *)&local_90,0x1df025a);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004be712;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1004be712:
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000012;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[6] = puVar5;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar5);
  this_01 = operator_new(0x30);
  QPushButton::QPushButton(this_01,(QWidget *)param_2);
  param_1[7] = this_01;
  QString::fromUtf8_helper((char *)&local_98,0x1df979d);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004be7f1;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004be7f1:
  QBoxLayout::addWidget(param_1[5],param_1[7],0,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[8] = puVar5;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar5);
  QBoxLayout::addLayout((QLayout *)param_1[3],(int)param_1[5]);
  QGridLayout::addLayout(param_1[1],param_1[3],2,0,1,3,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x8200000011;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[9] = puVar5;
  QGridLayout::addItem(param_1[1],puVar5,3,0,1,2,0);
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4);
  param_1[10] = pQVar4;
  QString::fromUtf8_helper((char *)&local_a0,0x1dd6d5e);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004be994;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004be994:
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_2);
  param_1[0xb] = pQVar7;
  QString::fromUtf8_helper((char *)&local_a8,0x1df97b1);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004bea0c;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1004bea0c:
  pcVar3 = (char *)param_1[0xb];
  QVariant::QVariant(&local_b8,true);
  QObject::setProperty(pcVar3,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_b8);
  QGridLayout::addWidget(param_1[10],param_1[0xb],2,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_2);
  param_1[0xc] = pQVar7;
  QString::fromUtf8_helper((char *)&local_c0,0x1df97c6);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004beae4;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004beae4:
  QGridLayout::addWidget(param_1[10],param_1[0xc],0,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_2);
  param_1[0xd] = pQVar7;
  QString::fromUtf8_helper((char *)&local_c8,0x1df97d7);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004beb83;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1004beb83:
  pcVar3 = (char *)param_1[0xd];
  QVariant::QVariant(&local_d8,true);
  QObject::setProperty(pcVar3,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_d8);
  QGridLayout::addWidget(param_1[10],param_1[0xd],1,1,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar5;
  QGridLayout::addItem(param_1[10],puVar5,0,0,3,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xf] = puVar5;
  QGridLayout::addItem(param_1[10],puVar5,1,2,1,1,0);
  QGridLayout::addLayout(param_1[1],param_1[10],0,0,1,3,0);
  QGridLayout::setColumnStretch((int)param_1[1],0);
  QGridLayout::addLayout(*param_1,param_1[1],0,0,1,1,0);
  FUN_1004bf1c0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

