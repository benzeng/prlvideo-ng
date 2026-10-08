
QWidget * FUN_100257d20(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  QWidget *pQVar3;
  QVBoxLayout *this;
  QFont *pQVar4;
  size_t sVar5;
  CMacLinkButton *this_00;
  CMacLinkButton *this_01;
  int iVar6;
  long local_78;
  long local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QFont local_50 [16];
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar3 = operator_new(0x30);
  QWidget::QWidget(pQVar3,0,0);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,pQVar3);
  QLayout::setContentsMargins((int)this,0,0,0);
  QBoxLayout::setSpacing((int)this);
  pQVar4 = operator_new(0x30);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1ddfe35);
  QLabel::QLabel((QLabel *)pQVar4,&local_40,pQVar3,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100257df4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100257df4:
  puVar1 = PTR_s_Lucida_Grande_102270b40;
  iVar6 = -1;
  if (PTR_s_Lucida_Grande_102270b40 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_Lucida_Grande_102270b40);
    iVar6 = (int)sVar5;
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar6);
  QFont::QFont(local_50,&local_58,DAT_100e15278,-1,false);
  QWidget::setFont(pQVar4);
  QFont::~QFont(local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100257e82;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100257e82:
  QBoxLayout::addWidget(this,pQVar4,0,1);
  this_00 = operator_new(0x30);
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,0x1ddfe7e);
  CMacLinkButton::CMacLinkButton(this_00,&local_60,pQVar3);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100257eff;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100257eff:
  QBoxLayout::addWidget(this,this_00,0,1);
  this_01 = operator_new(0x30);
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,0x1ddfe96);
  CMacLinkButton::CMacLinkButton(this_01,&local_68,pQVar3);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100257f7c;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100257f7c:
  QBoxLayout::addWidget(this,this_01,0,1);
  QObject::connect(&local_70,this_00,"2clicked()",param_1,"1onDesktopForumButtonClicked()",0);
  if (local_70 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,this_01,"2clicked()",param_1,"1onSupportTwitterButtonClicked()",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,this_01,"2clicked()",param_1,"1onSupportTwitterButtonClicked()",0);
    if ((cVar2 != '\0') && (local_78 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  return pQVar3;
}

