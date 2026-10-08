
void FUN_100591150(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  QStackedWidget::currentIndex();
  QStackedWidget::widget((int)*(undefined8 *)(param_1 + 0xb0));
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221a0a0);
  if (lVar2 != 0) {
    uVar1 = FUN_100525b40(lVar2);
    AppHelpUtils::openHelpTopic(uVar1,0);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"Error: can\'t get current prefs page");
  return;
}

