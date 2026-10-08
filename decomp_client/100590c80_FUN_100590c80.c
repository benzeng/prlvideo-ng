
void FUN_100590c80(long param_1,undefined8 param_2)

{
  int iVar1;
  QMacToolBarItem *pQVar2;
  long local_78;
  QVariant local_70;
  QIcon local_60 [8];
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar1 = QStackedWidget::indexOf(*(QWidget **)(param_1 + 0xb0));
  if (iVar1 == -1) {
    return;
  }
  pQVar2 = (QMacToolBarItem *)QMacToolBar::addStandardItem(*(undefined8 *)(param_1 + 0xd0),0);
  FUN_100525a50(&local_40,param_2);
  QMacToolBarItem::setText((QString *)pQVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100590d0b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100590d0b:
  QMacToolBarItem::setSelectable(SUB81(pQVar2,0));
  QObject::property((char *)&local_50);
  if ((local_50.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
    FUN_1005259f0(local_60,param_2);
    QMacToolBarItem::setIcon((QIcon *)pQVar2);
    QIcon::~QIcon(local_60);
  }
  else {
    QVariant::toString();
    MacUtils::setToolbarItemStandardImage(pQVar2,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100590da3;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_100590da3:
  QVariant::QVariant(&local_70,iVar1);
  QObject::setProperty((char *)pQVar2,(QVariant *)"pageIndex");
  QVariant::~QVariant(&local_70);
  QObject::connect(&local_78,pQVar2,"2activated()",param_1,"1onToolbarItemActivated()",0);
  if (local_78 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  QVariant::~QVariant(&local_50);
  return;
}

