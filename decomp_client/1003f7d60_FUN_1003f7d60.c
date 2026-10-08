
void FUN_1003f7d60(long param_1,QString *param_2,QString *param_3,bool param_4)

{
  QString local_28;
  undefined1 local_1a;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  SandboxFileAccessHelpers::checkAvailability(param_2,param_3,param_4,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_1a = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_1003f7dbf;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1003f7dbf:
  CMappingValueHandler::handleValueFinished(SUB81(*(undefined8 *)(param_1 + 0x10),0));
  return;
}

