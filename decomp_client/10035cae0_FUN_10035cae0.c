
void FUN_10035cae0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Process keyboard leds event.");
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010035cb33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe0))(plVar1,param_3);
  return;
}

