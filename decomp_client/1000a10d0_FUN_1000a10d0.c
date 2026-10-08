
void FUN_1000a10d0(undefined8 param_1,int param_2)

{
  char *pcVar1;
  
  if (DAT_10230ffd0 < 3) {
    return;
  }
  if (param_2 == 1) {
    pcVar1 = "ts_connected";
  }
  else {
    pcVar1 = "BAD_STATUS";
    if (param_2 == 2) {
      pcVar1 = "ts_disconnected";
    }
  }
  FUN_100df99c0("VSDC","prl_client_app",3,"CVSDebugClient::statusChanged(ts=%s)",pcVar1);
  return;
}

