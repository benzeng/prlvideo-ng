
void FUN_10035c610(long param_1,int param_2)

{
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Process VM state change.");
  }
  if (param_2 == 0x3000000b) {
                    /* WARNING: Could not recover jumptable at 0x00010035c660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0x30) + 0xb8))();
    return;
  }
  if (param_2 == 0x30000004) {
                    /* WARNING: Could not recover jumptable at 0x00010035c67d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0x30) + 0xa8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010035c692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0x30) + 0xb0))();
  return;
}

