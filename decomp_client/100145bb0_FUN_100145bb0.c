
void FUN_100145bb0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  uint uVar2;
  QVBoxLayout *this;
  QLabel *pQVar3;
  QProgressBar *this_00;
  undefined8 *puVar4;
  QDialogButtonBox *this_01;
  QArrayData *local_80;
  QFont local_78 [16];
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
      if (*(int *)local_38 != 0) goto LAB_100145c01;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100145c01:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1dc1579);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_100145c58;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100145c58:
  local_30 = true;
  uStack_2f = 0x8a000001;
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
      if (local_30) goto LAB_100145ce0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100145ce0:
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_50,0x1dc128f);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_100145d51;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100145d51:
  QLabel::setAlignment(param_1[1],0x81);
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
      if (local_30) goto LAB_100145dde;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100145dde:
  QWidget::setEnabled(SUB81(param_1[2],0));
  local_60[0] = 0x70000;
  QSizePolicy::setControlType(local_60,1);
  local_60[0] = local_60[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_60[0] = local_60[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[2]);
  QProgressBar::setValue((int)param_1[2]);
  QProgressBar::setAlignment(param_1[2],4);
  QProgressBar::setOrientation(param_1[2],1);
  QBoxLayout::addWidget(*param_1,param_1[2],0,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[3] = pQVar3;
  QString::fromUtf8_helper((char *)&local_68,0x1dc129a);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_100145ed4;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100145ed4:
  QFont::QFont(local_78);
  QFont::setPointSize((int)local_78);
  QWidget::setFont((QFont *)param_1[3]);
  QLabel::setWordWrap(SUB81(param_1[3],0));
  QLabel::setOpenExternalLinks(SUB81(param_1[3],0));
  QLabel::setTextInteractionFlags(param_1[3],5);
  QBoxLayout::addWidget(*param_1,param_1[3],0,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = PTR_vtable_1021e17a0 + 0x10;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[4] = puVar4;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar4);
  this_01 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_01,(QWidget *)param_2);
  param_1[5] = this_01;
  QString::fromUtf8_helper((char *)&local_80,0x1dc15a6);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_30 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_30) goto LAB_100146018;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100146018:
  QDialogButtonBox::setStandardButtons(param_1[5],0x400000);
  QBoxLayout::addWidget(*param_1,param_1[5],0,0);
  FUN_100146760(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_78);
  return;
}

