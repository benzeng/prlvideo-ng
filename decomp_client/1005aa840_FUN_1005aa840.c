
void FUN_1005aa840(undefined8 param_1,QString *param_2)

{
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == (QString *)0x0) {
    return;
  }
  if (*(int *)&param_2[2].field0_0x0 != 1) {
    return;
  }
  QMetaObject::tr((char *)&local_30,(char *)&PTR_staticMetaObject_10221df20,0x1dda77d);
  CAntivirusInfo::productName();
  QString::arg(&local_28,&local_30,&local_38,0,0x20);
  CAbstractWizardPage::setTitle(param_2);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005aa8e5;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005aa8e5:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005aa915;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005aa915:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

