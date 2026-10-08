
void FUN_1001be7a0(long param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  long lVar3;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)&DAT_1021eed30);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    QNetworkProxy::hostName();
    uVar2 = QNetworkProxy::port();
    FUN_100808dd0(uVar1,&local_28,uVar2,0x80000275);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  return;
}

