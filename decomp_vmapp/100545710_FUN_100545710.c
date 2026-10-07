
bool FUN_100545710(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  QArrayData *local_30;
  
  QString::toUtf8();
  lVar1 = FUN_100761ab0(local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100545775;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100545775:
  return param_3 + param_2 == lVar1;
}

