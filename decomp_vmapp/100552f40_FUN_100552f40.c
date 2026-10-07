
undefined8 FUN_100552f40(void)

{
  QArrayData *local_20;
  
  QString::toUtf8();
  FUN_100761940(local_20 + *(long *)(local_20 + 0x10));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return 0;
      }
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return 0;
}

