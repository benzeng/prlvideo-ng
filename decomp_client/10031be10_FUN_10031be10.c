
void * FUN_10031be10(undefined8 param_1,QString *param_2,undefined1 param_3)

{
  void *pvVar1;
  QString local_30;
  undefined1 local_28;
  undefined1 local_19;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_28 = 0;
  QString::operator=(&local_30,param_2);
  local_28 = param_3;
  pvVar1 = operator_new(0x40);
  FUN_100222900(pvVar1,param_1,&local_30);
  CAbstractTask::execute();
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return pvVar1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return pvVar1;
}

