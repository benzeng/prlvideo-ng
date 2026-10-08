
void FUN_100ccc7f0(void)

{
  bool bVar1;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getSharedVolumes();
  CVmSharedVolumes::setEnabled(bVar1);
  return;
}

