
undefined8 * FUN_100051ab0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  *param_1 = PTR_shared_null_1021e1288;
  QMutex::lock();
  lVar1 = DAT_1023108a8;
  if (DAT_1023108a8 != 0) {
    DAT_1023108b0 = DAT_1023108b0 + 1;
  }
  QMutex::unlock();
  if (lVar1 == 0) {
    FUN_100df99c0("SGASMGMT","prl_client_app",0,"Failed to get CSharedAppsDsp instance");
  }
  else {
    FUN_1000ace50(lVar1,param_2,param_1);
    FUN_100055290(&DAT_102310898);
  }
  return param_1;
}

