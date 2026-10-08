
void FUN_10013daf0(long param_1)

{
  undefined *puVar1;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  Data_conflict local_80;
  undefined4 local_78;
  undefined *local_70;
  undefined1 local_68 [79];
  undefined1 local_19;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_70 = PTR_shared_null_1021e1288;
  local_78 = 0x80000000;
  local_80.field7 = 0;
  local_88 = PTR_shared_null_1021e1288;
  local_90 = PTR_shared_null_1021e1288;
  local_98 = PTR_shared_null_1021e1288;
  FUN_10013e010(local_68,&local_70,0xffffffff,1,&local_80,&local_88,&local_90,&local_98);
  FUN_10013ee70(param_1 + 0x30,local_68);
  FUN_10013e850(local_68);
  if (*(int *)puVar1 == -1) goto LAB_10013dc13;
  if (*(int *)puVar1 == 0) {
LAB_10013db9b:
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  else {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + -1;
    local_19 = *(int *)puVar1 != 0;
    UNLOCK();
    if (!(bool)local_19) goto LAB_10013db9b;
  }
  if (*(int *)puVar1 == -1) goto LAB_10013dc13;
  if (*(int *)puVar1 == 0) {
LAB_10013dbcc:
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  else {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + -1;
    local_19 = *(int *)puVar1 != 0;
    UNLOCK();
    if (!(bool)local_19) goto LAB_10013dbcc;
  }
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_19 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10013dc13;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_10013dc13:
  QVariant::~QVariant((QVariant *)&local_80);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_19 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_19) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return;
}

