
void FUN_100781090(undefined8 param_1,undefined8 param_2)

{
  long in_RAX;
  undefined8 uVar1;
  long local_18;
  
  local_18 = in_RAX;
  uVar1 = FUN_10016f500(param_2);
  QObject::connect(&local_18,uVar1,
                   "2licenseChanged(const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                   ,param_1,"1onLicenseChanged()",0);
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  return;
}

