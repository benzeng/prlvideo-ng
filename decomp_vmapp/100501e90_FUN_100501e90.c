
undefined8 * FUN_100501e90(undefined8 *param_1)

{
  undefined *puVar1;
  char cVar2;
  QDir local_38 [8];
  QString local_30;
  undefined1 local_21;
  
  cVar2 = FUN_1004c59b0();
  puVar1 = PTR_shared_null_100ba20d0;
  if (cVar2 == '\0') {
    *param_1 = PTR_shared_null_100ba20d0;
    return param_1;
  }
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  cVar2 = FUN_1004c5690(&local_30);
  if (cVar2 != '\0') {
    QDir::QDir(local_38,&local_30);
    cVar2 = QDir::exists();
    QDir::~QDir(local_38);
    if (cVar2 != '\0') {
      *param_1 = local_30.field0_0x0;
      local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
      goto LAB_100501f08;
    }
  }
  *param_1 = puVar1;
LAB_100501f08:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}

