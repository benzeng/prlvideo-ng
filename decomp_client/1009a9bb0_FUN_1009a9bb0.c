
void FUN_1009a9bb0(long param_1,int param_2)

{
  if (param_2 == 0x8000000) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","TransporterWizardModel",2,"Migration canceling has been completed");
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      if (*(int *)(param_1 + 0x50) == 2) {
        if (1 < DAT_10230ffd0) {
          FUN_100df99c0("","TransporterWizardModel",2,
                        "The migration is interrupted. Revert is completed");
        }
      }
      else {
        FUN_100df99c0("","TransporterWizardModel",0,"Wrong migration state, %d");
      }
      FUN_100998c50(param_1);
      return;
    }
  }
  return;
}

