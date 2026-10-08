
void FUN_1005e9ff0(QString *param_1,undefined8 param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QArrayData *local_30;
  undefined1 local_24;
  
  FUN_10075bb90(param_1,param_2,0xd);
  FUN_1005ec950(param_1 + 8,param_2);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_10221f170;
  pQVar1 = operator_new(0x40);
  FUN_1005e7ac0(pQVar1,param_1,param_1);
  param_1[9].field0_0x0 = pQVar1;
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,0x1e05aa4);
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

