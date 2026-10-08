
QString * FUN_100137810(QString *param_1,undefined8 *param_2,char *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QArrayData *local_30;
  undefined1 local_24;
  undefined1 local_23;
  
  pQVar1 = (QTypedArrayData<unsigned_short> *)*param_2;
  param_1->field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_24 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  if (param_3 != (char *)0x0) {
    _strlen(param_3);
  }
  QString::fromUtf8_helper((char *)&local_30,(int)param_3);
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_23 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

