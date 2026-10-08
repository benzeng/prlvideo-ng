
undefined8 * FUN_1007a5f60(undefined8 *param_1,undefined8 param_2,QString *param_3)

{
  char cVar1;
  undefined8 local_38;
  QArrayData *local_30;
  QDateTime local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::fromString((QString *)&local_28,param_3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007a5fc6;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007a5fc6:
  cVar1 = QDateTime::isValid();
  if (cVar1 == '\0') {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    local_38 = QDateTime::date();
    QDate::toString(param_1,&local_38,4);
  }
  QDateTime::~QDateTime(&local_28);
  return param_1;
}

