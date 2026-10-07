
undefined8 FUN_100050490(long param_1,char *param_2,int param_3)

{
  QArrayData *local_38;
  undefined1 local_2a;
  
  QByteArray::QByteArray((QByteArray *)&local_38,param_2,param_3);
  FUN_100050840(param_1 + 0x78,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 1;
      }
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return 1;
}

