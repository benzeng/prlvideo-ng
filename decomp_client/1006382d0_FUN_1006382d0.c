
void FUN_1006382d0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QPixmap *pQVar2;
  QGridLayout *this;
  QLabel *pQVar3;
  undefined8 *puVar4;
  QHBoxLayout *this_00;
  QPushButton *pQVar5;
  undefined *puVar6;
  Connection local_b8 [8];
  Connection local_b0 [8];
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QPixmap local_78 [32];
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
      if (*(int *)local_40 != 0) goto LAB_100638326;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100638326:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e09808);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10063837d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10063837d:
  local_38 = true;
  uStack_37 = 0xa2000001;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_50,0x1dd67e5);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_100638405;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100638405:
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1e09825);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_100638476;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100638476:
  QWidget::setMinimumSize((int)param_1[1],0x60);
  QWidget::setMaximumSize((int)param_1[1],0x60);
  pQVar2 = (QPixmap *)param_1[1];
  QString::fromUtf8_helper((char *)&local_80,0x1e09834);
  QPixmap::QPixmap(local_78,&local_80,0,0);
  QLabel::setPixmap(pQVar2);
  QPixmap::~QPixmap(local_78);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063850d;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10063850d:
  QLabel::setAlignment(param_1[1],0x84);
  QGridLayout::addWidget(*param_1,param_1[1],0,0,4,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[2] = pQVar3;
  QString::fromUtf8_helper((char *)&local_88,0x1e0984d);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006385af;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1006385af:
  QGridLayout::addWidget(*param_1,param_1[2],1,1,1,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[3] = pQVar3;
  QString::fromUtf8_helper((char *)&local_90,0x1dfa560);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_100638652;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100638652:
  QLabel::setWordWrap(SUB81(param_1[3],0));
  QGridLayout::addWidget(*param_1,param_1[3],2,1,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar6 = PTR_vtable_1021e17a0 + 0x10;
  *puVar4 = puVar6;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1400000155;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[4] = puVar4;
  QGridLayout::addItem(*param_1,puVar4,3,1,1,1,0);
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00);
  param_1[5] = this_00;
  QString::fromUtf8_helper((char *)&local_98,0x1dc12b3);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063878b;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10063878b:
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar6;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[6] = puVar4;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar4);
  pQVar5 = operator_new(0x30);
  QPushButton::QPushButton(pQVar5,(QWidget *)param_2);
  param_1[7] = pQVar5;
  QString::fromUtf8_helper((char *)&local_a0,0x1e0985b);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063886a;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10063886a:
  QBoxLayout::addWidget(param_1[5],param_1[7],0,0);
  pQVar5 = operator_new(0x30);
  QPushButton::QPushButton(pQVar5,(QWidget *)param_2);
  param_1[8] = pQVar5;
  QString::fromUtf8_helper((char *)&local_a8,0x1e0986c);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006388f3;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1006388f3:
  QBoxLayout::addWidget(param_1[5],param_1[8],0,0);
  QGridLayout::addLayout(*param_1,param_1[5],4,0,1,2,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar6;
  *(undefined8 *)((long)puVar4 + 0xc) = 100;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[9] = puVar4;
  QGridLayout::addItem(*param_1,puVar4,0,1,1,1,0);
  FUN_100638d00(param_1,param_2);
  QObject::connect(local_b0,param_1[7],"2clicked()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_b0);
  QObject::connect(local_b8,param_1[8],"2clicked()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_b8);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

