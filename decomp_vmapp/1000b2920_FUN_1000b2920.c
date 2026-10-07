
undefined8 FUN_1000b2920(undefined8 param_1)

{
  QArrayData *local_20;
  undefined1 local_11;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmEncryption();
  CVmEncryption::getPluginId();
  if (*(int *)(local_20 + 4) == 0) {
    FUN_1007d6cd0(param_1,&DAT_100b2dcc0);
  }
  else {
    FUN_1007d6920(param_1,&local_20);
  }
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return param_1;
}

