
void FUN_10043b7d0(long param_1,undefined4 *param_2)

{
  QArrayData *local_20;
  
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = 0;
  QString::toLocal8Bit();
  _strncpy((char *)(param_2 + 2),(char *)(local_20 + *(long *)(local_20 + 0x10)),0x1f);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return;
}

