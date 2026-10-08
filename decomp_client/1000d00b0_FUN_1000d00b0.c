
void FUN_1000d00b0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 != '\0') {
    return;
  }
  uVar2 = FUN_1006915d0();
  uVar3 = FUN_100152280();
  uVar3 = FUN_1001548f0(uVar3,param_1 + 0x10);
  uVar2 = FUN_100691620(uVar2,0x85,uVar3);
  cVar1 = QAction::isVisible();
  if (cVar1 != '\0') {
    QAction::activate(uVar2,0);
    return;
  }
  uVar2 = FUN_100748240();
  local_30 = (QArrayData *)QString::fromAscii_helper("win10.upgrade.advisor",0x15);
  uVar2 = FUN_100748290(uVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000d017a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000d017a:
  QObject::connect(local_38,uVar2,"2stateChanged(WebStore::CCatalogModel::State)",param_1,
                   "1onCatalogStateChanged(WebStore::CCatalogModel::State)",0x80);
  QMetaObject::Connection::~Connection(local_38);
  FUN_1007469d0(uVar2,1);
  return;
}

