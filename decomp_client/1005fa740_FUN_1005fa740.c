
void FUN_1005fa740(QString *param_1,undefined8 param_2)

{
  QArrayData *local_28;
  undefined1 local_1c;
  
  FUN_1005ecd90(param_1,param_2,3,0);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_102220060;
  QMetaObject::tr((char *)&local_28,(char *)&PTR_PTR_102220020,0x1e064dc);
  CAbstractWizardPage::setTitle(param_1);
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

