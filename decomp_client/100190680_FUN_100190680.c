
void FUN_100190680(long param_1,int param_2)

{
  char cVar1;
  long lVar2;
  QString local_30;
  undefined1 local_22;
  
  lVar2 = QObject::sender();
  if (((lVar2 != 0) &&
      (lVar2 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e1720,PTR_typeinfo_1021e1640,0), -1 < param_2)
      ) && (lVar2 != 0)) {
    CSdkRequest::getResultAsString((int)&local_30);
    cVar1 = operator==((QString *)(param_1 + 0xe8),&local_30);
    if (cVar1 == '\0') {
      QString::operator=((QString *)(param_1 + 0xe8),&local_30);
      FUN_1008056d0(param_1);
    }
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_30.field0_0x0 != 0) {
          return;
        }
        local_22 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  return;
}

