
void FUN_10099dea0(long param_1)

{
  QString *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar1 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_30,"WPInstallDisk","Get the installation files from:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10099df11;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10099df11:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_38,"WPInstallDisk","CD/DVD-ROM drive",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10099df72;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10099df72:
  pQVar1 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_40,"WPInstallDisk","This location:",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

