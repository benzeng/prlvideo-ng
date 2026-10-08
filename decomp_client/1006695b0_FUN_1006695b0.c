
void FUN_1006695b0(CDeclarativeWizardPage *param_1,CAbstractWizardModel *param_2)

{
  QArrayData *local_28;
  undefined1 local_1c;
  
  CDeclarativeWizardPage::CDeclarativeWizardPage(param_1,param_2,0xc,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102223e98;
  param_1[0x38] = (CDeclarativeWizardPage)0x0;
  *(undefined **)(param_1 + 0x40) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined **)(param_1 + 0x50) = PTR_shared_null_1021e1288;
  FUN_100623da0(&local_28);
  CAbstractWizardPage::setTitle((QString *)param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1c = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1c) goto LAB_10066963e;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10066963e:
  FUN_100669780(param_1);
  return;
}

