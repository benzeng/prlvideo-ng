
void FUN_100258380(undefined8 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  QWidget *pQVar6;
  QVBoxLayout *pQVar7;
  QFrame *pQVar8;
  QHBoxLayout *this;
  QLabel *pQVar9;
  QWidget *pQVar10;
  QPushButton *this_00;
  undefined8 *puVar11;
  QString *pQVar12;
  undefined8 uVar13;
  QString local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  Data_conflict local_f8;
  undefined4 local_f0;
  QArrayData *local_e8;
  QVariant local_e0;
  QVariant local_d0;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  QVariant local_80;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  if (*param_2 != 0x3c5c) {
    if (*param_2 != 0x3bb2) {
      return;
    }
    uVar13 = FUN_100152280();
    lVar5 = FUN_1001554a0(uVar13);
    if (lVar5 == 0) {
      return;
    }
    uVar13 = FUN_10016f500(lVar5);
    cVar1 = FUN_10061c2b0(uVar13,0x10080);
    if (cVar1 == '\0') {
      return;
    }
    pQVar6 = (QWidget *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1298);
    if (pQVar6 == (QWidget *)0x0) {
      return;
    }
    FUN_100257d20(param_1);
    CMessageBox::embedView(pQVar6);
    return;
  }
  lVar5 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1298);
  if (lVar5 == 0) {
    return;
  }
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,0,0);
  pQVar7 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar7,pQVar6);
  QLayout::setContentsMargins((int)pQVar7,0,0,0);
  pQVar8 = operator_new(0x30);
  QFrame::QFrame(pQVar8,pQVar6,0);
  QWidget::setFixedHeight((int)pQVar8);
  QFrame::setFrameShape(pQVar8,6);
  QFrame::setFrameShadow(pQVar8,0x20);
  QBoxLayout::addWidget(pQVar7,pQVar8,0);
  this = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this);
  QLayout::setContentsMargins((int)this,0,0,0);
  (**(code **)(*(long *)pQVar7 + 0x70))(pQVar7,this + 0x10);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,pQVar6,0);
  QBoxLayout::addWidget(this,pQVar9,0);
  QBoxLayout::addSpacing((int)this);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,pQVar6,0);
  QBoxLayout::addWidget(this,pQVar10,0);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,pQVar6,0);
  pQVar7 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar7,pQVar10);
  QLayout::setContentsMargins((int)pQVar7,0,0,0);
  QBoxLayout::addWidget(this,pQVar10,0,0);
  this_00 = operator_new(0x30);
  QPushButton::QPushButton(this_00,pQVar10);
  QObject::connect(&local_40,this_00,"2clicked()",param_1,"1onLearnMoreClicked()",0);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  local_48 = (QArrayData *)
             QString::fromAscii_helper
                       ("QPushButton { \tborder-image: url(:/red_button.png) 1 36 1 14; \tborder-top: 1px transparent; \tborder-bottom: 1px transparent; \tborder-right: 36px transparent; \tborder-left: 14px transparent; \tmin-height: 24; \tmin-width: 80;  \tcolor: white; } QPushButton:pressed { \tborder-image: url(:/red_button_pressed.png) 1 36 1 14; \tborder-top: 1px transparent; \tborder-bottom: 1px transparent; \tborder-right: 36px transparent; \tborder-left: 14px transparent; \tcolor: #E68E8E; } "
                        ,0x1d2);
  QWidget::setStyleSheet((QString *)this_00);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002585f4;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002585f4:
  QBoxLayout::addWidget(pQVar7,this_00,0,0);
  QMetaObject::tr((char *)&local_60,(char *)&PTR_staticMetaObject_1022048b0,0x1de0164);
  QSettings::QSettings((QSettings *)&local_80,(QObject *)0x0);
  local_88 = (QArrayData *)QString::fromAscii_helper("LastReleasedVersion",0x13);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  QSettings::value((QString *)&local_70,&local_80);
  iVar2 = QVariant::toInt((bool *)&local_70);
  QString::arg(&local_58,&local_60,(long)iVar2,0,10,0x20);
  local_a0 = (QArrayData *)QString::fromAscii_helper("@@PRODUCT_NAME",0xe);
  FUN_1001c72e0(&local_a8);
  puVar11 = (undefined8 *)QString::replace(&local_58,&local_a0,&local_a8,1);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar11;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100258726;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100258726:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025875c;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10025875c:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025878c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10025878c:
  QVariant::~QVariant(&local_70);
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002587d1;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002587d1:
  QSettings::~QSettings((QSettings *)&local_80);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100258811;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100258811:
  QMetaObject::tr((char *)&local_b0,(char *)&PTR_staticMetaObject_1022048b0,0x1de01c4);
  cVar1 = FUN_1006272c0();
  if (cVar1 != '\0') {
    QMetaObject::tr((char *)&local_c0,(char *)&PTR_staticMetaObject_1022048b0,0x1de01d2);
    QSettings::QSettings((QSettings *)&local_e0,(QObject *)0x0);
    local_e8 = (QArrayData *)QString::fromAscii_helper("LastReleasedVersion",0x13);
    local_f0 = 0x80000000;
    local_f8.field7 = 0;
    QSettings::value((QString *)&local_d0,&local_e0);
    iVar2 = QVariant::toInt((bool *)&local_d0);
    QString::arg(&local_b8,&local_c0,(long)iVar2,0,10,0x20);
    local_100 = (QArrayData *)QString::fromAscii_helper("@@PRODUCT_NAME",0xe);
    FUN_1001c72e0(&local_108);
    pQVar12 = (QString *)QString::replace(&local_b8,&local_100,&local_108,1);
    QString::operator=(&local_50,pQVar12);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100258975;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_100258975:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002589ab;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_1002589ab:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002589e1;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_1002589e1:
    QVariant::~QVariant(&local_d0);
    QVariant::~QVariant((QVariant *)&local_f8);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100258a2f;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_100258a2f:
    QSettings::~QSettings((QSettings *)&local_e0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100258a71;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_100258a71:
    QMetaObject::tr((char *)&local_110,(char *)&PTR_staticMetaObject_1022048b0,0x1de0249);
    QString::operator=(&local_b0,&local_110);
    if (*(int *)local_110.field0_0x0 != -1) {
      if (*(int *)local_110.field0_0x0 != 0) {
        LOCK();
        *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
        local_31 = *(int *)local_110.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100258adc;
      }
      QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
    }
  }
LAB_100258adc:
  QLabel::setText((QString *)pQVar9);
  QAbstractButton::setText((QString *)this_00);
  uVar13 = QWidget::layout();
  uVar3 = QGridLayout::rowCount();
  uVar4 = QGridLayout::columnCount();
  QGridLayout::addWidget(uVar13,pQVar6,uVar3,0,1,uVar4,0);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100258b6f;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_100258b6f:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return;
}

