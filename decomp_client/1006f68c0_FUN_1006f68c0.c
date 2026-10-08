
void FUN_1006f68c0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QVBoxLayout *pQVar3;
  QFrame *pQVar4;
  QGridLayout *this;
  QLabel *pQVar5;
  undefined8 *puVar6;
  QPushButton *this_00;
  undefined *puVar7;
  QFont local_b0 [16];
  QArrayData *local_a0;
  QFont local_98 [16];
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
      if (*(int *)local_40 != 0) goto LAB_1006f6916;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006f6916:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e12fb1);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1006f696d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1006f696d:
  local_38 = true;
  uStack_37 = 0x183000001;
  QWidget::resize(param_2);
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3,(QWidget *)param_2);
  *param_1 = pQVar3;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1597);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006f69f5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006f69f5:
  QLayout::setContentsMargins((int)*param_1,0,0,0);
  pQVar4 = operator_new(0x30);
  QFrame::QFrame(pQVar4,param_2,0);
  param_1[1] = pQVar4;
  QString::fromUtf8_helper((char *)&local_58,0x1df05f6);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006f6a77;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006f6a77:
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3,(QWidget *)param_1[1]);
  param_1[2] = pQVar3;
  QBoxLayout::setSpacing((int)pQVar3);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_60,0x1df07b1);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006f6af5;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006f6af5:
  QLayout::setContentsMargins((int)param_1[2],0,0,0);
  pQVar4 = operator_new(0x30);
  QFrame::QFrame(pQVar4,param_1[1],0);
  param_1[3] = pQVar4;
  QString::fromUtf8_helper((char *)&local_68,0x1df07c2);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006f6b79;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006f6b79:
  QFrame::setFrameShape(param_1[3],0);
  QFrame::setFrameShadow(param_1[3],0x10);
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_1[3]);
  param_1[4] = this;
  QString::fromUtf8_helper((char *)&local_70,0x1dd67e5);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006f6c02;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006f6c02:
  QLayout::setContentsMargins((int)param_1[4],-1,-1,-1);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[3],0);
  param_1[5] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1e12fcc);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006f6c99;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006f6c99:
  QWidget::setMinimumSize((int)param_1[5],0x100);
  QWidget::setMaximumSize((int)param_1[5],0x100);
  QLabel::setAlignment(param_1[5],0x84);
  QGridLayout::addWidget(param_1[4],param_1[5],0,1,1,3,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar7 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar7;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[6] = puVar6;
  QGridLayout::addItem(param_1[4],puVar6,3,0,1,2,0);
  this_00 = operator_new(0x30);
  QPushButton::QPushButton(this_00,(QWidget *)param_1[3]);
  param_1[7] = this_00;
  QString::fromUtf8_helper((char *)&local_80,0x1e12fd9);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006f6def;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006f6def:
  QGridLayout::addWidget(param_1[4],param_1[7],3,2,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar7;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[8] = puVar6;
  QGridLayout::addItem(param_1[4],puVar6,0,0,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar7;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[9] = puVar6;
  QGridLayout::addItem(param_1[4],puVar6,0,4,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[3],0);
  param_1[10] = pQVar5;
  QString::fromUtf8_helper((char *)&local_88,0x1e12fe5);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006f6f77;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1006f6f77:
  QFont::QFont(local_98);
  QFont::setPointSize((int)local_98);
  QWidget::setFont((QFont *)param_1[10]);
  QLabel::setAlignment(param_1[10],0x84);
  QGridLayout::addWidget(param_1[4],param_1[10],1,0,1,5,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[3],0);
  param_1[0xb] = pQVar5;
  QString::fromUtf8_helper((char *)&local_a0,0x1e12ffa);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006f705b;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1006f705b:
  QFont::QFont(local_b0);
  QFont::setPointSize((int)local_b0);
  QWidget::setFont((QFont *)param_1[0xb]);
  QLabel::setAlignment(param_1[0xb],0x84);
  QLabel::setOpenExternalLinks(SUB81(param_1[0xb],0));
  QGridLayout::addWidget(param_1[4],param_1[0xb],2,0,1,5,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar7;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar6;
  QGridLayout::addItem(param_1[4],puVar6,3,3,1,2,0);
  QBoxLayout::addWidget(param_1[2],param_1[3],0,0);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  FUN_1006f7510(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_b0);
  QFont::~QFont(local_98);
  return;
}

