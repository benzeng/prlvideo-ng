
void FUN_1002b2100(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_100bb2db0;
  QMutex::QMutex((QMutex *)(param_1 + 1),0);
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  param_1[0x18] = "CBaseMouse";
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  uVar2 = FUN_10070e6f0("I@devices.hid.abs_moves");
  param_1[0xd] = uVar2;
  uVar2 = FUN_10070e6f0("I@devices.hid.rel_moves");
  param_1[0xe] = uVar2;
  uVar2 = FUN_10070e6f0("I@devices.hid.uiemu.hwheel");
  param_1[0x15] = uVar2;
  uVar2 = FUN_10070e6f0("I@devices.hid.uiemu.dropped");
  param_1[0x16] = uVar2;
  uVar2 = FUN_10070e6f0("I@devices.hid.bogus_moves");
  param_1[0x10] = uVar2;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getSmoothScrolling();
  uVar1 = SmoothScrolling::isEnabled();
  *(undefined1 *)(param_1 + 0x17) = uVar1;
  return;
}

