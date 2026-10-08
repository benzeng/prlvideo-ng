
char * FUN_100475e10(char *param_1,long param_2,int param_3)

{
  double dVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  if (param_2 == 0) {
    QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,0x1df4d52);
  }
  else {
    dVar1 = (double)_pow(DAT_100e1e238,(double)param_3);
    QString::number((longlong)&local_30,(int)(long)((double)param_2 / dVar1));
    FUN_100472970(param_1,&local_30,param_3);
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
  }
  return param_1;
}

