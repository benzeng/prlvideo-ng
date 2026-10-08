
QIcon * FUN_1006b0990(QIcon *param_1,long param_2)

{
  int iVar1;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  iVar1 = FUN_10018a9d0(*(undefined8 *)(param_2 + 0x20));
  if ((((iVar1 != 0x30000009) &&
       (iVar1 = FUN_10018a9d0(*(undefined8 *)(param_2 + 0x20)), iVar1 != 0x30000010)) &&
      (iVar1 = FUN_10018a9d0(*(undefined8 *)(param_2 + 0x20)), iVar1 != 0x30000005)) &&
     (iVar1 = FUN_10018a9d0(*(undefined8 *)(param_2 + 0x20)), iVar1 != 0x3000000d)) {
    local_30.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper(":/pixmaps/MenuIcons/actionStartVm.png",0x25);
    QIcon::QIcon(param_1,&local_30);
    if (*(int *)local_30.field0_0x0 == -1) {
      return param_1;
    }
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    return param_1;
  }
  local_28.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper(":/pixmaps/MenuIcons/actionStartVmResume.png",0x2b);
  QIcon::QIcon(param_1,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return param_1;
}

