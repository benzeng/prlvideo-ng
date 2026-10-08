
void FUN_10068c8d0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100dddcf0(param_2);
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"Wait Keys changes in Account finished: %s",uVar1);
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102221b30);
  if (lVar2 != 0) {
    FUN_10084cca0(param_1,param_2,lVar2);
    return;
  }
  return;
}

