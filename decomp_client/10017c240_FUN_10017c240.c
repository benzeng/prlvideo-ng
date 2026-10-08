
void FUN_10017c240(void)

{
  void *pvVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  pvVar1 = operator_new(0x30);
  uVar2 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  uVar2 = FUN_1001548f0(uVar2,&local_30);
  FUN_1002d5600(pvVar1,uVar2,0,1);
  CAbstractTask::execute();
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

