
void FUN_1006e8200(long *param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    return;
  }
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("[APP_UPDATE]","prl_client_app",2,"Server connected, initiating updater timer");
  }
                    /* WARNING: Could not recover jumptable at 0x0001006e8256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1,1);
  return;
}

