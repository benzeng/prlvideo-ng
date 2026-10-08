
void FUN_10037f940(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  QArrayData *local_30;
  undefined1 local_28;
  undefined1 local_19;
  
  if ((param_2 & 0xfffffff7) != 0x30000001) {
    return;
  }
  FUN_100380210(param_1 + 0x28);
  puVar2 = PTR_shared_null_1021e1288;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  if (1 < *(int *)PTR_shared_null_1021e1288 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
    local_19 = *(int *)puVar2 != 0;
    UNLOCK();
  }
  local_28 = 0;
  FUN_100834ef0(uVar1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10037f9c3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10037f9c3:
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_19 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_19) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return;
}

