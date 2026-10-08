
QString * FUN_100109c10(QString *param_1,undefined8 param_2)

{
  QArrayData *local_30;
  QArrayData *local_28;
  
  FUN_10015a320(param_2);
  CDispUser::getUserWorkspace();
  CDispUserWorkspace::getDefaultVmFolder();
  if (*(int *)(local_30 + 4) == 0) {
    CDispUserWorkspace::getVmDirectory();
  }
  else {
    CDispUserWorkspace::getDefaultVmFolder();
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100109c91;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100109c91:
  QDir::fromNativeSeparators(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

