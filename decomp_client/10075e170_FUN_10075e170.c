
void FUN_10075e170(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  QString *pQVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      QObject::sender();
      uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102229200);
      uVar3 = FUN_100762f60(uVar1);
      pQVar2 = (QString *)FUN_10075d060(param_1,uVar3);
      QAbstractButton::setText(pQVar2);
      return;
    }
    if (param_3 == 0) {
      FUN_10075d230(param_1);
      return;
    }
  }
  return;
}

