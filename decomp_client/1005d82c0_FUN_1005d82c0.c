
void FUN_1005d82c0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QGridLayout *this;
  QLabel *pQVar3;
  QLineEdit *pQVar4;
  undefined8 *puVar5;
  QCheckBox *this_00;
  undefined *puVar6;
  Connection local_f0 [8];
  Connection local_e8 [8];
  Connection local_e0 [8];
  Connection local_d8 [8];
  Connection local_d0 [8];
  Connection local_c8 [8];
  Connection local_c0 [8];
  Connection local_b8 [8];
  QVariant local_b0;
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
      if (*(int *)local_40 != 0) goto LAB_1005d8316;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005d8316:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e04d0a);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1005d836d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1005d836d:
  local_38 = true;
  uStack_37 = 0x188000003;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1bb6);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d83f6;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005d83f6:
  QGridLayout::setVerticalSpacing((int)*param_1);
  QLayout::setContentsMargins((int)*param_1,-1,0x20,-1);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1e04d2b);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d8493;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005d8493:
  QLabel::setAlignment(param_1[1],0x82);
  QGridLayout::addWidget(*param_1,param_1[1],2,0,1,1,0);
  pQVar4 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar4,(QWidget *)param_2);
  param_1[2] = pQVar4;
  QString::fromUtf8_helper((char *)&local_60,0x1e04d39);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d8537;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005d8537:
  QGridLayout::addWidget(*param_1,param_1[2],2,1,1,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[3] = pQVar3;
  QString::fromUtf8_helper((char *)&local_68,0x1e04d47);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d85d2;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005d85d2:
  QLabel::setAlignment(param_1[3],0x82);
  QGridLayout::addWidget(*param_1,param_1[3],3,0,1,1,0);
  pQVar4 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar4,(QWidget *)param_2);
  param_1[4] = pQVar4;
  QString::fromUtf8_helper((char *)&local_70,0x1e04d55);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d8676;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005d8676:
  QGridLayout::addWidget(*param_1,param_1[4],3,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar4,(QWidget *)param_2);
  param_1[5] = pQVar4;
  QString::fromUtf8_helper((char *)&local_78,0x1e04d63);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d870f;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005d870f:
  QLineEdit::setMaxLength((int)param_1[5]);
  QLineEdit::setEchoMode(param_1[5],2);
  QGridLayout::addWidget(*param_1,param_1[5],5,1,1,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[6] = pQVar3;
  QString::fromUtf8_helper((char *)&local_80,0x1e04d73);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d87c6;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005d87c6:
  QLabel::setAlignment(param_1[6],0x82);
  QGridLayout::addWidget(*param_1,param_1[6],4,0,1,1,0);
  pQVar4 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar4,(QWidget *)param_2);
  param_1[7] = pQVar4;
  QString::fromUtf8_helper((char *)&local_88,0x1dd6d85);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d886a;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005d886a:
  QLineEdit::setMaxLength((int)param_1[7]);
  QLineEdit::setEchoMode(param_1[7],2);
  QGridLayout::addWidget(*param_1,param_1[7],4,1,1,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[8] = pQVar3;
  QString::fromUtf8_helper((char *)&local_90,0x1e04d7d);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d892a;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005d892a:
  QLabel::setAlignment(param_1[8],0x82);
  QGridLayout::addWidget(*param_1,param_1[8],5,0,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar6 = PTR_vtable_1021e17a0 + 0x10;
  *puVar5 = puVar6;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[9] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,3,2,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar6;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x2800000001;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[10] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,1,1,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar6;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xb] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,7,1,1,1,0);
  this_00 = operator_new(0x30);
  QCheckBox::QCheckBox(this_00,(QWidget *)param_2);
  param_1[0xc] = this_00;
  QString::fromUtf8_helper((char *)&local_98,0x1e04a45);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d8b61;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005d8b61:
  QAbstractButton::setChecked(SUB81(param_1[0xc],0));
  QGridLayout::addWidget(*param_1,param_1[0xc],0,1,1,2,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[0xd] = pQVar3;
  QString::fromUtf8_helper((char *)&local_a0,0x1e04d8d);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d8c10;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1005d8c10:
  pcVar2 = (char *)param_1[0xd];
  QVariant::QVariant(&local_b0,true);
  QObject::setProperty(pcVar2,(QVariant *)"highlightColor");
  QVariant::~QVariant(&local_b0);
  QGridLayout::addWidget(*param_1,param_1[0xd],6,1,1,1,0);
  QGridLayout::setRowStretch((int)*param_1,7);
  QGridLayout::setColumnStretch((int)*param_1,0);
  QGridLayout::setColumnStretch((int)*param_1,1);
  QGridLayout::setColumnStretch((int)*param_1,2);
  QWidget::setTabOrder((QWidget *)param_1[0xc],(QWidget *)param_1[2]);
  QWidget::setTabOrder((QWidget *)param_1[2],(QWidget *)param_1[4]);
  QWidget::setTabOrder((QWidget *)param_1[4],(QWidget *)param_1[7]);
  QWidget::setTabOrder((QWidget *)param_1[7],(QWidget *)param_1[5]);
  FUN_1005d9220(param_1,param_2);
  QObject::connect(local_b8,param_1[0xc],"2toggled(bool)",param_1[3],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_b8);
  QObject::connect(local_c0,param_1[0xc],"2toggled(bool)",param_1[6],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_c0);
  QObject::connect(local_c8,param_1[0xc],"2toggled(bool)",param_1[8],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_c8);
  QObject::connect(local_d0,param_1[0xc],"2toggled(bool)",param_1[4],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_d0);
  QObject::connect(local_d8,param_1[0xc],"2toggled(bool)",param_1[7],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_d8);
  QObject::connect(local_e0,param_1[0xc],"2toggled(bool)",param_1[5],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_e0);
  QObject::connect(local_e8,param_1[0xc],"2toggled(bool)",param_1[1],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_e8);
  QObject::connect(local_f0,param_1[0xc],"2toggled(bool)",param_1[2],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_f0);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

