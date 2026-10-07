
void FUN_1002b3450(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1002b2100();
  *param_1 = &PTR_FUN_100bb2e80;
  param_1[0x18] = "CUsbMouse";
  uVar1 = FUN_1000915f0(DAT_1011c3698);
  param_1[0x1a] = uVar1;
  param_1[0x1b] = 0;
  DAT_100bfad9d = DAT_100bfad9d | 1;
  DAT_100bfad84 = param_1;
  uVar1 = FUN_10070e6f0("I@devices.hid.usb.moves");
  param_1[0xf] = uVar1;
  uVar1 = FUN_10070e6f0("I@devices.hid.usb.dropped_moves");
  param_1[0x11] = uVar1;
  return;
}

