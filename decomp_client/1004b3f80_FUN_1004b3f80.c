
void FUN_1004b3f80(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  QArrayData *local_30;
  undefined1 local_22;
  
  pvVar1 = operator_new(0x58);
  uVar2 = FUN_10044e580(param_1);
  uVar3 = FUN_10044e460(param_1);
  FUN_100188480(&local_30,uVar3);
  FUN_100291eb0(pvVar1,uVar2,0,2,5,&local_30);
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

