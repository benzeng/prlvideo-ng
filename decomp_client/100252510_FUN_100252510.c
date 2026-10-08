
void FUN_100252510(long *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long local_20;
  
  if (1 < DAT_10230ffd0) {
    uVar1 = FUN_100dddcf0(param_2);
    FUN_100df99c0("","prl_client_app",2,
                  "Connection to local server has finished with RC = %.8X, [%s]",param_2,uVar1);
  }
  if (param_2 < 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100152280();
    lVar2 = FUN_1001554a0(uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_10016f500(lVar2);
      uVar1 = FUN_10061c0c0(uVar1);
      QObject::connect(&local_20,uVar1,"2jobCompleted(PRL_RESULT)",param_1,
                       "1onGetLicenseRequestFinished(PRL_RESULT)",0);
      if (local_20 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_20);
      return;
    }
    FUN_100df99c0("","prl_client_app",0,"Default(localhost) server instance is null.");
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar1 = 0x80000009;
  }
                    /* WARNING: Could not recover jumptable at 0x000100252608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}

