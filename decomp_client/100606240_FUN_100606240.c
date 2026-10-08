
void FUN_100606240(CDeclarativeWizardPage *param_1,CAbstractWizardModel *param_2,QObject *param_3)

{
  QArrayData *local_30;
  undefined1 local_24;
  
  CDeclarativeWizardPage::CDeclarativeWizardPage(param_1,param_2,2,param_3);
  *(undefined ***)param_1 = &PTR_FUN_102221250;
  FUN_100602260(&local_30,param_2);
  CAbstractWizardPage::setTitle((QString *)param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_24 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

