
void FUN_100518c10(long param_1,undefined8 *param_2,int param_3)

{
  QArrayData *local_38;
  undefined4 local_30;
  undefined1 local_2b;
  undefined1 local_2a;
  
  QMutex::lock();
  if (param_3 == 2) {
    FUN_10051b1b0(param_1 + 0x88,param_2);
  }
  else if ((param_3 == 1) &&
          (FUN_10000c490(param_1 + 0x88,param_2), *(char *)(param_1 + 0x68) != '\0')) {
    local_30 = 0;
    local_38 = (QArrayData *)*param_2;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_2b = *(int *)local_38 != 0;
      UNLOCK();
    }
    FUN_100518d50(param_1,&local_38,&local_30,4);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_2a = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_2a) goto LAB_100518cd4;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_100518cd4:
  QMutex::unlock();
  return;
}

