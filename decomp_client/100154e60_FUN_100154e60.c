
bool FUN_100154e60(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  QArrayData *local_20;
  int local_18;
  undefined1 local_12;
  
  local_18 = 0;
  QString::toUtf8();
  _PrlSrv_CheckParallelsServerAlive(param_3,local_20 + *(long *)(local_20 + 0x10),&local_18,0);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) goto LAB_100154ec0;
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_100154ec0:
  return local_18 != 0;
}

