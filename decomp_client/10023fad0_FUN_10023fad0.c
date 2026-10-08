
void FUN_10023fad0(long *param_1)

{
  undefined8 uVar1;
  Connection local_20 [8];
  
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    uVar1 = FUN_10015c890(param_1[4],param_1 + 5);
    QObject::connect(local_20,uVar1,"2jobCompleted( PRL_RESULT )",param_1,
                     "1onCancelInstallFinished()",0);
    QMetaObject::Connection::~Connection(local_20);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: server instance is null");
                    /* WARNING: Could not recover jumptable at 0x00010023fb6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  return;
}

