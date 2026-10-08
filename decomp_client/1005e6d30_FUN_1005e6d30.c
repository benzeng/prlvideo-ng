
void FUN_1005e6d30(QObject *param_1,undefined8 param_2)

{
  QObject *this;
  QArrayData *local_30;
  undefined1 local_24;
  
  FUN_1005ecd90(param_1,param_2,0xc,0);
  *(undefined ***)param_1 = &PTR_FUN_10221f040;
  this = operator_new(0x28);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f46b0;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined **)(this + 0x18) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(QObject **)(param_1 + 0x40) = this;
  QMetaObject::tr((char *)&local_30,(char *)&PTR_PTR_10221f000,0x1e05808);
  CAbstractWizardPage::setTitle((QString *)param_1);
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

