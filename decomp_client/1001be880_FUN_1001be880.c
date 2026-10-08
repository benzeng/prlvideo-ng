
void FUN_1001be880(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  long lVar3;
  QArrayData *local_30;
  undefined1 local_22;
  
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)&DAT_1021eed30);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    QNetworkProxy::hostName();
    uVar2 = QNetworkProxy::port();
    FUN_100808dd0(uVar1,&local_30,uVar2,param_2);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return;
        }
        local_22 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  return;
}

