
void FUN_10099a400(undefined8 param_1,int param_2,undefined4 param_3)

{
  FUN_100df99c0("","TransporterWizardModel",0,
                "Client computer notification, type = %u, error = 0x%x",param_2,param_3);
  if (param_2 == 2) {
    FUN_10099a450(param_1);
    return;
  }
  return;
}

