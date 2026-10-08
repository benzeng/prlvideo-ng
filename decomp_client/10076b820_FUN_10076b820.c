
void FUN_10076b820(CBaseDialog *param_1,QObject *param_2,undefined8 param_3)

{
  QFont *pQVar1;
  QString *pQVar2;
  char cVar3;
  void *pvVar4;
  undefined8 uVar5;
  QPalette *pQVar6;
  long local_118;
  long local_110;
  QString local_108;
  QVariant local_100;
  QString local_f0;
  QVariant local_e8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  undefined1 local_80 [16];
  QPalette local_70 [16];
  QFont local_60 [16];
  QFont local_50 [16];
  QFont local_40 [16];
  QBrush local_30 [15];
  undefined1 local_21;
  
  CBaseDialog::CBaseDialog(param_1,param_3,0,0x1c0);
  *(undefined ***)param_1 = &PTR_FUN_102229ae0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102229cd0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102229d20;
  pvVar4 = operator_new(0x40);
  *(void **)(param_1 + 0x60) = pvVar4;
  uVar5 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(QObject **)(param_1 + 0x70) = param_2;
  QWidget::setWindowModality(param_1,0);
  QWidget::setAttribute(param_1,0x37,1);
  FUN_10076cb50(*(undefined8 *)(param_1 + 0x60),param_1);
  pQVar1 = *(QFont **)(*(long *)(param_1 + 0x60) + 0x30);
  FontUtils::getH3Font(SUB81(local_40,0));
  QWidget::setFont(pQVar1);
  QFont::~QFont(local_40);
  pQVar1 = *(QFont **)(*(long *)(param_1 + 0x60) + 0x20);
  FontUtils::getSmallFont(SUB81(local_50,0));
  QWidget::setFont(pQVar1);
  QFont::~QFont(local_50);
  pQVar1 = *(QFont **)(*(long *)(param_1 + 0x60) + 0x28);
  FontUtils::getSmallFont(SUB81(local_60,0));
  QWidget::setFont(pQVar1);
  QFont::~QFont(local_60);
  pQVar6 = (QPalette *)QWidget::palette();
  QPalette::QPalette(local_70,pQVar6);
  QColor::setRgb((int)local_80,0x5f,0x5f,0x5f);
  QBrush::QBrush(local_30,local_80,1);
  QPalette::setBrush(local_70,5,0,local_30);
  QBrush::~QBrush(local_30);
  QWidget::setPalette(*(QPalette **)(*(long *)(param_1 + 0x60) + 0x38));
  FUN_1001c72e0(&local_88);
  local_98 = (QArrayData *)QString::fromAscii_helper("<sup>%1</sup>",0xd);
  QString::arg(&local_90,&local_98,0xae,0,0x20);
  QString::append(&local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076ba2a;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10076ba2a:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076ba60;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10076ba60:
  cVar3 = FUN_100d80630(1);
  if (cVar3 == '\0') {
    QString::number((int)&local_a8,0xc);
    local_a0 = local_a8;
    if (1 < *(int *)local_a8 + 1U) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
    }
    QString::insert(&local_a0,0,0x20);
    QString::append(&local_88);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_21 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10076bb00;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_10076bb00:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_21 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10076bb36;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
  }
LAB_10076bb36:
  cVar3 = FUN_100d80630(1);
  if (cVar3 != '\0') {
    QMetaObject::tr((char *)&local_b8,PTR_staticMetaObject_1021e1520,(int)PTR_s_Lite_102270a50);
    local_b0 = local_b8;
    if (1 < *(int *)local_b8 + 1U) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + 1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
    }
    QString::insert(&local_b0,0,0x20);
    QString::append(&local_88);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_21 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10076bbe5;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_10076bbe5:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_21 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10076bc1b;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
  }
LAB_10076bc1b:
  QMetaObject::tr((char *)&local_c8,PTR_staticMetaObject_1021e1520,0x1dd2c37);
  local_c0 = local_c8;
  if (1 < *(int *)local_c8 + 1U) {
    LOCK();
    *(int *)local_c8 = *(int *)local_c8 + 1;
    local_21 = *(int *)local_c8 != 0;
    UNLOCK();
  }
  QString::insert(&local_c0,0,0x20);
  QString::append(&local_88);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_21 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076bcb5;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10076bcb5:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_21 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076bceb;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10076bceb:
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x60) + 0x38);
  QLabel::text();
  QString::arg(&local_d0,&local_d8,&local_88,0,0x20);
  QLabel::setText(pQVar2);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_21 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076bd66;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10076bd66:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_21 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076bd9c;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10076bd9c:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
  }
  FUN_100188480(&local_f0,uVar5);
  QVariant::QVariant(&local_e8,&local_f0);
  QObject::setProperty((char *)param_1,(QVariant *)"vmUuid");
  QVariant::~QVariant(&local_e8);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_21 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076be2a;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_10076be2a:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
  }
  FUN_1001884b0(&local_108,uVar5);
  QVariant::QVariant(&local_100,&local_108);
  QObject::setProperty((char *)param_1,(QVariant *)"serverUuid");
  QVariant::~QVariant(&local_100);
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_21 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076beb8;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_10076beb8:
  FUN_10076c510(param_1);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
  }
  uVar5 = FUN_10018d490(uVar5);
  QObject::connect(&local_110,uVar5,"2beforeVmRemoved(const CVmWrap&)",param_1,
                   "1onBeforeVmRemoved(const CVmWrap&)",0);
  if (local_110 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_110);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
  }
  QObject::connect(&local_118,uVar5,"2vmConfigurationChanged( const CVmConfiguration& )",param_1,
                   "1updateVmInfo()",0);
  if ((cVar3 != '\0') && (local_118 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_118);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_21 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076bfc8;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10076bfc8:
  QPalette::~QPalette(local_70);
  return;
}

