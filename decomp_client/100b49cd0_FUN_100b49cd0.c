
void FUN_100b49cd0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100b4e3b0();
  if (iVar1 != 0) {
    FUN_100df99c0("","prl_net",0,
                  "[unconfigurePrlAdapter] Warning: failed to remove parallels adapter %d from SCPreferences."
                  ,param_1);
    return;
  }
  return;
}

