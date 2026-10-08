
void FUN_100289c30(long *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 < 0) {
                    /* WARNING: Could not recover jumptable at 0x000100289d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1);
    return;
  }
  QObject::sender();
  QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  CSdkRequest::getResultAsString((int)&local_28);
  iVar1 = QString::toInt((bool *)&local_28,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100289cb0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100289cb0:
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  }
  else {
    uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
    uVar2 = FUN_100177f40(uVar2);
    QObject::connect(&local_30,uVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
  }
  return;
}

