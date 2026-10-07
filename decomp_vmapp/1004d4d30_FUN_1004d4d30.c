
undefined8 FUN_1004d4d30(char *param_1)

{
  undefined8 uVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  QByteArray::QByteArray((QByteArray *)&local_20,param_1,-1);
  uVar1 = QTextCodec::codecForName((QByteArray *)&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return uVar1;
}

