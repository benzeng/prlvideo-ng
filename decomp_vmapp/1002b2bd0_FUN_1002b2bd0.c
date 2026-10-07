
void FUN_1002b2bd0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1002b2100();
  *param_1 = &PTR_FUN_100bb2e18;
  lVar1 = FUN_1002f0000(0xc,0,0xffff);
  param_1[0x19] = lVar1;
  if (lVar1 == 0) {
    FUN_1008e3970("","LocalDevices",0,"Failed to open main queue");
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000001,&local_38);
    FUN_10002d9d0(&local_38);
  }
  else {
    param_1[0x18] = "CPs2Mouse";
    uVar2 = FUN_10070e6f0("I@devices.hid.ps2.moves");
    param_1[0xf] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.hid.ps2.dropped_moves");
    param_1[0x11] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.hid.ps2.sm.overrun");
    param_1[0x12] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.hid.ps2.sm.queued");
    param_1[0x13] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.hid.ps2.sm.split");
    param_1[0x14] = uVar2;
  }
  return;
}

