
undefined8 FUN_1006c4c30(void)

{
  int iVar1;
  
  iVar1 = FUN_1006c8f60(0xffffffff);
  if (iVar1 != 0) {
    FUN_1008e3970("","prl_net",0,
                  "[unconfigurePrlAdapter] Warning: failed to remove parallels adapter %d from SCPreferences."
                  ,0xffffffff);
  }
  return 0;
}

