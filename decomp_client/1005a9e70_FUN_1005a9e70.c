
undefined8 * FUN_1005a9e70(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (lVar1 == 0) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    FUN_10018f890(lVar1);
    EnumUtils::OsVerToString((uint)param_1);
  }
  return param_1;
}

