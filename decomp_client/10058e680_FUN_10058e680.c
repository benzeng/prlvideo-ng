
void FUN_10058e680(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CAppPreferencesDialog","MainWindow",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10058e6f0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10058e6f0:
  pQVar1 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_38,"CAppPreferencesDialog","Restore Defaults",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10058e751;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10058e751:
  puVar2 = PTR_shared_null_1021e1288;
  QAbstractButton::setText(*(QString **)(param_1 + 0x38));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
  return;
}

