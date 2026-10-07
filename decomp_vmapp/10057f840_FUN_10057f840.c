
int FUN_10057f840(long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  int local_28;
  undefined1 local_21;
  
  if (param_1[0x236] != 0) {
    (**(code **)(*param_1 + 0x3b0))(param_1);
  }
  cVar1 = FUN_1007ea210(param_2);
  if (cVar1 != '\0') {
    return 0;
  }
  lVar2 = FUN_10060e060(param_2,&local_28);
  param_1[0x236] = lVar2;
  if (-1 < local_28) {
    *(byte *)((long)param_1 + 0x1142) = *(byte *)((long)param_1 + 0x1142) | 2;
    return 0;
  }
  FUN_1007d6a70(&local_38,param_2);
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"Error creating encryption engine object %s [%x]",
                local_30 + *(long *)(local_30 + 0x10),local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10057f919;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10057f919:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return local_28;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return local_28;
}

