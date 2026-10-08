
void FUN_100b45ea0(long *param_1)

{
  QArrayData *local_20;
  
  QString::toUtf8();
  FUN_100ddbd60(&DAT_102313d84,local_20 + *(long *)(local_20 + 0x10),*(undefined4 *)(*param_1 + 4));
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

