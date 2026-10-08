
void FUN_10004da40(long param_1)

{
  long lVar1;
  QArrayData *local_38;
  undefined1 local_2a;
  
  QMutex::lock();
  if (*(int *)(*(long *)(param_1 + 0x48) + 0xc) != *(int *)(*(long *)(param_1 + 0x48) + 8)) {
    do {
      FUN_100054f90(&local_38,(long *)(param_1 + 0x48));
      FUN_10004d550(param_1,&local_38,0);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_2a = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_2a) goto LAB_10004dac8;
        }
        QArrayData::deallocate(local_38,2,8);
      }
LAB_10004dac8:
      lVar1 = *(long *)(param_1 + 0x48);
    } while (*(int *)(lVar1 + 0xc) != *(int *)(lVar1 + 8));
  }
  QMutex::unlock();
  return;
}

