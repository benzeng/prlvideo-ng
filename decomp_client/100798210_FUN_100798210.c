
void FUN_100798210(CAbstractProgressOperation *param_1,undefined4 **param_2,QObject *param_3)

{
  undefined4 **ppuVar1;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  Connection local_30 [8];
  Connection local_28 [8];
  Connection local_20 [8];
  
  CAbstractProgressOperation::CAbstractProgressOperation(param_1,param_3);
  param_1->field0_0x0 = (undefined4 **)&PTR_FUN_10222c440;
  param_1[1].field0_0x0 = param_2;
  QObject::connect(local_20,param_2,"2progressChanged(DownloadProgressData)",param_1,
                   "1onApplianceProgressChanged(DownloadProgressData)",0);
  QMetaObject::Connection::~Connection(local_20);
  QObject::connect(local_28,param_1[1].field0_0x0,"2stateChanged(PRL_APPLIANCE_DOWNLOAD_STATUS)",
                   param_1,"1onApplianceStateChanged(PRL_APPLIANCE_DOWNLOAD_STATUS)",0);
  QMetaObject::Connection::~Connection(local_28);
  QObject::connect(local_30,param_1[1].field0_0x0,"2waitingForStatusChange()",param_1,
                   "1onWaitingForStatusChangeStarted()",0);
  QMetaObject::Connection::~Connection(local_30);
  CAbstractProgressOperation::setPausable(SUB81(param_1,0));
  FUN_100798340(param_1,*(undefined4 *)(param_1[1].field0_0x0 + 0x2c));
  ppuVar1 = param_1[1].field0_0x0;
  local_38 = ppuVar1[0x30];
  local_40 = ppuVar1[0x2f];
  local_50 = ppuVar1[0x2d];
  local_48 = ppuVar1[0x2e];
  FUN_1007987c0(param_1,&local_50);
  return;
}

