
void FUN_10035c940(long param_1)

{
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",4,"Process menu show.");
  }
  FUN_10035db20(*(undefined8 *)(param_1 + 0x18),4,1);
                    /* WARNING: Could not recover jumptable at 0x00010035c99a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0x30) + 0xc0))();
  return;
}

