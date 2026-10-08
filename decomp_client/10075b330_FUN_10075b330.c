
char * FUN_10075b330(char *param_1,undefined8 param_2,long param_3)

{
  QArrayData *local_28;
  
  if (param_3 == 0) {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = -0x80;
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  else {
    QString::toUtf8();
    QObject::property(param_1);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return param_1;
        }
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  return param_1;
}

