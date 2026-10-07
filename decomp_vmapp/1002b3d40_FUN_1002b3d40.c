
void FUN_1002b3d40(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1007da300("devices.hid.usb.abs_border_x");
  *(undefined4 *)(param_1 + 200) = uVar1;
  uVar1 = FUN_1007da300("devices.hid.usb.abs_border_y",param_3);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  return;
}

