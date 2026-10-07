
void FUN_10006a860(undefined8 param_1,int param_2,undefined4 param_3)

{
  QArrayData *local_30;
  undefined1 local_22;
  
  QString::number((int)&local_30,param_2);
  FUN_10006a120(param_1,&local_30,param_3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

