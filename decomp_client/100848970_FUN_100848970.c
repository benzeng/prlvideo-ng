
int FUN_100848970(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = CDeclarativeWizardPage::qt_metacall();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 2) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 2) {
        if (iVar1 == 1) {
          FUN_10065fc20(param_1,param_4[1]);
        }
        else if (iVar1 == 0) {
          FUN_10065fba0(param_1,*(undefined1 *)param_4[1]);
        }
      }
    }
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

