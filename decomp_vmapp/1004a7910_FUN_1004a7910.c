
void FUN_1004a7910(long param_1)

{
  QArrayData *local_20;
  char local_18 [6];
  undefined1 local_12;
  
  *(undefined4 *)(param_1 + 0xa9) = 0;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  QByteArray::QByteArray((QByteArray *)&local_20,local_18,4);
  FUN_1000488f0(4,(QByteArray *)&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return;
}

