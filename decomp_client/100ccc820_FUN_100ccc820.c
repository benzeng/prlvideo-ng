
void FUN_100ccc820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  
  FUN_100cbf640();
  FUN_100cbfc70();
  FUN_100cc11d0();
  FUN_100cc1710();
  FUN_100cc2c60();
  FUN_100cc34b0();
  FUN_100cc41a0();
  FUN_100cc4870();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getSharedVolumes();
  CVmSharedVolumes::setEnabled(bVar1);
  FUN_100ccc770();
  FUN_100cc0040(param_1,param_2,param_3);
  FUN_100cc4100();
  return;
}

