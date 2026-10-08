
void FUN_1004c8fb0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QGridLayout *this;
  QFormLayout *this_00;
  QLabel *pQVar3;
  QLineEdit *this_01;
  QPushButton *this_02;
  undefined8 *puVar4;
  QVariant local_a0;
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  QArrayData *local_38;
  bool local_30;
  undefined7 uStack_2f;
  
  QObject::objectName();
  iVar1 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      _local_30 = CONCAT71(uStack_2f,*(int *)local_38 != 0);
      if (*(int *)local_38 != 0) goto LAB_1004c9004;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004c9004:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1df9df8);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_1004c905b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1004c905b:
  local_30 = true;
  uStack_2f = 0x60000001;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_58,0x1df9e16);
  QVariant::QVariant(&local_50,&local_58);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_30 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004c90e5;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1004c90e5:
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_60,0x1dd6d5e);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004c9153;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004c9153:
  QGridLayout::setVerticalSpacing((int)*param_1);
  QLayout::setContentsMargins((int)*param_1,9,-1,9);
  this_00 = operator_new(0x20);
  QFormLayout::QFormLayout(this_00,(QWidget *)0x0);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_68,0x1df9e27);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004c91e5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004c91e5:
  QFormLayout::setFieldGrowthPolicy(param_1[1],0);
  QFormLayout::setLabelAlignment(param_1[1],0x82);
  QFormLayout::setFormAlignment(param_1[1],0x24);
  QFormLayout::setVerticalSpacing((int)param_1[1]);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[2] = pQVar3;
  QString::fromUtf8_helper((char *)&local_70,0x1df9e38);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004c928b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004c928b:
  QFormLayout::setWidget(param_1[1],0,0,param_1[2]);
  this_01 = operator_new(0x30);
  QLineEdit::QLineEdit(this_01,(QWidget *)param_2);
  param_1[3] = this_01;
  QString::fromUtf8_helper((char *)&local_78,0x1df9e45);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_30 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004c930b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004c930b:
  QWidget::setMinimumSize((int)param_1[3],200);
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_88,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_88);
  QFormLayout::setWidget(param_1[1],0,1,param_1[3]);
  QGridLayout::addLayout(*param_1,param_1[1],0,0,1,2,0);
  this_02 = operator_new(0x30);
  QPushButton::QPushButton(this_02,(QWidget *)param_2);
  param_1[4] = this_02;
  QString::fromUtf8_helper((char *)&local_90,0x1df7292);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_30 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004c93fa;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1004c93fa:
  pcVar2 = (char *)param_1[4];
  QVariant::QVariant(&local_a0,true);
  QObject::setProperty(pcVar2,(QVariant *)"customUpdate");
  QVariant::~QVariant(&local_a0);
  QGridLayout::addWidget(*param_1,param_1[4],1,1,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = PTR_vtable_1021e17a0 + 0x10;
  *(undefined8 *)((long)puVar4 + 0xc) = 0;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[5] = puVar4;
  QGridLayout::addItem(*param_1,puVar4,1,0,1,1,0);
  FUN_1004c9730(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

