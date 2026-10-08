
void FUN_100a5e640(undefined8 param_1,char *param_2)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  QByteArray::QByteArray((QByteArray *)&local_28,param_2,-1);
  QByteArray::append((char *)&local_28,0x1cd3930);
  FUN_100a5e510(param_1,&local_28,1);
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
    QArrayData::deallocate(local_28,1,8);
  }
  return;
}

