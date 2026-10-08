
QString * FUN_100d89b40(QString *param_1,undefined8 *param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QArrayData *local_30;
  undefined1 local_24;
  undefined1 local_22;
  
  FUN_100d89360(&local_30);
  pQVar1 = (QTypedArrayData<unsigned_short> *)*param_2;
  param_1->field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_24 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

