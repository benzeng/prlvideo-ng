
void FUN_100697740(long param_1)

{
  void *pvVar1;
  QArrayData *local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  pvVar1 = operator_new(0x100);
  local_a0 = (QArrayData *)PTR_shared_null_1021e1288;
  local_98 = 0;
  local_90 = 0xff;
  local_8c = 0;
  local_88 = 0;
  local_80._8_4_ = (int)PTR_shared_null_1021e1288;
  local_80._0_8_ = PTR_shared_null_1021e1288;
  local_80._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_70._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_70._0_8_ = PTR_shared_null_1021e15e8;
  local_70._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_60 = 0;
  local_58 = PTR_shared_null_1021e1288;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_10025b010(pvVar1,*(undefined8 *)(param_1 + 0x18),0,&local_a0);
  FUN_10005e410(&local_90);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100697839;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100697839:
  CAbstractTask::execute();
  return;
}

