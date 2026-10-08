
void FUN_10083df00(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  QString *this;
  QString local_28;
  undefined1 local_1a;
  
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_10083e020) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 1) {
    if (param_3 == 0) {
      this = (QString *)*param_4;
      FUN_10058d430(&local_28,param_1);
      QString::operator=(this,&local_28);
      if (*(int *)local_28.field0_0x0 != -1) {
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_28.field0_0x0 != 0) {
            return;
          }
          local_1a = 0;
        }
        QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
      }
    }
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221d230,0,(void **)0x0);
    return;
  }
  return;
}

