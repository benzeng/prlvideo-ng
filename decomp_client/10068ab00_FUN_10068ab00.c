
void FUN_10068ab00(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100dddcf0(param_2);
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"Activation by trial key is finished: %s",uVar1);
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)&PTR_PTR_1022077c0);
  if (lVar2 != 0) {
    FUN_10084c520(param_1,param_2,*(undefined1 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x48));
    return;
  }
  return;
}

