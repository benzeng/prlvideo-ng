
void FUN_1007c9310(long param_1,long *param_2)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  cVar1 = FUN_1007c9220();
  if (cVar1 != '\0') {
    return;
  }
  pvVar2 = operator_new(0x28);
  FUN_1002d7e90(pvVar2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18));
  cVar1 = FUN_10019cd90(param_2);
  if (cVar1 == '\0') goto LAB_1007c942e;
  lVar3 = 0;
  if ((*param_2 != 0) && (lVar3 = 0, *(int *)(*param_2 + 4) != 0)) {
    lVar3 = param_2[1];
  }
  FUN_100a1c770(&local_48,param_2);
  QString::toLocal8Bit();
  QObject::connect(&local_38,pvVar2,"2taskFinished(PRL_RESULT)",lVar3,
                   local_40 + *(long *)(local_40 + 0x10),0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007c93fe;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1007c93fe:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007c942e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007c942e:
  CAbstractTask::execute();
  return;
}

