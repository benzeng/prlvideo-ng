
void FUN_1006390a0(QSize *param_1,QSize param_2,undefined8 param_3)

{
  QSize QVar1;
  QString *pQVar2;
  long *plVar3;
  Connection local_110 [8];
  Connection local_108 [8];
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  undefined8 local_e8;
  QPixmap local_e0 [32];
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QLocale local_88 [8];
  QArrayData *local_80;
  QArrayData *local_78;
  QColor local_70 [16];
  QColor local_60 [16];
  QPalette local_50 [16];
  QArrayData *local_40;
  QBrush local_38 [8];
  QBrush local_30 [15];
  undefined1 local_21;
  
  CBaseDialog::CBaseDialog((CBaseDialog *)param_1,param_3,0,0);
  *param_1 = (QSize)&PTR_FUN_1022229e0;
  param_1[2] = (QSize)&PTR_FUN_102222bd0;
  param_1[6] = (QSize)&PTR_FUN_102222c20;
  param_1[0x15] = param_2;
  FUN_10063a990(param_1 + 0xc,param_1);
  QDialog::setModal(SUB81(param_1,0));
  QWidget::setWindowModality(param_1,2);
  FUN_1001c72e0(&local_40);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063915a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10063915a:
  QPalette::QPalette(local_50);
  QColor::QColor(local_60,0x13);
  QBrush::QBrush(local_38,local_60,1);
  QPalette::setBrush(local_50,0,9,local_38);
  QBrush::~QBrush(local_38);
  QColor::QColor(local_70,0x13);
  QBrush::QBrush(local_30,local_70,1);
  QPalette::setBrush(local_50,2,9,local_30);
  QBrush::~QBrush(local_30);
  FontUtils::setNormalFont((QWidget *)param_1,false);
  local_80 = (QArrayData *)
             QString::fromAscii_helper("http://www.parallels.com/buy-pdfm12-@LOCALE@",0x2c);
  QLocale::QLocale(local_88);
  FUN_100d3f730(&local_78,&local_80,local_88);
  QLocale::~QLocale(local_88);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100639252;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100639252:
  FUN_1001c7700(&local_a0,PTR_s_You_will_not_be_able_to_start_vi_10226e178);
  local_a8 = (QArrayData *)QString::fromAscii_helper("REPLACEWITHURL",0xe);
  QString::arg(&local_98,&local_a0,&local_a8,0,0x20);
  local_b0 = (QArrayData *)QString::fromAscii_helper("#become_registered_user",0x17);
  QString::arg(&local_90,&local_98,&local_b0,0,0x20);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_21 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100639312;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100639312:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100639348;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100639348:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063937e;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10063937e:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006393b4;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1006393b4:
  local_b8 = (QArrayData *)QString::fromAscii_helper("REPLACEWITHURL",0xe);
  pQVar2 = (QString *)QString::replace(&local_90,&local_b8,&local_78,1);
  QString::operator=(&local_90,pQVar2);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063942d;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10063942d:
  FontUtils::setNormalFont((QWidget *)param_1[0x12],false);
  QVar1 = param_1[0x12];
  FUN_1001c7700(&local_c0,PTR_s_<b>Your_copy_of___PRODUCT_NAME_i_10226e170);
  QLabel::setText((QString *)QVar1);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_21 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063949d;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10063949d:
  FontUtils::setSmallFont((QWidget *)param_1[0x13],false);
  QLabel::setText((QString *)param_1[0x13]);
  plVar3 = (long *)CMessageDataProvider::instance();
  (**(code **)(*plVar3 + 0x70))(local_e0,plVar3,0x80000009,0);
  QLabel::setPixmap((QPixmap *)param_1[0xf]);
  QVar1 = param_1[0xf];
  local_e8 = QPixmap::size();
  QWidget::setFixedSize((QSize *)QVar1);
  pQVar2 = (QString *)QDialogButtonBox::button(param_1[0x14],0x400);
  if (pQVar2 != (QString *)0x0) {
    QMetaObject::tr((char *)&local_f0,(char *)&PTR_staticMetaObject_1022229a0,0x1e09956);
    QAbstractButton::setText(pQVar2);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_21 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100639593;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
  }
LAB_100639593:
  pQVar2 = (QString *)QDialogButtonBox::button(param_1[0x14],0x400000);
  if (pQVar2 != (QString *)0x0) {
    QMetaObject::tr((char *)&local_f8,(char *)&PTR_staticMetaObject_1022229a0,0x1dcdd79);
    QAbstractButton::setText(pQVar2);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_21 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100639613;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
  }
LAB_100639613:
  FUN_1001c72e0(&local_100);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_21 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100639664;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100639664:
  QObject::connect(local_108,param_1[0x13],"2linkActivated(const QString &)",param_1,
                   "1onLinkClicked(const QString &)",0);
  QMetaObject::Connection::~Connection(local_108);
  QObject::connect(local_110,param_1[0x13],"2linkHovered(const QString &)",param_1,
                   "1onLinkHovered(const QString &)",0);
  QMetaObject::Connection::~Connection(local_110);
  QWidget::setFixedSize(param_1);
  QPixmap::~QPixmap(local_e0);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_21 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063972c;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_10063972c:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063975c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10063975c:
  QPalette::~QPalette(local_50);
  return;
}

