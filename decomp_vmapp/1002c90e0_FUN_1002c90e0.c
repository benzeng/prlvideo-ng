
void FUN_1002c90e0(undefined8 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_1002c78e0();
  *param_1 = &PTR_FUN_100bb36b0;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined4 *)(param_1 + 0x292) = 1;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffff;
  cVar1 = FUN_1002c79c0(param_1,0);
  if (cVar1 != '\0') {
    uVar3 = FUN_10070e6f0("I@devices.usb.uhci.process_frame");
    param_1[0x294] = uVar3;
    uVar3 = FUN_10070e6f0("I@devices.usb.uhci.activity");
    param_1[0x295] = uVar3;
    uVar3 = FUN_10070e6f0("I@devices.usb.uhci.vcpusignal.total");
    param_1[0x296] = uVar3;
    uVar3 = FUN_10070e6f0("I@devices.usb.uhci.processpkt");
    param_1[0x297] = uVar3;
    uVar3 = FUN_10070e6f0("I@devices.usb.uhci.ioasynccallback");
    param_1[0x298] = uVar3;
    uVar2 = FUN_1007da300("devices.usb.uhc_max_depth",0x4ca90);
    *(undefined4 *)(param_1 + 0x299) = uVar2;
    uVar2 = FUN_1007da300("devices.usb.uhc_td_loglimit",10);
    *(undefined4 *)(param_1 + 0x29a) = uVar2;
    *(undefined4 *)((long)param_1 + 0x14cc) = 0;
    uVar3 = FUN_10070e6f0("I@devices.usb.uhci.invalid_td");
    param_1[0x29b] = uVar3;
  }
  return;
}

