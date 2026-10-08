
void FUN_100601190(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QVBoxLayout *this;
  QLabel *pQVar2;
  QString *pQVar3;
  QDialogButtonBox *this_00;
  Connection local_70 [8];
  Connection local_68 [8];
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
      if (*(int *)local_38 != 0) goto LAB_1006011e1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006011e1:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e06958);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_100601238;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100601238:
  local_30 = true;
  uStack_2f = 0x6c000001;
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
      if (local_30) goto LAB_1006012c0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006012c0:
  pQVar2 = operator_new(0x30);
  QLabel::QLabel(pQVar2,param_2,0);
  param_1[1] = pQVar2;
  QString::fromUtf8_helper((char *)&local_50,0x1dfa560);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_100601331;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100601331:
  QLabel::setWordWrap(SUB81(param_1[1],0));
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  pQVar3 = operator_new(0x40);
  FUN_1001362a0(pQVar3,param_2);
  param_1[2] = pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1df5e3b);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006013be;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006013be:
  QComboBox::setMaxVisibleItems((int)param_1[2]);
  QBoxLayout::addWidget(*param_1,param_1[2],0,0);
  this_00 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_00,(QWidget *)param_2);
  param_1[3] = this_00;
  QString::fromUtf8_helper((char *)&local_60,0x1dd6e41);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_10060144b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10060144b:
  QDialogButtonBox::setOrientation(param_1[3],1);
  QDialogButtonBox::setStandardButtons(param_1[3],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[3],0,0);
  FUN_100601640(param_1,param_2);
  QObject::connect(local_68,param_1[3],"2accepted()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_68);
  QObject::connect(local_70,param_1[3],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_70);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

