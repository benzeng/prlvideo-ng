
void FUN_10099cc90(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  QVBoxLayout *pQVar4;
  QLabel *pQVar5;
  undefined8 *puVar6;
  QFrame *pQVar7;
  QHBoxLayout *pQVar8;
  QRadioButton *pQVar9;
  CPrlFileDevSelectorWidget *this;
  CProgressIndicator *pCVar10;
  undefined *puVar11;
  QVariant local_d8;
  QVariant local_c8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
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
      if (*(int *)local_40 != 0) goto LAB_10099cce6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10099cce6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e3342f);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10099cd3d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10099cd3d:
  local_38 = true;
  uStack_37 = 0x1c1000003;
  QWidget::resize(param_2);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1284);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099cdc5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10099cdc5:
  QLayout::setContentsMargins((int)*param_1,0x50,-1,0x50);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[1] = pQVar5;
  QString::fromUtf8_helper((char *)&local_58,0x1dc128f);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099ce53;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10099ce53:
  QLabel::setAlignment(param_1[1],0x24);
  QLabel::setWordWrap(SUB81(param_1[1],0));
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar11 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar11;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x3000000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[2] = puVar6;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar6);
  pQVar7 = operator_new(0x30);
  QFrame::QFrame(pQVar7,param_2,0);
  param_1[3] = pQVar7;
  QString::fromUtf8_helper((char *)&local_60,0x1e3343d);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099cf61;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10099cf61:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_1[3]);
  param_1[4] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar2 = (QString *)param_1[4];
  QString::fromUtf8_helper((char *)&local_68,0x1dd6e19);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099cfe2;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10099cfe2:
  QLayout::setContentsMargins((int)param_1[4],0xa5,0,0xa5);
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8);
  param_1[5] = pQVar8;
  QBoxLayout::setSpacing((int)pQVar8);
  pQVar2 = (QString *)param_1[5];
  QString::fromUtf8_helper((char *)&local_70,0x1df04e1);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099d074;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10099d074:
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar11;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x20;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[6] = puVar6;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar6);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[3],0);
  param_1[7] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099d147;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10099d147:
  pQVar2 = (QString *)param_1[7];
  local_80 = (QArrayData *)
             QString::fromLatin1_helper
                       ("QLabel {\n\tfont-size: 24pt;\n\tfont-weight: 300;\n}\n",0x30);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099d19c;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10099d19c:
  QBoxLayout::addWidget(param_1[5],param_1[7],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[4],(int)param_1[5]);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[8] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar2 = (QString *)param_1[8];
  QString::fromUtf8_helper((char *)&local_88,0x1dd6546);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099d239;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10099d239:
  pQVar9 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar9,(QWidget *)param_1[3]);
  param_1[9] = pQVar9;
  QString::fromUtf8_helper((char *)&local_90,0x1e33476);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099d2b2;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10099d2b2:
  QAbstractButton::setChecked(SUB81(param_1[9],0));
  QBoxLayout::addWidget(param_1[8],param_1[9],0,0);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[10] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar2 = (QString *)param_1[10];
  QString::fromUtf8_helper((char *)&local_98,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099d357;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10099d357:
  pQVar9 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar9,(QWidget *)param_1[3]);
  param_1[0xb] = pQVar9;
  QString::fromUtf8_helper((char *)&local_a0,0x1e33480);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099d3d0;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10099d3d0:
  QBoxLayout::addWidget(param_1[10],param_1[0xb],0,0);
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8);
  param_1[0xc] = pQVar8;
  QBoxLayout::setSpacing((int)pQVar8);
  pQVar2 = (QString *)param_1[0xc];
  QString::fromUtf8_helper((char *)&local_a8,0x1df027f);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099d464;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10099d464:
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar11;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1d;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xd] = puVar6;
  (**(code **)(*(long *)param_1[0xc] + 0x70))((long *)param_1[0xc],puVar6);
  this = operator_new(0x38);
  CPrlFileDevSelectorWidget::CPrlFileDevSelectorWidget(this,(QWidget *)param_1[3]);
  param_1[0xe] = this;
  QString::fromUtf8_helper((char *)&local_b0,0x1e3348f);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099d53e;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10099d53e:
  QBoxLayout::addWidget(param_1[0xc],param_1[0xe],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[10],(int)param_1[0xc]);
  QBoxLayout::addLayout((QLayout *)param_1[8],(int)param_1[10]);
  QBoxLayout::addLayout((QLayout *)param_1[4],(int)param_1[8]);
  QBoxLayout::addWidget(*param_1,param_1[3],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar11;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1b00000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xf] = puVar6;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar6);
  pCVar10 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar10,param_2,1);
  param_1[0x10] = pCVar10;
  QString::fromUtf8_helper((char *)&local_b8,0x1e3349c);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10099d672;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10099d672:
  pcVar3 = (char *)param_1[0x10];
  QVariant::QVariant(&local_c8,3);
  QObject::setProperty(pcVar3,(QVariant *)"spacing");
  QVariant::~QVariant(&local_c8);
  pcVar3 = (char *)param_1[0x10];
  QVariant::QVariant(&local_d8,0x1d);
  QObject::setProperty(pcVar3,(QVariant *)"indicatorSize");
  QVariant::~QVariant(&local_d8);
  QBoxLayout::addWidget(*param_1,param_1[0x10],0,4);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar11;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x11] = puVar6;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar6);
  FUN_10099dea0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

