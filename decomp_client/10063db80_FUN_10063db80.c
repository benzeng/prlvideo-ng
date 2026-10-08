
void FUN_10063db80(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QGridLayout *pQVar3;
  QRadioButton *pQVar4;
  QPushButton *pQVar5;
  QWidget *pQVar6;
  undefined8 *puVar7;
  QListView *this;
  QLabel *pQVar8;
  undefined *puVar9;
  Connection local_d0 [8];
  Connection local_c8 [8];
  Connection local_c0 [8];
  QFont local_b8 [16];
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
      if (*(int *)local_40 != 0) goto LAB_10063dbd6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10063dbd6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e09a91);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10063dc2d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10063dc2d:
  local_38 = true;
  uStack_37 = 0x12e000002;
  QWidget::resize(param_2);
  QWidget::setMinimumSize((int)param_2,0x21c);
  pQVar3 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar3,(QWidget *)param_2);
  *param_1 = pQVar3;
  QString::fromUtf8_helper((char *)&local_50,0x1dd6d5e);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063dcc4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10063dcc4:
  pQVar4 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar4,(QWidget *)param_2);
  param_1[1] = pQVar4;
  QString::fromUtf8_helper((char *)&local_58,0x1e09ab0);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063dd33;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10063dd33:
  QGridLayout::addWidget(*param_1,param_1[1],3,0,1,3,0);
  pQVar5 = operator_new(0x30);
  QPushButton::QPushButton(pQVar5,(QWidget *)param_2);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_60,0x1e096f5);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063ddc8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10063ddc8:
  QWidget::setEnabled(SUB81(param_1[2],0));
  QGridLayout::addWidget(*param_1,param_1[2],5,2,1,1,0);
  pQVar5 = operator_new(0x30);
  QPushButton::QPushButton(pQVar5,(QWidget *)param_2);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1e09706);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063de6b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10063de6b:
  QGridLayout::addWidget(*param_1,param_1[3],5,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_70,0x1e09abb);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063df05;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10063df05:
  QWidget::setMinimumSize((int)param_1[4],0);
  QWidget::setMaximumSize((int)param_1[4],0xffffff);
  pQVar3 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar3,(QWidget *)param_1[4]);
  param_1[5] = pQVar3;
  QGridLayout::setSpacing((int)pQVar3);
  pQVar2 = (QString *)param_1[5];
  QString::fromUtf8_helper((char *)&local_78,0x1dd67e5);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063dfa6;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10063dfa6:
  QLayout::setContentsMargins((int)param_1[5],0,0,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  puVar9 = PTR_vtable_1021e17a0 + 0x10;
  *puVar7 = puVar9;
  *(undefined8 *)((long)puVar7 + 0xc) = 0xd00000015;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[6] = puVar7;
  QGridLayout::addItem(param_1[5],puVar7,0,0,1,1,0);
  this = operator_new(0x30);
  QListView::QListView(this,(QWidget *)param_1[4]);
  param_1[7] = this;
  QString::fromUtf8_helper((char *)&local_80,0x1e09acb);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063e0b0;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10063e0b0:
  QWidget::setEnabled(SUB81(param_1[7],0));
  QAbstractItemView::setAutoScroll(SUB81(param_1[7],0));
  QGridLayout::addWidget(param_1[5],param_1[7],0,1,1,1,0);
  QGridLayout::addWidget(*param_1,param_1[4],4,0,1,3,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar9;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x140000014b;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[8] = puVar7;
  QGridLayout::addItem(*param_1,puVar7,5,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[9] = pQVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1e09ada);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063e203;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10063e203:
  QWidget::setMinimumSize((int)param_1[9],0);
  pQVar3 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar3,(QWidget *)param_1[9]);
  param_1[10] = pQVar3;
  QGridLayout::setSpacing((int)pQVar3);
  pQVar2 = (QString *)param_1[10];
  QString::fromUtf8_helper((char *)&local_90,0x1dd6d51);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063e29a;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10063e29a:
  QLayout::setContentsMargins((int)param_1[10],0,0,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar9;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1500000015;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0xb] = puVar7;
  QGridLayout::addItem(param_1[10],puVar7,0,0,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[9],0);
  param_1[0xc] = pQVar8;
  QString::fromUtf8_helper((char *)&local_98,0x1e09ae7);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063e3a4;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10063e3a4:
  QGridLayout::addWidget(param_1[10],param_1[0xc],0,1,1,1,0);
  QGridLayout::addWidget(*param_1,param_1[9],2,0,1,3,0);
  pQVar4 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar4,(QWidget *)param_2);
  param_1[0xd] = pQVar4;
  QString::fromUtf8_helper((char *)&local_a0,0x1e09af4);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063e469;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10063e469:
  QGridLayout::addWidget(*param_1,param_1[0xd],1,0,1,3,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[0xe] = pQVar8;
  QString::fromUtf8_helper((char *)&local_a8,0x1dc128f);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063e509;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10063e509:
  QFont::QFont(local_b8);
  QFont::setWeight((int)local_b8);
  QFont::setWeight((int)local_b8);
  QWidget::setFont((QFont *)param_1[0xe]);
  QGridLayout::addWidget(*param_1,param_1[0xe],0,0,1,3,0);
  QWidget::setTabOrder((QWidget *)param_1[0xd],(QWidget *)param_1[1]);
  QWidget::setTabOrder((QWidget *)param_1[1],(QWidget *)param_1[7]);
  QWidget::setTabOrder((QWidget *)param_1[7],(QWidget *)param_1[3]);
  QWidget::setTabOrder((QWidget *)param_1[3],(QWidget *)param_1[2]);
  FUN_10063ea90(param_1,param_2);
  QObject::connect(local_c0,param_1[2],"2clicked()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_c0);
  QObject::connect(local_c8,param_1[3],"2clicked()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_c8);
  QObject::connect(local_d0,param_1[1],"2toggled(bool)",param_1[7],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_d0);
  QPushButton::setDefault(SUB81(param_1[2],0));
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_b8);
  return;
}

