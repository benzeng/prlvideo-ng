
undefined8 FUN_10036c970(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  local_38 = (QArrayData *)QString::fromAscii_helper("Console",7);
  QString::arg(&local_28,&local_30,&local_38,0,0x20);
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x40);
  lVar2 = *(long *)(lVar1 + 0x18);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 4) == 0)) || (*(long *)(lVar1 + 0x20) == 0)) {
    local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_100188480(&local_40);
  }
  QString::arg(param_1,&local_28,&local_40,0,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10036ca42;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10036ca42:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10036ca72;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10036ca72:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10036caa2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10036caa2:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

