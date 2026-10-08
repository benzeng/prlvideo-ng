
void FUN_10043b450(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QVBoxLayout *this;
  QFormLayout *this_00;
  QLabel *pQVar2;
  QComboBox *pQVar3;
  QDialogButtonBox *this_01;
  Connection local_a8 [8];
  Connection local_a0 [8];
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
      if (*(int *)local_38 != 0) goto LAB_10043b4a4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10043b4a4:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1df455d);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10043b4fb;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10043b4fb:
  local_30 = true;
  uStack_2f = 0xcd000001;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_48,0x1dc1597);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_30 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043b583;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10043b583:
  this_00 = operator_new(0x20);
  QFormLayout::QFormLayout(this_00,(QWidget *)0x0);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_50,0x1df4574);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043b5f1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10043b5f1:
  pQVar2 = operator_new(0x30);
  QLabel::QLabel(pQVar2,param_2,0);
  param_1[2] = pQVar2;
  QString::fromUtf8_helper((char *)&local_58,0x1df457f);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043b662;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10043b662:
  QLabel::setAlignment(param_1[2],0x82);
  QFormLayout::setWidget(param_1[1],0,0,param_1[2]);
  pQVar3 = operator_new(0x30);
  QComboBox::QComboBox(pQVar3,(QWidget *)param_2);
  param_1[3] = pQVar3;
  QString::fromUtf8_helper((char *)&local_60,0x1df458f);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043b6f0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10043b6f0:
  QWidget::setMinimumSize((int)param_1[3],0x78);
  QFormLayout::setWidget(param_1[1],0,1,param_1[3]);
  pQVar2 = operator_new(0x30);
  QLabel::QLabel(pQVar2,param_2,0);
  param_1[4] = pQVar2;
  QString::fromUtf8_helper((char *)&local_68,0x1df459f);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043b785;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10043b785:
  QLabel::setAlignment(param_1[4],0x82);
  QFormLayout::setWidget(param_1[1],1,0,param_1[4]);
  pQVar3 = operator_new(0x30);
  QComboBox::QComboBox(pQVar3,(QWidget *)param_2);
  param_1[5] = pQVar3;
  QString::fromUtf8_helper((char *)&local_70,0x1df45a8);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043b816;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10043b816:
  QWidget::setMinimumSize((int)param_1[5],0x78);
  QFormLayout::setWidget(param_1[1],1,1,param_1[5]);
  pQVar2 = operator_new(0x30);
  QLabel::QLabel(pQVar2,param_2,0);
  param_1[6] = pQVar2;
  QString::fromUtf8_helper((char *)&local_78,0x1df45b1);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_30 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043b8ae;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10043b8ae:
  QLabel::setAlignment(param_1[6],0x82);
  QFormLayout::setWidget(param_1[1],2,0,param_1[6]);
  pQVar2 = operator_new(0x30);
  QLabel::QLabel(pQVar2,param_2,0);
  param_1[7] = pQVar2;
  QString::fromUtf8_helper((char *)&local_80,0x1df45ba);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_30 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043b941;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10043b941:
  QLabel::setAlignment(param_1[7],0x82);
  QFormLayout::setWidget(param_1[1],3,0,param_1[7]);
  pQVar3 = operator_new(0x30);
  QComboBox::QComboBox(pQVar3,(QWidget *)param_2);
  param_1[8] = pQVar3;
  QString::fromUtf8_helper((char *)&local_88,0x1df45cc);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043b9d2;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10043b9d2:
  QWidget::setMinimumSize((int)param_1[8],0x78);
  QFormLayout::setWidget(param_1[1],3,1,param_1[8]);
  pQVar3 = operator_new(0x30);
  QComboBox::QComboBox(pQVar3,(QWidget *)param_2);
  param_1[9] = pQVar3;
  QString::fromUtf8_helper((char *)&local_90,0x1df45de);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_30 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043ba71;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10043ba71:
  QWidget::setMinimumSize((int)param_1[9],0x78);
  QFormLayout::setWidget(param_1[1],2,1,param_1[9]);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  this_01 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_01,(QWidget *)param_2);
  param_1[10] = this_01;
  QString::fromUtf8_helper((char *)&local_98,0x1dc1c64);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043bb1e;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10043bb1e:
  QDialogButtonBox::setOrientation(param_1[10],1);
  QDialogButtonBox::setStandardButtons(param_1[10],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[10],0,0);
  FUN_10043bf20(param_1,param_2);
  QObject::connect(local_a0,param_1[10],"2accepted()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_a0);
  QObject::connect(local_a8,param_1[10],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_a8);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

