
void FUN_1002d1e00(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_1002c78e0();
  *param_1 = &PTR_FUN_100bb39e8;
  *(undefined4 *)(param_1 + 0xb) = 0xe;
  *(undefined4 *)(param_1 + 0x292) = 3;
  *(undefined4 *)(param_1 + 0x299) = 0;
  cVar1 = FUN_1002c79c0(param_1,2);
  if (cVar1 != '\0') {
    ___bzero(param_1 + 0x29a,0xa850);
    uVar2 = FUN_10070e6f0("I@devices.usb.xhci.process_frame");
    param_1[0x294] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.usb.xhci.activity");
    param_1[0x295] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.usb.xhci.vcpusignal.total");
    param_1[0x296] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.usb.xhci.processpkt");
    param_1[0x297] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.usb.xhci.ioasynccallback");
    param_1[0x298] = uVar2;
    DAT_100bfa114 = param_1 + 0x2c2;
    DAT_100bf9f3d = DAT_100bf9f3d | 1;
    DAT_100bfa12d = DAT_100bfa12d | 1;
    DAT_100bf9f24 = param_1 + 0x29a;
  }
  return;
}

