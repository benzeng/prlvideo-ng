
void FUN_10076cb50(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QGridLayout *this;
  QLabel *pQVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  QFont local_80 [16];
  QArrayData *local_70;
  QArrayData *local_68;
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
      if (*(int *)local_38 != 0) goto LAB_10076cba1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10076cba1:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e15b5b);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10076cbf8;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10076cbf8:
  local_30 = true;
  uStack_2f = 0xb0000001;
  QWidget::resize(param_2);
  QWidget::setMinimumSize((int)param_2,0x11c);
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
      if (local_30) goto LAB_10076cc92;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10076cc92:
  QLayout::setContentsMargins((int)*param_1,-1,8,-1);
  pQVar2 = operator_new(0x30);
  QLabel::QLabel(pQVar2,param_2,0);
  param_1[1] = pQVar2;
  QString::fromUtf8_helper((char *)&local_50,0x1e15b6a);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_10076cd20;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10076cd20:
  QWidget::setMinimumSize((int)param_1[1],0);
  QWidget::setMaximumSize((int)param_1[1],0xffffff);
  QLabel::setAlignment(param_1[1],0x84);
  QGridLayout::addWidget(*param_1,param_1[1],0,0,1,1,0);
  puVar3 = operator_new(0x28);
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar4 = PTR_vtable_1021e17a0 + 0x10;
  *puVar3 = puVar4;
  *(undefined8 *)((long)puVar3 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar3 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar3 + 0x14,1);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  *(undefined4 *)(puVar3 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar3 + 0x24) = 0xffffffff;
  param_1[2] = puVar3;
  QGridLayout::addItem(*param_1,puVar3,4,0,1,1,0);
  puVar3 = operator_new(0x28);
  *(undefined4 *)(puVar3 + 1) = 0;
  *puVar3 = puVar4;
  *(undefined8 *)((long)puVar3 + 0xc) = 0x200000001;
  *(undefined4 *)((long)puVar3 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar3 + 0x14,1);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  *(undefined4 *)(puVar3 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar3 + 0x24) = 0xffffffff;
  param_1[3] = puVar3;
  QGridLayout::addItem(*param_1,puVar3,1,0,1,1,0);
  pQVar2 = operator_new(0x30);
  QLabel::QLabel(pQVar2,param_2,0);
  param_1[4] = pQVar2;
  QString::fromUtf8_helper((char *)&local_58,0x1e15b76);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_10076ceee;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10076ceee:
  QLabel::setAlignment(param_1[4],0x84);
  QGridLayout::addWidget(*param_1,param_1[4],3,0,1,1,0);
  pQVar2 = operator_new(0x30);
  QLabel::QLabel(pQVar2,param_2,0);
  param_1[5] = pQVar2;
  QString::fromUtf8_helper((char *)&local_60,0x1df5e62);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_10076cf93;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10076cf93:
  QLabel::setAlignment(param_1[5],0x84);
  QLabel::setWordWrap(SUB81(param_1[5],0));
  QGridLayout::addWidget(*param_1,param_1[5],5,0,1,1,0);
  pQVar2 = operator_new(0x30);
  QLabel::QLabel(pQVar2,param_2,0);
  param_1[6] = pQVar2;
  QString::fromUtf8_helper((char *)&local_68,0x1df5e4a);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_10076d046;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10076d046:
  QLabel::setAlignment(param_1[6],0x84);
  QGridLayout::addWidget(*param_1,param_1[6],2,0,1,1,0);
  pQVar2 = operator_new(0x30);
  QLabel::QLabel(pQVar2,param_2,0);
  param_1[7] = pQVar2;
  QString::fromUtf8_helper((char *)&local_70,0x1e15b85);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_10076d0eb;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10076d0eb:
  QFont::QFont(local_80);
  QFont::setPointSize((int)local_80);
  QWidget::setFont((QFont *)param_1[7]);
  QLabel::setAlignment(param_1[7],0x84);
  QGridLayout::addWidget(*param_1,param_1[7],6,0,1,1,0);
  FUN_10076d3a0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_80);
  return;
}

