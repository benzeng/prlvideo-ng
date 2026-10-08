
void FUN_100532940(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QVBoxLayout *this;
  QSplitter *this_00;
  QWidget *pQVar2;
  QHBoxLayout *this_01;
  QListView *this_02;
  QStackedWidget *this_03;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  QVariant local_60;
  undefined8 local_50;
  QArrayData *local_48;
  QIcon local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  bool local_28;
  undefined7 uStack_27;
  
  QObject::objectName();
  iVar1 = *(int *)(local_30 + 4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      _local_28 = CONCAT71(uStack_27,*(int *)local_30 != 0);
      if (*(int *)local_30 != 0) goto LAB_100532992;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100532992:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_38,0x1dff0b1);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        _local_28 = CONCAT71(uStack_27,*(int *)local_38 != 0);
        if (*(int *)local_38 != 0) goto LAB_1005329e9;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_1005329e9:
  local_28 = true;
  uStack_27 = 0x144000001;
  QWidget::resize(param_2);
  QIcon::QIcon(local_40);
  QString::fromUtf8_helper((char *)&local_48,0x1dff0ce);
  local_50 = 0xffffffffffffffff;
  QIcon::addFile(local_40,&local_48,&local_50,0,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_28 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_28) goto LAB_100532a72;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100532a72:
  QIcon::operator_cast_to_QVariant((QIcon *)&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"icon");
  QVariant::~QVariant(&local_60);
  QVariant::QVariant(&local_70,true);
  QObject::setProperty((char *)param_2,(QVariant *)"hasRestoreDefaults");
  QVariant::~QVariant(&local_70);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_78,0x1dc1597);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_28 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_28) goto LAB_100532b31;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100532b31:
  QLayout::setContentsMargins((int)*param_1,0xe,0x14,0xe);
  this_00 = operator_new(0x30);
  QSplitter::QSplitter(this_00,(QWidget *)param_2);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_80,0x1dff0ea);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_28 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_28) goto LAB_100532bb8;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100532bb8:
  QSplitter::setOrientation(param_1[1],1);
  pQVar2 = operator_new(0x30);
  QWidget::QWidget(pQVar2,param_1[1],0);
  param_1[2] = pQVar2;
  QString::fromUtf8_helper((char *)&local_88,0x1dff0f5);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_28 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_28) goto LAB_100532c36;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100532c36:
  this_01 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_01,(QWidget *)param_1[2]);
  param_1[3] = this_01;
  QString::fromUtf8_helper((char *)&local_90,0x1dff10c);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_28 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_28) goto LAB_100532cb0;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100532cb0:
  QLayout::setContentsMargins((int)param_1[3],0,0,0);
  this_02 = operator_new(0x30);
  QListView::QListView(this_02,(QWidget *)param_1[2]);
  param_1[4] = this_02;
  QString::fromUtf8_helper((char *)&local_98,0x1dff119);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_28 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_28) goto LAB_100532d3c;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100532d3c:
  QFrame::setFrameShape(param_1[4],6);
  QFrame::setFrameShadow(param_1[4],0x10);
  QBoxLayout::addWidget(param_1[3],param_1[4],0,0);
  QSplitter::addWidget((QWidget *)param_1[1]);
  this_03 = operator_new(0x30);
  QStackedWidget::QStackedWidget(this_03,(QWidget *)param_1[1]);
  param_1[5] = this_03;
  QString::fromUtf8_helper((char *)&local_a0,0x1dbaf2a);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_28 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100532df0;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100532df0:
  pQVar2 = operator_new(0x30);
  QWidget::QWidget(pQVar2,0,0);
  param_1[6] = pQVar2;
  QString::fromUtf8_helper((char *)&local_a8,0x1dfb0c8);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_28 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_28) goto LAB_100532e6a;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100532e6a:
  QStackedWidget::addWidget((QWidget *)param_1[5]);
  pQVar2 = operator_new(0x30);
  QWidget::QWidget(pQVar2,0,0);
  param_1[7] = pQVar2;
  QString::fromUtf8_helper((char *)&local_b0,0x1dfb0e1);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_28 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100532ef1;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100532ef1:
  QStackedWidget::addWidget((QWidget *)param_1[5]);
  QSplitter::addWidget((QWidget *)param_1[1]);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  FUN_100533650(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QIcon::~QIcon(local_40);
  return;
}

