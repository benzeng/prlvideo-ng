
void FUN_1002b4780(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1002b3f30();
  *param_1 = &PTR_metaObject_100bb3028;
  param_1[2] = &PTR_FUN_100bb30c8;
  param_1[3] = "CPs2Keyboard";
  DAT_100bfacdd = DAT_100bfacdd | 1;
  DAT_100bfacc4 = param_1;
  lVar1 = FUN_1002f0000(0xc,0,0xffff);
  param_1[0x20d9] = lVar1;
  if (lVar1 == 0) {
    FUN_1008e3970("","LocalDevices",0,"Failed to open main queue");
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000001,&local_38);
    FUN_10002d9d0(&local_38);
  }
  else {
    uVar2 = FUN_10070e6f0("I@devices.hid.ps2.keys");
    param_1[6] = uVar2;
    uVar2 = FUN_10070e6f0("I@devices.hid.ps2.dropped_keys");
    param_1[7] = uVar2;
  }
  return;
}

