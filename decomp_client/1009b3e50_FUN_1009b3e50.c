
void FUN_1009b3e50(undefined8 param_1,int param_2,undefined4 param_3)

{
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","TransporterWizardModel",2,
                  "Client computer notification, type = %u, error = 0x%x",param_2,param_3);
  }
  if (param_2 == 0x11) {
    FUN_1009b40f0(param_1,param_3);
    return;
  }
  if (param_2 == 2) {
    FUN_1009b3ee0(param_1);
    return;
  }
  return;
}

