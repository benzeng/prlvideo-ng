
QString * FUN_1006ed030(QString *param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  QArrayData *local_50;
  QString local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined1 local_31;
  QArrayData *local_30;
  
  FUN_1006d8290(&local_40);
  pQVar2 = (QArrayData *)CONCAT71(uStack_3f,local_40);
  iVar1 = *(int *)(pQVar2 + 4);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ed07a;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1006ed07a:
  if (iVar1 == 0) {
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    return param_1;
  }
  FUN_1006d8290(&local_50);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_40 = *(int *)local_50 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0xae9cb1);
  QString::append(&local_48);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_40 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_40) goto LAB_1006ed0f8;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006ed0f8:
  pQVar2 = (QArrayData *)QString::fromAscii_helper("OpenIE.safariextz",0x11);
  param_1->field0_0x0 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_40 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_40 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_40) goto LAB_1006ed162;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1006ed162:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_40 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_40) goto LAB_1006ed192;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1006ed192:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_40 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_40) {
        return param_1;
      }
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return param_1;
}

