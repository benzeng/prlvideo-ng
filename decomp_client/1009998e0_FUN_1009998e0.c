
void FUN_1009998e0(QString *param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  FUN_1009985f0(param_1,param_2,2,param_3);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_102234720;
  QMetaObject::tr((char *)&local_28,(char *)&PTR_PTR_1022346e0,0x1e3300b);
  CAbstractWizardPage::setTitle(param_1);
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

