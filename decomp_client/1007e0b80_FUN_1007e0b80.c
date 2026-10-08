
void FUN_1007e0b80(CDeclarativeWizardPage *param_1,CAbstractWizardModel *param_2,QObject *param_3)

{
  QArrayData *local_28;
  undefined1 local_1c;
  
  CDeclarativeWizardPage::CDeclarativeWizardPage(param_1,param_2,2,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10222ed10;
  QMetaObject::tr((char *)&local_28,(char *)&PTR_staticMetaObject_10222ecd0,0x1e02538);
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

