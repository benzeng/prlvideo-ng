
void FUN_10052f540(long param_1,int param_2)

{
  char cVar1;
  QArrayData *local_20;
  int local_18;
  undefined1 local_12;
  
  if (*(int *)(param_1 + 0x48) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x48) = param_2;
  if (1 < param_2 - 1U) {
    return;
  }
  local_18 = param_2;
  QByteArray::QByteArray((QByteArray *)&local_20,(char *)&local_18,4);
  cVar1 = FUN_1000488f0(3,(QByteArray *)&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_12 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_12) goto LAB_10052f5b8;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_10052f5b8:
  if (cVar1 == '\0' && 0 < DAT_1011b55f8) {
    FUN_1008e3970("","VmCliPresentationHost",1,"Failed on set VConfigqmap");
  }
  return;
}

