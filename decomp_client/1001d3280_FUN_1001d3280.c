
void FUN_1001d3280(undefined8 param_1)

{
  char cVar1;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[APP_QUIT]","prl_client_app",3,"Application quit timeout");
  }
  cVar1 = FUN_1001d2a80(param_1);
  if (cVar1 != '\0') {
    FUN_1001d12b0(param_1,0x80000001,1,5);
    return;
  }
  return;
}

