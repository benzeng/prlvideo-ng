
void FUN_1005e20d0(undefined8 param_1,QString *param_2)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  QCoreApplication::translate((char *)&local_28,"CNewVmWizProgressPagePD","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

