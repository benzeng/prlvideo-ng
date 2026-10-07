
undefined8 FUN_1005ae770(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  QArrayData *local_38;
  undefined1 local_2a;
  
  (**(code **)(**(long **)*param_2 + 0x178))(&local_38);
  FUN_1005ae540(param_1,&local_38,param_2 + 2,param_3);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

