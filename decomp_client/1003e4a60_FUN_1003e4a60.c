
void FUN_1003e4a60(undefined8 param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  
  if (-1 < param_2) {
    QObject::sender();
    lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102206a40);
    if (lVar2 == 0) {
      return;
    }
    bVar1 = (bool)CVmConfiguration::getVmSecurity();
    CVmSecurity::setLockedSign(bVar1);
  }
  FUN_1003e3340(param_1);
  FUN_1003e31a0(param_1);
  CMappingModel::dataChanged();
  return;
}

