
void FUN_1009b83c0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QVBoxLayout *this;
  QLabel *pQVar3;
  undefined8 *puVar4;
  QHBoxLayout *this_00;
  QGridLayout *this_01;
  QLineEdit *pQVar5;
  QDialogButtonBox *this_02;
  undefined *puVar6;
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
      if (*(int *)local_40 != 0) goto LAB_1009b8413;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009b8413:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e354cd);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1009b846a;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1009b846a:
  local_38 = true;
  uStack_37 = 0x87000001;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QBoxLayout::setSpacing((int)this);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1284);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009b84ff;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009b84ff:
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1dc128f);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009b8570;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009b8570:
  QLabel::setAlignment(param_1[1],0x84);
  QLabel::setWordWrap(SUB81(param_1[1],0));
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar6 = PTR_vtable_1021e17a0 + 0x10;
  *puVar4 = puVar6;
  *(undefined8 *)((long)puVar4 + 0xc) = 0xf00000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[2] = puVar4;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar4);
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00);
  param_1[3] = this_00;
  QBoxLayout::setSpacing((int)this_00);
  pQVar2 = (QString *)param_1[3];
  QString::fromUtf8_helper((char *)&local_60,0x1dc12b3);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009b8687;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009b8687:
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar6;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[4] = puVar4;
  (**(code **)(*(long *)param_1[3] + 0x70))((long *)param_1[3],puVar4);
  this_01 = operator_new(0x20);
  QGridLayout::QGridLayout(this_01);
  param_1[5] = this_01;
  QString::fromUtf8_helper((char *)&local_68,0x1dd67e5);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009b875a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1009b875a:
  QGridLayout::setVerticalSpacing((int)param_1[5]);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[6] = pQVar3;
  QString::fromUtf8_helper((char *)&local_70,0x1dd681a);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009b87d9;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1009b87d9:
  QLabel::setAlignment(param_1[6],0x82);
  QGridLayout::addWidget(param_1[5],param_1[6],0,0,1,1,0);
  pQVar5 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar5,(QWidget *)param_2);
  param_1[7] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1e354db);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009b887a;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1009b887a:
  QWidget::setMinimumSize((int)param_1[7],0xaf);
  QGridLayout::addWidget(param_1[5],param_1[7],0,1,1,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[8] = pQVar3;
  QString::fromUtf8_helper((char *)&local_80,0x1dd6d7d);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009b8922;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1009b8922:
  QLabel::setAlignment(param_1[8],0x82);
  QGridLayout::addWidget(param_1[5],param_1[8],1,0,1,1,0);
  pQVar5 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar5,(QWidget *)param_2);
  param_1[9] = pQVar5;
  QString::fromUtf8_helper((char *)&local_88,0x1e354e8);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009b89d0;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1009b89d0:
  QWidget::setMinimumSize((int)param_1[9],0xaf);
  QLineEdit::setEchoMode(param_1[9],2);
  QGridLayout::addWidget(param_1[5],param_1[9],1,1,1,1,0);
  QBoxLayout::addLayout((QLayout *)param_1[3],(int)param_1[5]);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar6;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[10] = puVar4;
  (**(code **)(*(long *)param_1[3] + 0x70))((long *)param_1[3],puVar4);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[3]);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar6;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x900000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0xb] = puVar4;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar4);
  this_02 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_02,(QWidget *)param_2);
  param_1[0xc] = this_02;
  QString::fromUtf8_helper((char *)&local_90,0x1e354f5);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009b8b70;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1009b8b70:
  QWidget::setLayoutDirection(param_1[0xc],0);
  QDialogButtonBox::setStandardButtons(param_1[0xc],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[0xc],0,0);
  FUN_1009b8ef0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

