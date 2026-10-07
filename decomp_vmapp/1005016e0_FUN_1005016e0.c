
undefined8 * FUN_1005016e0(undefined8 *param_1)

{
  undefined *puVar1;
  char cVar2;
  QDir local_50 [8];
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar2 = FUN_1004c4fa0();
  puVar1 = PTR_shared_null_100ba20d0;
  if (cVar2 == '\0') {
    *param_1 = PTR_shared_null_100ba20d0;
    return param_1;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  cVar2 = FUN_1004c4700(&local_38);
  if (cVar2 != '\0') goto LAB_1005017fa;
  FUN_100507c20(&local_48);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_21 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0xa3b827);
  QString::append(&local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10050178d;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10050178d:
  QString::operator=(&local_38,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005017ca;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005017ca:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005017fa;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005017fa:
  QDir::QDir(local_50,&local_38);
  cVar2 = QDir::exists();
  QDir::~QDir(local_50);
  if (cVar2 == '\0') {
    *param_1 = puVar1;
  }
  else {
    *param_1 = local_38.field0_0x0;
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

