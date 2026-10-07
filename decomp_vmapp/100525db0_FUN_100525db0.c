
bool FUN_100525db0(long *param_1,int *param_2)

{
  int local_28 [2];
  QArrayData *local_20;
  undefined1 local_11;
  
  *param_2 = 0;
  if ((char)param_1[1] == '\0') {
    if (*(char *)((long)param_1 + 9) == '\0') {
      if (*(int *)(*param_1 + 0xc) != *(int *)(*param_1 + 8)) {
        FUN_100526400(local_28,param_1);
        *param_2 = local_28[0];
        QByteArray::operator=((QByteArray *)(param_2 + 2),(QByteArray *)&local_20);
        if (*(int *)local_20 != -1) {
          if (*(int *)local_20 != 0) {
            LOCK();
            *(int *)local_20 = *(int *)local_20 + -1;
            UNLOCK();
            if (*(int *)local_20 != 0) goto LAB_100525e42;
            local_11 = 0;
          }
          QArrayData::deallocate(local_20,1,8);
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + 9) = 0;
      *param_2 = 0x103;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_2 = 0x101;
  }
LAB_100525e42:
  return *param_2 != 0;
}

