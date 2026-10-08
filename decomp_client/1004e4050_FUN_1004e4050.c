
void FUN_1004e4050(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CVmEdOptionsSection","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e40c0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004e40c0:
  pQVar1 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_38,"CVmEdOptionsSection","Restore Defaults",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e4121;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004e4121:
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x48));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e4169;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004e4169:
  pQVar1 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate
            ((char *)&local_48,"CVmEdOptionsSection",
             "Important: To use this option, Parallels Desktop must be installed in the Applications folder"
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

