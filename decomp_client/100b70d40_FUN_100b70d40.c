
bool FUN_100b70d40(void)

{
  int iVar1;
  QArrayData *local_20;
  
  QString::trimmed();
  iVar1 = *(int *)(local_20 + 4);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return iVar1 == 8;
      }
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return iVar1 == 8;
}

