
void FUN_10035c750(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",4,"Process key from hook.");
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010035c7b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_2,param_3);
  return;
}

