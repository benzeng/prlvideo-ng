
void FUN_10035c890(long param_1,undefined1 param_2)

{
  long *plVar1;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Process Dashboard appearance.");
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010035c8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xd8))(plVar1,param_2);
  return;
}

