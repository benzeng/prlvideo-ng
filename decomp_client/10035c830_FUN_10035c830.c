
void FUN_10035c830(long param_1)

{
  long *plVar1;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Process Coherence service start.");
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010035c880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,0x19);
  return;
}

