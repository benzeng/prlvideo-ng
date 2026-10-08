
void FUN_1007b38e0(undefined8 param_1,int param_2)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  if (param_2 == 6) {
    QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,0x1dcde2d);
    FUN_100862860(param_1,&local_28);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  return;
}

