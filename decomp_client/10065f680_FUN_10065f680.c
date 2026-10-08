
void FUN_10065f680(CDeclarativeWizardPage *param_1,CAbstractWizardModel *param_2)

{
  QArrayData *local_28;
  undefined1 local_1c;
  
  CDeclarativeWizardPage::CDeclarativeWizardPage(param_1,param_2,6,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1022236c0;
  QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,0x1e0b8cd);
  CAbstractWizardPage::setTitle((QString *)param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1c = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1c) goto LAB_10065f703;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10065f703:
  FUN_10065f7f0(param_1);
  return;
}

