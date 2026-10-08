
void FUN_10075df80(undefined8 param_1)

{
  undefined8 uVar1;
  QString *pQVar2;
  undefined4 uVar3;
  
  QObject::sender();
  uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102229200);
  uVar3 = FUN_100762f60(uVar1);
  pQVar2 = (QString *)FUN_10075d060(param_1,uVar3);
  QAbstractButton::setText(pQVar2);
  return;
}

