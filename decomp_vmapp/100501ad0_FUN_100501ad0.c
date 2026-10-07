
undefined8 * FUN_100501ad0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  QString local_58;
  QFileInfo local_50 [8];
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar3 = FUN_1004c5610();
  puVar1 = PTR_shared_null_100ba20d0;
  if (cVar3 == '\0') goto LAB_100501d2d;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  cVar3 = FUN_1004c5020(&local_38);
  if (cVar3 == '\0') {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","SharedFoldersHost",1,"Couldn\'t find Google Drive folder");
    }
    FUN_100507c20(&local_48);
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_30,0xa3b852);
    QString::append(&local_40);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100501baa;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_100501baa:
    QString::operator=(&local_38,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100501be7;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100501be7:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100501c17;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100501c17:
  QFileInfo::QFileInfo(local_50,&local_38);
  cVar3 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_50);
  if (cVar3 != '\0') {
    *param_1 = local_38.field0_0x0;
    puVar2 = PTR_shared_null_100ba20d0;
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    if (*(int *)puVar1 == -1) {
      return param_1;
    }
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
    return param_1;
  }
  if (0 < DAT_1011b55f8) {
    QString::toUtf8_helper(&local_58);
    FUN_1008e3970("","SharedFoldersHost",1,"The folder %s doesn\'t exist",
                  (QArrayData *)(local_58.field0_0x0 + *(long *)(local_58.field0_0x0 + 0x10)));
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_21 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100501cfd;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,1,8);
    }
  }
LAB_100501cfd:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) goto LAB_100501d2d;
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100501d2d:
  *param_1 = PTR_shared_null_100ba20d0;
  return param_1;
}

