
void FUN_10039f590(long param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  QMacToolBarItem *pQVar3;
  long *plVar4;
  long local_80;
  QVariant local_78;
  QString local_68;
  QIcon local_60 [8];
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar3 = (QMacToolBarItem *)QMacToolBar::addStandardItem((QMacToolBar *)(param_1 + 0x60),0);
  (**(code **)(*param_2 + 0x1b0))(&local_40,param_2);
  QMacToolBarItem::setText((QString *)pQVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10039f607;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10039f607:
  QMacToolBarItem::setSelectable(SUB81(pQVar3,0));
  QObject::property((char *)&local_50);
  if ((local_50.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
    uVar1 = (**(code **)(*param_2 + 0x1a8))(param_2);
    FUN_1003b4b30(&local_68,uVar1,2);
    QIcon::QIcon(local_60,&local_68);
    QMacToolBarItem::setIcon((QIcon *)pQVar3);
    QIcon::~QIcon(local_60);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10039f6f8;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
  else {
    QVariant::toString();
    MacUtils::setToolbarItemStandardImage(pQVar3,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10039f6f8;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_10039f6f8:
  iVar2 = (**(code **)(*param_2 + 0x1a8))(param_2);
  QVariant::QVariant(&local_78,iVar2);
  QObject::setProperty((char *)pQVar3,(QVariant *)"Section");
  QVariant::~QVariant(&local_78);
  QStackedWidget::currentWidget();
  plVar4 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
  if (plVar4 == param_2) {
    MacUtils::selectToolbarItem((QMacToolBar *)(param_1 + 0x60),pQVar3);
  }
  QObject::connect(&local_80,pQVar3,"2activated()",param_1,"1onToolbarItemActivated()",0);
  if (local_80 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  QVariant::~QVariant(&local_50);
  return;
}

