
undefined8 FUN_100210a10(long param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_48;
  long local_40;
  long local_38;
  Data *local_30;
  undefined1 local_21;
  
  pvVar2 = operator_new(0x140);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x208) != 0) &&
     (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x208) + 4) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x210);
  }
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x218) != 0) &&
     (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x218) + 4) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x220);
  }
  FUN_1002465d0(pvVar2,param_1 + 0x110,uVar3,&local_30,uVar4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100210aad;
    }
    QListData::dispose(local_30);
  }
LAB_100210aad:
  QObject::connect(&local_38,pvVar2,
                   "2errorOnValidation( PRL_RESULT, VmEditorTypes::VmEditorItems, int )",param_1,
                   "2errorOnValidation( PRL_RESULT, VmEditorTypes::VmEditorItems, int )",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,pvVar2,
                     "2postErrorOnValidation( PRL_RESULT, VmEditorTypes::VmEditorItems, int, const QVariant& )"
                     ,param_1,
                     "2postErrorOnValidation( PRL_RESULT, VmEditorTypes::VmEditorItems, int, const QVariant& )"
                     ,0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,pvVar2,
                     "2postErrorOnValidation( PRL_RESULT, VmEditorTypes::VmEditorItems, int, const QVariant& )"
                     ,param_1,
                     "2postErrorOnValidation( PRL_RESULT, VmEditorTypes::VmEditorItems, int, const QVariant& )"
                     ,0);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      QObject::connect(&local_48,pvVar2,"2taskFinished(PRL_RESULT)",param_1,
                       "1onValidateConfigFinished(PRL_RESULT)",0);
      if ((cVar1 != '\0') && (local_48 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100210bc4;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,pvVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onValidateConfigFinished(PRL_RESULT)",0);
LAB_100210bc4:
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  CAbstractTask::execute();
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

