
void FUN_10060ec40(undefined8 param_1)

{
  long lVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  if (lVar1 != 0) {
    FUN_10015a2b0(&local_28,lVar1);
    FUN_10060d6d0(param_1,&local_28);
    FUN_10060f560(param_1,&local_28);
    FUN_1006103a0(param_1,&local_28);
    FUN_100609af0(param_1,&local_28,1);
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

