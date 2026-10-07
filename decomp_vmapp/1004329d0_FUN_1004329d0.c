
void FUN_1004329d0(long *param_1,undefined8 param_2)

{
  QArrayData *local_3e8;
  uint local_3e0;
  char local_3dc;
  QArrayData *local_3d8;
  uint local_3d0;
  char local_3cc;
  undefined1 local_31;
  
  QMutex::lock();
  FUN_100436360(&local_3d8,param_1 + 4,param_2);
  if (*(int *)(param_1[4] + 0x14) == 0) {
    param_1[0x854] = 0;
    param_1[0x853] = 0;
    param_1[0x852] = 0;
    param_1[0x851] = 0;
  }
  if (local_3cc != '\0') {
    (**(code **)(*param_1 + 0x78))(param_1);
  }
  if ((local_3d0 & 0x1000) != 0) {
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  QMutex::unlock();
  local_3e8 = local_3d8;
  if (1 < *(int *)local_3d8 + 1U) {
    LOCK();
    *(int *)local_3d8 = *(int *)local_3d8 + 1;
    local_31 = *(int *)local_3d8 != 0;
    UNLOCK();
  }
  local_3dc = local_3cc;
  local_3e0 = local_3d0;
  FUN_1004395c0(param_1,&local_3e8);
  if (*(int *)local_3e8 != -1) {
    if (*(int *)local_3e8 != 0) {
      LOCK();
      *(int *)local_3e8 = *(int *)local_3e8 + -1;
      local_31 = *(int *)local_3e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100432b08;
    }
    QArrayData::deallocate(local_3e8,2,8);
  }
LAB_100432b08:
  FUN_100436a80(&local_3d8);
  return;
}

