
void FUN_100cc4100(void)

{
  bool bVar1;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getMouseSync();
  MouseSync::setEnabled(bVar1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getClipboardSync();
  ClipboardSync::setEnabled(bVar1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getTimeSync();
  CVmToolsTimeSync::setEnabled(bVar1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getTimeSync();
  CVmToolsTimeSync::setKeepTimeDiff(bVar1);
  return;
}

