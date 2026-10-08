
undefined8 FUN_100d8b860(undefined8 param_1)

{
  undefined *puVar1;
  QArrayData *local_20;
  undefined1 local_14;
  undefined1 local_13;
  
  local_20 = (QArrayData *)QString::fromAscii_helper("prl_disp_service.pid",0x14);
  FUN_100d8b360(param_1,&local_20);
  puVar1 = PTR_shared_null_1021e1288;
  if (*(int *)PTR_shared_null_1021e1288 != -1) {
    if (*(int *)PTR_shared_null_1021e1288 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      local_14 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_14) goto LAB_100d8b8c3;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100d8b8c3:
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

