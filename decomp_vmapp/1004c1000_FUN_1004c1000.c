
void FUN_1004c1000(void)

{
  char cVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","SharedProfileHost",1,
                    "failed to update shell folders list: configuration is not available");
      return;
    }
  }
  else {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharedProfile();
    cVar1 = CVmSharedProfile::isEnabled();
    if (cVar1 != '\0') {
      local_20 = (QArrayData *)PTR_shared_null_100ba20d0;
      cVar1 = CVmSharedProfile::isUseDesktop();
      if (cVar1 != '\0') {
        FUN_10050fa80(1,&local_20,1);
      }
      cVar1 = CVmSharedProfile::isUseDocuments();
      if (cVar1 != '\0') {
        FUN_10050fa80(2,&local_20,1);
      }
      cVar1 = CVmSharedProfile::isUsePictures();
      if (cVar1 != '\0') {
        FUN_10050fa80(3,&local_20,1);
      }
      cVar1 = CVmSharedProfile::isUseMusic();
      if (cVar1 != '\0') {
        FUN_10050fa80(4,&local_20,1);
      }
      cVar1 = CVmSharedProfile::isUseMovies();
      if (cVar1 != '\0') {
        FUN_10050fa80(5,&local_20,1);
      }
      cVar1 = CVmSharedProfile::isUseDownloads();
      if (cVar1 != '\0') {
        FUN_10050fa80(6,&local_20,1);
      }
      if (*(int *)local_20 != -1) {
        if (*(int *)local_20 != 0) {
          LOCK();
          *(int *)local_20 = *(int *)local_20 + -1;
          UNLOCK();
          if (*(int *)local_20 != 0) {
            return;
          }
          local_12 = 0;
        }
        QArrayData::deallocate(local_20,2,8);
      }
    }
  }
  return;
}

