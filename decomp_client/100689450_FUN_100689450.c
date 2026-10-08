
void FUN_100689450(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_PTR_102209c20);
  if (lVar1 != 0) {
    uVar2 = FUN_100dddcf0(param_2);
    bVar3 = false;
    FUN_100df99c0("[LICENSE]","prl_client_app",0,
                  "ask account confirmation was finished: %s confirmed: %d",uVar2,
                  *(undefined1 *)(lVar1 + 0x48));
    if (-1 < param_2) {
      bVar3 = *(char *)(lVar1 + 0x48) != '\0';
    }
    FUN_10084ca60(param_1,bVar3);
    return;
  }
  return;
}

