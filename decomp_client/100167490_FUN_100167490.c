
void FUN_100167490(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long local_20;
  char local_11;
  
  local_11 = '\0';
  local_20 = *param_2;
  if (local_20 != 0) {
    _PrlHandle_AddRef();
  }
  uVar1 = SdkUtils::getJobResultCode(&local_20,&local_11);
  if (local_20 != 0) {
    _PrlHandle_Free();
  }
  if (local_11 == '\0') {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: couldn\'t get job return code. Return code: [%.8X]",uVar1);
  }
  return;
}

