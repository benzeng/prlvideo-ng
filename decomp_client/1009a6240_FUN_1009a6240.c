
void FUN_1009a6240(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QVBoxLayout *pQVar3;
  undefined8 *puVar4;
  QLabel *pQVar5;
  QCheckBox *this;
  undefined *puVar6;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
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
      if (*(int *)local_40 != 0) goto LAB_1009a6293;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009a6293:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e33b1e);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1009a62ea;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1009a62ea:
  local_38 = true;
  uStack_37 = 0x1ea000002;
  QWidget::resize(param_2);
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3,(QWidget *)param_2);
  *param_1 = pQVar3;
  QBoxLayout::setSpacing((int)pQVar3);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a637f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009a637f:
  QLayout::setContentsMargins((int)*param_1,0x5b,-1,0x5b);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar6 = PTR_vtable_1021e17a0 + 0x10;
  *puVar4 = puVar6;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x4900000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[1] = puVar4;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar4);
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3);
  param_1[2] = pQVar3;
  QBoxLayout::setSpacing((int)pQVar3);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_58,0x1dd6e2a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a6487;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009a6487:
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_60,0x1e33b2f);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a64f8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009a64f8:
  QLabel::setWordWrap(SUB81(param_1[3],0));
  QBoxLayout::addWidget(param_1[2],param_1[3],0,0);
  this = operator_new(0x30);
  QCheckBox::QCheckBox(this,(QWidget *)param_2);
  param_1[4] = this;
  QString::fromUtf8_helper((char *)&local_68,0x1e33b42);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a6586;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1009a6586:
  QBoxLayout::addWidget(param_1[2],param_1[4],0,4);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[2]);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar6;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[5] = puVar4;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar4);
  FUN_1009a67b0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

