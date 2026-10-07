
undefined8 * FUN_1004e25e0(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  char cVar1;
  void *pvVar2;
  QString local_38;
  undefined1 local_2a;
  undefined1 local_29;
  
  local_38.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_3 + 0x18);
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_2a = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  cVar1 = QString::endsWith(&local_38,0x2f,1);
  if (cVar1 == '\0') {
    QString::append(&local_38,0x2f);
  }
  QString::append(&local_38);
  pvVar2 = operator_new(0x50);
  FUN_1004e2360(pvVar2,&local_38,param_2);
  *param_1 = pvVar2;
  *(undefined4 *)((long)pvVar2 + 0x3c) = param_4;
  *(byte *)((long)pvVar2 + 0x38) = *(byte *)((long)pvVar2 + 0x38) | 0x40;
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

