
void FUN_1001d3130(QObject *param_1)

{
  char cVar1;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[APP_QUIT]","prl_client_app",3,"Last window closed");
  }
  cVar1 = FUN_1001d2a80(param_1);
  if (cVar1 != '\0') {
    QTimer::singleShot(1000,param_1,"1onAppQuitTimeout()");
    return;
  }
  return;
}

