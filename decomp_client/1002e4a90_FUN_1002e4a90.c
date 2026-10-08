
void FUN_1002e4a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  Connection local_38 [8];
  
  if (DAT_102310990 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1006ea620(pvVar1);
    DAT_102273501 = 1;
    DAT_102310990 = pvVar1;
  }
  QObject::connect(local_38,DAT_102310990,"2upgradePurchaseRequestFinished(PRL_RESULT)",param_1,
                   "1onRequestProductUpgradePurchaseFinished(PRL_RESULT)",0x80);
  QMetaObject::Connection::~Connection(local_38);
  if (DAT_102310990 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1006ea620(pvVar1);
    DAT_102273501 = 1;
    DAT_102310990 = pvVar1;
  }
  FUN_1006ea700(DAT_102310990,param_2,param_3);
  return;
}

