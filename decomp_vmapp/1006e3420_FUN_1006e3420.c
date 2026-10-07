
undefined8 FUN_1006e3420(undefined8 param_1)

{
  undefined *puVar1;
  QArrayData *local_20;
  undefined1 local_14;
  undefined1 local_13;
  
  local_20 = (QArrayData *)QString::fromAscii_helper("prl_disp_service.pid",0x14);
  FUN_1006e2f20(param_1,&local_20);
  puVar1 = PTR_shared_null_100ba20d0;
  if (*(int *)PTR_shared_null_100ba20d0 != -1) {
    if (*(int *)PTR_shared_null_100ba20d0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      local_14 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_14) goto LAB_1006e3483;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
LAB_1006e3483:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return param_1;
      }
      local_13 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return param_1;
}

