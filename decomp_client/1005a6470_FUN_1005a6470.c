
void FUN_1005a6470(long param_1,int param_2)

{
  long lVar1;
  
  if (-1 < param_2) {
    QObject::sender();
    lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102206a40);
    if (lVar1 == 0) {
      return;
    }
    CDispCommonPreferences::setLockedSign(SUB81(*(undefined8 *)(param_1 + 0x20),0));
  }
  FUN_10083e480(param_1);
  return;
}

