
void FUN_10018f4f0(long param_1,int param_2)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  if (*(int *)(param_1 + 0x6c) != param_2) {
    *(int *)(param_1 + 0x6c) = param_2;
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getVmUuid();
    FUN_100804cc0(param_1,&local_28);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  return;
}

