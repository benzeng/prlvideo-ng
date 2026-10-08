
void * FUN_100d20fc0(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  QArrayData *local_30;
  undefined4 local_28;
  undefined1 local_22;
  
  FUN_100d23870(&local_30);
  local_28 = 0xffffffff;
  FUN_100d2ad10(&local_28,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100d21022;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d21022:
  if (((short)local_28 < 1) || (((short)local_28 == 1 && (local_28._2_2_ < 4)))) {
    pvVar1 = operator_new(0x38);
    FUN_100d2ca30(pvVar1,param_1,param_2);
  }
  else {
    pvVar1 = operator_new(0x38);
    FUN_100d2cac0(pvVar1,param_1,param_2);
  }
  return pvVar1;
}

