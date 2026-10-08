
void FUN_100445e20(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QVBoxLayout *this;
  QLabel *pQVar4;
  QGroupBox *this_00;
  QGridLayout *this_01;
  QDeclarativeView *this_02;
  QDialogButtonBox *this_03;
  Connection local_c8 [8];
  Connection local_c0 [8];
  QArrayData *local_b8;
  undefined1 local_b0 [16];
  QBrush local_a0 [8];
  undefined1 local_98 [16];
  QBrush local_88 [8];
  QPalette local_80 [16];
  QArrayData *local_70;
  QArrayData *local_68;
  uint local_60 [2];
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
      if (*(int *)local_38 != 0) goto LAB_100445e74;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100445e74:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1df4c18);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_100445ecb;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100445ecb:
  local_30 = true;
  uStack_2f = 0x13b000001;
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
      if (local_30) goto LAB_100445f53;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100445f53:
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[1] = pQVar4;
  QString::fromUtf8_helper((char *)&local_50,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_100445fc4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100445fc4:
  QBoxLayout::addWidget(*param_1,param_1[1],0);
  this_00 = operator_new(0x30);
  QGroupBox::QGroupBox(this_00,(QWidget *)param_2);
  param_1[2] = this_00;
  QString::fromUtf8_helper((char *)&local_58,0x1df4c2d);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_100446043;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100446043:
  local_60[0] = 0x770000;
  QSizePolicy::setControlType(local_60,1);
  local_60[0] = local_60[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_60[0] = local_60[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[2]);
  this_01 = operator_new(0x20);
  QGridLayout::QGridLayout(this_01,(QWidget *)param_1[2]);
  param_1[3] = this_01;
  QLayout::setContentsMargins((int)this_01,0,0,0);
  pQVar2 = (QString *)param_1[3];
  QString::fromUtf8_helper((char *)&local_68,0x1dd67e5);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_100446108;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100446108:
  this_02 = operator_new(0x30);
  QDeclarativeView::QDeclarativeView(this_02,(QWidget *)param_1[2]);
  param_1[4] = this_02;
  QString::fromUtf8_helper((char *)&local_70,0x1df4c36);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_100446178;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100446178:
  QPalette::QPalette(local_80);
  QColor::setRgb((int)local_98,0xff,0xff,0xff);
  QBrush::QBrush(local_88,local_98,1);
  QBrush::setStyle(local_88,1);
  QPalette::setBrush(local_80,0,9,local_88);
  QPalette::setBrush(local_80,2,9,local_88);
  QColor::setRgb((int)local_b0,0xd4,0xd0,200);
  QBrush::QBrush(local_a0,local_b0,1);
  QBrush::setStyle(local_a0,1);
  QPalette::setBrush(local_80,1,9,local_a0);
  QWidget::setPalette((QPalette *)param_1[4]);
  QGridLayout::addWidget(param_1[3],param_1[4],0,0,1,1,0);
  QBoxLayout::addWidget(*param_1,param_1[2],0,0);
  this_03 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_03,(QWidget *)param_2);
  param_1[5] = this_03;
  QString::fromUtf8_helper((char *)&local_b8,0x1dc1c64);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_30 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10044630b;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10044630b:
  QDialogButtonBox::setStandardButtons(param_1[5],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[5],0,0);
  FUN_100446600(param_1,param_2);
  QObject::connect(local_c0,param_1[5],"2accepted()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_c0);
  QObject::connect(local_c8,param_1[5],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_c8);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QBrush::~QBrush(local_a0);
  QBrush::~QBrush(local_88);
  QPalette::~QPalette(local_80);
  return;
}

