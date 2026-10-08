
void FUN_1003a34e0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1003b0a30(param_1 + 0x20);
  if (lVar2 == 0) {
    FUN_100df99c0("[CFG_ED]","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  uVar3 = FUN_1003b0a30(param_1 + 0x20);
  iVar1 = FUN_10018a9d0(uVar3);
  if (1 < iVar1 + 0xcffffffcU) {
    if (iVar1 == 0x30000009) {
      FUN_1003a30a0(param_1,0);
      return;
    }
    if (iVar1 != 0x30000001) {
      return;
    }
  }
  FUN_1003a30a0(param_1,1);
  QStackedWidget::currentWidget();
  uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
  FUN_1003a1b20(param_1,uVar3);
  return;
}

