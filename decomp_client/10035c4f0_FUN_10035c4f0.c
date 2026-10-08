
void FUN_10035c4f0(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Process VM config change.");
  }
  FUN_100361a60(*(undefined8 *)(param_1 + 0x20));
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x28);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x140);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  uVar2 = CVmRunTimeOptions::getOptimizeModifiers();
                    /* WARNING: Could not recover jumptable at 0x00010035c572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2);
  return;
}

