
QVariant * FUN_1005941d0(QVariant *param_1)

{
  long lVar1;
  undefined1 local_18 [8];
  
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221bf80);
  if (lVar1 == 0) {
    (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
    (param_1->field0_0x0).field0_0x0.field7 = 0;
  }
  else {
    FUN_10056c8b0(local_18,lVar1);
    if (DAT_1022743e0 == 0) {
      DAT_1022743e0 = FUN_100598d80("QList<CSendKeyToVmInfo>",0xffffffffffffffff,1);
    }
    QVariant::QVariant(param_1,DAT_1022743e0,local_18,0);
    FUN_10056e3a0(local_18);
  }
  return param_1;
}

