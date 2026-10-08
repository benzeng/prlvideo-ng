
void FUN_1001a5c10(QString *param_1,QTypedArrayData<unsigned_short> *param_2)

{
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  param_1[0xb].field0_0x0 = param_2;
  local_30 = *(QArrayData **)(param_2 + 0x18);
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  QWizardPage::setTitle(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a5c7c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001a5c7c:
  QObject::connect(local_38,param_2,"2titleChanged(const QString&)",param_1,
                   "1onSourcePageTitleChanged(QString)",0);
  QMetaObject::Connection::~Connection(local_38);
  return;
}

