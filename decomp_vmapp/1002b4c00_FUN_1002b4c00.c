
void FUN_1002b4c00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1002b3f30();
  *param_1 = &PTR_metaObject_100bb3108;
  param_1[2] = &PTR_FUN_100bb31a8;
  param_1[3] = "CUsbKeyboard";
  *(undefined8 *)((long)param_1 + 0x106c1) = 0;
  uVar1 = FUN_1000915f0(DAT_1011c3698);
  param_1[0x20da] = uVar1;
  param_1[0x20db] = 0;
  uVar1 = FUN_10070e6f0("I@devices.hid.usb.keys");
  param_1[6] = uVar1;
  uVar1 = FUN_10070e6f0("I@devices.hid.usb.dropped_keys");
  param_1[7] = uVar1;
  return;
}

