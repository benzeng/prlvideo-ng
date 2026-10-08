
void FUN_1009a5ff0(undefined8 param_1,int param_2,undefined4 param_3)

{
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","TransporterWizardModel",2,
                  "Client computer notification, type = %u, error = 0x%x",param_2,param_3);
  }
  if (param_2 == 2) {
    FUN_1009a6050(param_1);
    return;
  }
  return;
}

