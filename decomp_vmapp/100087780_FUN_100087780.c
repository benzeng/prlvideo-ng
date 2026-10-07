
void FUN_100087780(long param_1)

{
  QArrayData *local_20;
  
  QString::toLatin1();
  _strncpy((char *)(param_1 + 0x9e8),(char *)(local_20 + *(long *)(local_20 + 0x10)),0x27);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) goto LAB_1000877de;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_1000877de:
  *(undefined1 *)(param_1 + 0xa0e) = 0;
  return;
}

