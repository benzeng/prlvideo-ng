
void FUN_1001455e0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  uint uVar2;
  QVBoxLayout *this;
  QLabel *pQVar3;
  QTextBrowser *this_00;
  QProgressBar *this_01;
  uint local_90 [2];
  QArrayData *local_88;
  QFont local_80 [16];
  QArrayData *local_70;
  QFont local_68 [16];
  QArrayData *local_58;
  QArrayData *local_50;
  uint local_48 [2];
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
      if (*(int *)local_38 != 0) goto LAB_100145631;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100145631:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1dc1552);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_100145688;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100145688:
  local_30 = true;
  uStack_2f = 0xdc000001;
  QWidget::resize(param_2);
  local_48[0] = 0;
  QSizePolicy::setControlType(local_48,1);
  local_48[0] = local_48[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_48[0] = local_48[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_2);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1284);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_10014574e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10014574e:
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1dc128f);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_1001457bf;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001457bf:
  QFont::QFont(local_68);
  QFont::setWeight((int)local_68);
  QFont::setWeight((int)local_68);
  QWidget::setFont((QFont *)param_1[1]);
  QLabel::setAlignment(param_1[1],0x81);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  this_00 = operator_new(0x30);
  QTextBrowser::QTextBrowser(this_00,(QWidget *)param_2);
  param_1[2] = this_00;
  QString::fromUtf8_helper((char *)&local_70,0x1dc129a);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_10014587e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10014587e:
  QFont::QFont(local_80);
  QFont::setPointSize((int)local_80);
  QWidget::setFont((QFont *)param_1[2]);
  QWidget::setAutoFillBackground(SUB81(param_1[2],0));
  QFrame::setFrameShape(param_1[2],0);
  QFrame::setFrameShadow(param_1[2],0x10);
  QBoxLayout::addWidget(*param_1,param_1[2],0,0);
  this_01 = operator_new(0x30);
  QProgressBar::QProgressBar(this_01,(QWidget *)param_2);
  param_1[3] = this_01;
  QString::fromUtf8_helper((char *)&local_88,0x1dc12a5);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_100145946;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100145946:
  QWidget::setEnabled(SUB81(param_1[3],0));
  local_90[0] = 0x70000;
  QSizePolicy::setControlType(local_90,1);
  local_90[0] = local_90[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QProgressBar::setValue((int)param_1[3]);
  QProgressBar::setAlignment(param_1[3],4);
  QProgressBar::setOrientation(param_1[3],1);
  QBoxLayout::addWidget(*param_1,param_1[3],0,0);
  FUN_100146570(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_80);
  QFont::~QFont(local_68);
  return;
}

