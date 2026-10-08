
void FUN_1009b1520(QString *param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *local_28;
  undefined1 local_1b;
  
  FUN_1009985f0(param_1,param_2,6,param_3);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_1022356f0;
  param_1[10].field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Automatic_Logon_10227df00);
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1b = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

