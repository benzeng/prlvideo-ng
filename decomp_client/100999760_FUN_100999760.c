
void FUN_100999760(QString *param_1,QTypedArrayData<unsigned_short> *param_2)

{
  long local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  param_1[6].field0_0x0 = param_2;
  local_28 = *(QArrayData **)(param_2 + 0x18);
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_19 = *(int *)local_28 != 0;
    UNLOCK();
  }
  QWizardPage::setTitle(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009997ca;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1009997ca:
  QObject::connect(&local_30,param_2,"2titleChanged( const QString& )",param_1,
                   "1onSourcePageTitleChanged( QString )",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  return;
}

