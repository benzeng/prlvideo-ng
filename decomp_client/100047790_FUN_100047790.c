
undefined8 FUN_100047790(undefined8 param_1,undefined8 *param_2)

{
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_48 [32];
  QString local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_11 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_20,0x1db6890);
  QString::append(&local_28);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100047806;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_100047806:
  local_50 = (QArrayData *)local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_11 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  FUN_100b56ca0(local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_11 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10004785c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10004785c:
  local_58 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_60 = (QArrayData *)QString::fromAscii_helper("Helper Version",0xe);
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100b57250(param_1,local_48,&local_58,&local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_11 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000478d9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000478d9:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_11 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100047909;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100047909:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100047939;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100047939:
  FUN_100b57060(local_48);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return param_1;
}

