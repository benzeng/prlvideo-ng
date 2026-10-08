
void FUN_1007266f0(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_100319390(*(undefined8 *)(param_1 + 0x10));
  FUN_10018c2b0(uVar1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharedApplications();
  uVar2 = CVmSharedApplications::isIconGroupingEnabled();
  uVar1 = FUN_100319c40(*(undefined8 *)(param_1 + 0x10));
  FUN_10032eb10(uVar1,0x12,uVar2);
  return;
}

