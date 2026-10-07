
bool FUN_1004c1dc0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  
  if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
    if (DAT_1011b55f8 < 1) {
      bVar2 = false;
    }
    else {
      bVar2 = false;
      FUN_1008e3970("","SharedProfileHost",1,"Configuration is not available");
    }
  }
  else {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharedProfile();
    switch(param_2) {
    case 1:
      cVar1 = CVmSharedProfile::isUseDesktop();
      break;
    case 2:
      cVar1 = CVmSharedProfile::isUseDocuments();
      break;
    case 3:
      cVar1 = CVmSharedProfile::isUsePictures();
      break;
    case 4:
      cVar1 = CVmSharedProfile::isUseMusic();
      break;
    case 5:
      cVar1 = CVmSharedProfile::isUseMovies();
      break;
    case 6:
      cVar1 = CVmSharedProfile::isUseDownloads();
      break;
    default:
      cVar1 = '\0';
    }
    bVar2 = cVar1 != '\0';
  }
  return bVar2;
}

