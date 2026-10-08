
QVariant * FUN_100594480(QVariant *param_1)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c0);
  if (lVar2 == 0) {
    (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
    (param_1->field0_0x0).field0_0x0.field7 = 0;
  }
  else {
    uVar1 = QAbstractButton::isChecked();
    uStack_18 = CONCAT17(uVar1,(undefined7)uStack_18) ^ 0x100000000000000;
    QVariant::QVariant(param_1,1,(void *)((long)&uStack_18 + 7),0);
  }
  return param_1;
}

