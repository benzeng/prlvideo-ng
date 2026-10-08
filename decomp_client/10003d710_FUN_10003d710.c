
void FUN_10003d710(undefined8 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 1) {
    if (DAT_10230ffd0 < 2) {
      return;
    }
    pcVar1 = "Connected";
  }
  else {
    if (param_2 != 0) {
      return;
    }
    if (DAT_10230ffd0 < 2) {
      return;
    }
    pcVar1 = "Disconnected";
  }
  FUN_100df99c0("SGA_SERVER","prl_client_app",2,pcVar1);
  return;
}

