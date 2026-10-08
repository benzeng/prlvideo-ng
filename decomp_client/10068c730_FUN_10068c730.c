
void FUN_10068c730(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100dddcf0(param_2);
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"Download Trial activation promo finished: %s",uVar1)
  ;
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220a9e0);
  if (lVar2 != 0) {
    FUN_10084cc40(param_1,param_2,lVar2);
    return;
  }
  return;
}

