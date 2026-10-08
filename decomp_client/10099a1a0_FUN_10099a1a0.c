
void FUN_10099a1a0(QString *param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  FUN_1009985f0(param_1,param_2,8,param_3);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_102234890;
  QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_I_will_primarily_use_Windows_for_10227ded8);
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

