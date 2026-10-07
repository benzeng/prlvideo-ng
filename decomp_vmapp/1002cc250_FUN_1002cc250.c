
void FUN_1002cc250(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_1002c78e0();
  *param_1 = &PTR_FUN_100bb3780;
  *(undefined4 *)(param_1 + 0xb) = 0xf;
  *(undefined4 *)(param_1 + 0x292) = 2;
  cVar1 = FUN_1002c79c0(param_1,1);
  if (cVar1 != '\0') {
    uVar2 = FUN_10070e6f0("I@devices.usb.ehci.process_frame");
    param_1[0x294] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.usb.ehci.activity");
    param_1[0x295] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.usb.ehci.vcpusignal");
    param_1[0x296] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.usb.ehci.vcpusignal.pcd");
    param_1[0x49a] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.usb.ehci.vcpusignal.int");
    param_1[0x49b] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.usb.ehci.vcpusignal.ue");
    param_1[0x49c] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.usb.ehci.vcpusignal.flr");
    param_1[0x49e] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.usb.ehci.vcpusignal.aa");
    param_1[0x49d] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.usb.ehci.processpkt");
    param_1[0x297] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.usb.ehci.ioasynccallback");
    param_1[0x298] = uVar2;
    param_1[0x49f] = 0;
  }
  return;
}

