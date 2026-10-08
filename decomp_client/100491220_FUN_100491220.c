
void FUN_100491220(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  QVBoxLayout *this;
  QGridLayout *this_00;
  QComboBox *this_01;
  QLabel *pQVar4;
  undefined8 *puVar5;
  CPrlFileDevSelectorWidget *this_02;
  undefined *puVar6;
  QArrayData *local_d8;
  QVariant local_d0;
  QVariant local_c0;
  QVariant local_b0;
  uint local_a0 [2];
  QArrayData *local_98;
  QArrayData *local_90;
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
      if (*(int *)local_40 != 0) goto LAB_100491276;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100491276:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df763d);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004912cd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004912cd:
  local_38 = true;
  uStack_37 = 0x140000001;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df764f);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100491357;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100491357:
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
      if (local_38) goto LAB_1004913c5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004913c5:
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
      if (local_38) goto LAB_100491431;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100491431:
  this_01 = operator_new(0x30);
  QComboBox::QComboBox(this_01,(QWidget *)param_2);
  param_1[2] = this_01;
  QString::fromUtf8_helper((char *)&local_78,0x1df765c);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004914a0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004914a0:
  pcVar2 = (char *)param_1[2];
  QVariant::QVariant(&local_88,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_88);
  QGridLayout::addWidget(param_1[1],param_1[2],1,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[3] = pQVar4;
  QString::fromUtf8_helper((char *)&local_90,0x1df7666);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_100491574;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100491574:
  QLabel::setAlignment(param_1[3],0x82);
  QGridLayout::addWidget(param_1[1],param_1[3],1,0,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar6 = PTR_vtable_1021e17a0 + 0x10;
  *puVar5 = puVar6;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[4] = puVar5;
  QGridLayout::addItem(param_1[1],puVar5,0,2,1,1,0);
  this_02 = operator_new(0x38);
  CPrlFileDevSelectorWidget::CPrlFileDevSelectorWidget(this_02,(QWidget *)param_2);
  param_1[5] = this_02;
  QString::fromUtf8_helper((char *)&local_98,0x1df5827);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004916ac;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004916ac:
  local_a0[0] = 0x70000;
  QSizePolicy::setControlType(local_a0,1);
  local_a0[0] = local_a0[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_a0[0] = local_a0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_b0,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_b0);
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_c0,true);
  QObject::setProperty(pcVar2,(QVariant *)"deviceSourceCombobox");
  QVariant::~QVariant(&local_c0);
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_d0,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_d0);
  QGridLayout::addWidget(param_1[1],param_1[5],0,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[6] = pQVar4;
  QString::fromUtf8_helper((char *)&local_d8,0x1df5833);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049183e;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10049183e:
  QLabel::setAlignment(param_1[6],0x82);
  QGridLayout::addWidget(param_1[1],param_1[6],0,0,1,1,0);
  QGridLayout::setColumnStretch((int)param_1[1],0);
  QGridLayout::setColumnStretch((int)param_1[1],1);
  QGridLayout::setColumnStretch((int)param_1[1],2);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar6;
  *(undefined8 *)((long)puVar5 + 0xc) = 0xd7000000db;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[7] = puVar5;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar5);
  FUN_100491c00(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

