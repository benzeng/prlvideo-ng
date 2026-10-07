
undefined8 FUN_100419170(long param_1,undefined8 param_2)

{
  long lVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  lVar1 = *(long *)(param_1 + 0x660);
  FUN_10041cc80(&local_20,param_2,param_2);
  QIODevice::write((char *)(lVar1 + 0x18),(longlong)(local_20 + *(long *)(local_20 + 0x10)));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return 1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return 1;
}

