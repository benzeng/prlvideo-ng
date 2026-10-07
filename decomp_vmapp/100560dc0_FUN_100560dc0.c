
undefined8 FUN_100560dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *local_30;
  undefined1 local_22;
  
  local_30 = (QArrayData *)QString::fromAscii_helper(".pvi",4);
  FUN_1005603f0(param_1,param_2,param_3,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

