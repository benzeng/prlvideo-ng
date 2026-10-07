
undefined8 FUN_100045900(long param_1,long param_2)

{
  undefined *puVar1;
  
  QMutex::lock();
  if (*(char *)(param_1 + 0x19a) == '\0') {
    *(undefined1 *)(param_1 + 0x19a) = 1;
    QMutex::unlock();
    if (param_2 != 0) {
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
    }
    puVar1 = PTR_shared_null_100ba20d0;
    if (*(int *)PTR_shared_null_100ba20d0 != -1) {
      if (*(int *)PTR_shared_null_100ba20d0 != 0) {
        LOCK();
        *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
        UNLOCK();
        if (*(int *)puVar1 != 0) {
          return 0;
        }
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
    }
  }
  else {
    if (param_2 != 0) {
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
    }
    QMutex::unlock();
  }
  return 0;
}

