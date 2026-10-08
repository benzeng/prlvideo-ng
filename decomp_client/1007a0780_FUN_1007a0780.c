
undefined8 * FUN_1007a0780(undefined8 *param_1,long *param_2,QString *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  QArrayData *local_50;
  QString local_48;
  QFileInfo local_40 [8];
  QArrayData *local_38;
  undefined1 local_29;
  
  QFileInfo::QFileInfo(local_40,param_3);
  cVar2 = QFileInfo::isRelative();
  if (cVar2 == '\0') {
    pQVar1 = param_3->field0_0x0;
    *param_1 = pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    goto LAB_1007a08f9;
  }
  (**(code **)(*param_2 + 0x90))(&local_50,param_2);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_29 = *(int *)local_50 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e2468c);
  QString::append(&local_48);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007a0836;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007a0836:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007a0866;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007a0866:
  QString::append(&local_48);
  cVar2 = QFile::exists(&local_48);
  if (cVar2 == '\0') {
    pQVar1 = param_3->field0_0x0;
    *param_1 = pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
  }
  else {
    *param_1 = local_48.field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007a08f9;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1007a08f9:
  QFileInfo::~QFileInfo(local_40);
  return param_1;
}

