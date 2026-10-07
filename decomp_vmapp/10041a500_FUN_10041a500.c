
undefined8 FUN_10041a500(long param_1)

{
  QArrayData *local_20;
  undefined1 local_12;
  
  QByteArray::QByteArray((QByteArray *)&local_20,"$#00",-1);
  QIODevice::write((char *)(*(long *)(param_1 + 0x660) + 0x18),
                   (longlong)(local_20 + *(long *)(local_20 + 0x10)));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return 1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return 1;
}

