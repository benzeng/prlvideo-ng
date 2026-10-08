
void FUN_100146760(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate
            ((char *)&local_30,"CImportBootCampProgressDialog","Parallels Desktop - Please wait...",
             0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001467d0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001467d0:
  pQVar1 = *(QString **)(param_1 + 8);
  QCoreApplication::translate
            ((char *)&local_38,"CImportBootCampProgressDialog",
             "Please wait while importing Boot Camp",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100146831;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100146831:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_40,"CImportBootCampProgressDialog","Importing the data...",0);
  QLabel::setText(pQVar1);
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

