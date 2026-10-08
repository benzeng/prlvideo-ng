
void FUN_10019dfc0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QVBoxLayout *pQVar3;
  QStackedWidget *this;
  QWidget *pQVar4;
  QLabel *pQVar5;
  undefined8 *puVar6;
  QHBoxLayout *this_00;
  QPushButton *pQVar7;
  undefined *puVar8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
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
      if (*(int *)local_40 != 0) goto LAB_10019e016;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10019e016:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1dd6515);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10019e06d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10019e06d:
  local_38 = true;
  uStack_37 = 0x162000001;
  QWidget::resize(param_2);
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3,(QWidget *)param_2);
  *param_1 = pQVar3;
  QBoxLayout::setSpacing((int)pQVar3);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1284);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e105;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10019e105:
  QLayout::setContentsMargins((int)*param_1,9,9,9);
  this = operator_new(0x30);
  QStackedWidget::QStackedWidget(this,(QWidget *)param_2);
  param_1[1] = this;
  QString::fromUtf8_helper((char *)&local_58,0x1dd652b);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e191;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10019e191:
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,0,0);
  param_1[2] = pQVar4;
  QString::fromUtf8_helper((char *)&local_60,0x1dd6539);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e201;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10019e201:
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3,(QWidget *)param_1[2]);
  param_1[3] = pQVar3;
  QBoxLayout::setSpacing((int)pQVar3);
  pQVar2 = (QString *)param_1[3];
  QString::fromUtf8_helper((char *)&local_68,0x1dd6546);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e282;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10019e282:
  QLayout::setContentsMargins((int)param_1[3],9,9,9);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[2],0);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_70,0x1dd6552);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e312;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10019e312:
  QWidget::setMaximumSize((int)param_1[4],0x1bf);
  QLabel::setAlignment(param_1[4],0x21);
  QLabel::setWordWrap(SUB81(param_1[4],0));
  QBoxLayout::addWidget(param_1[3],param_1[4],0,0);
  QStackedWidget::addWidget((QWidget *)param_1[1]);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,0,0);
  param_1[5] = pQVar4;
  QString::fromUtf8_helper((char *)&local_78,0x1dd6560);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e3cf;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10019e3cf:
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3,(QWidget *)param_1[5]);
  param_1[6] = pQVar3;
  QBoxLayout::setSpacing((int)pQVar3);
  pQVar2 = (QString *)param_1[6];
  QString::fromUtf8_helper((char *)&local_80,0x1dd656e);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e450;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10019e450:
  QLayout::setContentsMargins((int)param_1[6],9,9,9);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[5],0);
  param_1[7] = pQVar5;
  QString::fromUtf8_helper((char *)&local_88,0x1dd657a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e4e0;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10019e4e0:
  QWidget::setMaximumSize((int)param_1[7],0x1bf);
  QLabel::setAlignment(param_1[7],0x21);
  QLabel::setWordWrap(SUB81(param_1[7],0));
  QBoxLayout::addWidget(param_1[6],param_1[7],0,0);
  QStackedWidget::addWidget((QWidget *)param_1[1]);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,0,0);
  param_1[8] = pQVar4;
  QString::fromUtf8_helper((char *)&local_90,0x1dd6589);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e5a6;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10019e5a6:
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3,(QWidget *)param_1[8]);
  param_1[9] = pQVar3;
  QBoxLayout::setSpacing((int)pQVar3);
  pQVar2 = (QString *)param_1[9];
  QString::fromUtf8_helper((char *)&local_98,0x1dd6596);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e637;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10019e637:
  QLayout::setContentsMargins((int)param_1[9],9,9,9);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar8 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar8;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[10] = puVar6;
  (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],puVar6);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[8],0);
  param_1[0xb] = pQVar5;
  QString::fromUtf8_helper((char *)&local_a0,0x1dd65a2);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e742;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10019e742:
  QLabel::setAlignment(param_1[0xb],0x84);
  QLabel::setWordWrap(SUB81(param_1[0xb],0));
  QBoxLayout::addWidget(param_1[9],param_1[0xb],0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar8;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar6;
  (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],puVar6);
  QStackedWidget::addWidget((QWidget *)param_1[1]);
  QBoxLayout::addWidget(*param_1,param_1[1],0);
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00);
  param_1[0xd] = this_00;
  QBoxLayout::setSpacing((int)this_00);
  pQVar2 = (QString *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_a8,0x1dc12b3);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e86f;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10019e86f:
  QLayout::setContentsMargins((int)param_1[0xd],0,0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar8;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x20000000ce;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar6;
  (**(code **)(*(long *)param_1[0xd] + 0x70))((long *)param_1[0xd],puVar6);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_2);
  param_1[0xf] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b0,0x1dc12ca);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e967;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10019e967:
  QBoxLayout::addWidget(param_1[0xd],param_1[0xf],0,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_2);
  param_1[0x10] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b8,0x1dd65b0);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10019e9f3;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10019e9f3:
  QBoxLayout::addWidget(param_1[0xd],param_1[0x10],0,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[0xd]);
  FUN_10019eef0(param_1,param_2);
  QStackedWidget::setCurrentIndex((int)param_1[1]);
  QPushButton::setDefault(SUB81(param_1[0x10],0));
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

