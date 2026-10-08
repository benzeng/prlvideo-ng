
void FUN_1007a92d0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  uint uVar2;
  QVBoxLayout *this;
  QLabel *pQVar3;
  QProgressBar *this_00;
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
      if (*(int *)local_38 != 0) goto LAB_1007a9321;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007a9321:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e177fe);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_1007a9378;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1007a9378:
  local_30 = true;
  uStack_2f = 0x3c000001;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_48,0x1dc1284);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_30 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_30) goto LAB_1007a9400;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007a9400:
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_50,0x1e17816);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_1007a9471;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007a9471:
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  this_00 = operator_new(0x30);
  QProgressBar::QProgressBar(this_00,(QWidget *)param_2);
  param_1[2] = this_00;
  QString::fromUtf8_helper((char *)&local_58,0x1dc12a5);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_1007a94f0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007a94f0:
  QWidget::setEnabled(SUB81(param_1[2],0));
  local_60[0] = 0x70000;
  QSizePolicy::setControlType(local_60,1);
  local_60[0] = local_60[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_60[0] = local_60[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[2]);
  QProgressBar::setMinimum((int)param_1[2]);
  QProgressBar::setMaximum((int)param_1[2]);
  QProgressBar::setValue((int)param_1[2]);
  QProgressBar::setAlignment(param_1[2],4);
  QProgressBar::setOrientation(param_1[2],1);
  QBoxLayout::addWidget(*param_1,param_1[2],0,0);
  FUN_1007a96c0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

