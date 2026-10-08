
void FUN_10043d4e0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  QGridLayout *this;
  CPrlFileDevSelectorWidget *this_00;
  QDialogButtonBox *this_01;
  QLabel *pQVar4;
  Connection local_88 [8];
  Connection local_80 [8];
  QArrayData *local_78;
  QArrayData *local_70;
  QVariant local_68;
  uint local_58 [2];
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
      if (*(int *)local_38 != 0) goto LAB_10043d531;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10043d531:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1df47a8);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10043d588;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10043d588:
  local_30 = true;
  uStack_2f = 0x54000001;
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
      if (local_30) goto LAB_10043d610;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10043d610:
  this_00 = operator_new(0x38);
  CPrlFileDevSelectorWidget::CPrlFileDevSelectorWidget(this_00,(QWidget *)param_2);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_50,0x1df47c0);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043d67f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10043d67f:
  local_58[0] = 0x70000;
  QSizePolicy::setControlType(local_58,1);
  local_58[0] = CONCAT22(local_58[0]._2_2_,1);
  uVar3 = QWidget::sizePolicy();
  local_58[0] = local_58[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[1]);
  pcVar2 = (char *)param_1[1];
  QVariant::QVariant(&local_68,false);
  QObject::setProperty(pcVar2,(QVariant *)"remoteDeviceSelector");
  QVariant::~QVariant(&local_68);
  QGridLayout::addWidget(*param_1,param_1[1],0,1,1,1,0);
  this_01 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_01,(QWidget *)param_2);
  param_1[2] = this_01;
  QString::fromUtf8_helper((char *)&local_70,0x1dd6e41);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043d780;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10043d780:
  QDialogButtonBox::setOrientation(param_1[2],1);
  QDialogButtonBox::setStandardButtons(param_1[2],0x400400);
  QGridLayout::addWidget(*param_1,param_1[2],1,0,1,2,0);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[3] = pQVar4;
  QString::fromUtf8_helper((char *)&local_78,0x1df47d2);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_30 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043d833;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10043d833:
  QLabel::setAlignment(param_1[3],0x82);
  QGridLayout::addWidget(*param_1,param_1[3],0,0,1,1,0);
  FUN_10043da50(param_1,param_2);
  QObject::connect(local_80,param_1[2],"2accepted()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_80);
  QObject::connect(local_88,param_1[2],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_88);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

