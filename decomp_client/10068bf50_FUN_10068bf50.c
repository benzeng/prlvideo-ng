
void FUN_10068bf50(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_PTR_102209d50);
  if (lVar1 != 0) {
    uVar2 = FUN_100dddcf0(param_2);
    FUN_100df99c0("[LICENSE]","prl_client_app",0,
                  "Resend confirmation to email was finished: %s confirmed: %d",uVar2,
                  *(undefined1 *)(lVar1 + 0x48));
    FUN_10084cac0(param_1,param_2,*(undefined1 *)(lVar1 + 0x48));
    return;
  }
  return;
}

