
void FUN_1000b7bd0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  QArrayData *local_38;
  undefined1 local_2a;
  
  FUN_10004eb00(&local_38,param_1);
  FUN_10004edc0(param_1,param_2,&local_38,param_3);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

