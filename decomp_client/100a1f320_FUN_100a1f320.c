
undefined8 FUN_100a1f320(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  local_20 = (QArrayData *)*param_2;
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_13 = *(int *)local_20 != 0;
    UNLOCK();
  }
  cVar1 = QString::startsWith(&local_20,0x31,1);
  if ((cVar1 != '\0') || (cVar1 = QString::startsWith(&local_20,0x32,1), cVar1 != '\0')) {
    QString::remove((int)&local_20,0);
  }
  QString::indexOf(&local_20,0x28,0,1);
  QString::left((int)param_1);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return param_1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return param_1;
}

