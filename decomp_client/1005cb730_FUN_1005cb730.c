
void FUN_1005cb730(void)

{
  bool bVar1;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmSharedProfile();
  CVmSharedProfile::setEnabled(bVar1);
  bVar1 = (bool)CVmTools::getVmSharedProfile();
  CVmSharedProfile::setUseDesktop(bVar1);
  bVar1 = (bool)CVmTools::getVmSharedProfile();
  CVmSharedProfile::setUseDocuments(bVar1);
  bVar1 = (bool)CVmTools::getVmSharedProfile();
  CVmSharedProfile::setUseMusic(bVar1);
  bVar1 = (bool)CVmTools::getVmSharedProfile();
  CVmSharedProfile::setUsePictures(bVar1);
  return;
}

