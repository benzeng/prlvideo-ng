
void FUN_1004d78d0(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d792a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004d792a:
  pQVar1 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate
            ((char *)&local_38,"CVmEdDevSettingsDialog","Authenticate with OS X SSH public key",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d798b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004d798b:
  pQVar1 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate
            ((char *)&local_40,"CVmEdDevSettingsDialog","Set VM name as guest OS hostname",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d79ec;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004d79ec:
  pQVar1 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_48,"CVmEdDevSettingsDialog","Update Parallels Tools automatically",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d7a4d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004d7a4d:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_50,"CVmEdDevSettingsDialog","Restore Defaults",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d7aae;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004d7aae:
  pQVar1 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_58,"CVmEdDevSettingsDialog",
             "Not available for this guest operating system",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}

