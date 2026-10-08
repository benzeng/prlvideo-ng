
void FUN_1000bc3e0(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = FUN_1000bb580(param_1,param_3);
    if (iVar1 == -2) {
      FUN_1000bddb0(param_1 + 0x60);
      return;
    }
    if (iVar1 != 1) {
      return;
    }
  }
  else if (param_2 != 3) {
    if (DAT_10230ffd0 < 2) {
      return;
    }
    FUN_100df99c0("SGAA","prl_client_app",2,
                  "LaunchApp: user canceled on enabling Shared Host Applications");
    return;
  }
  FUN_1000be080(param_1 + 0x60,param_3);
  return;
}

