
void FUN_10055bd20(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  uint uVar2;
  QVBoxLayout *this;
  QLabel *pQVar3;
  QGridLayout *this_00;
  QCheckBox *pQVar4;
  QString *pQVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  Connection local_b8 [8];
  Connection local_b0 [8];
  Connection local_a8 [8];
  Connection local_a0 [8];
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  uint local_70 [2];
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
      if (*(int *)local_40 != 0) goto LAB_10055bd76;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10055bd76:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e012e1);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10055bdcd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10055bdcd:
  local_38 = true;
  uStack_37 = 0x134000002;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1597);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055be56;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10055be56:
  QLayout::setContentsMargins((int)*param_1,-1,0,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055bedc;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10055bedc:
  QLabel::setWordWrap(SUB81(param_1[1],0));
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00);
  param_1[2] = this_00;
  QString::fromUtf8_helper((char *)&local_60,0x1dd67e5);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055bf67;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10055bf67:
  QGridLayout::setHorizontalSpacing((int)param_1[2]);
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[3] = pQVar4;
  QString::fromUtf8_helper((char *)&local_68,0x1e012f7);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055bfe4;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10055bfe4:
  local_70[0] = 0x50000;
  QSizePolicy::setControlType(local_70,1);
  local_70[0] = local_70[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_70[0] = local_70[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QAbstractButton::setChecked(SUB81(param_1[3],0));
  QGridLayout::addWidget(param_1[2],param_1[3],1,0,1,1,0);
  pQVar5 = operator_new(0x38);
  FUN_100139940(pQVar5,param_2);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1e0130e);
  QObject::setObjectName(pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055c0c8;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10055c0c8:
  QGridLayout::addWidget(param_1[2],param_1[4],1,1,1,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[5] = pQVar3;
  QString::fromUtf8_helper((char *)&local_80,0x1e01327);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055c163;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10055c163:
  QGridLayout::addWidget(param_1[2],param_1[5],1,2,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar7 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar7;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x260000003a;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[6] = puVar6;
  QGridLayout::addItem(param_1[2],puVar6,1,3,2,1,0);
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[7] = pQVar4;
  QString::fromUtf8_helper((char *)&local_88,0x1e0133e);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055c28a;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10055c28a:
  uVar2 = QWidget::sizePolicy();
  local_70[0] = local_70[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[7]);
  QAbstractButton::setChecked(SUB81(param_1[7],0));
  QGridLayout::addWidget(param_1[2],param_1[7],2,0,1,1,0);
  pQVar5 = operator_new(0x38);
  FUN_100139940(pQVar5,param_2);
  param_1[8] = pQVar5;
  QString::fromUtf8_helper((char *)&local_90,0x1e01356);
  QObject::setObjectName(pQVar5);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055c35b;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10055c35b:
  QGridLayout::addWidget(param_1[2],param_1[8],2,1,1,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[9] = pQVar3;
  QString::fromUtf8_helper((char *)&local_98,0x1e01370);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055c3ff;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10055c3ff:
  QGridLayout::addWidget(param_1[2],param_1[9],2,2,1,1,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[2]);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar7;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x10a00000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[10] = puVar6;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar6);
  FUN_10055c870(param_1,param_2);
  QObject::connect(local_a0,param_1[3],"2toggled(bool)",param_1[4],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_a0);
  QObject::connect(local_a8,param_1[3],"2toggled(bool)",param_1[5],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_a8);
  QObject::connect(local_b0,param_1[7],"2toggled(bool)",param_1[8],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_b0);
  QObject::connect(local_b8,param_1[7],"2toggled(bool)",param_1[9],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_b8);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

