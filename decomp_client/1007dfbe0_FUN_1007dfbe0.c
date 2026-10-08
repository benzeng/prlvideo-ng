
void FUN_1007dfbe0(CDeclarativeWizardPage *param_1,CAbstractWizardModel *param_2,QObject *param_3)

{
  QArrayData *local_28;
  undefined1 local_1c;
  
  CDeclarativeWizardPage::CDeclarativeWizardPage(param_1,param_2,0,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10222eab0;
  QMetaObject::tr((char *)&local_28,(char *)&PTR_staticMetaObject_10222ea70,0x1e1929a);
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

