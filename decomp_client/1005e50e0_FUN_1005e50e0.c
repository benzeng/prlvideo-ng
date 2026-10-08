
void FUN_1005e50e0(QString *param_1,undefined8 param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QArrayData *local_30;
  undefined1 local_24;
  
  FUN_1005ecd90(param_1,param_2,0xb,0);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_10221ef10;
  pQVar1 = operator_new(0x18);
  FUN_1005e3f50(pQVar1,param_1,param_1);
  param_1[8].field0_0x0 = pQVar1;
  QMetaObject::tr((char *)&local_30,(char *)&PTR_PTR_10221eed0,0x1e0564a);
  CAbstractWizardPage::setTitle(param_1);
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

