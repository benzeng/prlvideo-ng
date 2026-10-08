
void FUN_10017a680(QAction *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_10017a9e0();
  QMenu::addSeparator();
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    FUN_10017ad60(param_1);
  }
  FUN_10017b290(param_1);
  pvVar2 = operator_new(0x10);
  FUN_1007b5f00(pvVar2,param_1);
  uVar3 = FUN_10017b6f0(param_1);
  FUN_1007b5f30(pvVar2,uVar3);
  uVar3 = FUN_10017bb70(param_1);
  FUN_1007b5f30(pvVar2,uVar3);
  QActionGroup::setExclusive(SUB81(pvVar2,0));
  FUN_10017bd50(param_1);
  pvVar2 = operator_new(0x18);
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,0x1dc3fe1);
  FUN_1007b5750(pvVar2,0xc,param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10017a77e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10017a77e:
  QObject::connect(local_38,pvVar2,"2triggered(bool)",param_1,"1onSFConfigure()",0);
  QMetaObject::Connection::~Connection(local_38);
  QMenu::addSeparator();
  QWidget::addAction(param_1);
  return;
}

