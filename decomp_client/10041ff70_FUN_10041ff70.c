
void FUN_10041ff70(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QVBoxLayout *this;
  QString *pQVar2;
  QDialogButtonBox *this_00;
  QArrayData *local_68;
  QFont local_60 [16];
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
      if (*(int *)local_38 != 0) goto LAB_10041ffc1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10041ffc1:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1df3843);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_100420018;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100420018:
  local_30 = true;
  uStack_2f = 0x10e000001;
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
      if (local_30) goto LAB_1004200a0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004200a0:
  pQVar2 = operator_new(0x48);
  FUN_10013a440(pQVar2,param_2);
  param_1[1] = pQVar2;
  QString::fromUtf8_helper((char *)&local_50,0x1df3857);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042010f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10042010f:
  QFont::QFont(local_60);
  QFont::setPointSize((int)local_60);
  QWidget::setFont((QFont *)param_1[1]);
  QAbstractItemView::setAlternatingRowColors(SUB81(param_1[1],0));
  QTreeView::setRootIsDecorated(SUB81(param_1[1],0));
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  this_00 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_00,(QWidget *)param_2);
  param_1[2] = this_00;
  QString::fromUtf8_helper((char *)&local_68,0x1dc1c64);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004201cb;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004201cb:
  QDialogButtonBox::setOrientation(param_1[2],1);
  QDialogButtonBox::setStandardButtons(param_1[2],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[2],0,0);
  FUN_100420360(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_60);
  return;
}

