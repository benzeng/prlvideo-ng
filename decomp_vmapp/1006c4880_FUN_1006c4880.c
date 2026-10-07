
void FUN_1006c4880(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1006c8f60();
  if (iVar1 != 0) {
    FUN_1008e3970("","prl_net",0,
                  "[unconfigurePrlAdapter] Warning: failed to remove parallels adapter %d from SCPreferences."
                  ,param_1);
    return;
  }
  return;
}

