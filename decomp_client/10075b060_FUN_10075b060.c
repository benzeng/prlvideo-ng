
void FUN_10075b060(void)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  
  FUN_100060bb0();
  uVar1 = FUN_100060bb0();
  uVar1 = FUN_1000609c0(uVar1);
  FUN_100061050(3,uVar1);
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (lVar2 != 0) {
    pvVar3 = operator_new(0x80);
    FUN_100249760(pvVar3,lVar2);
    CAbstractTask::execute();
    return;
  }
  FUN_100df99c0("[APP_TRAY_ICON]","prl_client_app",0,"Can\'t exit Crystal. VM is invalid");
  return;
}

