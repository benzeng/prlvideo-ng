
void FUN_100665900(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  uint uVar4;
  QGridLayout *this;
  undefined8 *puVar5;
  QLabel *pQVar6;
  undefined *puVar7;
  QArrayData *local_100;
  QPixmap local_f8 [32];
  QArrayData *local_d8;
  QArrayData *local_d0;
  QPixmap local_c8 [32];
  uint local_a8 [2];
  QArrayData *local_a0;
  QArrayData *local_98;
  uint local_90 [2];
  QArrayData *local_88;
  QArrayData *local_80;
  uint local_78 [2];
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
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
      if (*(int *)local_40 != 0) goto LAB_100665956;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100665956:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e0bb6c);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1006659ad;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1006659ad:
  local_38 = true;
  uStack_37 = 0x1a0000003;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1e0bb8a);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100665a37;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100665a37:
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_68,0x1dd67e5);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_100665aa5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100665aa5:
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar7 = PTR_vtable_1021e17a0 + 0x10;
  *puVar5 = puVar7;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[1] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,4,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[2] = pQVar6;
  QString::fromUtf8_helper((char *)&local_70,0x1e0bba9);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100665ba0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100665ba0:
  local_78[0] = 0x450000;
  QSizePolicy::setControlType(local_78,1);
  local_78[0] = local_78[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_78[0] = local_78[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[2]);
  QGridLayout::addWidget(*param_1,param_1[2],6,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[3] = pQVar6;
  QString::fromUtf8_helper((char *)&local_80,0x1e0bbb7);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_100665c77;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100665c77:
  QLabel::setTextInteractionFlags(param_1[3],3);
  QGridLayout::addWidget(*param_1,param_1[3],3,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1e0bbc9);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_100665d1c;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100665d1c:
  local_90[0] = 0x570000;
  QSizePolicy::setControlType(local_90,1);
  local_90[0] = local_90[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[4]);
  pQVar2 = (QString *)param_1[4];
  local_98 = (QArrayData *)
             QString::fromLatin1_helper
                       ("QWidget {\ncolor: rgba( 255, 255, 255, 80% );\nfont-size: 24pt;\n}",0x3f);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_100665dcc;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100665dcc:
  QLabel::setAlignment(param_1[4],0x84);
  QGridLayout::addWidget(*param_1,param_1[4],0,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[5] = pQVar6;
  QString::fromUtf8_helper((char *)&local_a0,0x1e0bc1f);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100665e77;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100665e77:
  local_a8[0] = 0x70000;
  QSizePolicy::setControlType(local_a8,1);
  local_a8[0] = local_a8[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_a8[0] = local_a8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  QWidget::setMinimumSize((int)param_1[5],0);
  QWidget::setMaximumSize((int)param_1[5],0xffffff);
  pQVar3 = (QPixmap *)param_1[5];
  QString::fromUtf8_helper((char *)&local_d0,0x1dd6756);
  QPixmap::QPixmap(local_c8,&local_d0,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_c8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100665f6c;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100665f6c:
  QLabel::setScaledContents(SUB81(param_1[5],0));
  QLabel::setAlignment(param_1[5],0x84);
  QGridLayout::addWidget(*param_1,param_1[5],1,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[6] = pQVar6;
  QString::fromUtf8_helper((char *)&local_d8,0x1e0bc30);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100666025;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100666025:
  uVar4 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  QWidget::setMinimumSize((int)param_1[6],0);
  QWidget::setMaximumSize((int)param_1[6],0xffffff);
  pQVar3 = (QPixmap *)param_1[6];
  QString::fromUtf8_helper((char *)&local_100,0x1e0bc3d);
  QPixmap::QPixmap(local_f8,&local_100,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_f8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006660ff;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1006660ff:
  QLabel::setAlignment(param_1[6],0x84);
  QGridLayout::addWidget(*param_1,param_1[6],5,0,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar7;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[7] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,2,0,1,1,0);
  FUN_100666540(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

