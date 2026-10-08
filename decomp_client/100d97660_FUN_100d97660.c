
undefined8 * FUN_100d97660(undefined8 *param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  char cVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  cVar2 = FUN_100d979e0(param_2,&local_30,&local_38);
  if (cVar2 == '\0') {
    *param_1 = puVar1;
  }
  else if (param_3 == '\0') {
    local_58 = (QArrayData *)QString::fromAscii_helper("%1@%2",5);
    QString::arg(&local_50,&local_58,&local_30,0,0x20);
    QString::arg(param_1,&local_50,&local_38,0,0x20);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d977d7;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100d977d7:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d97807;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
  else {
    local_48 = (QArrayData *)QString::fromAscii_helper("%1\\%2",5);
    QString::arg(&local_40,&local_48,&local_38,0,0x20);
    QString::arg(param_1,&local_40,&local_30,0,0x20);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d9771c;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100d9771c:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d97807;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100d97807:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d97837;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d97837:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

