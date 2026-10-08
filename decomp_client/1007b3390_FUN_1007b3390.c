
void FUN_1007b3390(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CSnapshotPropertiesDlg","Snapshot Parameters",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007b3400;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007b3400:
  pQVar1 = *(QString **)(param_1 + 8);
  QCoreApplication::translate((char *)&local_38,"CSnapshotPropertiesDlg","Snapshot Name:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007b3461;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007b3461:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_40,"CSnapshotPropertiesDlg","Description:",0);
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

