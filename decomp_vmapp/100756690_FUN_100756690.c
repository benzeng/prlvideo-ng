
undefined1 FUN_100756690(undefined8 param_1,char *param_2,longlong param_3,long param_4)

{
  long lVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  
  lVar1 = QIODevice::write(param_2,param_3);
  if (lVar1 == param_4) {
    return 1;
  }
  QIODevice::errorString();
  QString::toUtf8();
  FUN_1008e3970("","dbgdump",0,"Failed writing kcore file: %s",local_28 + *(long *)(local_28 + 0x10)
               );
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_10075672b;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_10075672b:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 0;
      }
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return 0;
}

