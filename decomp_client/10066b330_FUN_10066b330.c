
void FUN_10066b330(CDeclarativeWizardPage *param_1,CAbstractWizardModel *param_2)

{
  QArrayData *local_28;
  undefined1 local_1c;
  
  CDeclarativeWizardPage::CDeclarativeWizardPage(param_1,param_2,0,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102223fd0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  QMetaObject::tr((char *)&local_28,(char *)&PTR_staticMetaObject_102223f90,0x1e0c636);
  CAbstractWizardPage::setTitle((QString *)param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1c = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

