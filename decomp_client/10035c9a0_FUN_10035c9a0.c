
void FUN_10035c9a0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",4,"Process menu hide.");
  }
  uVar2 = FUN_1006b56b0();
  iVar1 = FUN_1006b5990(uVar2);
  if (0 < iVar1) {
    if (DAT_10230ffd0 < 3) {
      return;
    }
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,
                  "Open menu counter is %d, skip menu hide processing",iVar1);
    return;
  }
  FUN_10035db20(*(undefined8 *)(param_1 + 0x18),4,0);
                    /* WARNING: Could not recover jumptable at 0x00010035ca24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0x30) + 200))();
  return;
}

