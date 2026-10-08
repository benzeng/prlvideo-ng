
void FUN_1005a7040(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QGridLayout *this;
  QFrame *pQVar4;
  QLabel *pQVar5;
  QCheckBox *this_00;
  undefined8 *puVar6;
  QPushButton *pQVar7;
  Connection local_a8 [8];
  Connection local_a0 [8];
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  uint local_80 [2];
  QArrayData *local_78;
  QFont local_70 [16];
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
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
      if (*(int *)local_38 != 0) goto LAB_1005a7094;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005a7094:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e03312);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_1005a70eb;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1005a70eb:
  local_30 = true;
  uStack_2f = 0x17a000002;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_48,0x1dd67e5);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_30 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005a7173;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005a7173:
  pQVar4 = operator_new(0x30);
  QFrame::QFrame(pQVar4,param_2,0);
  param_1[1] = pQVar4;
  QString::fromUtf8_helper((char *)&local_50,0x1e0332c);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005a71e4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005a71e4:
  QWidget::setMinimumSize((int)param_1[1],0xaf);
  QWidget::setMaximumSize((int)param_1[1],0xaf);
  pQVar2 = (QString *)param_1[1];
  QString::fromUtf8_helper((char *)&local_58,0x1e0333a);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005a7261;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005a7261:
  QFrame::setFrameShape(param_1[1],6);
  QFrame::setFrameShadow(param_1[1],0x20);
  QGridLayout::addWidget(*param_1,param_1[1],0,0,2,2,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_60,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005a7311;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005a7311:
  QWidget::setMinimumSize((int)param_1[2],300);
  QFont::QFont(local_70);
  QFont::setWeight((int)local_70);
  QFont::setWeight((int)local_70);
  QWidget::setFont((QFont *)param_1[2]);
  QLabel::setAlignment(param_1[2],0x21);
  QLabel::setWordWrap(SUB81(param_1[2],0));
  QGridLayout::addWidget(*param_1,param_1[2],0,2,1,3,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1dd681a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_30 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005a7406;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005a7406:
  local_80[0] = 0x350000;
  QSizePolicy::setControlType(local_80,1);
  local_80[0] = local_80[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_80[0] = local_80[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QLabel::setAlignment(param_1[3],0x21);
  QLabel::setWordWrap(SUB81(param_1[3],0));
  QGridLayout::addWidget(*param_1,param_1[3],1,2,1,3,0);
  this_00 = operator_new(0x30);
  QCheckBox::QCheckBox(this_00,(QWidget *)param_2);
  param_1[4] = this_00;
  QString::fromUtf8_helper((char *)&local_88,0x1e0337b);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005a74f8;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005a74f8:
  QGridLayout::addWidget(*param_1,param_1[4],2,0,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = PTR_vtable_1021e17a0 + 0x10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000091;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[5] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,2,1,1,2,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_2);
  param_1[6] = pQVar7;
  QString::fromUtf8_helper((char *)&local_90,0x1e0338e);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_30 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005a7627;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005a7627:
  QGridLayout::addWidget(*param_1,param_1[6],2,3,1,1,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_2);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_98,0x1e0339b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005a76c9;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005a76c9:
  QGridLayout::addWidget(*param_1,param_1[7],2,4,1,1,0);
  QWidget::setTabOrder((QWidget *)param_1[6],(QWidget *)param_1[4]);
  QWidget::setTabOrder((QWidget *)param_1[4],(QWidget *)param_1[7]);
  FUN_1005a7a50(param_1,param_2);
  QObject::connect(local_a0,param_1[6],"2released()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_a0);
  QObject::connect(local_a8,param_1[7],"2released()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_a8);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_70);
  return;
}

