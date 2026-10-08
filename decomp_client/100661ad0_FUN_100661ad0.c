
void FUN_100661ad0(long param_1)

{
  QString local_30;
  undefined1 local_22;
  
  QString::fromUtf8_helper((char *)&local_30,0x1ddf8a8);
  QString::operator=((QString *)(param_1 + 0x38),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_22 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100661b37;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100661b37:
  FUN_100660b40(param_1);
  CAbstractWizardPage::wizardCtrl();
  CWizardController::goNext();
  return;
}

