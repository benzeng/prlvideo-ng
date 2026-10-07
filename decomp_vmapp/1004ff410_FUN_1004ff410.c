
undefined8 * FUN_1004ff410(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  QDir local_50 [8];
  QArrayData *local_48;
  char local_39;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_100ba20d0;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  cVar2 = FUN_1004c40a0(&local_39);
  if (((local_39 != '\0') && (cVar2 == '\x01')) && (cVar2 = FUN_1004c4250(&local_38), cVar2 != '\0')
     ) {
    local_48 = (QArrayData *)QString::fromAscii_helper("/Masters",8);
    QString::append(&local_38);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004ff4ae;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1004ff4ae:
    QDir::QDir(local_50,&local_38);
    cVar2 = QDir::exists();
    QDir::~QDir(local_50);
    if (cVar2 != '\0') {
      QString::operator=((QString *)(param_2 + 0x20),&local_38);
      *param_1 = local_38.field0_0x0;
      local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
      goto LAB_1004ff500;
    }
  }
  *param_1 = PTR_shared_null_100ba20d0;
LAB_1004ff500:
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

