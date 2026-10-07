
undefined8 * FUN_100625620(undefined8 *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  QArrayData *pQVar3;
  QString local_58;
  QString local_50;
  QFileInfo local_48 [8];
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_100ba20d0;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (*(int *)(*param_3 + 4) == 0) {
    *param_1 = PTR_shared_null_100ba20d0;
    if (1 < *(int *)puVar1 + 1U) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + 1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
    }
    goto LAB_1006257e7;
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_58.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x268);
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_29 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_58);
  local_50.field0_0x0 = local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_29 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_50);
  QFileInfo::QFileInfo(local_48,&local_50);
  QFileInfo::absoluteFilePath();
  QString::operator=(&local_38,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10062570a;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10062570a:
  QFileInfo::~QFileInfo(local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100625743;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100625743:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100625773;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100625773:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006257a3;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1006257a3:
  cVar2 = QFile::exists(&local_38);
  if (cVar2 == '\0') {
    *param_1 = puVar1;
  }
  else {
    *param_1 = local_38.field0_0x0;
    if (1 < *(int *)local_38.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
    }
  }
LAB_1006257e7:
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

