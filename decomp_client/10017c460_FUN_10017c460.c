
void FUN_10017c460(undefined8 param_1,undefined1 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  undefined1 local_2a;
  
  pvVar1 = operator_new(0x30);
  uVar2 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  uVar2 = FUN_1001548f0(uVar2,&local_38);
  FUN_1002d5600(pvVar1,uVar2,2,param_2);
  CAbstractTask::execute();
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

