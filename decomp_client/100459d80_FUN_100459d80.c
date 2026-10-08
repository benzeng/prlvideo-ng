
void FUN_100459d80(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  QVBoxLayout *this;
  QGridLayout *this_00;
  CPrlFileDevSelectorWidget *this_01;
  undefined8 *puVar4;
  QLabel *pQVar5;
  undefined *puVar6;
  QArrayData *local_b8;
  QVariant local_b0;
  QVariant local_a0;
  QVariant local_90;
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
      if (*(int *)local_40 != 0) goto LAB_100459dd6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100459dd6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df5808);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_100459e2d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100459e2d:
  local_38 = true;
  uStack_37 = 0x140000001;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df581a);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100459eb7;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100459eb7:
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
      if (local_38) goto LAB_100459f25;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100459f25:
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
      if (local_38) goto LAB_100459f91;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100459f91:
  this_01 = operator_new(0x38);
  CPrlFileDevSelectorWidget::CPrlFileDevSelectorWidget(this_01,(QWidget *)param_2);
  param_1[2] = this_01;
  QString::fromUtf8_helper((char *)&local_78,0x1df5827);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045a000;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10045a000:
  local_80[0] = 0x70000;
  QSizePolicy::setControlType(local_80,1);
  local_80[0] = local_80[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_80[0] = local_80[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[2]);
  pcVar2 = (char *)param_1[2];
  QVariant::QVariant(&local_90,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_90);
  pcVar2 = (char *)param_1[2];
  QVariant::QVariant(&local_a0,true);
  QObject::setProperty(pcVar2,(QVariant *)"deviceSourceCombobox");
  QVariant::~QVariant(&local_a0);
  pcVar2 = (char *)param_1[2];
  QVariant::QVariant(&local_b0,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_b0);
  QGridLayout::addWidget(param_1[1],param_1[2],0,1,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar6 = PTR_vtable_1021e17a0 + 0x10;
  *puVar4 = puVar6;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x110000000c;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[3] = puVar4;
  QGridLayout::addItem(param_1[1],puVar4,0,2,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_b8,0x1df5833);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045a20e;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10045a20e:
  QLabel::setAlignment(param_1[4],0x82);
  QGridLayout::addWidget(param_1[1],param_1[4],0,0,1,1,0);
  QGridLayout::setColumnStretch((int)param_1[1],0);
  QGridLayout::setColumnStretch((int)param_1[1],1);
  QGridLayout::setColumnStretch((int)param_1[1],2);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar6;
  *(undefined8 *)((long)puVar4 + 0xc) = 0xd70000000a;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[5] = puVar4;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar4);
  FUN_10045a520(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

