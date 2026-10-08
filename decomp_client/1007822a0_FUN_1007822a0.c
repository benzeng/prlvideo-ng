
void FUN_1007822a0(undefined8 *param_1)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_40 [8];
  _func_void_Node_ptr *local_38;
  long local_30;
  undefined1 local_21;
  
  FUN_100782110();
  *param_1 = &PTR_FUN_10222a760;
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(&local_30,DAT_1023108e0,
                   "2licenseChanged(const QString&, const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                   ,param_1,
                   "1onLicenseChanged(const QString&, const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                   ,0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 != 0) {
    uVar3 = FUN_10016f500(lVar4);
    FUN_10061c2c0(local_40,uVar3);
    FUN_100782400(param_1,local_40);
    if (*(int *)(local_38 + 0x10) != -1) {
      if (*(int *)(local_38 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_38 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) {
          return;
        }
        local_21 = 0;
      }
      QHashData::free_helper(local_38);
    }
  }
  return;
}

