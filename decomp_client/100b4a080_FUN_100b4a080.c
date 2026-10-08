
undefined8 FUN_100b4a080(void)

{
  int iVar1;
  
  iVar1 = FUN_100b4e3b0(0xffffffff);
  if (iVar1 != 0) {
    FUN_100df99c0("","prl_net",0,
                  "[unconfigurePrlAdapter] Warning: failed to remove parallels adapter %d from SCPreferences."
                  ,0xffffffff);
  }
  return 0;
}

